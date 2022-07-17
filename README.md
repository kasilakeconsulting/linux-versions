# linux-versions
A C++ program that outputs Linux terminal program versions and locations

My first little Linux program. I wanted a way to output version info and locations for several installed programs (php, python, etc), all at once. So for fun I wrote this C++ program (of course, using vim!), it compiles with g++.

Create a text file named versions.lst and put it in the same location as the versions executable, list one program name per line.

For example, here's my versions.lst file:

php
python3
gcc
g++
brew
mysql
git
docker

And here's the output:

php
PHP 7.4.23 (cli) (built: Aug 25 2021 17:13:38) ( NTS )
Copyright (c) The PHP Group
Zend Engine v3.4.0, Copyright (c) Zend Technologies
    with Xdebug v3.0.4, Copyright (c) 2002-2021, by Derick Rethans
    with Zend OPcache v7.4.23, Copyright (c), by Zend Technologies
/opt/homebrew/bin/php

python3
Python 3.9.7
/opt/homebrew/bin/python3

gcc
Apple clang version 13.1.6 (clang-1316.0.21.2.5)
Target: arm64-apple-darwin21.5.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
/usr/bin/gcc

g++
Apple clang version 13.1.6 (clang-1316.0.21.2.5)
Target: arm64-apple-darwin21.5.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
/usr/bin/g++

brew
Homebrew 3.5.4
Homebrew/homebrew-core (git revision 4ba206dbf12; last commit 2022-07-10)
/opt/homebrew/bin/brew

mysql
mysql  Ver 8.0.25 for macos11 on x86_64 (MySQL Community Server - GPL)
/usr/local/mysql/bin/mysql

git
git version 2.32.1 (Apple Git-133)
/usr/bin/git

docker
Docker version 20.10.11, build dea9396
/usr/local/bin/docker
