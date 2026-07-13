// Name: FUN_00462a60
// Address: 00462a60
// Address Range: [[00462a60, 004630da]]
// Convention: unknown
// Signature: void FUN_00462a60(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00462a60(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte *puVar10;
  byte local_dc [4];
  float local_d8;
  int local_a8;
  int local_a4;
  byte local_a0 [12];
  byte local_94 [24];
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  float local_40;
  float local_3c;
  float local_38;
  float local_20;
  int local_1c;
  uint local_18;
  float local_14;
  
  iVar5 = FUN_004259f0(param_1,param_2);
  if (iVar5 == 0) {
    FUN_00527230(*(uint *)(param_1 + 0xbd34));
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_20 = param_2 * *(float *)(param_1 + 0xbc8c);
  iVar5 = param_1 + 0x150;
  while (0.0 < local_20) {
    uVar8 = FUN_004e11c0(iVar5,&local_20);
    FUN_0042add0(param_1,uVar8);
  }
  fVar4 = (float)_DAT_0057df14;
  fVar3 = (float)_DAT_0057df1c;
  fVar2 = (float)_DAT_0057df0c;
  *(float *)(param_1 + 0x242c) = *(float *)(param_1 + 0x23ac) * fVar2;
  *(float *)(param_1 + 0x2430) = param_2 * fVar4 * *(float *)(param_1 + 0xbc8c) * fVar3 * fVar2;
  iVar6 = FUN_004e1660(iVar5);
  iVar6 = *(int *)(iVar6 + 0x24);
  local_1c = iVar6;
  iVar7 = FUN_00428c00(param_1,param_2);
  if (iVar7 == 0) {
    switch(iVar6) {
    case 0:
      iVar6 = FUN_0047a030(param_1,param_2);
      if (iVar6 == 0) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
        if (*(int *)(param_1 + 0xbca4) != 0) {
          FUN_004e16b0(iVar5,1,1);
        }
      }
      else {
        FUN_004e16b0(iVar5,1,1);
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      uVar8 = 0x40400000;
      if (*(int *)(param_1 + 0xbca4) == 0) {
        iVar6 = FUN_0047a030(param_1,param_2);
        if (iVar6 == 0) {
          FUN_004e16b0(iVar5,0,1);
        }
      }
      else {
        local_18 = 0x40400000;
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        local_64 = 0;
        local_5c = uVar8;
        local_60 = 0;
        uVar8 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                          (*(int *)(param_1 + 0xbca4),&local_64,0x3f000000,0x3e32b8c2);
        iVar6 = FUN_004247f0(param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar8);
        if (iVar6 < 0) {
          FUN_0043ac60(PTR_DAT_005ad350,"%s gave up chase - I'm confused\n",param_1);
          FUN_004e16b0(iVar5,0,1);
        }
        else if ((0 < iVar6) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
          FUN_004e16b0(iVar5,2,1);
          *(uint *)(param_1 + 0xbca0) = 0x3f800000;
          iVar5 = FUN_00526c50(*(uint *)(param_1 + 0xbd38));
          if (iVar5 == 0) {
            uVar8 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                              (param_1,"drone-attack?.wav");
            *(uint *)(param_1 + 0xbd38) = uVar8;
          }
        }
      }
      break;
    case 2:
      FUN_00423ed0(local_dc);
      local_d8 = (float)FUN_0040dda0(0x41200000,0x41700000);
      local_a8 = param_1;
      local_a4 = param_1;
      puVar10 = local_dc;
      uVar9 = 0x3ecccccd;
      local_14 = local_d8;
      FUN_0055a8b0();
      uVar8 = FUN_0040a240();
      FUN_004798e0(param_1,uVar8,uVar9,puVar10);
      local_d8 = (float)FUN_0040dda0(0x41200000,0x41700000);
      local_a8 = param_1;
      local_a4 = param_1;
      puVar10 = local_dc;
      uVar9 = 0x3ecccccd;
      local_14 = local_d8;
      FUN_0055a8b0();
      uVar8 = FUN_0040a240();
      FUN_004798e0(param_1,uVar8,uVar9,puVar10);
      break;
    case 8:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar8 = FUN_0051d2a0(iVar5,local_a0,0);
        FUN_0040a240(param_1,local_94,uVar8);
        FUN_004b0480(0x01C78C7C,local_94,1);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
      break;
    case 9:
      if (*(int *)(param_1 + 0x2408) != 0) {
        FUN_004e16b0(iVar5,10,1);
      }
    }
    goto switchD_00463074_caseD_3;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00462b41:
      uVar8 = 1;
    }
    else {
LAB_00462d6a:
      uVar8 = 0;
    }
    FUN_004e16b0(param_1 + 0x150,uVar8,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00462b41;
    if (uVar1 != 3) goto LAB_00462d6a;
    FUN_004e16b0(iVar5,0,1);
    FUN_0043ac60(PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_00463074_caseD_3:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  if ((local_1c == 1) &&
     (iVar5 = FUN_00527880((double)*(float *)(param_1 + 0x20),(double)*(float *)(param_1 + 0x24),
                           (double)*(float *)(param_1 + 0x28),0,0x40490000), iVar5 != 0)) {
    iVar5 = FUN_00526c50(*(uint *)(param_1 + 0xbd34));
    if (iVar5 == 0) {
      FUN_00526340();
      local_14 = (float)FUN_0040dda0(0,0x3f800000,2);
      FUN_005262d0((double)local_14);
      uVar8 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x28))(param_1,"slime.wav");
      *(uint *)(param_1 + 0xbd34) = uVar8;
      FUN_005263c0();
    }
  }
  else {
    FUN_00527230(*(uint *)(param_1 + 0xbd34));
  }
  iVar5 = FUN_00425960(param_1);
  if (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0xbca4);
    if ((iVar5 != 0) &&
       (iVar5 = (**(code **)(*(int *)(iVar5 + 0x14c) + 0xec))(iVar5), iVar5 == param_1)) {
      FUN_00511780(0x01E57284,*(uint *)(param_1 + 0xbca4));
    }
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)_DAT_0057df24;
    local_7c = *(float *)(param_1 + 0x2420) * param_2;
    local_78 = *(float *)(param_1 + 0x2424) * param_2;
    local_74 = param_2 * *(float *)(param_1 + 0x2428);
    local_70 = local_7c + *(float *)(param_1 + 0x2414);
    local_6c = local_78 + *(float *)(param_1 + 0x2418);
    local_68 = local_74 + *(float *)(param_1 + 0x241c);
    local_40 = local_70 + *(float *)(param_1 + 0x23a4);
    local_3c = local_6c + *(float *)(param_1 + 0x23a8);
    local_38 = local_68 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(float *)(param_1 + 0x23a8) = *(float *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23ac);
    FUN_00425050(param_1,&local_40);
  }
  FUN_004259a0(param_1);
  FUN_0051b8a0(param_1 + 0x150);
  FUN_0042a150(param_1,param_2);
  return;
}
