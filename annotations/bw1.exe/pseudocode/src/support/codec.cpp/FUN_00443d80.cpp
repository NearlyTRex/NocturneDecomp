// Name: support_codec.cpp_FUN_00443d80
// Address: 00443d80
// Address Range: [[00443d80, 00443e3a]]
// Convention: unknown
// Signature: int support_codec_cpp_FUN_00443d80(int param_1,undefined4 *param_2,uint param_3)

#include "nocturne.h"

int support_codec_cpp_FUN_00443d80(int param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int iStack_18;
  uint *puStack_14;
  
  bVar6 = 0;
  if (*(int *)(param_1 + 0x10) == 0) {
    iStack_18 = -2;
  }
  else {
    iStack_18 = 0;
    puStack_14 = param_2;
    if (0 < (int)param_3) {
      while( true ) {
        if (*(int *)(param_1 + 0x1c) < *(int *)(param_1 + 0x18)) {
          uVar3 = *(int *)(param_1 + 0x18) - *(int *)(param_1 + 0x1c);
          if ((int)param_3 < (int)uVar3) {
            uVar3 = param_3;
          }
          param_3 = param_3 - uVar3;
          puVar4 = (uint *)(*(int *)(param_1 + 0x10) + *(int *)(param_1 + 0x1c));
          puVar5 = puStack_14;
          for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(byte *)puVar5 = *(byte *)puVar4;
            puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
            puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
          }
          puStack_14 = (uint *)((int)puStack_14 + uVar3);
          iStack_18 = iStack_18 + uVar3;
          *(uint *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + uVar3;
        }
        if ((int)param_3 < 1) {
          return iStack_18;
        }
        iVar1 = support_codec_cpp_FUN_00444020(param_1);
        if (iVar1 < -1) {
          return iVar1;
        }
        if (iVar1 < 0) break;
        if ((int)param_3 < 1) {
          return iStack_18;
        }
      }
      if (iStack_18 < 1) {
        return -1;
      }
    }
  }
  return iStack_18;
}
