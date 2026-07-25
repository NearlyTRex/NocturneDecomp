// Name: FUN_0041a910
// Address: 0041a910
// Address Range: [[0041a910, 0041aa97]]
// Convention: unknown
// Signature: void FUN_0041a910(int param_1,undefined4 param_2,undefined4 param_3,int param_4,float *param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0041a910(int param_1,uint param_2,uint param_3,int param_4,float *param_5,uint param_6)

{
  int iVar1;
  float *pfVar2;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (8 < param_4) {
    _DAT_01cc4800 = "..\\core\\box.cpp";
    _DAT_01cc4804 = 0x80;
    FUN_004c8440("CBox::setupN - Too many scrape points");
  }
  local_18 = 999.0;
  local_14 = 999.0;
  local_28 = -999.0;
  local_24 = -999.0;
  local_20 = -999.0;
  local_1c = 999.0;
  iVar1 = 0;
  pfVar2 = param_5;
  if (0 < param_4) {
    do {
      if (*pfVar2 < local_1c) {
        local_1c = *pfVar2;
      }
      if (pfVar2[1] < local_18) {
        local_18 = pfVar2[1];
      }
      if (pfVar2[2] < local_14) {
        local_14 = pfVar2[2];
      }
      if (local_28 < *pfVar2) {
        local_28 = *pfVar2;
      }
      if (local_24 < pfVar2[1]) {
        local_24 = pfVar2[1];
      }
      if (local_20 < pfVar2[2]) {
        local_20 = pfVar2[2];
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 3;
    } while (iVar1 < param_4);
  }
  local_34 = local_28 - local_1c;
  local_30 = local_24 - local_18;
  local_2c = local_20 - local_14;
  if ((float *)(param_1 + 0xa4) != &local_34) {
    *(float *)(param_1 + 0xa4) = local_34;
    *(float *)(param_1 + 0xa8) = local_30;
    *(float *)(param_1 + 0xac) = local_2c;
  }
  iVar1 = 0;
  *(int *)(param_1 + 0xb0) = param_4;
  if (0 < param_4) {
    pfVar2 = (float *)(param_1 + 0xb4);
    do {
      if (pfVar2 != param_5) {
        *pfVar2 = *param_5;
        pfVar2[1] = param_5[1];
        pfVar2[2] = param_5[2];
      }
      pfVar2 = pfVar2 + 0xd;
      iVar1 = iVar1 + 1;
      param_5 = param_5 + 3;
    } while (iVar1 < param_4);
  }
  core_box_cpp_CBox_updateTransform_FUN_0041aaa0(param_1,param_2,param_3,param_6);
  return;
}
