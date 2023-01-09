# Notas de Clase - Programaci�n 
## Primer Bimestre
* ### Preparaci�n
  Antes de empezar a programar necesitamos un entorno de trabajo o Workspace.  
  En nuestro caso utilizar�amos VS Code por sus extensiones (pero usaremos CodeBlocks para los ejemplos, ya que es m�s simple), un compilador de C/C++, y Git (para trabajar en la nube).  

![Entorno de trabajo](https://upload.wikimedia.org/wikipedia/commons/thumb/9/9a/Visual_Studio_Code_1.35_icon.svg/2048px-Visual_Studio_Code_1.35_icon.svg.png "IDE")  

![Compilador](https://upload.wikimedia.org/wikipedia/commons/thumb/a/af/GNU_Compiler_Collection_logo.svg/1200px-GNU_Compiler_Collection_logo.svg.png "C compiler")

![Git Hub](https://www.freecodecamp.org/news/content/images/2022/07/git-github.png "Work online")

![Code Blocks](https://programaenlinea.net/wp-content/uploads/2017/10/codeblocks.png "IDE para los ejemplos")

### ***Configuraci�n de un proyecto***  
  Una vez intalado el IDE, lo abrimos y pulsamos en nuevo proyecto

  ![Inicio](http://store-images.s-microsoft.com/image/apps.20170.14197062433962506.1d4504fe-75d1-40b0-9bc7-bdf6ad380beb.b4f12a5c-8170-4364-a119-4b5f52301f4d "Inicio")

  Seleccionamos "Console Aplicattion"
  ![2](https://www.cprogramming.com/code_blocks/b.PNG "Paso 2")

  Seleccinamos nuestro lenguaje C o C++, elegimos la ubicaci�n y le damos siguiente (varias veces).

  Esto nos crer� una carpeta junto con un archivo ".cpp" . En ella y el trabajaremos.
  ![Carpeta](https://www.fossmint.com/wp-content/uploads/2017/11/CodeBlocks-IDE.png "Workspace reci�n creado")

  >Para imprimir s�lo vamos al bot�n verde con la ruedita de arriba  

  En Visual Studio en cambio, 
  ![Abrir](https://code.visualstudio.com/assets/docs/getstarted/tips-and-tricks/getstarted_page.png "Inicio")

  Le damos a Open y elegimos la ubicaci�n.  
  En nuestra carpeta creamos un archivo con el �cono que aparece a lado de la bara de la carpeta

  ![Inicio2](https://learn.microsoft.com/es-es/azure/developer/go/media/configure-visual-studio-code/create-folder.png "Creaci�n archivo")

  Lo nombramos y terminamos con un .c o .cpp

  ![archivo3](https://code.visualstudio.com/assets/docs/languages/cpp/hello-world-exe.png "step3")

  Al crear el archivo el propiop programa nos ofrecer� intalar extensiones para C. Aceptamos y Listo!
  
  ![Finish](https://code.visualstudio.com/assets/docs/editor/userdefinedsnippets/category-snippets.png "Extensiones")

Una vez configurado el entorno, intalado el compilador y modificado el repositorio; Es hora de escribir c�digo :)

* ### C/C++ lenguaje
  El lenguaje C y C++ difieren un poco en lo que respecta a su funcionamiento, mas no en su sintaxis por lo que eligiremos a C++ como lenguaje principal.
  Creado el archivo obtenemos lo siguiente
  ~~~
  #include <iostream> //Esto ser�an las librer�as a usar
  using namespace std; //Formato para no escribir "std::" todo el tiempo

  int main()  //Nuestra funci�n principal
  {
    cout << "Hello world!" << endl; 
    return 0; //Es el valor que nos devolver� la funci�n al terminar su tarea
  }
  ~~~
  ~~~
  #include <stdio.h> //esta es la librer�a est�ndar en C

  int main(){
  printf("Hello World!\n");
  return 0;
  }
  ~~~
  >"Cout" significa imprimir y es lo que aparecer� en nuestra pantalla "printf" si elegiste C.

  >De la misma manera "endl" o "\n" har� que el programa imprima lo que le digas una l�nea abajo, ya que el lenguaje por defecto imprime las cosas sin espacios. 

  Este c�digo imprimir� lo siguiente:
  ~~~
  Hello World!
  ~~~
  Sobre las librer�as y funciones hablaremos m�s adelante.

* ### Dibujando una forma
  Cuando corramos un programa la funcion main() iumprimir� cualquier l�nea de c�digo escrito entre {}. 

  Cada oraci�n funciona como una instrucci�n por lo que debemos terminar con un ; cada una de ellas (existen palabras y comandos que no lo necesitan despu�s hablaremos de ello).  
  Por ejemplo si modificamos el n�mero de comandos cout e improimos un s�mbolo:
  ~~~
  #include <iostream>
  using namespace std;

  int main()
  {
    cout << "|----/" << endl;
    cout << "|   /" << endl;
    cout << "|  /" << endl;
    cout << "| /" << endl;
    cout << "|/
  }
  ~~~
  Tenemos:
  ~~~
  |----/
  |   /
  |  /
  | /
  |/
  ~~~
  Lo que ser�a un tri�ngulo de cabeza mal dibujado.
* ### Variables
  Una variable almacena valores que el programa leer� cuando funcione
  ~~~
  #include <iostream>

  using namespace std;

  int main()
  {
    cout << "There once was a man named George" << endl;
    cout << "He was 70 years old" << endl;
    cout << "He like the name George" << endl;
    cout << "But did not like being 70" << endl;
    return 0;
  }
  ~~~
  Imprime
   ~~~
  There once was a man named George
  He was 70 years old
  He like the name George
  But didn't like being 70
   ~~~

  Tal vez queramos cambiar el nombre de nuestro personaje o su edad
  ~~~
  #include <iostream>

  using namespace std;

  int main()
  {
    cout << "There once was a man named John" << endl;
    cout << "He was 35 years old" << endl;
    cout << "He like the name John" << endl;
    cout << "But did not like being 35" << endl;
    return 0;
  }
  ~~~
  Para cambiar el nombre tendr�amos que buscarlo y modificarlo de uno en uno.   
  Lo que en grandes cantidades de datos nos ser�a imposible.
  As� que creamos una variable que almacene el nombre y la edad. 
  ~~~
  #include <iostream>

  using namespace std;

  int main()
  {
    string characterName = "John";
    int characterAge; //podemos asignarle un valor a la variable en el momento o expresarlo m�s adelante
    characterAge = 35;
    cout << "There once was a man named John" << endl;
    cout << "He was 35 years old" << endl;
    cout << "He like the name John" << endl;
    cout << "But did not like being 35" << endl;
    return 0;
  }
  ~~~
  >Aqu� string indica el tipo de dato lo que ser�a una cadena de caracteres, e int como integer (entero) almacena valores num�ricos sin decimales.  
  
  *Cuando trabajamos con datos en C/C++ las comillas indican oraciones o caracteres que se imprimir�n como tal, en cambio los n�meros no funcionan as� por lo que no necesitar�n "" alrededor suyo*

  Para imprimir la variable y su valor debemos modificar nuestro cout command.

  ~~~
  #include <iostream>

  using namespace std;

  int main()
  {
    string characterName = "John";
    int characterAge; 
    characterAge = 35;
    cout << "There once was a man named" << characterName << endl;
    cout << "He was 35 years old" << endl;
    cout << "He like the name John" << endl;
    cout << "But did not like being 35" << endl;
    return 0;
  }
  ~~~
  ~~~
  #include <iostream>

  using namespace std;

  int main()
  {
    string characterName = "John";
    int characterAge;
    characterAge = 35;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    cout << "He like the name " << characterName << endl;
    cout << "But did not like being " << characterAge<< endl;
    return 0;
  }

  ~~~

  >Las comillas en la onceava l�nea indican que el valor de la variable se imprimir� en ese lugar, no al final como las otras oraciones.  

  Y tenemos:
  ~~~
  There once was a man named John
  He was 35 years old
  He like the name John
  But did not like being 35
  ~~~
  Ahora podemos modificar como queramos:
  ~~~
  There once was a man named Tom
  He was 11 years old
  He like the name Tom
  But did not like being 11
  ~~~
  Tambi�n podemos actualizar el valor de la variable para imprimir otros valores dentro de la misma funci�n:
  ~~~
  #include <iostream>

  using namespace std;

  int main()
  {
    string characterName = "Tom";
    int characterAge;
    characterAge = 11;
    cout << "There once was a man named " << characterName << endl;
    cout << "He was " << characterAge << " years old" << endl;
    characterName = "Mike";
    cout << "He like the name " << characterName << endl;
    cout << "But did not like being " << characterAge<< endl;
    return 0;
  }

  ~~~
  Output:
  ~~~
  There once was a man named Tom
  He was 11 years old
  He like the name Mike
  But did not like being 11
  ~~~

  Divertido �no?
* ### Tipos de datos  
  
  Existen m�ltiples tipos de datos en C/C++ aqu� est�n los m�s comunes:

  ~~~

  #include <iostream>

  using namespace std;

  int main()
  {
    char grade = 'A';
    string phrase = "Learning to code";
    int age = 50;
    float e = 2.71828182846;
    double pi = 3.14159265359;
    bool isMale = true;

    cout << grade << endl;
    cout << phrase << endl;
    cout << age << endl;
    cout << e << endl;
    cout << pi << endl;
    cout << isMale << endl;

    return 0;
  }
  ~~~

  **char:** almacena un solo caracter, en este caso "A".  

  **string:** guarda m�tiples caracteres.  

  **int:** como se especific� arriba, guarda solo valores enteros.  

  **float:** al igual que double almacena valores con cifras decimales, pero a diferencia de el, este guarda menor cantidad. 

  **double:** mayor cantidad de cifras decimales

  **boolean:** escrito "bool" almacena valores de verdadero o falso; true 1 | false 0.

  Output:
  ~~~
  A
  Learning to code
  50
  2.71828
  3.14159
  1
  ~~~
* ### Trabajando con strings
  Existen funciones de strings, estas nos ayudar�n a obtener informaci�n de la string o modificarla.  

   - **.length()** permite saber el numero de caracteres introducidos en la variable  
   
   ~~~
   #include <iostream>

    using namespace std;

   int main()
    {
    string collegeName = "EPN";
    cout << collegeName.length();
    return 0;
    }
    ~~~
    Output:
    ~~~
    3
    ~~~
  - **Cambiar valores en la cadena** Podemos acceder a diferentes valores dentro de la cadena, llamando al index de aquel valor
    ~~~
    #include <iostream>

    using namespace std;

    int main()
    {
                          012
    string collegeName = "EPN"; 
    //El index de un valor de string estar�a dado desde el 0.
    cout << collegeName[0];
    return 0;
    }
    ~~~
    Output:
    ~~~
    E
    ~~~
    Podemos cambiar los caracteres usando el index
    ~~~
    #include <iostream>

    using namespace std;

    int main()
    {
    string collegeName = "EPN";
    collegeName[0] = 'A';
    cout << collegeName;
    return 0;
    }
    ~~~
    Output:
    ~~~
    APN
    ~~~
  - **.find()** encontrar posiciones dentro de una cadena.
    ~~~
    #include <iostream>

    using namespace std;

    int main()
    {
    string collegeName = "Escuela Polit�cnica Nacional ";
    cout << collegeName.find("Escuela", 0); 
    return 0;
    }
    ~~~
    >Aqu� queremos encontrar en qu� posici�n est� la primera letra de "Escuela" dentro de la otra string, as� que se lo damos de par�metros.

    Output:
    ~~~
    0
    ~~~
  - **.substr** Coger un n�mero de elementos dentro de cierta posici�n. 
    ~~~
    #include <iostream>

    using namespace std;

    int main()
    {
    string collegeName = "Escuela Polit�cnica Nacional ";
    cout << collegeName.substr(10, 3);
    return 0;
    }
    ~~~
    >Al igual que la anterior le pasamos ciertos par�metros para indicarle que quermos hacer.

    Output:
    ~~~
    lit
    ~~~
    Podemos guardar aquel valor dentro de otra variable
    ~~~
    #include <iostream>

    using namespace std;

    int main()
    {
    string collegeName = "Escuela Polit�cnica Nacional ";
    string cutCollegename = collegeName.substr(10, 3);
    cout << cutCollegename << endl;
    return 0;
    }
    ~~~
    Output:
    ~~~
    lit
    ~~~
* ### Trabajando con n�meros 
  En C++ tenemos la librer�a <cmath>, esta nos ayudar� a usar operaciones m�s complejas
  Por ejemplo: 
  ~~~
  #include <iostream>
  #include <cmath>

  using namespace std;
  //Obtener el mayor de dos n�meros
  int main()
  {
    cout << max(5, 7);
    return 0;
  }
  ~~~
  Output:
  ~~~
  7
  ~~~
  O: 
  ~~~
  #include <iostream>
  #include <cmath>

  using namespace std;
  //Obtener el menor de dos n�meros
  int main()
  {
    cout << min(4,8);
    return 0;
  }
  ~~~
  Output:
  ~~~
  4
  ~~~
  >Puedes usar sqrt(para raiz), pow(para elevar) o redondear(round), siempre usando dos numeros como par�metros.
* ### Obtener informaci�n del usuario
  Usamos la palabra "cin >>" para recibir informaci�n del usuario para trabajar.
  ~~~
  #include <iostream>
  
  using namespace std;
  int main()
  {
    int age;
    cout << "enter your age: ";
    cin >> age;
    cout << "Your are " << age << " years old";

    return 0;
  }
  ~~~
  Output: 
  ~~~
  enter your age:
  ~~~
  *el programa esperar� hasta que sea introducida la informaci�n o alg�n car�cter incorrecto*  
  Si quieres obterner m�s informaci�n por ejemplo un nombre o una l�nea de texto, puedes usar getline(cin, nombre_de_la_variable) donde el espacio donde se guardar� el valor de la variable ser� un string.
  ~~~
  include <iostream>

  using namespace std;
  int main()
  {
    string name;
    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Your are " << name;

    return 0;
  }
  ~~~
  Output: 
  ~~~
  Enter your name:
  ~~~
* ### Arrays
   Un array o arreglo es una variable que almacena m�ltiples datos se lo define con [] (dentro de el puedes colocar el espacio que usar�s, cuando no est�s segurop de la informacion a guardar), y para acceder a sus datos tienes que escribir el nombre del array junto a su index como se vio al inicio.
   ~~~
   #include <iostream>

  using namespace std;
  int main()
  {
    int luckyNums[] = {4, 8, 15, 16, 23, 42};
    cout << luckyNums[5];

    return 0;
  }
  ~~~
  Output: 
  ~~~
  42
  ~~~
  >Puedes colocar los elementos por ti mismo a dejarlos en blanco.
* ### Funciones
  Son bloques de c�digo que realizan acciones
  ~~~
  #include <iostream>

  using namespace std;
  void sayHi(){
    cout << "Hello You";
  }

  int main()
  {
    sayHi();
    return 0;
  }
  ~~~
  En este caso cuando la funci�n es llamado realiza la acci�n de lo contrario permanecer� inmutable.

  Output: 
  ~~~
  Hello You
  ~~~
  Tambi�n podemos pasarle par�metros para realizar la operaci�n con un valor en espec�fico
  ~~~
  #include <iostream>
  using namespace std;
  void sayHi(string name){  //aqu� creamos la variable en la que entrar� el valor
    cout << "Hello "<< name;
  }

  int main()
  {
    sayHi("Eduardo"); //Introducimos el par�metro
    return 0;
  }
  ~~~
  Output: 
  ~~~
  Hello Eduardo
  ~~~
  Podemos reusar funciones pero pasarles diferentes valores
  ~~~
  #include <iostream>

  using namespace std;
  void sayHi(string name,int age){
    cout << "Hello "<< name << " You are " << age;
  }

  int main()
  {
    sayHi("Eduardo", 19);
    return 0;
  }
  ~~~
  Output: 
  ~~~
  Hello Eduardo You are 19
  ~~~
  >Recuerda escribir o definir la funci�n antes de main
  ~~~
  #include <iostream>

  using namespace std;

  void sayHi(string name,int age);
  int main()
  {
    sayHi("Eduardo", 19);
    sayHi("Emily", 34);
    sayHi("Remi", 24);
    sayHi("Tom", 18);

    return 0;
  }
  void sayHi(string name,int age){
    cout << "Hello "<< name << " You are " << age << endl;
  }
  ~~~
  Output: 
  ~~~
  Hello Eduardo You are 19
  Hello Emily You are 34
  Hello Remi You are 24
  Hello Tom You are 18
  ~~~
* ### "return" keyword
  Usar return dentro de una funci�n har� que esta devuelva valores con los que puedes trabajar en otra funci�n
  ~~~
  #include <iostream>

  using namespace std;

  double cube(double num){
  return num*num*num;

  }

  int main()
  {
    cout << cube(5.0);

    return 0;
  }
  ~~~
  Output: 
  ~~~
  125
  ~~~
  *cualquier valor dato que introduzcas despues de la palabra return no ser� le�do ya que el trabajo de la funci�n termin�*
* ### If statements
  Permite que un bloque de c�digo se ejecute si cumple una condici�n
  ~~~
  #include <iostream>

  using namespace std;

  int main()
  {
    bool isMale = true;
    if(isMale){
        cout << "You are a male";
    }
    else {
        cout << "You are not"
    }
    cout << cube(5.0);

    return 0;
  }
  ~~~
  Output:
  ~~~
  You are a male
  ~~~
  De lo contrario:
  ~~~
  #include <iostream>

  using namespace std;

  int main()
  {
    bool isMale = false;
    if(isMale){
        cout << "You are a male";
    }
    else {
        cout << "You are not"
    }
    cout << cube(5.0);

    return 0;
  }
  ~~~
  Output:
  ~~~
  You are not
  ~~~
  *Tambi�n puedes usar los operadores l�gicos con esto  
  && y   
  || o  
  ! negaci�n*
* ### Switch
  Utilice la sentencia switch para seleccionar uno de los muchos bloques de c�digo que se van a ejecutar.  
  El funcionamiento es el siguiente:
  - La expresi�n switch se eval�a una vez
  - El valor de la expresi�n se compara con los valores de cada caso
  - Si hay una coincidencia, se ejecuta el bloque de c�digo asociado
  - Las palabras clave break y default son opcionales  
  
  El ejemplo siguiente utiliza el n�mero del d�a de la semana para calcular el nombre del d�a de la semana:
  ~~~
  #include <iostream>

  using namespace std;
  int main(){
    int day = 4;
    switch (day) {
      case 1:
        cout << "Monday";
        break;
      case 2:
        cout << "Tuesday";
        break;
      case 3:
        cout << "Wednesday";
        break;
      case 4:
        cout << "Thursday";
        break;
      case 5:
        cout << "Friday";
        break;
      case 6:
        cout << "Saturday";
        break;
      case 7:
        cout << "Sunday";
        break;
    }
  }
  ~~~
  Output:
  ~~~
  Thursday
  ~~~
  La palabra clave break
  Cuando C++ alcanza una palabra clave break, rompe el bloque switch.
  Esto detendr� la ejecuci�n de m�s c�digo y pruebas de caso dentro del bloque.  
  Cuando se encuentra una coincidencia, y el trabajo est� hecho, es hora de un break. No hay necesidad de m�s pruebas.
* ### Loops
  Los bucles pueden ejecutar un bloque de c�digo mientras se cumpla una condici�n especificada.  
  Los bucles son �tiles porque ahorran tiempo, reducen los errores y hacen que el c�digo sea m�s legible.
  - __while loop__ El bucle while repite un bloque de c�digo mientras se cumpla una condici�n especif�ca:
    ~~~
    #include <iostream>

    using namespace std;

    int main()
    {
    int i = 0;
    while(i < 5){
    cout << i << "\n";
    i++;
    }
    return 0;
    }
    ~~~
    Output:
    ~~~
    0
    1
    2
    3
    4
    ~~~
  - __do while__
  el bucle do/while es una variante del bucle while.  
  Este bucle ejecutar� el bloque de c�digo una vez, antes de comprobar si la condici�n es verdadera, luego repetir� el bucle mientras la condici�n sea verdadera.
    ~~~
    #include <iostream>

    using namespace std;

    int main()
    {
    int i = 0;
    do {
    cout << i << "\n";
    i++;
    }
    while (i < 5);
    return 0;
    }
    ~~~
    Output:
    ~~~
    0
    1
    2
    3
    4
    ~~~
  - __For__ Si sabes exactamente cu�ntas veces deseas repetir un bloque de c�digo, utiliza el bucle for en lugar del bucle while:
    ~~~
    #include <iostream>

    using namespace std;

    int main()
    {
    for (int i = 0; i < 5; i++) {
    cout << i << "\n";
    }
    return 0;
    }
    ~~~
    Output:
    ~~~
    0
    1
    2
    3
    4
    ~~~
    La primera parte establece una variable antes de que comience el bucle (int i = 0).  

    Despu�s se define la condici�n para que se ejecute el bucle (i debe ser menor que 5). Si la condici�n es verdadera, el bucle comenzar� de nuevo, si es falsa, el bucle terminar�.  

    Al fnal incrementa un valor (i++) cada vez que se ejecuta el bloque de c�digo del bucle.  

    *Loop con array*
    ~~~
    #include <iostream>

    using namespace std;

    int main()
    {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
    cout << i << "\n";
    }
    return 0;
    }
    ~~~
    Output:
    ~~~
    10
    20
    30
    40
    50
    ~~~
* ### 2D Arrays & Loops anidados
  Generalmente conocidos como matrices 
  ~~~
    #include <iostream>

    using namespace std;
    int main()
    {
    int numberGrid[3][2] = {
                                {1, 2},
                                {3, 4},
                                {5, 6}
    };
    for (int i = 0; i < 3; i++){
        for(int j= 0; j < 2; j++){
            cout << numberGrid [i][j];
    }
    cout << endl;
    }
    return 0;
  }
  ~~~
   Output:
    ~~~
    12
    34
    56
    ~~~
  Se encarga de indexar dos arrays.
* ### 
~~~
















