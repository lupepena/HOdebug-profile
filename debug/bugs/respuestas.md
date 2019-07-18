1. **Correr el programa con un debugger, sin agregar flags de debug. ¿Tienen toda la información que requerían?**  

Segfault  

Cuando corro el programa segfault sin debugger me salta un warning (con una función, debido a que todavia no linkeo). Cuando corro el ejecutable con el debugger y sin los flag me salta un error de segmentacion pero no me da más información.  

 2. **¿Qué pasa si ponen el flag de debug? ¿Qué flag de optimización es el mejor para debuggear?**  

Si agrego el flag -g (brinda mas información) -O0 (no optimiza, ve el código tal y cual lo escribí) me muestra la linea en la cual se encuentra el error.  
No quiero optimizar mi codigo sin antes corregirlo, quiero encontrar los errores de mi código tal cual.  

3. **Agreguen algún flag para que informe todos los warnings en la compilación, como -Wall. ¿Alguno les da alguna pista de por qué el programa se rompe?**


Dynamics  

En este caso corremos el programa y no salta ningun error. Cuando corremos con el debugger no avisa de ningún error tampoco. El producto nos da cero a pesar de que los elementoS de la variable a que usa son distinto de cero! Cuál es el problema? La maquina asigna basura al momento de usar la función porque el i perteneciente al for de la función es más grande que a la cantidad de elementos de la variable a. No salta nigun error de segmentation, el código es peligroso.

S
