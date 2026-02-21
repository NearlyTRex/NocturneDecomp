// Name: core_gabriela.cpp_CGabriella_FUN_004d6f80
// Address: 004d6f80
// Address Range: [[004d6f80, 004d711f]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6f80(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d6f80(CGabriella *this_ptr)

{
  CVector3f *input_local_point;
  int iVar1;
  CDeformableModelInstance *pCVar2;
  int iVar3;
  CMatrix3x4f *pCVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  float in_stack_00000008;
  float *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  CVector3f *in_stack_00000018;
  float local_1b48;
  SPose local_1b44;
  CMatrix3x4f local_a8;
  CMatrix3x4f local_78;
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  CDeformableModelInstance *local_14;
  
  bVar6 = 0;
  pCVar2 = &(this_ptr->base).base.model;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510(pCVar2,&local_1b44);
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
            (pCVar2,&local_30,in_stack_00000014);
  local_30.y = local_30.y + -0.3f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_24,&local_30);
  local_18 = *in_stack_0000000c;
  local_1b48 = in_stack_00000008 / 0.05f + local_18;
  if (1.0 < local_1b48) {
    local_1b48 = 1.0;
  }
  local_14 = &(this_ptr->base).base.model;
  iVar3 = 0;
  do {
    pCVar2 = local_14;
    core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(local_14,&local_1b44);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (pCVar2,0,0.0,*in_stack_0000000c,in_stack_00000014,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
              (pCVar2,in_stack_00000010,&local_78);
    pCVar4 = &local_78;
    pCVar5 = &local_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar5->m[0].w = pCVar4->m[0].w;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar6 * -2 + 1) * 4);
      pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    }
    input_local_point =
         core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_48,in_stack_00000018,&local_a8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&local_3c,input_local_point);
    iVar1 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                      (g_CDemonSetPtr,&local_24,&local_3c);
    if (iVar1 == 0) {
      local_1b48 = *in_stack_0000000c;
    }
    else if (iVar3 != 0) {
      local_18 = *in_stack_0000000c;
    }
    iVar3 = iVar3 + 1;
    *in_stack_0000000c = (local_18 + local_1b48) * (float)0.5;
  } while (iVar3 < 7);
  return;
}
