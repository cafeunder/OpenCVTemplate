# OpenCVTemplate

## ENVIRONMENT
opencv/C++ Windows x64 visual studio2010

## HOW TO USE
* 一度visual studioでビルドしてください。
* **openCVTemplate.slnと同じ階層にある**x64フォルダに、必要なdllファイルをコピーしてください。
  * サンプルコードで必要なdllファイルは、以下のとおりです。
    * opencv\build\x64\vc12\bin\opencv_core2413.dll
    * opencv\build\x64\vc12\bin\opencv_highgui2413.dll
  * プログラムで利用する機能に合わせ、適宜dllファイルを選択してください。
  * 将来exeファイルのみで配布する場合も、dllファイルを添付する必要があります。

「コンピューターにMSVCP120.dllがないため、プログラムを開始できません。」と出て実行できない場合、
以下のサイトより、Visual Studio 2013 の再頒布可能パッケージをインストールしてください。

https://www.microsoft.com/ja-JP/download/details.aspx?id=40784

## LICENCE
opencv : Copyright(c) 2016, Itseez.

OpenCVTemplate : Copyright(c) 2016, cafeunder.

## CONTACT
twitter : [@cafeunder](https://twitter.com/cafeunder)
