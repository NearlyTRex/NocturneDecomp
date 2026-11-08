// Name: FUN_0049cca0
// Address: 0049cca0
// Address Range: [[0049cca0, 0049ce8e]]
// Convention: unknown
// Signature: void FUN_0049cca0(float *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0049cca0(float *param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1040 [1015];
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  int local_34;
  int iStack_30;
  float fStack_2c;
  float fStack_28;
  int iStack_24;
  float *pfStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  bVar3 = 0;
  iVar1 = FUN_0040c4f0("CBugs");
  local_34 = iVar1;
  FUN_004f7530(0x01D81080,iVar1);
  iVar2 = _DAT_01d5ba14;
  *(float *)(iVar1 + 0x20) = *param_1;
  *(float *)(iVar1 + 0x24) = param_1[1];
  *(float *)(iVar1 + 0x28) = param_1[2];
  *(uint *)(iVar1 + 0x2c) = *(uint *)(*(int *)(iVar2 * 4 + 0x1d5ba04) + 0x2c);
  uStack_14 = (**(code **)(*(int *)(iVar1 + 0x154) + 0x40))(iVar1,0x3f000000,0);
  *(uint *)(iVar1 + 0x24) = uStack_14;
  (*(code *)**(uint **)(iVar1 + 0x154))(iVar1);
  FUN_004f6930(0x01D81080,iVar1);
  iStack_24 = 0;
  fStack_2c = 20.0;
  iStack_30 = 0;
  iStack_1c = 0;
  pfStack_20 = (float *)(iVar1 + 0x20);
  while( true ) {
    if (*(int *)(0x01ED78C8 + 0x14d164) <= iStack_1c) break;
    iVar2 = FUN_0040c840(*(uint *)(0x01ED78C8 + iStack_24 + 0x14d168),DAT_007e2cec);
    iStack_18 = iVar2;
    if (iVar2 != 0) {
      iVar1 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x10c))(iVar2);
      if (iVar1 == 0) {
        iVar1 = FUN_0040c840(iVar2,_DAT_01c5bc48);
        if (iVar1 != 0) {
          iVar1 = FUN_0040c840(iVar2,DAT_007e2a14);
          if (iVar1 == 0) {
            fStack_4c = *pfStack_20 - *(float *)(iVar2 + 0x20);
            fStack_48 = pfStack_20[1] - *(float *)(iVar2 + 0x24);
            fStack_44 = pfStack_20[2] - *(float *)(iVar2 + 0x28);
            fStack_58 = fStack_4c;
            (&stack0xffffffac)[(uint)bVar3 * 0xfffffffe] =
                 (float)*(uint *)((int)&stack0xffffffb8 + (uint)bVar3 * -8);
            *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
                 *(uint *)((int)&stack0xffffffbc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
            if (&stack0xffffffc0 != &stack0xffffffa8) {
              fStack_40 = fStack_58;
              fStack_3c = fStack_54;
              fStack_38 = fStack_50;
            }
            fStack_28 = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
            if (fStack_28 < fStack_2c) {
              iStack_30 = iStack_18;
              fStack_2c = fStack_28;
            }
          }
        }
      }
    }
    iStack_1c = iStack_1c + 1;
    iStack_24 = iStack_24 + 4;
  }
  if (iStack_30 == 0) {
    return;
  }
  *(int *)(local_34 + 0xcde4) = iStack_30;
  return;
}
