// Name: FUN_00424f40
// Address: 00424f40
// Address Range: [[00424f40, 00424fe8]]
// Convention: unknown
// Signature: void FUN_00424f40(int param_1,undefined4 param_2,undefined4 *param_3,float param_4)

#include "nocturne.h"

void FUN_00424f40(int param_1,uint param_2,uint *param_3,float param_4)

{
  int iVar1;
  byte auStack_44 [4];
  uint uStack_40;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  float fStack_2c;
  uint uStack_14;
  
  iVar1 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x104))(param_1);
  if (0 < iVar1) {
    return;
  }
  FUN_00527230(*(uint *)(param_1 + 0xb63c));
  FUN_00423ed0(auStack_44);
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
  (**(code **)(*(int *)(param_1 + 0x14c) + 0x100))(param_1,auStack_44);
  FUN_004291f0(param_1);
  return;
}
