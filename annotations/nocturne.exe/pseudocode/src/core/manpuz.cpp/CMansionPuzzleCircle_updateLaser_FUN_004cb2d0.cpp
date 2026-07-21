// Name: core_manpuz.cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0
// Address: 004cb2d0
// Address Range: [[004cb2d0, 004cb595]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0(int param_1,int param_2,float param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_updateLaser_FUN_004cb2d0(int param_1,int param_2,float param_3)

{
  int *piVar1;
  float *pfVar2;
  int *piVar3;
  int iVar4;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  uint local_d8;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  byte local_6c [12];
  uint local_60;
  float local_5c;
  float local_58;
  byte local_54 [12];
  float local_48;
  float local_44;
  float local_40;
  byte local_3c [12];
  byte local_30 [12];
  double local_24;
  int *local_1c;
  int local_18;
  int local_14;
  
  local_18 = param_1 + 0x5e8;
  piVar1 = (int *)(local_18 + param_2 * 100);
  local_14 = 0;
  if (*piVar1 == 0) {
    local_14 = 1;
    iVar4 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(param_1,param_2);
    piVar3 = (int *)(iVar4 * 100 + local_18);
    if ((*piVar3 == 0) || ((float)piVar3[2] <= 0.0)) goto LAB_004cb317;
  }
  else {
LAB_004cb317:
    if (local_14 != 0) {
      param_3 = *(float *)(param_1 + 0x1488 + param_2 * 4) + param_3;
      goto LAB_004cb32e;
    }
  }
  param_3 = *(float *)(param_1 + 0x1488 + param_2 * 4) - param_3;
LAB_004cb32e:
  *(float *)(param_1 + 0x1488 + param_2 * 4) = param_3;
  iVar4 = param_2 * 4 + param_1;
  local_24 = (double)*(float *)(iVar4 + 0x1488);
  if (0.0 < local_24) {
    if (1.0 < local_24) {
      *(uint *)(iVar4 + 0x1488) = 0x3f800000;
    }
    local_1c = piVar1 + 9;
    pfVar2 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                                (local_1c,local_6c,param_1 + 0x5dc);
    local_48 = (float)piVar1[3] + *pfVar2;
    local_44 = (float)piVar1[4] + pfVar2[1];
    local_40 = (float)piVar1[5] + pfVar2[2];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,local_3c,&local_48);
    local_60 = 0;
    local_5c = (*(float *)(param_1 + 0x5c8) - *(float *)(param_1 + 0x5e0)) * _DAT_0058802e;
    local_58 = -(*(float *)(param_1 + 0x1504) * _DAT_0058802a + *(float *)(param_1 + 0x5e4) +
                *(float *)(param_1 + 0x5cc)) * _DAT_0058802e;
    core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(local_1c,local_30,&local_60);
    core_actor_cpp_CDemonActor_transformVector_FUN_0040a200(param_1,local_54,local_30);
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    core_fire_cpp_SLaserInfo_ctor_FUN_0048b6b0(&local_114);
    local_110 = 0x3da3d70a;
    local_10c = 2;
    local_108 = *(uint *)(param_1 + 0x13f8 + param_2 * 4);
    local_104 = *(uint *)(param_1 + 0x1428 + param_2 * 4);
    local_100 = *(uint *)(param_1 + 0x1458 + param_2 * 4);
    local_114 = *(uint *)(param_1 + 0x1488 + param_2 * 4);
    local_fc = 0;
    local_f8 = 0;
    local_bc = 0x3da3d70a;
    local_b8 = 2;
    local_a4 = 0;
    local_a0 = local_f4;
    local_a8 = 0;
    local_9c = local_f0;
    local_98 = local_ec;
    local_94 = local_e8;
    local_90 = local_e4;
    local_8c = local_e0;
    local_88 = local_dc;
    local_84 = local_d8;
    local_80 = local_d4;
    local_7c = local_d0;
    local_78 = local_cc;
    local_74 = local_c8;
    local_70 = local_c4;
    local_c0 = local_114;
    local_b4 = local_108;
    local_b0 = local_104;
    local_ac = local_100;
    FUN_0048b6f0(0x01C08D04,local_3c,local_54,&local_c0,0);
    core_setcolid_cpp_CDemonSet_init_FUN_00511750(0x01E57284);
    return;
  }
  *(uint *)(iVar4 + 0x1488) = 0;
  return;
}
