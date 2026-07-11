// Name: FUN_004196b0
// Address: 004196b0
// Address Range: [[004196b0, 00419be0]]
// Convention: unknown
// Signature: undefined4 FUN_004196b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004196b0(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  float *pfVar5;
  int iVar6;
  int aiStack_d4 [10];
  byte auStack_ac [24];
  byte auStack_94 [8];
  float fStack_8c;
  byte auStack_88 [12];
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  byte auStack_70 [8];
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  byte auStack_58 [12];
  byte auStack_4c [12];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  uint uStack_30;
  int local_2c;
  int local_24;
  int local_20;
  uint local_18;
  
  fVar1 = *(float *)(param_1 + 0xbd28) - param_2;
  *(float *)(param_1 + 0xbd28) = fVar1;
  if (0.0 < fVar1) {
    *(int *)(param_1 + 0xbd24) = *(int *)(param_1 + 0xbd24) + 1;
    local_18 = FUN_0040dda0(0x40a00000,0x41200000);
    *(uint *)(param_1 + 0xbd28) = local_18;
  }
  if (*(int *)(param_1 + 0x24f0) == 0) {
    if (*(float *)(param_1 + 0xbd2c) <= 0.0) {
      iVar6 = *(int *)(param_1 + 0xbd30);
      if (iVar6 != 0) {
        iVar6 = (**(code **)(*(int *)(iVar6 + 0x14c) + 0x8c))(iVar6);
        if (iVar6 != 0) {
          FUN_0043ac60(PTR_DAT_005ad350,"?%s can't pick up %s, sombody else beat me to it!\n" + 1,param_1,
                       *(uint *)(param_1 + 0xbd30));
          *(uint *)(param_1 + 0xbd30) = 0;
          *(uint *)(param_1 + 0xbd2c) = 0;
          FUN_004e16b0(param_1 + 0x150,1,1);
          return 0;
        }
        iVar6 = -1;
        if (*(float *)(param_1 + 0xbd2c) < 0.0) {
          iVar3 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbd30) + 0x14c) + 0x7c))
                            (*(int *)(param_1 + 0xbd30),param_1);
          if (iVar3 == 3) {
            iVar6 = *(int *)(param_1 + 0xbd30);
            (**(code **)(*(int *)(iVar6 + 0x14c) + 0x14))(iVar6,auStack_94);
            uStack_30 = 0x3f000000;
            uVar4 = FUN_00417fc0(auStack_94,auStack_4c,auStack_88,auStack_70,&uStack_30);
            FUN_00417f60(uVar4);
            fStack_68 = fStack_8c + (float)_DAT_0057942e;
            FUN_0040a240(iVar6,auStack_58,auStack_70);
            uStack_78 = 0;
            uStack_74 = 0;
            uStack_7c = 0x3fc00000;
            iVar6 = FUN_004247f0(param_1,auStack_58,0,&uStack_7c,0,0);
          }
        }
        if (-1 < iVar6) {
          if (iVar6 < 1) {
            return 1;
          }
          FUN_0043ac60(PTR_DAT_005ad350,"%s beginning to pickup %s\n",param_1,
                       *(uint *)(param_1 + 0xbd30));
          FUN_004e16b0(param_1 + 0x150,7,1);
          return 1;
        }
        FUN_0043ac60(PTR_DAT_005ad350,"%s can't pick up %s, giving up!!!!\n",param_1,
                     *(uint *)(param_1 + 0xbd30));
        *(uint *)(param_1 + 0xbd30) = 0;
        *(uint *)(param_1 + 0xbd2c) = 0x41a00000;
        FUN_004e16b0(param_1 + 0x150,1,1);
        return 0;
      }
      iVar6 = 0;
      local_2c = 0;
      local_20 = 0;
      for (local_24 = 0; local_24 < *(int *)(0x01E57284 + 0x14cd6c); local_24 = local_24 + 1) {
        iVar3 = *(int *)(0x01E57284 + local_20 + 0x14cd70);
        iVar2 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x8c))(iVar3);
        if (iVar2 == 0) {
          iVar2 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x7c))(iVar3,param_1);
          if (iVar2 == 3) {
            pfVar5 = (float *)(**(code **)(*(int *)(iVar3 + 0x14c) + 0x14))(iVar3,auStack_ac);
            fStack_64 = pfVar5[3] - *pfVar5;
            fStack_60 = pfVar5[4] - pfVar5[1];
            fStack_5c = pfVar5[5] - pfVar5[2];
            if ((((fStack_64 < 1.0) && (fStack_60 < 1.0)) && ((float)_DAT_00579436 < fStack_5c)) &&
               ((double)fStack_5c < _DAT_0057943e)) {
              iVar2 = FUN_0040d7e0(iVar3,"CBodyPart");
              if (iVar2 == 0) {
                fStack_40 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
                fStack_3c = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
                fStack_3c = fStack_3c * fStack_3c;
                fStack_38 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
                fStack_3c = fStack_3c * fStack_3c;
                fVar1 = SQRT(fStack_38 * fStack_38 + fStack_40 * fStack_40 + fStack_3c * fStack_3c);
                if (((float)_DAT_00579426 <= fVar1) && ((int)fVar1 < 0x41700001)) {
                  *(int *)((int)aiStack_d4 + iVar6) = iVar3;
                  local_2c = local_2c + 1;
                  iVar6 = iVar6 + 4;
                  if (0x27 < iVar6) break;
                }
              }
            }
          }
        }
        local_20 = local_20 + 4;
      }
      if (0 < local_2c) {
        iVar6 = FUN_0040de00(0,local_2c + -1);
        iVar6 = aiStack_d4[iVar6];
        *(uint *)(param_1 + 0xbd2c) = 0xc2200000;
        *(int *)(param_1 + 0xbd30) = iVar6;
        *(int *)(param_1 + 0xbd24) = *(int *)(param_1 + 0xbd24) + 1;
        FUN_0043ac60(PTR_DAT_005ad350,"%s is going to try to pick up %s\n",param_1,
                     *(uint *)(param_1 + 0xbd30));
        return 1;
      }
    }
    else {
      param_2 = *(float *)(param_1 + 0xbd2c) - param_2;
      *(float *)(param_1 + 0xbd2c) = param_2;
      if (param_2 < 0.0) {
        *(uint *)(param_1 + 0xbd2c) = 0;
      }
    }
  }
  return 0;
}
