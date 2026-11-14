// Name: core_gabriela.cpp_FUN_004caff0
// Address: 004caff0
// Address Range: [[004caff0, 004cb1d6]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_004caff0(int param_1,float param_2,float *param_3,int param_4,int param_5,undefined4 param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_gabriela_cpp_FUN_004caff0(int param_1,float param_2,float *param_3,int param_4,int param_5,uint param_6)

{
  CDeformableModelInstance *this_ptr;
  int iVar1;
  int iVar2;
  CMatrix3x4f *pCVar3;
  float *pfVar4;
  byte bVar5;
  float local_1b78;
  SPose local_1b74;
  float local_d8 [12];
  CMatrix3x4f local_a8;
  CVector3f local_78;
  uint local_6c;
  float afStack_68 [5];
  float local_54;
  float local_48;
  CVector3f local_3c;
  CVector3f local_30;
  float local_24;
  float local_20 [3];
  CDeformableModelInstance *local_14;
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0056acc0
            ((CDeformableModelInstance *)(param_1 + 0x158),&local_1b74);
  core_skeleton_cpp_CDeformableModelInstance_getBoneModelPosition_FUN_00569040
            ((CDeformableModelInstance *)(param_1 + 0x158),param_5,&local_3c);
  local_24 = local_3c.x;
  local_20[(uint)bVar5 * -2] = *(float *)((int)&local_3c + (uint)bVar5 * -8 + 4);
  local_20[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
       *(float *)((int)&local_3c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
  local_20[0] = local_20[0] + _DAT_005e1230;
  core_actor_cpp_FUN_00408b40(param_1,&local_24);
  local_30.x = local_48;
  *(float *)((int)&local_30 + (uint)bVar5 * -8 + 4) = afStack_68[(uint)bVar5 * -2 + 9];
  *(float *)((int)&local_30 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
       afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
  local_20[2] = *param_3;
  local_1b78 = param_2 / _DAT_00600d68 + local_20[2];
  if (1.0 < local_1b78) {
    local_1b78 = 1.0;
  }
  local_14 = (CDeformableModelInstance *)(param_1 + 0x158);
  iVar2 = 0;
  do {
    this_ptr = local_14;
    core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0056ad90(local_14,&local_1b74);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_00568100
              (this_ptr,0,0.0,*param_3,param_5,core_skeleton_cpp_blendWeightCallback_FUN_00567360);
    core_skeleton_cpp_CDeformableModelInstance_getBoneModelMatrix_FUN_00568e30
              (this_ptr,param_4,&local_a8);
    pCVar3 = &local_a8;
    pfVar4 = local_d8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *pfVar4 = pCVar3->m[0].w;
      pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar5 * -2 + 1) * 4);
      pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
    }
    core_xform_cpp_FUN_005b5080(param_6,local_d8);
    local_6c = afStack_68[2];
    afStack_68[(uint)bVar5 * -2] = afStack_68[(uint)bVar5 * -2 + 3];
    afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    core_actor_cpp_FUN_00408b40(param_1,&local_6c);
    local_78.x = local_54;
    *(float *)((int)&local_78 + (uint)bVar5 * -8 + 4) = afStack_68[(uint)bVar5 * -2 + 6];
    *(float *)((int)&local_78 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         afStack_68[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
    iVar1 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00557230
                      (g_CDemonSetPtr,&local_30,&local_78);
    if (iVar1 == 0) {
      local_1b78 = *param_3;
    }
    else if (iVar2 != 0) {
      local_20[2] = *param_3;
    }
    iVar2 = iVar2 + 1;
    *param_3 = (local_20[2] + local_1b78) * (float)_DAT_005e1234;
  } while (iVar2 < 7);
  return;
}
