// Name: FUN_0057bda0
// Address: 0057bda0
// Address Range: [[0057bda0, 0057c2bb]]
// Convention: unknown
// Signature: void FUN_0057bda0(int *param_1)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0057bda0(int *param_1)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  float *pfVar4;
  int iVar5;
  byte bVar6;
  float afStackY_103c [1014];
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  uint local_48;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  float local_20;
  float *local_1c;
  float *local_18;
  float local_14;
  
  bVar6 = 0;
  local_30 = *(float *)(0x01D2130C + 0x314);
  local_20 = local_30;
  if (param_1[9] != 0) {
    fVar2 = (float)param_1[10];
    param_1[10] = (int)(fVar2 - local_30);
    if ((fVar2 - local_30 < 0.0) ||
       (iVar5 = FUN_00491aa0(0x01C6E360,"?noLightningFlash" + 1), iVar5 != 0)) {
      FUN_0044f680(0x2038f4c,param_1[0xc]);
      param_1[9] = 0;
      param_1[10] = 0;
    }
    else {
      local_14 = _DAT_0203a134;
      local_2c = (float)(int)_DAT_0203a134 * (float)_DAT_005d7933 - local_30;
      if (local_2c < (float)param_1[0xc]) {
        local_2c = (float)param_1[0xc];
        param_1[9] = 0;
        param_1[10] = 0;
      }
      FUN_0044f680(0x2038f4c,local_2c);
    }
  }
  if ((*param_1 != 1) && (*param_1 != 5)) {
    FUN_00556be0(_DAT_02d20258);
  }
  if (*param_1 != 0) {
    local_28 = 0;
    if (0 < param_1[0xe]) {
      local_24 = 0;
      iVar5 = 0;
      local_1c = (float *)&DAT_02d0c208;
      local_18 = (float *)&DAT_02d17d88;
      do {
        *(byte *)(local_28 + 0x2d1fa88) = 0;
        *(float *)(&DAT_02d0c20c + iVar5) =
             *(float *)(&DAT_02d0c20c + iVar5) - (float)param_1[1] * local_20;
        iVar1 = *param_1;
        if (((iVar1 == 2) || (iVar1 == 3)) || (iVar1 == 4)) {
          local_14 = (float)FUN_0040ce40(0xc0a00000,0x40a00000);
          *(float *)(&DAT_02d17d88 + iVar5) =
               local_14 * local_20 + *(float *)(&DAT_02d17d88 + iVar5);
          local_14 = (float)FUN_0040ce40(0xc0a00000,0x40a00000);
          pfVar4 = local_1c;
          *(float *)(&DAT_02d17d90 + iVar5) =
               local_14 * local_20 + *(float *)(&DAT_02d17d90 + iVar5);
          local_3c = *local_18 * local_20;
          local_38 = local_18[1] * local_20;
          local_34 = local_18[2] * local_20;
          local_54 = *local_18 * local_20;
          *(uint *)((int)&stack0xffffffb0 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffc8 + (uint)bVar6 * -8);
          *(uint *)((int)&stack0xffffffb4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               *(uint *)((int)&stack0xffffffcc + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          *pfVar4 = *pfVar4 + local_54;
          pfVar4[1] = pfVar4[1] + local_50;
          pfVar4[2] = pfVar4[2] + local_4c;
        }
        if (*(float *)(&DAT_02d0c20c + iVar5) < *(float *)(local_24 + 0x2d1db48)) {
          if (&DAT_02d0c208 + iVar5 != &DAT_02d11fc8 + iVar5) {
            *(uint *)(&DAT_02d0c208 + iVar5) = *(uint *)(&DAT_02d11fc8 + iVar5);
            *(uint *)(&DAT_02d0c20c + iVar5) = *(uint *)(&DAT_02d11fcc + iVar5);
            *(uint *)(&DAT_02d0c210 + iVar5) = *(uint *)(&DAT_02d11fd0 + iVar5);
          }
          if (local_18 != (float *)&DAT_02cfd900) {
            *local_18 = _DAT_02cfd900;
            local_18[1] = _DAT_02cfd904;
            local_18[2] = _DAT_02cfd908;
          }
          if ((*param_1 == 1) || (*param_1 == 5)) {
            fVar2 = *(float *)(local_24 + 0x2d1db48);
            local_48 = *(uint *)(&DAT_02d0c208 + iVar5);
            (&stack0xffffffbc)[(uint)bVar6 * 0xfffffffe] =
                 (float)*(uint *)(&DAT_02d0c20c + (uint)bVar6 * -8 + iVar5);
            *(uint *)(&stack0xffffffc0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
                 *(uint *)
                  ((int)(&DAT_02d0c20c + (uint)bVar6 * -8 + iVar5) + ((uint)bVar6 * -2 + 1) * 4);
            local_44 = fVar2;
            FUN_004a3f20(0x01C73654,&stack0xffffffb8,0);
            FUN_004a3f20(0x01C73654,&stack0xffffffb8,0);
            FUN_004a3f20(0x01C73654,&stack0xffffffb8,0);
            FUN_004a3f20(0x01C73654,&stack0xffffffb8,0);
          }
        }
        iVar5 = iVar5 + 0xc;
        local_1c = local_1c + 3;
        local_18 = local_18 + 3;
        local_24 = local_24 + 4;
        local_28 = local_28 + 1;
      } while (local_28 < param_1[0xe]);
    }
    if ((*param_1 != 1) && (*param_1 != 5)) {
      return;
    }
    fVar2 = (float)param_1[8];
    param_1[8] = (int)(fVar2 - local_20);
    if (0.0 <= fVar2 - local_20) {
      fVar2 = (float)param_1[0xb];
      param_1[0xb] = (int)(fVar2 - local_20);
      if (fVar2 - local_20 < 0.0) {
        local_14 = (float)FUN_0040ce40(0x3dcccccd,param_1[0xd]);
        uVar3 = 0x01C6E360;
        param_1[0xb] = (int)local_14;
        iVar5 = FUN_00491aa0(uVar3,"noLightningFlash");
        if (iVar5 == 0) {
          param_1[9] = 1;
          local_14 = _DAT_0203a134;
          local_58 = (float)(int)_DAT_0203a134 * (float)_DAT_005d7933;
          param_1[0xc] = (int)local_58;
          local_14 = (float)FUN_0040ce40(0x3dcccccd,0x3e99999a);
          local_58 = local_14 + local_58;
          if (1.0 < local_58) {
            local_58 = 1.0;
          }
          local_14 = (float)FUN_0040ce40(0x3c23d70a,local_58 * (float)_DAT_005d793b);
          param_1[10] = (int)local_14;
          FUN_0044f680(0x2038f4c,local_58);
        }
      }
    }
    else if ((*param_1 == 5) || (iVar5 = FUN_0040cf40(0x3ecccccd), iVar5 != 0)) {
      FUN_0057c2e0(param_1,0x3dcccccd,1);
    }
    else {
      FUN_0057c840(param_1);
    }
    iVar5 = FUN_00556700(_DAT_02d20258);
    if (iVar5 == 0) {
      if (*param_1 != 5) {
        _DAT_02d20258 = FUN_005609b0(0x02CF5680,param_1,"rain.wav @ .1");
        return;
      }
      _DAT_02d20258 = FUN_005609b0(0x02CF5680,param_1,"rain.wav @ .5");
    }
  }
  return;
}
