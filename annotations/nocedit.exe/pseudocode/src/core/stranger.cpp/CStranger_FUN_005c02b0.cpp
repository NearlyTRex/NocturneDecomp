// Name: core_stranger.cpp_CStranger_FUN_005c02b0
// Address: 005c02b0
// Address Range: [[005c02b0, 005c06a6]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c02b0()

#include "nocturne.h"

/* Signature: byte actors_hero_stranger.cpp_CStranger_FUN_005c02b0(CStranger* param_1,
   uint param_2) */

void core_stranger_cpp_CStranger_FUN_005c02b0(void)

{
  CDeformableModelInstance *this_ptr;
  CSkeleton *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float *pfVar2;
  float *pfVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  float afStackY_19b0 [1519];
  CQuaternion4f *pCVar7;
  CQuaternion4f *pCVar8;
  CQuaternion4f *pCVar9;
  float in_stack_fffffe24;
  CQuaternion4f *in_stack_fffffe28;
  float fStack_1d4;
  CQuaternion4f CStack_1c8;
  CQuaternion4f CStack_1b8;
  float afStack_1a8 [5];
  uint uStack_194;
  float afStack_190 [2];
  CQuaternion4f CStack_188;
  uint uStack_178;
  CQuaternion4f CStack_174;
  float afStack_164 [3];
  CQuaternion4f CStack_158;
  uint uStack_148;
  byte auStack_144 [16];
  uint uStack_134;
  float afStack_130 [3];
  CQuaternion4f CStack_124;
  float fStack_114;
  float afStack_110 [2];
  CQuaternion4f CStack_108;
  CQuaternion4f CStack_f8;
  float afStack_e8 [5];
  float fStack_d4;
  uint auStack_d0 [7];
  uint uStack_b4;
  float afStack_b0 [6];
  float fStack_98;
  uint uStack_84;
  float afStack_80 [4];
  uint uStack_70;
  float local_6c [5];
  float fStack_58;
  float fStack_48;
  float local_30;
  int local_2c;
  CQuaternion4f *local_28;
  CQuaternion4f *local_24;
  int local_20;
  int local_1c;
  CDeformableModelInstance *local_18;
  
  bVar6 = 0;
  if (in_stack_00000008 == 0) {
    local_20 = DAT_03f6bad8;
    local_24 = (CQuaternion4f *)DAT_03f6bae0;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe24);
    CStack_1c8.w = fStack_114;
    pfVar3 = (float *)((int)&CStack_1c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&CStack_1c8 + (uint)bVar6 * -8 + 4) = afStack_110[(uint)bVar6 * -2];
    *pfVar3 = afStack_110[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar3[(uint)bVar6 * -2 + 1] =
         (afStack_110 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe24);
    local_1c = in_stack_00000004 + 0x1fc08;
    pfVar3 = afStack_1a8;
  }
  else {
    local_20 = DAT_03f6badc;
    local_24 = (CQuaternion4f *)DAT_03f6bae4;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe24);
    CStack_1c8.w = fStack_1d4;
    puVar4 = (uint *)((int)&CStack_1c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&CStack_1c8 + (uint)bVar6 * -8 + 4) =
         *(uint *)(&stack0xfffffe30 + (uint)bVar6 * -8);
    *puVar4 = *(uint *)(&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    puVar4[(uint)bVar6 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xfffffe34 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe24);
    local_1c = in_stack_00000004 + 0x1fbe8;
    pfVar3 = afStack_e8;
  }
  pfVar2 = pfVar3 + (uint)bVar6 * -2 + 1;
  CStack_1b8.w = *pfVar3;
  afStack_1a8[(uint)bVar6 * -2 + -3] = *pfVar2;
  afStack_1a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2] = pfVar2[(uint)bVar6 * -2 + 1];
  (afStack_1a8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1] =
       (pfVar2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  pCVar9 = (CQuaternion4f *)
           ((1.0 - (1.0 - *(float *)(local_1c + 0x14)) * *(float *)(in_stack_00000004 + 0x2a90)) *
           *(float *)(in_stack_00000004 + 0x2a90));
  if (0.0 < (float)pCVar9) {
    local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_18);
    iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr_00->motion_list);
    this_ptr = local_18;
    local_30 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&local_18->motion_controller,iVar1,*(float *)(in_stack_00000004 + 0x2a90))
    ;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr,iVar1,local_30,(float)pCVar9,local_20,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(local_1c + 0xc),(float)pCVar9);
    pfVar3 = &CStack_174.z;
    CStack_174.z = fStack_48;
    afStack_164[(uint)bVar6 * -2] = local_6c[(uint)bVar6 * -2 + 10];
    afStack_164[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb];
    (afStack_164 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (local_6c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xb)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(local_1c + 8),(float)pfVar3);
    uStack_178 = uStack_194;
    *(float *)((int)&CStack_174 + (uint)bVar6 * -8) = afStack_190[(uint)bVar6 * -2];
    afStack_164[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -3] =
         afStack_190[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_164 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -3)[(uint)bVar6 * -2 + 1] =
         (afStack_190 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_174,pCVar9,in_stack_fffffe28);
    pCVar7 = &CStack_1c8;
    pCVar8 = (CQuaternion4f *)0x3f733333;
    CStack_188.x = afStack_b0[2];
    pfVar3 = (float *)((int)&CStack_188 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 0xc);
    *(float *)((int)&CStack_188 + (uint)bVar6 * -8 + 8) = afStack_b0[(uint)bVar6 * -2 + 3];
    *pfVar3 = afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
    pfVar3[(uint)bVar6 * -2 + 1] =
         (afStack_b0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 4)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)&DAT_00665998,pCVar7,pCVar8,(float)pCVar9);
    pCVar7 = &CStack_188;
    CStack_158.w = fStack_98;
    pfVar3 = (float *)((int)&CStack_158 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(float *)((int)&CStack_158 + (uint)bVar6 * -8 + 4) = afStack_80[(uint)bVar6 * -2 + -5];
    pCVar8 = pCVar9;
    *pfVar3 = afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -4];
    pfVar3[(uint)bVar6 * -2 + 1] =
         (afStack_80 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -4)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_158,pCVar7,pCVar9);
    uStack_148 = uStack_b4;
    *(float *)(auStack_144 + (uint)bVar6 * -8) = afStack_b0[(uint)bVar6 * -2];
    *(float *)(auStack_144 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) =
         afStack_b0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    *(float *)((int)(auStack_144 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) +
              ((uint)bVar6 * -2 + 1) * 4) =
         (afStack_b0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    iVar1 = local_1c * 0x10;
    local_24 = (CQuaternion4f *)(in_stack_00000004 + 0x808 + iVar1);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (local_24,(CQuaternion4f *)auStack_144,pCVar8,(float)in_stack_fffffe28);
    local_2c = in_stack_00000004 + iVar1;
    pfVar3 = (float *)(local_2c + 0x80c + (uint)bVar6 * -8);
    *(float *)(local_2c + 0x808) = local_6c[3];
    pfVar2 = pfVar3 + (uint)bVar6 * -2 + 1;
    *pfVar3 = local_6c[(uint)bVar6 * -2 + 4];
    *pfVar2 = local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    pfVar2[(uint)bVar6 * -2 + 1] =
         (local_6c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_1c8,&CStack_1b8,&CStack_188);
    afStack_130[2] = (float)uStack_84;
    pfVar3 = (float *)((int)&CStack_124 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
    *(float *)((int)&CStack_124 + (uint)bVar6 * -8) = afStack_80[(uint)bVar6 * -2];
    *pfVar3 = afStack_80[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    pfVar3[(uint)bVar6 * -2 + 1] =
         (afStack_80 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_124,pCVar8,in_stack_fffffe28);
    uStack_134 = uStack_70;
    afStack_130[(uint)bVar6 * -2] = local_6c[(uint)bVar6 * -2];
    afStack_130[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
         local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_130 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1] =
         (local_6c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_18,(CQuaternion4f *)(auStack_144 + 0xc),(float)pCVar8,(int)local_24,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    if ((float)0.0001 < *(float *)(in_stack_00000004 + 0x1fc8c)) {
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)0x3fc90fdb,(float)pCVar8);
      pCVar9 = &CStack_f8;
      CStack_f8.w = fStack_58;
      afStack_e8[(uint)bVar6 * -2 + -3] = local_6c[(uint)bVar6 * -2 + 6];
      afStack_e8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + -2] =
           local_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
      (afStack_e8 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + -2)[(uint)bVar6 * -2 + 1] =
           (local_6c + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 7)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_158,pCVar9,pCVar8);
      CStack_108.w = fStack_d4;
      puVar4 = (uint *)((int)&CStack_108 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
      *(uint *)((int)&CStack_108 + (uint)bVar6 * -8 + 4) = auStack_d0[(uint)bVar6 * -2];
      *puVar4 = auStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      puVar4[(uint)bVar6 * -2 + 1] =
           (auStack_d0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (local_28,&CStack_108,*(CQuaternion4f **)(in_stack_00000004 + 0x1fc8c),(float)pCVar8
                );
      puVar4 = (uint *)(local_2c + 0x80c + (uint)bVar6 * -8);
      *(uint *)(local_2c + 0x808) = auStack_d0[2];
      puVar5 = puVar4 + (uint)bVar6 * -2 + 1;
      *puVar4 = auStack_d0[(uint)bVar6 * -2 + 3];
      *puVar5 = auStack_d0[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
      puVar5[(uint)bVar6 * -2 + 1] =
           (auStack_d0 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 4)[(uint)bVar6 * -2 + 1];
      return;
    }
  }
  return;
}
