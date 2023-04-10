# SupermarketKata

Un amigo heredó un pequeño super de un tío abuelo 2do.  Se enteró que sos aspirantes a programador y lo primero que hizo fue preguntarnos si podíamos arreglarle la impresora. Luego de 15 minutos de explicarle nuestra profesión le pareció interesante lo que podíamos hacer y nos invitó a hacer un programa que le permita gestionar sus ventas. 

*Estado cero*

- hacer un fork del proyecto actual
- Clonar el fork de forma local 
- Agregar archivo gitingnore 
- Comenzar a avanzar con los requisitos de la primer a iteración

*Primera  interacción*

Lo primero siempre es identificar las necesidades de nuestros usuarios ya sea entrevistandolos o bien investigando sobre el tema.
Podemos ver paginas de otros supermercados para entender mejor que se requiere

1. Diseñar la estructura representar los productos del sistema.
2. Probar la estructura con un generador de valores aleatorios para las atributos de los productos. 
3. Generar una función permita visualizar un producto correctamente
4. Hacer un commit y push. 

*Segunda iteracion* 

Teniendo una estructura que representa las necesidades del proyecto podemos ahora agruparlas en memoria para que estas sean accesibles por el sistema
Deberemos pensar una forma de mantener estos datos en memória. 

1. Buscar una estructura de datos que nos permita agrupar los elementos productos en memoria .
2. Permitir operaciones de alta de productos en la estructura elegida
3. Generar 20 productos aleatórios en la estructura elegida. 
4. Hacer un commit y push. 

*Tercera iteracion* 
Internamente nuestro sistema hace algunas tareas pero todavía nos falta poder visualizar, buscar y navegar los productos de los que disponemos.

1. Deberíamos identificar cada producto de una forma particular -> Id de producto
2. Permitir operaciones de busqueda de productos por Id
3. Si el producto no existe devolver -1, si el producto existe devolver la dirección de memória del producto buscado
4. Armar un menú simple de busqueda para el usuario   
5. Hacer un commit y push. 

*Cuarta iteración*

Ya contamos con una respresentación simple de un producto, además todos los productos disponibles en memória para poder utilizarlos.
Nuestro Amigo está muy contento con nuestros avances, si no consideramos que el programa todavía no sirve para absolutamente nada más que ver los productos que el super ofrece.  
Ahora nos faltaría ver una forma de armar una factura de compra. Cuando en un local de este tipo se compran productos, es necesario agruparlos en cantidades de cada producto adquirido.
De esta forma tenemos cunado vemos el detalle del producto tenemos algo similar a lo siguiente: 
 <cantidad> <Nombre producto> -------- <Precio Unitario> 

1. Buscar una estructura de datos que nos permita agrupar los elementos en memoria.
2. Permitir Agregar nuevos productos a la estructura dinámica seleccionada.
3. Si al agregar el producto este ya existe, aumentar en +1 el producto seleccionado.
2. Presentar por pantalla la factura con los productos seleccionados.
4. Hacer un commit y push. 
