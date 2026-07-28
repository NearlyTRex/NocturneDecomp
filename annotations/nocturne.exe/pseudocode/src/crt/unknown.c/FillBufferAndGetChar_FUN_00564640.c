// Name: crt_unknown.c_FillBufferAndGetChar_FUN_00564640
// Address: 00564640
// Address Range: [[00564640, 0056466e]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_unknown_c_FillBufferAndGetChar_FUN_00564640(_FILE *file)

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
