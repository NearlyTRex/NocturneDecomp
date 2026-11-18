// Name: support_trisock.cpp_httpRequestGetByte_FUN_0059ee60
// Address: 0059ee60
// Address Range: [[0059ee60, 0059eea8]]
// Convention: __cdecl
// Signature: int __cdecl support_trisock_cpp_httpRequestGetByte_FUN_0059ee60(void *request,int non_blocking)

#include "nocturne.h"

int __cdecl support_trisock_cpp_httpRequestGetByte_FUN_0059ee60(void *request,int non_blocking)

{
  byte bVar1;
  int iVar2;
  
  if (*(int *)((int)request + 0xa10) < *(int *)((int)request + 0xa14)) {
    bVar1 = *(byte *)(*(int *)((int)request + 0xa10) + 0x610 + (int)request);
    *(int *)((int)request + 0xa10) = *(int *)((int)request + 0xa10) + 1;
    return (uint)bVar1;
  }
  iVar2 = support_trisock_cpp_httpRequestFillBuffer_FUN_0059ed90(request,non_blocking);
  return iVar2;
}
