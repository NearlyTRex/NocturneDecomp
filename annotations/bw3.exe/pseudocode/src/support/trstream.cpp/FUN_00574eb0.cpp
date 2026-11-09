// Name: support_trstream.cpp_FUN_00574eb0
// Address: 00574eb0
// Address Range: [[00574eb0, 00574f6f]]
// Convention: unknown
// Signature: uint support_trstream_cpp_FUN_00574eb0(undefined4 param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

uint support_trstream_cpp_FUN_00574eb0(uint param_1,uint *param_2,uint param_3)

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
  uVar1 = param_3;
  if (0 < (int)param_3) {
    for (; 0x100 < (int)uVar1; uVar1 = uVar1 - 0x100) {
      puVar4 = param_2;
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
      param_2 = param_2 + 0x40;
      uStack_c = 0;
      wincore_winrun_cpp_FUN_00581c70(auStack_10c);
    }
    if (0 < (int)uVar1) {
      puVar4 = auStack_10c;
      for (uVar3 = uVar1 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar4 = *param_2;
        param_2 = param_2 + (uint)bVar6 * -2 + 1;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      }
      for (uVar3 = uVar1 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(byte *)puVar4 = *(byte *)param_2;
        param_2 = (uint *)((int)param_2 + (uint)bVar6 * -2 + 1);
        puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
      }
      *(byte *)((int)auStack_10c + uVar1) = 0;
      wincore_winrun_cpp_FUN_00581c70(auStack_10c);
    }
    return param_3;
  }
  return param_3;
}
