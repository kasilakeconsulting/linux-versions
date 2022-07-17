# linux-versions
A C++ program that outputs Linux terminal program versions and locations

My first little Linux program. I wanted a way to output version info and locations for several installed programs (php, python, etc), all at once. So for fun I wrote this C++ program (of course, using vim!), it compiles with g++.

Create a text file named versions.lst and put it in the same location as the versions executable, list one program name per line.

Sample versions.lst file:

php<br>
python3<br>
gcc<br>
g++<br>
brew<br>
mysql<br>
git<br>
docker<br>

And here's the output:

php<br>
PHP 7.4.23 (cli) (built: Aug 25 2021 17:13:38) ( NTS )<br>
Copyright (c) The PHP Group<br>
Zend Engine v3.4.0, Copyright (c) Zend Technologies<br>
    with Xdebug v3.0.4, Copyright (c) 2002-2021, by Derick Rethans<br>
    with Zend OPcache v7.4.23, Copyright (c), by Zend Technologies<br>
/opt/homebrew/bin/php

python3<br>
Python 3.9.7<br>
/opt/homebrew/bin/python3

gcc<br>
Apple clang version 13.1.6 (clang-1316.0.21.2.5)<br>
Target: arm64-apple-darwin21.5.0<br>
Thread model: posix<br>
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin<br>
/usr/bin/gcc

g++<br>
Apple clang version 13.1.6 (clang-1316.0.21.2.5)<br>
Target: arm64-apple-darwin21.5.0<br>
Thread model: posix<br>
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin<br>
/usr/bin/g++

brew<br>
Homebrew 3.5.4<br>
Homebrew/homebrew-core (git revision 4ba206dbf12; last commit 2022-07-10)<br>
/opt/homebrew/bin/brew

mysql<br>
mysql  Ver 8.0.25 for macos11 on x86_64 (MySQL Community Server - GPL)<br>
/usr/local/mysql/bin/mysql

git<br>
git version 2.32.1 (Apple Git-133)<br>
/usr/bin/git

docker<br>
Docker version 20.10.11, build dea9396<br>
/usr/local/bin/docker
