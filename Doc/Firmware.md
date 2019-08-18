# Firmware

ファームウェアはQMKで作成しています。

[トップ](https://github.com/nnaa0504/cupcake) から複製のZIPファイルダウンロードを行います。

![img](https://imgur.com/ZONXZ9T.jpg)

ファイルを解凍し、中にあるcupcakeと名前の付いたフォルダをqmk_firmware/keyboards内に移動させます。

    make cupcake:default:avrdude

で書き込みをします。
