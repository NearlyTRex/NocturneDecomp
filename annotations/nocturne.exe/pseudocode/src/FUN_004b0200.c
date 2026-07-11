// Name: FUN_004b0200
// Address: 004b0200
// Address Range: [[004b0200, 004b0424]]
// Convention: unknown
// Signature: void FUN_004b0200(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,int param_5)

#include "nocturne.h"

void FUN_004b0200(uint param_1,uint param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  byte local_74 [8];
  float local_6c;
  float local_60;
  float local_54;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  uint local_20;
  float local_1c;
  float local_18;
  
  if (param_5 != 2) {
    if (param_3 == (float *)0x0) {
      iVar2 = 0;
      if (0 < param_4) {
        do {
          iVar2 = iVar2 + 1;
          FUN_004b00f0(param_1,param_2,0,param_5);
        } while (iVar2 < param_4);
      }
    }
    else {
      local_1c = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
      if (&local_40 != param_3) {
        local_40 = *param_3;
        local_3c = param_3[1];
        local_38 = param_3[2];
      }
      fVar1 = SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c);
      if (fVar1 <= 0.0) {
        local_3c = 0.0;
        local_40 = 0.0;
        local_38 = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        local_40 = local_40 * fVar1;
        local_3c = local_3c * fVar1;
        local_38 = local_38 * fVar1;
      }
      FUN_00566c81();
      fVar3 = (float10)local_38;
      fVar4 = (float10)local_40;
      local_20 = 0;
      FUN_00566c81();
      iVar2 = 0;
      local_28 = (float)-fVar3;
      local_24 = (float)fVar4;
      if (0 < param_4) {
        do {
          local_34 = local_28;
          local_30 = local_24;
          local_2c = (float)local_20;
          local_18 = (float)FUN_0040dda0(0xbf490fdb,0x3f490fdb);
          local_34 = local_18 + local_34;
          local_18 = (float)FUN_0040dda0(0xbf490fdb,0x3f490fdb);
          local_30 = local_18 + local_30;
          FUN_0044d7a0(local_74,&local_34);
          local_34 = local_6c;
          local_30 = local_60;
          local_2c = local_54;
          FUN_0040dda0(0xbf000000,0x3f000000);
          local_4c = local_34 * local_1c;
          local_48 = local_30 * local_1c;
          local_44 = local_2c * local_1c;
          if (&local_34 != &local_4c) {
            local_34 = local_4c;
            local_30 = local_48;
            local_2c = local_44;
          }
          iVar2 = iVar2 + 1;
          FUN_004b00f0(param_1,param_2,&local_34,param_5);
        } while (iVar2 < param_4);
      }
    }
  }
  return;
}
