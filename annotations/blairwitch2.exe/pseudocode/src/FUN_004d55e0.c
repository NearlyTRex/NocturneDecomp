// Name: FUN_004d55e0
// Address: 004d55e0
// Address Range: [[004d55e0, 004d5774]]
// Convention: unknown
// Signature: undefined4 FUN_004d55e0(int param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004d55e0(int param_1)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1048 [1015];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  float local_3c;
  float local_30;
  float fStack_2c;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  float fStack_18;
  
  bVar3 = 0;
  *(uint *)(param_1 + 0x25664) = 0;
  local_24 = 4.0;
  local_48 = 0x3f800000;
  local_40 = 0x40000000;
  local_44 = 0;
  FUN_00408d70(param_1,&stack0xffffffb8);
  local_20 = 0;
  local_1c = 0;
  local_30 = local_3c;
  *(uint *)((int)&stack0xffffffd4 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffc8 + (uint)bVar3 * 0xfffffffe * 4);
  *(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)(&stack0xffffffcc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  for (; local_20 < *(int *)(0x01E661B8 + 0x14d164); local_20 = local_20 + 1) {
    iVar1 = *(int *)(0x01E661B8 + local_1c + 0x14d168);
    iVar2 = (**(code **)(*(int *)(iVar1 + 0x2b0) + 0x9c))(iVar1);
    if (iVar2 == 0) {
      iVar2 = FUN_0040c8f0(iVar1,_DAT_02653574);
      if (iVar2 != 0) {
        fStack_60 = *(float *)(iVar1 + 0x20) - local_30;
        fStack_5c = *(float *)(iVar1 + 0x24) - fStack_2c;
        fStack_58 = *(float *)(iVar1 + 0x28) - local_28;
        fStack_54 = fStack_60;
        *(uint *)((int)&stack0xffffffb0 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffa4 + (uint)bVar3 * -8);
        *(uint *)((int)&stack0xffffffb4 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
             *(uint *)((int)&stack0xffffffa8 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
        if ((ABS(fStack_50) <= (float)_DAT_005da866) &&
           (fStack_18 = fStack_54 * fStack_54 + fStack_4c * fStack_4c, fStack_18 <= local_24)) {
          *(int *)(param_1 + 0x25664) = iVar1;
          local_24 = fStack_18;
        }
      }
    }
    local_1c = local_1c + 4;
  }
  if (*(int *)(param_1 + 0x25664) == 0) {
    return 0;
  }
  *(float *)(param_1 + 0x20) =
       (*(float *)(*(int *)(param_1 + 0x25664) + 0x20) - local_30) + *(float *)(param_1 + 0x20);
  *(float *)(param_1 + 0x28) =
       (*(float *)(*(int *)(param_1 + 0x25664) + 0x28) - local_28) + *(float *)(param_1 + 0x28);
  FUN_00503620(param_1 + 0x2b4,0x13,1);
  return 1;
}
