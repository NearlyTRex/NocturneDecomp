// Name: FUN_00456260
// Address: 00456260
// Address Range: [[00456260, 00456454]]
// Convention: unknown
// Signature: float * FUN_00456260(int param_1,float *param_2,float *param_3,undefined4 param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * FUN_00456260(int param_1,float *param_2,float *param_3,uint param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *pfVar6;
  byte local_68 [12];
  float local_5c;
  float local_58;
  float local_54;
  float local_50 [3];
  float local_44 [3];
  float local_38;
  float local_34;
  float local_30;
  byte local_2c [12];
  byte local_20 [16];
  
  local_5c = *param_3;
  local_58 = param_3[1];
  local_54 = param_3[2];
  if (local_54 < 0.0) {
    local_38 = -local_5c;
    local_34 = -local_58;
    local_30 = -local_54;
    if (&local_5c != &local_38) {
      local_5c = local_38;
      local_58 = local_34;
      local_54 = local_30;
    }
  }
  switch(*(uint *)(param_1 + 0x2d0)) {
  case 0:
  case 1:
  case 2:
    iVar5 = FUN_0040a290(param_1,local_2c,param_4);
    if (*(float *)(iVar5 + 8) <= 0.0) {
      pfVar6 = (float *)FUN_0040a200(param_1,local_20,&local_5c);
      fVar1 = *(float *)(param_1 + 0x9b8);
      fVar2 = pfVar6[1];
      fVar3 = *(float *)(param_1 + 0x9bc);
      fVar4 = pfVar6[2];
      if (param_2 != local_50) {
        *param_2 = *(float *)(param_1 + 0x9b4) - *pfVar6;
        param_2[1] = fVar1 - fVar2;
        param_2[2] = fVar3 - fVar4;
        param_2[1] = *(float *)(param_1 + 0x24);
        return param_2;
      }
    }
    else {
      pfVar6 = (float *)FUN_0040a200(param_1,local_68,&local_5c);
      fVar1 = *(float *)(param_1 + 0x9b8);
      fVar2 = pfVar6[1];
      fVar3 = *(float *)(param_1 + 0x9bc);
      fVar4 = pfVar6[2];
      if (param_2 != local_44) {
        *param_2 = *(float *)(param_1 + 0x9b4) + *pfVar6;
        param_2[1] = fVar1 + fVar2;
        param_2[2] = fVar3 + fVar4;
        param_2[1] = *(float *)(param_1 + 0x24);
        return param_2;
      }
    }
    break;
  case 3:
    if (param_2 != (float *)(param_1 + 0x9b4)) {
      *param_2 = *(float *)(param_1 + 0x9b4);
      param_2[1] = *(float *)(param_1 + 0x9b8);
      param_2[2] = *(float *)(param_1 + 0x9bc);
      param_2[1] = *(float *)(param_1 + 0x24);
      return param_2;
    }
    break;
  default:
    _DAT_01cc4800 = "..\\core\\door.cpp";
    _DAT_01cc4804 = 0x340;
    FUN_004c8440("CDoor::getOpenStandPos - invalid doorType");
    param_2[1] = *(float *)(param_1 + 0x24);
    return param_2;
  }
  param_2[1] = *(float *)(param_1 + 0x24);
  return param_2;
}
