Ecobici+
=======================
An open source iOS app to find Ecobici`s stations using NSURLSession, [AFNetworking 2.0][4], [Mantle][5] and Ecobici API for #hackdf #AppChallenge

The app demonstrates how to use MapKit, Core Location, AFNetworking 2.0 and Mantle frameworks.

**Features**

* Disponibilidad de Ecobici conforme a lo que necesites en el momento (Bicicletas o Espacios) y cantidad requerida.
* Visualización conforme a la disponibilidad de la estacion:

    * **Rojo**: Ni te acerques.
    * **Amarillo**: Quizas encuentres.
    * **Verde**: Probablemente encuentres.
    * **Verde oscuro**: Seguramente encuentres.

* Filtro de estaciones conforme al nivel actual de la estacion (Verde oscuro, Verde, Amarillo y Rojo).
* Detalle de la estacion (Direccion, nombre, referencia, delegación).
* Visualizacion de Rutas seguras y principales Ciclovias del DF.

<img src="http://chroman.me/wp-content/uploads/2014/01/iphone.png" width="512" alt="">
<img src="http://chroman.me/wp-content/uploads/2014/01/iphone2.png" width="512" alt="">
<img src="http://chroman.me/wp-content/uploads/2014/01/iphone3.png" width="512" alt="">
<img src="http://chroman.me/wp-content/uploads/2014/01/iphone4.png" width="512" alt="">
<img src="http://chroman.me/wp-content/uploads/2014/01/iphone5.png" width="512" alt="">
<img src="http://chroman.me/wp-content/uploads/2014/01/iphone6.png" width="512" alt="">
<img src="http://chroman.me/wp-content/uploads/2014/01/iphone7.png" width="512" alt="">
<img src="http://chroman.me/wp-content/uploads/2014/01/iphone8.png" width="512" alt="">

Installation
------------
`git clone --recursive https://github.com/chroman/Ecobici.git`

or

```
git clone https://github.com/chroman/Ecobici.git
cd Ecobici/Libraries
git submodule init
git submodule update
```

Requirements
----------
* iOS 7.0 or higher.
* ARC.
* Frameworks:
    * Core Location
    * MapKit
    * Quartz Core
    * UIKit

Credits
----------
* [AFNetworking 2.0][4]
* [Mantle][5]
* [MRProgress][6]

## License
Ecobici+ is released under the BSD License.

Copyright (c) 2014, Christian H. Roman Mendoza

All rights reserved.

Redistribution and use in source and binary forms, with or without
modification, are permitted provided that the following conditions are met: 

1. Redistributions of source code must retain the above copyright notice, this
   list of conditions and the following disclaimer. 
2. Redistributions in binary form must reproduce the above copyright notice,
   this list of conditions and the following disclaimer in the documentation
   and/or other materials provided with the distribution. 

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR
ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
(INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
(INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

I would greatly appreciate it if you don't redistribute this app **exactly** (Same name, icon, etc.) the way it is in the App Store.

Disclaimer
----------
This is an unofficial application and is not endorsed in any way by Ecobici.
Ecobici+ is an app that contains beverage and outlet details information that is available for public.
The developers of this app are in no way affiliated with Ecobici.
The products, company names and logos mentioned on this app are trademarks of their respective owners.

Contact
----------

**Christian Roman**
  
[http://chroman.me][1]

[chroman16@gmail.com][2]

[@chroman][3] 

  [1]: http://chroman.me
  [2]: mailto:chroman16@gmail.com
  [3]: http://twitter.com/chroman
  [4]: https://github.com/AFNetworking/AFNetworking
  [5]: https://github.com/MantleFramework/Mantle
  [6]: https://github.com/mrackwitz/MRProgress