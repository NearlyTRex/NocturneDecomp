// Name: FUN_004de100
// Address: 004de100
// Address Range: [[004de100, 004de2ae]]
// Convention: unknown
// Signature: void FUN_004de100(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004de100(int param_1,float param_2)

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
  
  if ((*(int *)(param_1 + 0xc2d0) == 0) &&
     (param_2 = *(float *)(param_1 + 0xc2cc) - param_2, *(float *)(param_1 + 0xc2cc) = param_2,
     param_2 <= 0.0)) {
    local_14 = (float)FUN_0040cc00(0x3f800000,0x40000000);
    local_24 = param_1 + 0x20;
    local_18 = 0;
    local_1c = 0;
    *(float *)(param_1 + 0xc2cc) = local_14 + *(float *)(param_1 + 0xc2cc);
    for (; local_18 < *(int *)(0x01E82168 + 0x14d164); local_18 = local_18 + 1) {
      iVar1 = FUN_0040c600(*(uint *)(0x01E82168 + local_1c + 0x14d168),_DAT_02c992fc);
      if ((iVar1 != 0) &&
         (iVar2 = FUN_0049dea0(PTR_s_darkPoint_005e3e21_0061dc30,iVar1,0), iVar2 != 0)) {
        iVar2 = 0;
        local_20 = 1;
        for (iVar4 = 0; iVar4 < *(int *)(0x01E82168 + 0x150fec); iVar4 = iVar4 + 1) {
          iVar3 = FUN_0040c600(*(uint *)(iVar2 + 0x150ff0 + 0x01E82168),_DAT_01cd0d94);
          if (((iVar3 != 0) && (iVar3 != param_1)) && (iVar1 == *(int *)(iVar3 + 0xc2c8)))
          goto LAB_004de19f;
          iVar2 = iVar2 + 4;
        }
        if (local_20 != 0) {
          iVar2 = (**(code **)(*(int *)(iVar1 + 0x154) + 0xc4))(iVar1);
          if (iVar2 == 0) {
            iVar2 = FUN_005351f0(iVar1 + 0x20);
          }
          if (iVar2 == 0) {
            _DAT_01d1d400 = "..\\core\\ghoul.cpp";
            _DAT_01d1d404 = 0x12d;
            FUN_005030e0("CGhoul::findDarkWayPoint - Can't get temp path map");
          }
          uStack_30 = 0;
          uStack_2c = 0;
          uStack_28 = 0;
          iVar2 = FUN_005349a0(iVar2,local_24,&uStack_30,*(uint *)(param_1 + 0x6c));
          if (0 < iVar2) {
            *(int *)(param_1 + 0xc2c8) = iVar1;
          }
        }
      }
LAB_004de19f:
      local_1c = local_1c + 4;
    }
  }
  return;
}
