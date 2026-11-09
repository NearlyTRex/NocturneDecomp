// Name: core_gabriela.cpp_FUN_004b20d0
// Address: 004b20d0
// Address Range: [[004b20d0, 004b22b6]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004b20d0(int param_1,float param_2,float *param_3,undefined4 param_4,undefined4 param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004b20d0(int param_1,float param_2,float *param_3,uint param_4,uint param_5,uint param_6)

{
  CDeformableModelInstance *pCVar1;
  int iVar2;
  int iVar3;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  float local_1b78;
  SPose local_1b74 [2836];
  float afStack_1060 [1018];
  CVector3f local_78;
  uint local_6c;
  uint auStack_68 [5];
  CVector3f local_54;
  CVector3f local_48;
  uint local_3c;
  float afStack_38 [2];
  CVector3f local_30;
  uint local_24;
  float local_20 [3];
  CDeformableModelInstance *local_14;
  
  bVar6 = 0;
  core_skeleton_cpp_FUN_00548620((CDeformableModelInstance *)(param_1 + 0x2b4),local_1b74);
  core_skeleton_cpp_FUN_005469a0((CDeformableModelInstance *)(param_1 + 0x2b4),param_5);
  local_24 = local_3c;
  local_20[(uint)bVar6 * -2] = afStack_38[(uint)bVar6 * -2];
  local_20[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
       afStack_38[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
  local_20[0] = local_20[0] + _DAT_005d71b7;
  core_actor_cpp_FUN_00408d70(param_1,&local_24);
  local_30._0_4_ = local_48._0_4_;
  *(uint *)((int)&local_30 + (uint)bVar6 * -8 + 4) =
       *(uint *)((int)&local_48 + (uint)bVar6 * -8 + 4);
  *(uint *)((int)&local_30 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
       *(uint *)((int)&local_48 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
  local_20[2] = *param_3;
  local_1b78 = param_2 / _DAT_005f7348 + local_20[2];
  if (1.0 < local_1b78) {
    local_1b78 = 1.0;
  }
  local_14 = (CDeformableModelInstance *)(param_1 + 0x2b4);
  iVar3 = 0;
  do {
    pCVar1 = local_14;
    core_skeleton_cpp_FUN_005486f0(local_14,local_1b74);
    core_skeleton_cpp_FUN_00545a60(pCVar1,0,0,*param_3,param_5,core_skeleton_cpp_FUN_00544cc0);
    core_skeleton_cpp_FUN_00546790(pCVar1,param_4);
    pfVar4 = afStack_1060 + 0x3ee;
    pfVar5 = afStack_1060 + 0x3e2;
    for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
      *pfVar5 = *pfVar4;
      pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
      pfVar5 = pfVar5 + (uint)bVar6 * -2 + 1;
    }
    core_xform_cpp_FUN_00591530(param_6,afStack_1060 + 0x3e2);
    local_6c = auStack_68[2];
    auStack_68[(uint)bVar6 * -2] = auStack_68[(uint)bVar6 * -2 + 3];
    auStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         auStack_68[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    core_actor_cpp_FUN_00408d70(param_1,&local_6c);
    local_78._0_4_ = local_54._0_4_;
    *(uint *)((int)&local_78 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_54 + (uint)bVar6 * -8 + 4);
    *(uint *)((int)&local_78 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
         *(uint *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    iVar2 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00535e10
                      (g_CDemonSetPtr,&local_30,&local_78);
    if (iVar2 == 0) {
      local_1b78 = *param_3;
    }
    else if (iVar3 != 0) {
      local_20[2] = *param_3;
    }
    iVar3 = iVar3 + 1;
    *param_3 = (local_20[2] + local_1b78) * (float)_DAT_005d71bb;
  } while (iVar3 < 7);
  return;
}
