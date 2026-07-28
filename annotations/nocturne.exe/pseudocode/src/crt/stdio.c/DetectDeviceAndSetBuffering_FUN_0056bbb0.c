// Name: crt_stdio.c_DetectDeviceAndSetBuffering_FUN_0056bbb0
// Address: 0056bbb0
// Address Range: [[0056bbb0, 0056bbe2]]
// Convention: __cdecl
// Signature: void __cdecl crt_stdio_c_DetectDeviceAndSetBuffering_FUN_0056bbb0(_FILE *file)

#include "nocturne.h"

void __cdecl DetectDeviceAndSetBuffering(_FILE *file)

{
  byte bVar1;
  int iVar2;
  
  if ((file->_flag & 0x2000) == 0) {
    iVar2 = IsSpecialDevice(file->_handle);
    if (iVar2 != 0) {
      bVar1 = *(byte *)((int)&file->_flag + 1);
      *(byte *)((int)&file->_flag + 1) = bVar1 | 0x20;
      if ((bVar1 & 7) == 0) {
        *(byte *)((int)&file->_flag + 1) = bVar1 | 0x22;
      }
    }
  }
  return;
}
