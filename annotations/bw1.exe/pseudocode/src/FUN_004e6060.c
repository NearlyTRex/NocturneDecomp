// Name: FUN_004e6060
// Address: 004e6060
// Address Range: [[004e6060, 004e628f]]
// Convention: unknown
// Signature: void FUN_004e6060(undefined4 param_1,undefined4 param_2,float *param_3,int param_4,int param_5)

#include "nocturne.h"

void FUN_004e6060(uint param_1,uint param_2,float *param_3,int param_4,int param_5)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float afStackY_1048 [1004];
  uint uVar6;
  uint uVar7;
  byte local_88 [8];
  float local_80;
  float local_74;
  float local_68;
  float local_60;
  float local_5c [4];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_18;
  
  bVar3 = 0;
  if (param_5 != 2) {
    if (param_3 == (float *)0x0) {
      iVar2 = 0;
      if (0 < param_4) {
        do {
          iVar2 = iVar2 + 1;
          FUN_004e5f40(param_1,param_2,0,param_5);
        } while (iVar2 < param_4);
      }
    }
    else {
      local_20 = SQRT(param_3[2] * param_3[2] + *param_3 * *param_3 + param_3[1] * param_3[1]);
      if (local_5c + 5 != param_3) {
        local_48 = *param_3;
        local_44 = param_3[1];
        local_40 = param_3[2];
      }
      local_24 = SQRT(local_40 * local_40 + local_48 * local_48 + local_44 * local_44);
      if (local_24 <= 0.0) {
        local_44 = 0.0;
        local_48 = 0.0;
        local_40 = 0.0;
      }
      else {
        fVar1 = 1.0 / local_24;
        local_48 = local_48 * fVar1;
        local_44 = local_44 * fVar1;
        local_40 = local_40 * fVar1;
      }
      FUN_005c1d69();
      fVar4 = SQRT((float10)local_48 * (float10)local_48 + (float10)local_40 * (float10)local_40);
      fVar5 = (float10)local_44;
      FUN_005c1d69();
      iVar2 = 0;
      local_38[1] = 0.0;
      local_38[0] = (float)fVar4;
      local_3c = (float)-fVar5;
      if (0 < param_4) {
        do {
          uVar7 = 0x3f490fdb;
          uVar6 = 0xbf490fdb;
          local_60 = local_3c;
          local_5c[(uint)bVar3 * -2] = local_38[(uint)bVar3 * -2];
          local_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
               local_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
          local_18 = (float)FUN_0040cc00(uVar6,uVar7);
          local_60 = local_18 + local_60;
          local_18 = (float)FUN_0040cc00(0xbf490fdb,0x3f490fdb);
          local_5c[0] = local_18 + local_5c[0];
          FUN_0045f3e0(local_88,&local_60);
          local_60 = local_80;
          local_5c[0] = local_74;
          local_5c[1] = local_68;
          FUN_0040cc00(0xbf000000,0x3f000000);
          local_5c[2] = local_60 * local_20;
          local_5c[3] = local_5c[0] * local_20;
          local_4c = local_5c[1] * local_20;
          local_38[2] = local_60 * local_20;
          local_38[(uint)bVar3 * -2 + 3] = local_5c[(uint)bVar3 * -2 + 3];
          local_38[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
               local_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
          if (&local_60 != local_38 + 2) {
            local_60 = local_38[2];
            local_5c[0] = local_38[3];
            local_5c[1] = local_28;
          }
          FUN_004e5f40(param_1,param_2,&local_60,param_5);
          iVar2 = iVar2 + 1;
        } while (iVar2 < param_4);
      }
    }
  }
  return;
}
