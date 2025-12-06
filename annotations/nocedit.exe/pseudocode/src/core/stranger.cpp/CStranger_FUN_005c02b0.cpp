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
  CSkeleton *this_ptr;
  int iVar1;
  float target_frame_number;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  CDeformableModelInstance *unaff_EDI;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000010;
  CQuaternion4f *in_stack_00000018;
  CDeformableModelInstance *in_stack_0000001c;
  float afStackY_19b4 [70];
  int aiStackY_189c [10];
  float afStackY_1874 [31];
  CDeformableModelInstance *apCStackY_17f8 [421];
  float afStackY_1164 [47];
  int aiStackY_10a8 [10];
  float afStackY_1080 [31];
  CDeformableModelInstance *apCStackY_1004 [904];
  float in_stack_fffffe20;
  float in_stack_fffffe24;
  float in_stack_fffffe28;
  float in_stack_fffffe38;
  CQuaternion4f *in_stack_fffffe3c;
  CQuaternion4f *pCVar7;
  CQuaternion4f *in_stack_fffffe40;
  CQuaternion4f *pCVar8;
  float in_stack_fffffe44;
  CQuaternion4f *pCVar9;
  float in_stack_fffffe4c;
  CQuaternion4f *in_stack_fffffe50;
  CQuaternion4f *in_stack_fffffe54;
  float in_stack_fffffe58;
  float in_stack_fffffe5c;
  CQuaternion4f *in_stack_fffffe60;
  float in_stack_fffffe64;
  CQuaternion4f local_18c;
  float local_17c;
  float afStack_178 [4];
  float fStack_168;
  byte auStack_164 [12];
  float afStack_158 [8];
  uint uStack_138;
  CQuaternion4f CStack_134;
  uint uStack_124;
  byte auStack_120 [8];
  float fStack_118;
  uint auStack_114 [4];
  byte auStack_104 [16];
  uint auStack_f4 [4];
  uint auStack_e4 [6];
  uint local_cc;
  byte auStack_c8 [16];
  int aiStack_b8 [8];
  uint uStack_98;
  float afStack_94 [4];
  float fStack_84;
  uint uStack_74;
  float fStack_58;
  uint auStack_54 [4];
  uint uStack_44;
  float afStack_40 [4];
  uint local_30;
  uint local_28;
  uint local_24;
  float local_20;
  float local_1c;
  int local_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar6 = 0;
  if (in_stack_00000008 == 0) {
    local_24 = DAT_03f6bad8;
    local_28 = DAT_03f6bae0;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe20);
    *(uint *)(&stack0xfffffe38 + (uint)bVar6 * -8) = auStack_114[(uint)bVar6 * -2];
    *(uint *)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         auStack_114[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    in_stack_fffffe28 = fStack_118;
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         (auStack_114 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe24);
    local_18 = in_stack_00000004 + 0x1fc08;
    puVar2 = (uint *)&stack0xfffffe5c;
  }
  else {
    local_24 = DAT_03f6badc;
    local_28 = DAT_03f6bae4;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe20);
    *(uint *)(&stack0xfffffe38 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xfffffe2c + (uint)bVar6 * -8);
    *(uint *)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         *(uint *)(&stack0xfffffe30 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
    *(uint *)
     ((int)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xfffffe30 + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
          ((uint)bVar6 * -2 + 1) * 4);
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe24);
    local_18 = in_stack_00000004 + 0x1fbe8;
    puVar2 = auStack_e4;
  }
  puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
  pCVar9 = (CQuaternion4f *)*puVar2;
  *(uint *)(&stack0xfffffe4c + (uint)bVar6 * -8) = *puVar3;
  *(uint *)(&stack0xfffffe50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       puVar3[(uint)bVar6 * -2 + 1];
  *(uint *)
   ((int)(&stack0xfffffe50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
       (puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  if (0.0 < (1.0 - (1.0 - *(float *)(local_18 + 0x14)) * *(float *)(in_stack_00000004 + 0x2a90)) *
            *(float *)(in_stack_00000004 + 0x2a90)) {
    pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    this_ptr = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820(pCStack_14);
    iVar1 = core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(&this_ptr->motion_list);
    target_frame_number =
         core_motion_cpp_CMotionController_markerPositionToFrame_FUN_0052e3a0
                   (&unaff_EDI->motion_controller,iVar1,*(float *)(in_stack_00000004 + 0x2a90));
    local_20 = target_frame_number;
    core_skeleton_cpp_CDeformableModelInstance_blendMotion_FUN_0059eb50
              (unaff_EDI,iVar1,target_frame_number,in_stack_fffffe28,unaff_EBP,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(unaff_ESI + 0xc),in_stack_fffffe38);
    pfVar4 = afStack_158 + 2;
    afStack_158[1] = (float)local_30;
    afStack_158[(uint)bVar6 * -2 + 2] = afStack_40[(uint)bVar6 * -2 + 5];
    afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3] =
         afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 6];
    (afStack_158 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 3)[(uint)bVar6 * -2 + 1] =
         (afStack_40 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 6)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
              (*(CQuaternion4f **)((int)target_frame_number + 8),(float)pfVar4);
    auStack_164._4_4_ = local_17c;
    afStack_158[(uint)bVar6 * -2 + -1] = afStack_178[(uint)bVar6 * -2];
    afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
         afStack_178[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_158 + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1] =
         (afStack_178 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640
              ((CQuaternion4f *)(auStack_164 + 8),in_stack_fffffe3c,in_stack_fffffe40);
    pCVar7 = (CQuaternion4f *)&stack0xfffffe58;
    pCVar8 = (CQuaternion4f *)0x3f733333;
    afStack_178[3] = afStack_94[3];
    *(float *)(auStack_164 + (uint)bVar6 * -8 + -4) = afStack_94[(uint)bVar6 * -2 + 4];
    *(float *)(auStack_164 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5];
    *(float *)((int)(auStack_164 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4
              ) = (afStack_94 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)&DAT_00665998,pCVar7,pCVar8,in_stack_fffffe44);
    pCVar7 = (CQuaternion4f *)auStack_164;
    uStack_138 = uStack_74;
    pfVar4 = (float *)((int)&CStack_134 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
    *(float *)((int)&CStack_134 + (uint)bVar6 * -8) = afStack_94[(uint)bVar6 * -2 + 9];
    pCVar8 = pCVar9;
    *pfVar4 = afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10];
    pfVar4[(uint)bVar6 * -2 + 1] =
         (afStack_94 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 10)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_134,pCVar7,pCVar9);
    uStack_124 = afStack_94[1];
    *(float *)(auStack_120 + (uint)bVar6 * -8) = afStack_94[(uint)bVar6 * -2 + 2];
    *(float *)(auStack_120 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) =
         afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
    *(float *)((int)(auStack_120 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) +
              ((uint)bVar6 * -2 + 1) * 4) =
         (afStack_94 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 3)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              ((CQuaternion4f *)(in_stack_00000004 + 0x808 + in_stack_00000008 * 0x10),
               (CQuaternion4f *)auStack_120,pCVar8,in_stack_fffffe4c);
    iVar1 = in_stack_00000004 + in_stack_00000008 * 0x10;
    pfVar4 = (float *)(iVar1 + 0x80c + (uint)bVar6 * -8);
    *(float *)(iVar1 + 0x808) = afStack_40[1];
    pfVar5 = pfVar4 + (uint)bVar6 * -2 + 1;
    *pfVar4 = afStack_40[(uint)bVar6 * -2 + 2];
    *pfVar5 = afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3];
    pfVar5[(uint)bVar6 * -2 + 1] =
         (afStack_40 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 3)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640
              ((CQuaternion4f *)&stack0xfffffe64,&local_18c,(CQuaternion4f *)(auStack_164 + 8));
    auStack_104._8_4_ = fStack_58;
    auStack_f4[(uint)bVar6 * -2 + -1] = auStack_54[(uint)bVar6 * -2];
    auStack_f4[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
         auStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (auStack_f4 + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1] =
         (auStack_54 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640
              ((CQuaternion4f *)(auStack_104 + 0xc),in_stack_fffffe50,in_stack_fffffe54);
    auStack_114[3] = uStack_44;
    *(float *)(auStack_104 + (uint)bVar6 * -8) = afStack_40[(uint)bVar6 * -2];
    *(float *)(auStack_104 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) =
         afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    *(float *)((int)(auStack_104 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) +
              ((uint)bVar6 * -2 + 1) * 4) =
         (afStack_40 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_blendBoneRotations_FUN_0059f750
              (in_stack_0000001c,(CQuaternion4f *)auStack_104,in_stack_fffffe58,in_stack_00000010,
               core_skeleton_cpp_defaultBlendWeight_FUN_0059ddb0);
    if ((float)0.0001 < *(float *)(in_stack_00000004 + 0x1fc8c)) {
      core_xform_cpp_quaternionFromAngleX_FUN_005f79b0
                ((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe5c);
      pCVar9 = (CQuaternion4f *)(auStack_c8 + 0xc);
      auStack_c8._8_4_ = local_1c;
      aiStack_b8[(uint)bVar6 * -2 + -1] = (&local_18)[(uint)bVar6 * -2];
      aiStack_b8[(uint)bVar6 * -2 + (uint)bVar6 * -2] =
           (int)(&pCStack_14)[(uint)bVar6 * -2 + (uint)bVar6 * -2];
      (aiStack_b8 + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1] =
           (int)(&pCStack_14 + (uint)bVar6 * -2 + (uint)bVar6 * -2)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_multiplyQuaternion_FUN_005f7640
                ((CQuaternion4f *)(auStack_120 + 4),pCVar9,in_stack_fffffe60);
      local_cc = uStack_98;
      *(float *)(auStack_c8 + (uint)bVar6 * -8) = afStack_94[(uint)bVar6 * -2];
      *(float *)(auStack_c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) =
           afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      *(float *)((int)(auStack_c8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4) +
                ((uint)bVar6 * -2 + 1) * 4) =
           (afStack_94 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (in_stack_00000018,(CQuaternion4f *)auStack_c8,
                 *(CQuaternion4f **)(in_stack_00000004 + 0x1fc8c),in_stack_fffffe64);
      pfVar4 = (float *)((int)in_stack_00000018 + (uint)bVar6 * -8 + 0x80c);
      in_stack_00000018[0x80].y = fStack_84;
      pfVar5 = pfVar4 + (uint)bVar6 * -2 + 1;
      *pfVar4 = afStack_94[(uint)bVar6 * -2 + 5];
      *pfVar5 = afStack_94[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 6];
      pfVar5[(uint)bVar6 * -2 + 1] =
           (afStack_94 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 6)[(uint)bVar6 * -2 + 1];
      return;
    }
  }
  return;
}
