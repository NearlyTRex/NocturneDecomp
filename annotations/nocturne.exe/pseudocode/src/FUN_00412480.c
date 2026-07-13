// Name: FUN_00412480
// Address: 00412480
// Address Range: [[00412480, 00412d78]]
// Convention: unknown
// Signature: void FUN_00412480(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00412480(int param_1,float param_2)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  byte local_13c [4];
  float local_138;
  int local_108;
  int local_104;
  byte local_100 [12];
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  byte local_dc [4];
  float local_d8;
  byte local_d0 [4];
  float local_cc;
  float local_c4;
  float local_c0;
  float local_bc;
  byte local_b8 [4];
  float local_b4;
  byte local_ac [12];
  float local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  uint local_7c;
  uint local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  byte local_64 [4];
  float local_60;
  float local_58;
  float local_54;
  float local_50;
  byte local_4c [12];
  byte local_40 [20];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  iVar3 = FUN_004259f0(param_1,param_2);
  if (iVar3 == 0) {
    return;
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
  local_2c = param_2 * *(float *)(param_1 + 0xbc8c);
  while (0.0 < local_2c) {
    uVar6 = FUN_004e11c0(param_1 + 0x150,&local_2c);
    FUN_0042add0(param_1,uVar6);
  }
  fVar2 = (float)_DAT_00578a17;
  iVar3 = param_1 + 0x150;
  *(uint *)(param_1 + 0x242c) = *(uint *)(param_1 + 0x23ac);
  *(float *)(param_1 + 0x2430) = param_2 * fVar2 * *(float *)(param_1 + 0xbc8c);
  iVar4 = FUN_004e1660(iVar3);
  iVar4 = *(int *)(iVar4 + 0x24);
  iVar5 = FUN_00428c00(param_1,param_2);
  if (iVar5 == 0) {
    switch(iVar4) {
    case 0:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      iVar4 = *(int *)(param_1 + 0xbca4);
      if (iVar4 == 0) {
        iVar4 = FUN_0047a030(param_1,param_2);
        if (iVar4 != 0) {
          FUN_004e16b0(iVar3,1,1);
        }
        break;
      }
      local_f4 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
      local_f0 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
      local_ec = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
      local_28 = SQRT(local_ec * local_ec + local_f4 * local_f4 + local_f0 * local_f0);
      local_1c = local_28;
      if (local_28 < 0x40600000) {
        FUN_0054e4a0(local_b8,&local_f4);
        local_14 = (float)FUN_0040df00(local_b4 - *(float *)(param_1 + 0x34));
        if (ABS(local_14) < (float)_DAT_00578a1f) {
          FUN_004e16b0(iVar3,3,1);
          iVar3 = FUN_00526c50(*(uint *)(param_1 + 0xbd60));
          if ((iVar3 == 0) && (iVar3 = FUN_00526c50(*(uint *)(param_1 + 0xbd64)), iVar3 == 0))
          {
            uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                              (param_1,"batman-attack?.wav");
            *(uint *)(param_1 + 0xbd64) = uVar6;
          }
        }
      }
      if (*(float *)(param_1 + 0xbc9c) <= local_1c) break;
      if (local_1c < _DAT_00599fb8) {
        uVar6 = 1;
        *(uint *)(param_1 + 0xbca0) = 0;
      }
      else {
        *(uint *)(param_1 + 0xbca0) = 0;
        iVar3 = FUN_0040dea0(0x3dcccccd);
        if (iVar3 != 0) {
          iVar3 = *(int *)(param_1 + 0xbca4);
          local_e8 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
          local_e4 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
          local_e0 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
          FUN_0054e4a0(local_64,&local_e8);
          local_14 = (float)FUN_0040df00(local_60 - *(float *)(param_1 + 0x34));
          if ((ABS(local_14) < (float)_DAT_00578a1f) &&
             (ABS(*(float *)(*(int *)(param_1 + 0xbca4) + 0x24) - *(float *)(param_1 + 0x24)) <
              (float)_DAT_00578a27)) {
            uVar6 = 2;
            goto LAB_0041290b;
          }
        }
        uVar6 = 1;
      }
LAB_0041290b:
      FUN_004e16b0(param_1 + 0x150,uVar6,1);
      if ((((*(int *)(param_1 + 0xbd68) == 0) &&
           (iVar3 = FUN_00526c50(*(uint *)(param_1 + 0xbd60)), iVar3 == 0)) &&
          (iVar3 = FUN_00526c50(*(uint *)(param_1 + 0xbd64)), iVar3 == 0)) &&
         (iVar3 = FUN_00526c50(*(uint *)(param_1 + 0xbd5c)), iVar3 == 0)) {
        uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"batman-alert.wav")
        ;
        *(uint *)(param_1 + 0xbd68) = 1;
        *(uint *)(param_1 + 0xbd5c) = uVar6;
      }
      break;
    case 1:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x13c))(param_1,param_2);
      fVar2 = 0x40600000;
      if (*(int *)(param_1 + 0xbca4) == 0) {
        iVar4 = FUN_0047a030(param_1,param_2);
        if (iVar4 == 0) {
          FUN_004e16b0(iVar3,0,1);
        }
        else {
          FUN_004e16b0(iVar3,1,1);
        }
      }
      else {
        local_24 = 0x40600000;
        *(uint *)(param_1 + 0x23ac) = 0;
        *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
        *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
        local_7c = 0;
        local_74 = fVar2;
        local_78 = 0;
        uVar6 = (**(code **)(*(int *)(*(int *)(param_1 + 0xbca4) + 0x14c) + 0xbc))
                          (*(int *)(param_1 + 0xbca4),&local_7c,0x3f000000,0x3e32b8c2);
        iVar5 = FUN_004247f0(param_1,*(int *)(param_1 + 0xbca4) + 0x20,uVar6);
        if (-1 < iVar5) {
          local_a0 = *(float *)(param_1 + 0x20) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x20);
          local_98 = *(float *)(param_1 + 0x28) - *(float *)(*(int *)(param_1 + 0xbca4) + 0x28);
          local_9c = 0;
          local_20 = SQRT(local_98 * local_98 + local_a0 * local_a0);
          local_18 = local_20;
          if ((_DAT_00599fb8 < local_20) && (*(uint *)(param_1 + 0xbca0) = 0, iVar4 == 1)) {
            iVar4 = *(int *)(param_1 + 0xbca4);
            local_94 = *(float *)(iVar4 + 0x20) - *(float *)(param_1 + 0x20);
            local_90 = *(float *)(iVar4 + 0x24) - *(float *)(param_1 + 0x24);
            local_8c = *(float *)(iVar4 + 0x28) - *(float *)(param_1 + 0x28);
            FUN_0054e4a0(local_dc,&local_94);
            local_14 = (float)FUN_0040df00(local_d8 - *(float *)(param_1 + 0x34));
            if ((ABS(local_14) < (float)_DAT_00578a1f) &&
               (ABS(*(float *)(*(int *)(param_1 + 0xbca4) + 0x24) - *(float *)(param_1 + 0x24)) <
                (float)_DAT_00578a27)) {
              FUN_004e16b0(iVar3,2,1);
              *(uint *)(param_1 + 0xbca0) = 0;
              iVar3 = FUN_00526c50(*(uint *)(param_1 + 0xbd60));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_00526c50(*(uint *)(param_1 + 0xbd64)), iVar3 == 0)) {
                uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                  (param_1,"batman-attack?.wav");
                *(uint *)(param_1 + 0xbd64) = uVar6;
              }
            }
          }
          if ((local_20 <= local_24) && (*(float *)(param_1 + 0xbca0) <= 0.0)) {
            iVar3 = *(int *)(param_1 + 0xbca4);
            local_88 = *(float *)(iVar3 + 0x20) - *(float *)(param_1 + 0x20);
            local_84 = *(float *)(iVar3 + 0x24) - *(float *)(param_1 + 0x24);
            local_80 = *(float *)(iVar3 + 0x28) - *(float *)(param_1 + 0x28);
            FUN_0054e4a0(local_d0,&local_88);
            local_14 = (float)FUN_0040df00(local_cc - *(float *)(param_1 + 0x34));
            if (ABS(local_14) < (float)_DAT_00578a1f) {
              FUN_004e16b0(param_1 + 0x150,3,1);
              *(uint *)(param_1 + 0xbca0) = 0x3f800000;
              iVar3 = FUN_00526c50(*(uint *)(param_1 + 0xbd60));
              if ((iVar3 == 0) &&
                 (iVar3 = FUN_00526c50(*(uint *)(param_1 + 0xbd64)), iVar3 == 0)) {
                uVar6 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))
                                  (param_1,"batman-attack?.wav");
                *(uint *)(param_1 + 0xbd64) = uVar6;
              }
            }
          }
          if (*(float *)(param_1 + 0xbc9c) < local_20) {
            FUN_004e16b0(param_1 + 0x150,0,1);
          }
        }
      }
      break;
    case 3:
      FUN_00423ed0(local_13c);
      local_138 = (float)FUN_0040dda0(0x40e00000,0x41700000);
      local_108 = param_1;
      local_104 = param_1;
      local_14 = local_138;
      uVar6 = FUN_0055a8b0(local_ac,&DAT_02dd1184,DAT_007645a4 * 0x30 + param_1 + 0xfd0,0x3ecccccd,
                           local_13c);
      uVar6 = FUN_0040a240(param_1,local_40,uVar6);
      FUN_004798e0(param_1,uVar6);
      break;
    case 8:
      if ((*(int *)(param_1 + 0xbc90) == 0) && (*(int *)(param_1 + 0xdc) == 0)) {
        uVar6 = FUN_0051d2a0(iVar3,local_4c,0);
        FUN_0040a240(param_1,local_100,uVar6);
        FUN_004b0480(0x01C78C7C,local_100,0);
        *(uint *)(param_1 + 0xbc90) = 1;
      }
    }
    goto switchD_00412d72_caseD_2;
  }
  uVar1 = *(uint *)(param_1 + 0x25a8);
  if (uVar1 < 2) {
    if (uVar1 == 1) {
LAB_00412550:
      uVar6 = 1;
    }
    else {
LAB_004126e6:
      uVar6 = 0;
    }
    FUN_004e16b0(param_1 + 0x150,uVar6,1);
  }
  else {
    if (uVar1 < 3) goto LAB_00412550;
    if (uVar1 != 3) goto LAB_004126e6;
    FUN_004e16b0(param_1 + 0x150,0,1);
    FUN_0043ac60(PTR_DAT_005ad350,"%s confused while walking to scriptDest!\n",param_1);
  }
  *(uint *)(param_1 + 0x23ac) = 0;
  *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
  *(uint *)(param_1 + 0x23a4) = *(uint *)(param_1 + 0x23a8);
