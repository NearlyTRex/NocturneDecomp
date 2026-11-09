// Name: engine_mini3d.cpp_FUN_004f8610
// Address: 004f8610
// Address Range: [[004f8610, 004f874a]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f8610(float *param_1,uint param_2,int param_3,int *param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f8610(float *param_1,uint param_2,int param_3,int *param_4)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  int iStack_18;
  
  bVar8 = 0;
  *param_4 = 0;
  iStack_18 = 0;
  pfVar4 = param_1;
  if (0 < (int)param_2) {
    do {
      uVar2 = iStack_18 + 1;
      if (uVar2 == param_2) {
        uVar2 = uVar2 ^ param_2;
      }
      pfVar5 = param_1 + uVar2 * 9;
      bVar1 = 0.0 < _DAT_01d0d2c4 * pfVar4[2] + _DAT_01d0d2bc * *pfVar4 + _DAT_01d0d2c0 * pfVar4[1]
                    + _DAT_01d0d2c8;
      if (0.0 < _DAT_01d0d2c4 * pfVar5[2] + _DAT_01d0d2bc * *pfVar5 + _DAT_01d0d2c0 * pfVar5[1] +
                _DAT_01d0d2c8) {
        bVar1 = bVar1 | 2;
      }
      switch(bVar1) {
      case 0:
        pfVar5 = pfVar4;
        pfVar6 = (float *)(*param_4 * 0x24 + param_3);
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar6 = *pfVar5;
          pfVar5 = pfVar5 + (uint)bVar8 * -2 + 1;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
        }
        *param_4 = *param_4 + 1;
        break;
      case 1:
        engine_mini3d_cpp_FUN_004f84d0(pfVar5,pfVar4,*param_4 * 0x24 + param_3);
        *param_4 = *param_4 + 1;
        break;
      case 2:
        pfVar6 = pfVar4;
        pfVar7 = (float *)(*param_4 * 0x24 + param_3);
        for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
          *pfVar7 = *pfVar6;
          pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
          pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
        }
        iVar3 = *param_4;
        *param_4 = iVar3 + 1;
        engine_mini3d_cpp_FUN_004f84d0(pfVar4,pfVar5,(iVar3 + 1) * 0x24 + param_3);
        *param_4 = *param_4 + 1;
      }
      iStack_18 = iStack_18 + 1;
      pfVar4 = pfVar4 + 9;
    } while (iStack_18 < (int)param_2);
  }
  return;
}
