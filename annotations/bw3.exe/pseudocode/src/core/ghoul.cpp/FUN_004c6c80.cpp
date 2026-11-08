// Name: FUN_004c6c80
// Address: 004c6c80
// Address Range: [[004c6c80, 004c6e2e]]
// Convention: unknown
// Signature: void FUN_004c6c80(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c6c80(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float local_14;
  
  if ((*(int *)(param_1 + 0xd0bc) == 0) &&
     (param_2 = *(float *)(param_1 + 0xd0b8) - param_2, *(float *)(param_1 + 0xd0b8) = param_2,
     param_2 <= 0.0)) {
    local_14 = (float)FUN_0040ce40(0x3f800000,0x40000000);
    local_24 = param_1 + 0x20;
    local_18 = 0;
    local_1c = 0;
    *(float *)(param_1 + 0xd0b8) = local_14 + *(float *)(param_1 + 0xd0b8);
    for (; local_18 < *(int *)(0x01ED78C8 + 0x14d164); local_18 = local_18 + 1) {
      iVar1 = FUN_0040c840(*(uint *)(0x01ED78C8 + local_1c + 0x14d168),_DAT_02d0bcd8);
      if ((iVar1 != 0) &&
         (iVar2 = FUN_00486a40(PTR_s_darkPoint_005c442c_1_005fecb0,iVar1,0), iVar2 != 0)) {
        iVar2 = 0;
        local_20 = 1;
        for (iVar4 = 0; iVar4 < *(int *)(0x01ED78C8 + 0x150fec); iVar4 = iVar4 + 1) {
          iVar3 = FUN_0040c840(*(uint *)(iVar2 + 0x150ff0 + 0x01ED78C8),_DAT_01d22d9c);
          if (((iVar3 != 0) && (iVar3 != param_1)) && (iVar1 == *(int *)(iVar3 + 0xd0b4)))
          goto LAB_004c6d1f;
          iVar2 = iVar2 + 4;
        }
        if (local_20 != 0) {
          iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xc4))(iVar1);
          if (iVar2 == 0) {
            iVar2 = FUN_0050ced0(iVar1 + 0x20);
          }
          if (iVar2 == 0) {
            _DAT_01d71de0 = "..\\core\\ghoul.cpp";
            _DAT_01d71de4 = 0x12d;
            FUN_004e4330("CGhoul::findDarkWayPoint - Can't get temp path map");
          }
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          iVar2 = FUN_0050c680(iVar2,local_24,&uStack_30,*(uint *)(param_1 + 0x6c));
          if (0 < iVar2) {
            *(int *)(param_1 + 0xd0b4) = iVar1;
          }
        }
      }
LAB_004c6d1f:
      local_1c = local_1c + 4;
    }
  }
  return;
}
