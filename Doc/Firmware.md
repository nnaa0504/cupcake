# Firmware


## ファームウェアの書き込み

ファームウェアはQMKを使用して作成しています。

[トップ](https://github.com/nnaa0504/cupcake) から複製のZIPファイルダウンロードを行います。

![img](https://imgur.com/ZONXZ9T.jpg)

ファイルを解凍し、中にあるcupcakeと名前の付いたフォルダをqmk_firmware/keyboards内に移動させます。

    make cupcake:default:avrdude

で書き込みができます。

QMKの書き込み関する詳しい内容は、[Helixのファームウェアガイド](https://github.com/MakotoKurauchi/helix/blob/master/Doc/firmware_jp.md)が参考になります。


## キーマップ

デフォルトのキーの配置は次のようになっています（KEY3はロータリーエンコーダ）。

![img](https://imgur.com/w4HKdTP.jpg)


### DEFAULTレイヤー

 KEY1 : タップでミュート、長押しでLOWERレイヤーへ移動 
 
 KEY2 : タップでスクリーンショット、長押しでRAISEレイヤーへ移動 
 
 KEY3 : RGBのON/OFF切り替え、時計回りで音量大、反時計回りで音量小 


### LOWERレイヤー

 KEY1 : --- 
 
 KEY2 : RGBの色相変更 
 
 KEY3 : RGBのON/OFF切り替え、時計回りでRGBの輝度大、反時計回りでRGBの輝度小


### RAISEレイヤー

 KEY1 : RGBのアニメーション変更 
 
 KEY2 : --- 
 
 KEY3 : RGBのON/OFF切り替え、時計回りでRGBの彩度大、反時計回りでRGBの彩度小 
 

## キーマップの変更

cupcake/keymaps/default/keymap.cを編集することでキーマップの変更が可能です。

キーコードは[QMKのリファレンス](https://docs.qmk.fm/#/keycodes)を使用します。
