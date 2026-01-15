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
  float *pfVar2;
  uint *puVar3;
  float *pfVar4;
  byte bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  float afStackY_19b4 [1520];
  CQuaternion4f *pCVar6;
  CQuaternion4f *pCVar7;
  CQuaternion4f *pCVar8;
  float in_stack_fffffe24;
  CQuaternion4f *in_stack_fffffe28;
  CQuaternion4f CStack_1c8;
  CQuaternion4f CStack_1b8;
  float afStack_1a8 [4];
  uint uStack_198;
  float afStack_194 [3];
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
  float afStack_114 [3];
  CQuaternion4f CStack_108;
  CQuaternion4f CStack_f8;
  float afStack_e8 [4];
  float fStack_d8;
  float afStack_d4 [7];
  uint uStack_b8;
  float fStack_a8;
  float fStack_98;
  uint uStack_88;
  uint uStack_74;
  float afStack_70 [6];
  float fStack_58;
  float fStack_48;
  float local_30;
  int local_2c;
  CQuaternion4f *local_28;
  CQuaternion4f *local_24;
  int local_20;
  int local_1c;
  CDeformableModelInstance *local_18;
  float fStack_14;
  
  bVar5 = 0;
  if (in_stack_00000008 == 0) {
    local_20 = DAT_03f6bad8;
    local_24 = (CQuaternion4f *)DAT_03f6bae0;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe24);
    CStack_1c8.w = CStack_124.z;
    pfVar4 = (float *)((int)&CStack_1c8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&CStack_1c8 + (uint)bVar5 * -8 + 4) = afStack_114[(uint)bVar5 * -2];
    *pfVar4 = afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_114 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe24);
    local_1c = in_stack_00000004 + 0x1fc08;
    pfVar4 = afStack_1a8;
  }
  else {
    local_20 = DAT_03f6badc;
    local_24 = (CQuaternion4f *)DAT_03f6bae4;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe24);
    CStack_1c8.w = (float)in_stack_fffffe28;
    puVar3 = (uint *)((int)&CStack_1c8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&CStack_1c8 + (uint)bVar5 * -8 + 4) =
         *(uint *)(&stack0xfffffe2c + (uint)bVar5 * -8);
    *puVar3 = *(uint *)(&stack0xfffffe30 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    puVar3[(uint)bVar5 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xfffffe30 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
          ((uint)bVar5 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe24);
    local_1c = in_stack_00000004 + 0x1fbe8;
    pfVar4 = afStack_e8;
  }
  pfVar2 = pfVar4 + (uint)bVar5 * -2 + 1;
  CStack_1b8.w = *pfVar4;
  afStack_1a8[(uint)bVar5 * -2 + -3] = *pfVar2;
  afStack_1a8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -2] = pfVar2[(uint)bVar5 * -2 + 1];
  (afStack_1a8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -2)[(uint)bVar5 * -2 + 1] =
       (pfVar2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
  pCVar8 = (CQuaternion4f *)
           ((1.0 - (1.0 - *(float *)(local_1c + 0x14)) * *(float *)(in_stack_00000004 + 0x2a90)) *
           *(float *)(in_stack_00000004 + 0x2a90));
  if (0.0 < (float)pCVar8) {
    local_18 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(local_18);
    iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr_00->motion_list);
    this_ptr = local_18;
    local_30 = core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                         (&local_18->motion_controller,iVar1,*(float *)(in_stack_00000004 + 0x2a90))
    ;
    fStack_14 = local_30;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (this_ptr,iVar1,local_30,(float)pCVar8,local_20,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(local_1c + 0xc),(float)pCVar8);
    pfVar4 = &CStack_174.z;
    CStack_174.z = fStack_48;
    afStack_164[(uint)bVar5 * -2] = afStack_70[(uint)bVar5 * -2 + 0xb];
    afStack_164[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xc];
    (afStack_164 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_70 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xc)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)(local_1c + 8),(float)pfVar4);
    uStack_178 = uStack_198;
    *(float *)((int)&CStack_174 + (uint)bVar5 * -8) = afStack_194[(uint)bVar5 * -2];
    afStack_164[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -3] =
         afStack_194[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (afStack_164 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -3)[(uint)bVar5 * -2 + 1] =
         (afStack_194 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_174,pCVar8,in_stack_fffffe28);
    pCVar6 = &CStack_1c8;
    pCVar7 = (CQuaternion4f *)0x3f733333;
    CStack_188.x = fStack_a8;
    pfVar4 = (float *)((int)&CStack_188 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 0xc);
    *(float *)((int)&CStack_188 + (uint)bVar5 * -8 + 8) = afStack_d4[(uint)bVar5 * -2 + 0xc];
    *pfVar4 = afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -0xc];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_70 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -0xc)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)&DAT_00665998,pCVar6,pCVar7,(float)pCVar8);
    pCVar6 = &CStack_188;
    CStack_158.w = fStack_98;
    pfVar4 = (float *)((int)&CStack_158 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(float *)((int)&CStack_158 + (uint)bVar5 * -8 + 4) = afStack_70[(uint)bVar5 * -2 + -9];
    pCVar7 = pCVar8;
    *pfVar4 = afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -8];
    pfVar4[(uint)bVar5 * -2 + 1] =
         (afStack_70 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -8)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_158,pCVar6,pCVar8);
    uStack_148 = uStack_b8;
    *(float *)(auStack_144 + (uint)bVar5 * -8) = afStack_d4[(uint)bVar5 * -2 + 8];
    *(float *)(auStack_144 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) =
         afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 9];
    *(float *)((int)(auStack_144 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 4) +
              ((uint)bVar5 * -2 + 1) * 4) =
         (afStack_d4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 9)[(uint)bVar5 * -2 + 1];
    iVar1 = local_1c * 0x10;
    local_24 = (CQuaternion4f *)(in_stack_00000004 + 0x808 + iVar1);
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (local_24,(CQuaternion4f *)auStack_144,pCVar7,(float)in_stack_fffffe28);
    local_2c = in_stack_00000004 + iVar1;
    pfVar4 = (float *)(local_2c + 0x80c + (uint)bVar5 * -8);
    *(float *)(local_2c + 0x808) = afStack_70[3];
    pfVar2 = pfVar4 + (uint)bVar5 * -2 + 1;
    *pfVar4 = afStack_70[(uint)bVar5 * -2 + 4];
    *pfVar2 = afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
    pfVar2[(uint)bVar5 * -2 + 1] =
         (afStack_70 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_1c8,&CStack_1b8,&CStack_188);
    afStack_130[2] = (float)uStack_88;
    *(float *)((int)&CStack_124 + (uint)bVar5 * -8) = afStack_70[(uint)bVar5 * -2 + -5];
    afStack_114[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -3] =
         afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -4];
    (afStack_114 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -3)[(uint)bVar5 * -2 + 1] =
         (afStack_70 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -4)[(uint)bVar5 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_124,pCVar7,in_stack_fffffe28);
    uStack_134 = uStack_74;
    afStack_130[(uint)bVar5 * -2] = afStack_70[(uint)bVar5 * -2];
    afStack_130[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    (afStack_130 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
         (afStack_70 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (local_18,(CQuaternion4f *)(auStack_144 + 0xc),(float)pCVar7,(int)local_24,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    if ((float)0.0001 < *(float *)(in_stack_00000004 + 0x1fc8c)) {
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0((CQuaternion4f *)0x3fc90fdb,(float)pCVar7);
      pCVar8 = &CStack_f8;
      CStack_f8.w = fStack_58;
      afStack_e8[(uint)bVar5 * -2 + -3] = afStack_70[(uint)bVar5 * -2 + 7];
      afStack_e8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + -2] =
           afStack_70[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 8];
      (afStack_e8 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + -2)[(uint)bVar5 * -2 + 1] =
           (afStack_70 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 8)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_158,pCVar8,pCVar7);
      CStack_108.w = fStack_d8;
      pfVar4 = (float *)((int)&CStack_108 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      *(float *)((int)&CStack_108 + (uint)bVar5 * -8 + 4) = afStack_d4[(uint)bVar5 * -2];
      *pfVar4 = afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      pfVar4[(uint)bVar5 * -2 + 1] =
           (afStack_d4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (local_28,&CStack_108,*(CQuaternion4f **)(in_stack_00000004 + 0x1fc8c),(float)pCVar7
                );
      pfVar4 = (float *)(local_2c + 0x80c + (uint)bVar5 * -8);
      *(float *)(local_2c + 0x808) = afStack_d4[3];
      pfVar2 = pfVar4 + (uint)bVar5 * -2 + 1;
      *pfVar4 = afStack_d4[(uint)bVar5 * -2 + 4];
      *pfVar2 = afStack_d4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 5];
      pfVar2[(uint)bVar5 * -2 + 1] =
           (afStack_d4 + (uint)bVar5 * -2 + (uint)bVar5 * -2 + 5)[(uint)bVar5 * -2 + 1];
      return;
    }
  }
  return;
}
