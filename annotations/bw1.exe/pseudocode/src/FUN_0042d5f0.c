// Name: FUN_0042d5f0
// Address: 0042d5f0
// Address Range: [[0042d5f0, 0042d698]]
// Convention: unknown
// Signature: void FUN_0042d5f0(int param_1,undefined4 param_2,undefined4 *param_3,float param_4)

#include "nocturne.h"

void FUN_0042d5f0(int param_1,uint param_2,uint *param_3,float param_4)

{
  int iVar1;
  byte auStack_44 [4];
  uint uStack_40;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  uint uStack_14;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x154) + 0x10c))(param_1);
  if (0 < iVar1) {
    return;
  }
  FUN_00573a80(*(uint *)(param_1 + 0xb9e4));
  FUN_0042c010(auStack_44);
  uStack_40 = 0x461c3c00;
  uStack_14 = param_2;
  if ((param_3 != (uint *)0x0) && (&uStack_38 != param_3)) {
    uStack_38 = *param_3;
    uStack_34 = param_3[1];
    uStack_30 = param_3[2];
  }
  if (0.0 <= param_4) {
    fStack_2c = param_4;
  }
  (**(code **)(*(int *)(param_1 + 0x154) + 0x108))(param_1,auStack_44);
  FUN_004328c0(param_1);
  return;
}
