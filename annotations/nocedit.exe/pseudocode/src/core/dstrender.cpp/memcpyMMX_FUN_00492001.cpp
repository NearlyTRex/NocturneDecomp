// Name: core_dstrender.cpp_memcpyMMX_FUN_00492001
// Address: 00492001
// Address Range: [[00492001, 00492041]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_memcpyMMX_FUN_00492001(void *dest,void *src,int byte_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_memcpyMMX_FUN_00492001(void *dest,void *src,int byte_count)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  ulonglong *puVar4;
  ulonglong *puVar5;
  
  iVar3 = byte_count;
  do {
    iVar2 = iVar3 + -0x20;
    bVar1 = 0x1f < iVar3;
    iVar3 = iVar2;
  } while (iVar2 != 0 && bVar1);
  puVar4 = (ulonglong *)((uint)src & 0xfffffff8);
  puVar5 = (ulonglong *)((uint)dest & 0xfffffff8);
  iVar3 = ((uint)byte_count >> 3) + 1;
  do {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + 1;
    puVar5 = puVar5 + 1;
    bVar1 = 0 < iVar3;
    iVar3 = iVar3 + -1;
  } while (bVar1);
  return;
}
