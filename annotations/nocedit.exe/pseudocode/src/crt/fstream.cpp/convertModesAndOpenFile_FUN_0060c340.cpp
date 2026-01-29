// Name: crt_fstream.cpp_convertModesAndOpenFile_FUN_0060c340
// Address: 0060c340
// Address Range: [[0060c340, 0060c431]]
// Convention: __cdecl
// Signature: int __cdecl crt_fstream_cpp_convertModesAndOpenFile_FUN_0060c340 (char *filename,int *iostream_mode,int permissions)

#include "nocturne.h"

int __cdecl
crt_fstream_cpp_convertModesAndOpenFile_FUN_0060c340
          (char *filename,int *iostream_mode,int permissions)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  _stat _Stack_50;
  
  uVar2 = *iostream_mode;
  if ((uVar2 & 3) == 3) {
    uVar3 = 0x22;
  }
  else if ((uVar2 & 1) == 0) {
    if ((uVar2 & 2) == 0) {
      return -1;
    }
    uVar3 = 0x21;
  }
  else {
    uVar3 = 0;
  }
  if ((uVar2 & 8) != 0) {
    uVar3 = uVar3 | 0x10;
  }
  if ((uVar2 & 0x10) != 0) {
    uVar3 = uVar3 | 0x40;
  }
  if ((uVar2 & 0x20) != 0) {
    uVar3 = uVar3 & 0xffffffdf;
  }
  if ((uVar2 & 0x100) == 0) {
    uVar3 = uVar3 | 0x100;
    *(byte *)iostream_mode = (byte)*iostream_mode | 0x80;
  }
  else {
    uVar3 = uVar3 | 0x200;
  }
  if ((((uVar2 & 0x40) != 0) && ((uVar3 | 0x20) != 0)) &&
     (iVar1 = stat(filename,&_Stack_50), iVar1 != -1)) {
    return -1;
  }
  uVar2 = permissions & 0x7000;
  iVar1 = 0;
  if (uVar2 < 0x2000) {
    if (uVar2 == 0x1000) {
      iVar1 = 0x20;
    }
  }
  else if (uVar2 < 0x2001) {
    iVar1 = 0x30;
  }
  else if (0x2fff < uVar2) {
    if (uVar2 < 0x3001) {
      iVar1 = 0x40;
    }
    else if (uVar2 == 0x4000) {
      iVar1 = 0x10;
    }
  }
  permissions = permissions & 0xffff8fff;
  iVar1 = CreateFileVariadic(filename,uVar3,iVar1,permissions);
  return iVar1;
}
