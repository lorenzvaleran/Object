#!/usr/bin/python

import ctypes


def main():
        TestLib = ctypes.cdll.LoadLibrary('/home/lo/Desktop/pythonso/Release/libAdd.so')
        print TestLib.__add__
        print TestLib.add(a,b)

if __name__ == '__main__':
        main()
