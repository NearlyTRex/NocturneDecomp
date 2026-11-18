// Name: support_trstream.cpp_COutStreamDebug_write_FUN_00574eb0
// Address: 00574eb0
// Address Range: [[00574eb0, 00574f6f]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamDebug_write_FUN_00574eb0(COutStreamDebug *this_ptr,void *data,int size)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamDebug_write_FUN_00574eb0(COutStreamDebug *this_ptr,void *data,int size)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  CHAR *pCVar4;
  CHAR *pCVar5;
  byte bVar6;
  CHAR aCStack_10c [256];
  byte uStack_c;
  
  bVar6 = 0;
  uVar1 = size;
  if (0 < size) {
    for (; 0x100 < (int)uVar1; uVar1 = uVar1 - 0x100) {
      pCVar4 = data;
      pCVar5 = aCStack_10c;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(uint *)pCVar5 = *(uint *)pCVar4;
        pCVar4 = pCVar4 + ((uint)bVar6 * -2 + 1) * 4;
        pCVar5 = pCVar5 + ((uint)bVar6 * -2 + 1) * 4;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *pCVar5 = *pCVar4;
        pCVar4 = pCVar4 + (uint)bVar6 * -2 + 1;
        pCVar5 = pCVar5 + (uint)bVar6 * -2 + 1;
      }
      data = (void *)((int)data + 0x100);
      uStack_c = 0;
      wincore_winrun_cpp_outputDebugString_FUN_00581c70(aCStack_10c);
    }
    if (0 < (int)uVar1) {
      pCVar4 = aCStack_10c;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(uint *)pCVar4 = *(uint *)data;
        data = (CHAR *)((int)data + ((uint)bVar6 * -2 + 1) * 4);
        pCVar4 = pCVar4 + ((uint)bVar6 * -2 + 1) * 4;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pCVar4 = *(CHAR *)data;
        data = (CHAR *)((int)data + (uint)bVar6 * -2 + 1);
        pCVar4 = pCVar4 + (uint)bVar6 * -2 + 1;
      }
      aCStack_10c[uVar1] = '\0';
      wincore_winrun_cpp_outputDebugString_FUN_00581c70(aCStack_10c);
    }
    return size;
  }
  return size;
}
