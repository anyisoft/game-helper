// stdafx.h : 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 特定于项目的包含文件
//

#pragma once

#include <SDKDDKVer.h>

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头中排除极少使用的资料
// Windows 头文件: 
#include <windows.h>
//#define 测试

// TODO: 在此处引用程序需要的其他头文件
#define VMBEGIN \
	_asm _emit 0xEB  \
	_asm _emit 0x10  \
	_asm _emit 0x56  \
	_asm _emit 0x4D  \
	_asm _emit 0x50  \
	_asm _emit 0x72  \
	_asm _emit 0x6F  \
	_asm _emit 0x74  \
	_asm _emit 0x65  \
	_asm _emit 0x63  \
	_asm _emit 0x74  \
	_asm _emit 0x20  \
	_asm _emit 0x62  \
	_asm _emit 0x65  \
	_asm _emit 0x67  \
	_asm _emit 0x69  \
	_asm _emit 0x6E  \
	_asm _emit 0x00  

#define VMEND  \
	__asm _emit 0xEB \
	__asm _emit 0x0E \
	__asm _emit 0x56 \
	__asm _emit 0x4D \
	__asm _emit 0x50 \
	__asm _emit 0x72 \
	__asm _emit 0x6F \
	__asm _emit 0x74 \
	__asm _emit 0x65 \
	__asm _emit 0x63 \
	__asm _emit 0x74 \
	__asm _emit 0x20 \
	__asm _emit 0x65 \
	__asm _emit 0x6E \
	__asm _emit 0x64 \
	__asm _emit 0x00 


const WCHAR filepath[] = L"C:\\dxfhelper.ini";

/*
__asm  //标记开始处
{
_emit 0xEB
_emit 0x10
_emit 0x56
_emit 0x4D
_emit 0x50
_emit 0x72
_emit 0x6F
_emit 0x74
_emit 0x65
_emit 0x63
_emit 0x74
_emit 0x20
_emit 0x62
_emit 0x65
_emit 0x67
_emit 0x69
_emit 0x6E
_emit 0x00
}
*/

/*
__asm  //标记结束处.
{
_emit 0xEB
_emit 0x0E
_emit 0x56
_emit 0x4D
_emit 0x50
_emit 0x72
_emit 0x6F
_emit 0x74
_emit 0x65
_emit 0x63
_emit 0x74
_emit 0x20
_emit 0x65
_emit 0x6E
_emit 0x64
_emit 0x00
}
*/