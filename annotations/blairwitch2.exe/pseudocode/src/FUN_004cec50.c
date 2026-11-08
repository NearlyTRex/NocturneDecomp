// Name: FUN_004cec50
// Address: 004cec50
// Address Range: [[004cec50, 004cee85]]
// Convention: unknown
// Signature: bool FUN_004cec50(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_004cec50(int param_1)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  byte bVar6;
  float afStackY_105c [1001];
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_74;
  uint uStack_70;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  uint uStack_50;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  uint uStack_20;
  int iStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  (**(code **)(*(int *)(param_1 + 0x2b0) + 0x24))(param_1);
  puVar3 = (uint *)&stack0xffffff74;
  puVar4 = &stack0xffffff5c;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  fStack_44 = local_a4 + fStack_98;
  fStack_40 = fStack_a0 + fStack_94;
  fStack_3c = fStack_9c + fStack_90;
  fStack_68 = local_a4 + fStack_98;
  *(uint *)((int)&stack0xffffff9c + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffc0 + (uint)bVar6 * -8);
  *(uint *)((int)&stack0xffffffa0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffc4 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_5c = fStack_68 * _DAT_005d9c64;
  fStack_58 = fStack_64 * _DAT_005d9c64;
  fStack_54 = fStack_60 * _DAT_005d9c64;
  fStack_74 = fStack_68 * _DAT_005d9c64;
  *(uint *)((int)&stack0xffffff90 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffa8 + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffff94 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)((int)&stack0xffffffac + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  uStack_28 = uStack_70;
  uStack_2c = 0;
  uStack_24 = 0x3fc00000;
  FUN_00408d70(param_1,&stack0xffffffd4);
  uStack_50 = uStack_38;
  *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * 0xfffffffe * 4) =
       *(uint *)(&stack0xffffffcc + (uint)bVar6 * -8);
  *(uint *)(&stack0xffffffb8 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       *(uint *)(&stack0xffffffd0 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
  fStack_18 = 1e+30;
  iVar2 = 0;
  for (iVar5 = 0; iVar5 < *(int *)(0x01E661B8 + 0x14d164); iVar5 = iVar5 + 1) {
    uStack_20 = *(uint *)(iVar2 + 0x14d168 + 0x01E661B8);
    iStack_1c = FUN_0040c8f0(uStack_20,_DAT_02661f38);
    fStack_a8 = -1.0;
    if (iStack_1c == 0) {
      iVar1 = *(int *)(iVar2 + 0x14d168 + 0x01E661B8);
      fStack_a8 = (float)(**(code **)(*(int *)(iVar1 + 0x2b0) + 0x68))
                                   (iVar1,param_1,&stack0xffffffb0,&stack0xffffffe0);
      fStack_14 = fStack_a8;
    }
    else {
      iVar1 = FUN_0058a5f0(iStack_1c);
      if ((iVar1 == 0) || (iStack_1c == 0)) {
        iVar1 = *(int *)(iVar2 + 0x14d168 + 0x01E661B8);
        fStack_a8 = (float)(**(code **)(*(int *)(iVar1 + 0x2b0) + 0x68))
                                     (iVar1,param_1,&stack0xffffffb0,&stack0xffffffe0);
        fStack_14 = fStack_a8;
      }
    }
    iVar1 = 0x01E661B8;
    if ((0.0 <= fStack_a8) && (fStack_a8 < fStack_18)) {
      fStack_18 = fStack_a8;
      *(uint *)(param_1 + 0x255f0) = 1;
      *(uint *)(param_1 + 0x255f4) = *(uint *)(iVar2 + 0x14d168 + iVar1);
      *(uint *)(param_1 + 0x25600) = 0;
      *(uint *)(param_1 + 0x255f8) = uStack_20;
    }
    iVar2 = iVar2 + 4;
  }
  return *(int *)(param_1 + 0x255f0) == 1;
}
