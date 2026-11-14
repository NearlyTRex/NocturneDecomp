// Name: support_trstream.cpp_COutStreamDebug_write_FUN_0057e270
// Address: 0057e270
// Address Range: [[0057e270, 0057e32f]]
// Convention: __cdecl
// Signature: int __cdecl support_trstream_cpp_COutStreamDebug_write_FUN_0057e270(COutStreamDebug *this_ptr,void *data,int size)

#include "nocturne.h"

int __cdecl support_trstream_cpp_COutStreamDebug_write_FUN_0057e270(COutStreamDebug *this_ptr,void *data,int size)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  uint auStack_10c [64];
  byte uStack_c;
  
  bVar6 = 0;
  uVar1 = size;
  if (0 < size) {
    for (; 0x100 < (int)uVar1; uVar1 = uVar1 - 0x100) {
      puVar4 = data;
      puVar5 = auStack_10c;
      for (iVar2 = 0x40; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(byte *)puVar5 = *(byte *)puVar4;
        puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
        puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
      }
      data = (void *)((int)data + 0x100);
      uStack_c = 0;
      wincore_winrun_cpp_FUN_0058ffc0(auStack_10c);
    }
    if (0 < (int)uVar1) {
      puVar4 = auStack_10c;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = *(uint *)data;
        data = (uint *)((int)data + ((uint)bVar6 * -2 + 1) * 4);
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(byte *)puVar4 = *(byte *)data;
        data = (uint *)((int)data + (uint)bVar6 * -2 + 1);
        puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      }
      *(byte *)((int)auStack_10c + uVar1) = 0;
      wincore_winrun_cpp_FUN_0058ffc0(auStack_10c);
    }
    return size;
  }
  return size;
}
