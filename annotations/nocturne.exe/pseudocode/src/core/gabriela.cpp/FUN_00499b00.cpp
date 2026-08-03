// Name: core_gabriela.cpp_FUN_00499b00
// Address: 00499b00
// Address Range: [[00499b00, 00499c9f]]
// Convention: unknown
// Signature: void core_gabriela_cpp_FUN_00499b00(CDemonActor *param_1,float param_2,float *param_3,undefined4 param_4,int param_5,CVector3f *param_6)

#include "nocturne.h"

void core_gabriela_cpp_FUN_00499b00(CDemonActor *param_1,float param_2,float *param_3,uint param_4,int param_5,CVector3f *param_6)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *input_local_point;
  int iVar1;
  int iVar2;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  float local_1b48;
  SPose local_1b44;
  CMatrix3x4f local_a8;
  float local_78 [12];
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  CDeformableModelInstance *local_14;
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_0051ed90
            ((CDeformableModelInstance *)(param_1 + 1),&local_1b44);
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0051d2a0
            ((CDeformableModelInstance *)(param_1 + 1),&local_30,param_5);
  local_30.y = local_30.y + -0.3f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_24,&local_30);
  local_18 = *param_3;
  local_1b48 = param_2 / 0.05f + local_18;
  if (1.0 < local_1b48) {
    local_1b48 = 1.0;
  }
  local_14 = (CDeformableModelInstance *)(param_1 + 1);
  iVar2 = 0;
  do {
    this_ptr = local_14;
    core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_0051ee60(local_14,&local_1b44);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0051c3d0
              (this_ptr,0,0.0,*param_3,param_5,core_skeleton_cpp_FUN_0051b650);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0051d0a0(this_ptr,param_4);
    pfVar3 = local_78;
    pCVar4 = &local_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    input_local_point = core_xform_cpp_transformVector3x4_FUN_0055a8b0(&local_48,param_6,&local_a8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,&local_3c,input_local_point);
    iVar1 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_0050fa30
                      (g_CDemonSet_PTR_005be368,&local_24,&local_3c);
    if (iVar1 == 0) {
      local_1b48 = *param_3;
    }
    else if (iVar2 != 0) {
      local_18 = *param_3;
    }
    iVar2 = iVar2 + 1;
    *param_3 = (local_18 + local_1b48) * (float)0.5;
  } while (iVar2 < 7);
  return;
}
