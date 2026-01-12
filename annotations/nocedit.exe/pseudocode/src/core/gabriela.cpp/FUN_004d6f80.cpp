// Name: core_gabriela.cpp_FUN_004d6f80
// Address: 004d6f80
// Address Range: [[004d6f80, 004d711f]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d6f80()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_hero_gabriella.cpp_FUN_004d6f80(uint param_1, uint
   param_2, uint param_3, uint param_4, uint param_5, uint param_6) */

void core_gabriela_cpp_FUN_004d6f80(void)

{
  CDeformableModelInstance *this_ptr;
  CVector3f *input_local_point;
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float *pfVar3;
  CMatrix3x4f *pCVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  CVector3f *in_stack_00000018;
  CMatrix3x4f *out_matrix;
  SBoneTransformData local_1b44;
  CMatrix3x4f local_a8;
  float afStack_74 [11];
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  float local_18;
  CDeformableModelInstance *local_14;
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
            ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_1b44);
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
            ((CDeformableModelInstance *)(in_stack_00000004 + 1),&local_30,in_stack_00000014);
  local_30.y = local_30.y + -0.3f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(in_stack_00000004,&local_24,&local_30);
  local_18 = *in_stack_0000000c;
  out_matrix = (CMatrix3x4f *)(in_stack_00000008 / _DAT_0065e7c8 + local_18);
  if (1.0 < (float)out_matrix) {
    out_matrix = (CMatrix3x4f *)0x3f800000;
  }
  local_14 = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  iVar2 = 0;
  do {
    this_ptr = local_14;
    core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0(local_14,&local_1b44);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr,0,0.0,*in_stack_0000000c,in_stack_00000014,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
              (this_ptr,in_stack_00000010,out_matrix);
    pfVar3 = afStack_74;
    pCVar4 = &local_a8;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      pCVar4->m[0].w = *pfVar3;
      pfVar3 = pfVar3 + (uint)bVar5 * -2 + 1;
      pCVar4 = (CMatrix3x4f *)((int)pCVar4 + ((uint)bVar5 * -2 + 1) * 4);
    }
    input_local_point =
         core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_48,in_stack_00000018,&local_a8);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&local_3c,input_local_point);
    iVar1 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                      (g_CDemonSetPtr,&local_24,&local_3c);
    if (iVar1 == 0) {
      out_matrix = (CMatrix3x4f *)*in_stack_0000000c;
    }
    else if (iVar2 != 0) {
      local_18 = *in_stack_0000000c;
    }
    iVar2 = iVar2 + 1;
    *in_stack_0000000c = (local_18 + (float)out_matrix) * (float)0.5;
  } while (iVar2 < 7);
  return;
}
