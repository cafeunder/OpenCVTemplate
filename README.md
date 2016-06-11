# OpenCVTemplate

## ENVIRONMENT
opencv/C++ Windows x64 visual studio2010

## HOW TO USE
* 一度visual studioでビルドしてください。
* **openCVTemplate.slnと同じ階層にある**x64/Releaseフォルダに、必要なdllファイルをコピーしてください。
  * サンプルコードで必要なdllファイルは、以下のとおりです。
    * opencv\build\x64\vc12\bin\opencv_core2413.dll
    * opencv\build\x64\vc12\bin\opencv_highgui2413.dll
  * プログラムで利用する機能に合わせ、適宜dllファイルを選択してください。
  * dllファイルを追加した場合、cvHeader.hのLIBRARY FILES以下にある、dllファイルに対応する行のコメントアウトを解除してください。
  * 将来exeファイルのみで配布する場合も、dllファイルを添付する必要があります。

環境によっては、ソリューションファイルをダブルクリックしても実行できない場合があります。
その場合は、visual studioを立ち上げて「ファイル」→「ファイルを開く」から実行してください。

「コンピューターにMSVCP120.dllがないため、プログラムを開始できません。」と出て実行できない場合、
以下のサイトより、Visual Studio 2013 の再頒布可能パッケージをインストールしてください。

https://www.microsoft.com/ja-JP/download/details.aspx?id=40784

## LICENCE
opencv : Copyright(c) 2016, Itseez.

OpenCVTemplate : Copyright(c) 2016, cafeunder.

## CONTACT
twitter : [@cafeunder](https://twitter.com/cafeunder)