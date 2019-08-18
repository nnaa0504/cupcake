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

![img](https://imgur.com/w4HKdTP.jpg)

デフォルトのキーの配置は図のようになっています（KEY3はロータリーエンコーダ）。


### DEFAULTレイヤー
| ---- | ---- |
| ---- | ---- |
| KEY1 | タップでミュート、長押しでLOWERレイヤーへ移動 |
| KEY2 | タップでスクリーンショット、長押しでRAISEレイヤーへ移動 |
| KEY3 | RGBのON/OFF切り替え、時計回りで音量大、反時計回りで音量小 |

### LOWERレイヤー
| キー | アクション |
| ---- | ---- |
| KEY1 | --- |
| KEY2 | タップでスクリーンショット、長押しでRAISEレイヤーへ移動 |
| KEY3 | RGBのON/OFF切り替え、時計回りで音量大、反時計回りで音量小 |