switchD_00412d72_caseD_2:
  if (0.0 < *(float *)(param_1 + 0xbca0)) {
    *(float *)(param_1 + 0xbca0) = *(float *)(param_1 + 0xbca0) - param_2;
  }
  iVar3 = FUN_00425960(param_1);
  if (iVar3 != 0) {
    *(float *)(param_1 + 0x2424) = *(float *)(param_1 + 0x2424) - param_2 * (float)_DAT_00578a2f;
    local_c4 = *(float *)(param_1 + 0x2420) * param_2;
    local_c0 = *(float *)(param_1 + 0x2424) * param_2;
    local_bc = param_2 * *(float *)(param_1 + 0x2428);
    local_58 = local_c4 + *(float *)(param_1 + 0x2414);
    local_54 = local_c0 + *(float *)(param_1 + 0x2418);
    local_50 = local_bc + *(float *)(param_1 + 0x241c);
    local_70 = local_58 + *(float *)(param_1 + 0x23a4);
    local_6c = local_54 + *(float *)(param_1 + 0x23a8);
    local_68 = local_50 + *(float *)(param_1 + 0x23ac);
    *(uint *)(param_1 + 0x241c) = 0;
    *(uint *)(param_1 + 0x2418) = *(uint *)(param_1 + 0x241c);
    *(float *)(param_1 + 0x2414) = *(float *)(param_1 + 0x2418);
    *(uint *)(param_1 + 0x23ac) = 0;
    *(uint *)(param_1 + 0x23a8) = *(uint *)(param_1 + 0x23ac);
    *(float *)(param_1 + 0x23a4) = *(float *)(param_1 + 0x23a8);
    FUN_00425050(param_1,&local_70);
  }
  FUN_004259a0(param_1);
  FUN_0051b8a0(param_1 + 0x150);
  FUN_0042a150(param_1,param_2);
  return;
}
