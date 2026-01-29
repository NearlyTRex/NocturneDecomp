// Name: crt_stdio.c_FillBufferAndGetChar_FUN_005fe910
// Address: 005fe910
// Address Range: [[005fe910, 005fe93e]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdio_c_FillBufferAndGetChar_FUN_005fe910(_FILE *file)

#include "nocturne.h"

int __watcallStack FillBufferAndGetChar(_FILE *file)

{
  byte *pbVar1;
  int iVar2;
  
  iVar2 = FillInputBuffer(file);
  if (iVar2 == 0) {
    return -1;
  }
  pbVar1 = (byte *)file->_ptr;
  file->_cnt = file->_cnt + -1;
  file->_ptr = (char *)(pbVar1 + 1);
  return (uint)*pbVar1;
}
