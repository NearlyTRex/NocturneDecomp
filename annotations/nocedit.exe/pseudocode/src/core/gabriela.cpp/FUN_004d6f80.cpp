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
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  CDemonActor *in_stack_00000004;
  float *in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  CVector3f *in_stack_00000018;
  float fVar6;
  CDemonSet *in_stack_ffffe4cc;
  uint uStack_94;
  CMatrix3x4f CStack_90;
  uint auStack_60 [12];
  byte local_30 [8];
  byte auStack_28 [12];
  CVector3f CStack_1c;
  
  bVar5 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneTransform_FUN_005a1510
            ((CDeformableModelInstance *)(in_stack_00000004 + 1),
             (SBoneTransformData *)&stack0xffffe4bc);
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20
            ((CDeformableModelInstance *)(in_stack_00000004 + 1),(CVector3f *)(local_30 + 4),
             in_stack_00000014);
  auStack_28._4_4_ = (float)auStack_28._4_4_ + -0.3f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&CStack_1c,(CVector3f *)auStack_28);
  this_ptr = (CDeformableModelInstance *)(in_stack_00000004 + 1);
  iVar2 = 0;
  do {
    core_skeleton_cpp_CDeformableModelInstance_setBoneTransform_FUN_005a15e0
              (this_ptr,(SBoneTransformData *)&stack0xffffe4c8);
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr,0,0.0,*in_stack_0000000c,in_stack_00000014,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
              (this_ptr,in_stack_00000010,(CMatrix3x4f *)in_stack_ffffe4cc);
    puVar3 = auStack_60;
    puVar4 = &uStack_94;
    for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar3;
      puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    input_local_point =
         core_xform_cpp_transformVector3x4_FUN_005f4dc0
                   ((CVector3f *)local_30,in_stack_00000018,&CStack_90);
    fVar6 = 7.111756e-39;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,(CVector3f *)(auStack_28 + 8),input_local_point);
    in_stack_ffffe4cc = g_CDemonSetPtr;
    iVar1 = core_setcolid_cpp_CDemonSet_testLineOcclusion_FUN_00572460
                      (g_CDemonSetPtr,(CVector3f *)&stack0xfffffffc,&CStack_1c);
    if (iVar1 == 0) {
      fVar6 = *in_stack_0000000c;
    }
    else if (iVar2 != 0) {
      in_stack_0000000c = (float *)*in_stack_0000000c;
    }
    iVar2 = iVar2 + 1;
    *in_stack_0000000c = ((float)in_stack_0000000c + fVar6) * (float)0.5;
  } while (iVar2 < 7);
  return;
}
