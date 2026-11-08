// Name: FUN_0047a1e0
// Address: 0047a1e0
// Address Range: [[0047a1e0, 0047a3d3]]
// Convention: unknown
// Signature: void FUN_0047a1e0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0047a1e0(int param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1040 [985];
  uint uStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  uint uStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  bVar6 = 0;
  FUN_00589c80(param_1,param_2);
  if (0.0 <= *(float *)(param_1 + 0x6d4)) {
    fVar1 = *(float *)(param_1 + 0x6d4) - param_2;
    *(float *)(param_1 + 0x6d4) = fVar1;
    uVar2 = 0x0264B290;
    if (fVar1 < 0.0) {
      *(uint *)(param_1 + 0x6d4) = 0;
      FUN_0055af80(uVar2,*(uint *)(param_1 + 0x6e4));
      *(uint *)(param_1 + 0x6e4) = 0;
    }
    else {
      iVar3 = FUN_0040d060((param_2 * (float)_DAT_005d1e63 * fVar1) / _DAT_005f5bac);
      if (iVar3 != 0) {
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
        puVar4 = (uint *)&stack0xffffff48;
        puVar5 = &stack0xffffff90;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        fStack_28 = fStack_70 + fStack_64;
        fStack_24 = fStack_6c + fStack_60;
        fStack_20 = fStack_68 + fStack_5c;
        fStack_40 = fStack_70 + fStack_64;
        *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xffffffdc + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xffffffe0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        fStack_58 = fStack_40 * _DAT_005d1e6b;
        fStack_54 = fStack_3c * _DAT_005d1e6b;
        fStack_50 = fStack_38 * _DAT_005d1e6b;
        fStack_4c = fStack_40 * _DAT_005d1e6b;
        (&stack0xffffffb8)[(uint)bVar6 * 0xfffffffe] =
             (float)*(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffffbc + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
        puVar4 = (uint *)&stack0xffffff60;
        puVar5 = (uint *)&stack0xffffff78;
        for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
          *puVar5 = *puVar4;
          puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
          puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
        }
        uStack_44 = uStack_74;
        FUN_00408d70(param_1,&stack0xffffffb4);
        fStack_34 = fStack_1c;
        (&stack0xffffffd0)[(uint)bVar6 * 0xfffffffe] =
             (float)*(uint *)(&stack0xffffffe8 + (uint)bVar6 * -8);
        *(uint *)((int)&stack0xffffffd4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
             *(uint *)(&stack0xffffffec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        if (&stack0xffffffb4 != &stack0xffffffcc) {
          fStack_4c = fStack_34;
          fStack_48 = fStack_30;
          uStack_44 = uStack_2c;
        }
        FUN_0049d090(0x01C3DEB4,&stack0xffffffb4,0,0x4000,0x10000,0,0xffff);
        return;
      }
    }
  }
  return;
}
