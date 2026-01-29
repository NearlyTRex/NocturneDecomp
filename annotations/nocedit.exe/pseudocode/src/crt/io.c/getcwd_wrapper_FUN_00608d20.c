// Name: crt_io.c_getcwd_wrapper_FUN_00608d20
// Address: 0060128c
// Address Range: [[0060128c, 00601290]]
// Convention: __cdecl
// Signature: char * __cdecl crt_io_c_getcwd_wrapper_FUN_00608d20(char *buffer,SIZE_T size)

#include "nocturne.h"

char * __cdecl getcwd_wrapper(char *buffer,SIZE_T size)

{
  DWORD DVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  byte bVar5;
  CHAR aCStack_110 [260];
  
  bVar5 = 0;
  DVar1 = (*g_GetCurrentDirectoryAFunc)(0x104,aCStack_110);
  if (DVar1 == 0) {
    __set_errno();
    buffer = (char *)0x0;
  }
  else {
    if (buffer == (char *)0x0) {
      uVar2 = DVar1 + 1;
      if (DVar1 + 1 < size) {
        uVar2 = size;
      }
      buffer = malloc(uVar2);
      if (buffer == (char *)0x0) {
        setErrno(5);
        return (char *)0x0;
      }
    }
    else if (size < DVar1) {
      setErrno(0xe);
      return (char *)0x0;
    }
    pcVar3 = aCStack_110;
    pcVar4 = buffer;
    for (uVar2 = DVar1 + 1 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
      *(uint *)pcVar4 = *(uint *)pcVar3;
      pcVar3 = pcVar3 + (uint)bVar5 * -8 + 4;
      pcVar4 = pcVar4 + (uint)bVar5 * -8 + 4;
    }
    for (uVar2 = DVar1 + 1 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
      *pcVar4 = *pcVar3;
      pcVar3 = pcVar3 + (uint)bVar5 * -2 + 1;
      pcVar4 = pcVar4 + (uint)bVar5 * -2 + 1;
    }
  }
  return buffer;
}
