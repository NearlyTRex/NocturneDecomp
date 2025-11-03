// Name: core_stranger.cpp_CStranger_FUN_005c02b0
// Address: 005c02b0
// Address Range: [[005c02b0, 005c06a6]]
// Convention: unknown
// Signature: undefined core_stranger.cpp_CStranger_FUN_005c02b0()
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005c003b [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00653944 = 0.000100000000000000
//   undefined4 DAT_00665998
//   undefined4 DAT_03f6bad8
//   undefined4 DAT_03f6badc
//   undefined4 DAT_03f6bae0
//   undefined4 DAT_03f6bae4
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052e3a0
//   core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059eb50
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f750
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

/* Signature: undefined1 actors_hero_stranger.cpp_CStranger_FUN_005c02b0(CStranger* param_1,
   undefined4 param_2) */

void core_stranger_cpp_CStranger_FUN_005c02b0(void)

{
  CMotionList *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  undefined4 *puVar2;
  undefined4 *puVar3;
  CDeformableModelInstance *unaff_EDI;
  float *pfVar4;
  float *pfVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  CQuaternion4f *in_stack_00000018;
  code *apcStackY_19b4 [3];
  float afStackY_19a8 [67];
  int aiStackY_189c [10];
  float afStackY_1874 [31];
  CDeformableModelInstance *apCStackY_17f8 [398];
  code *apcStackY_11c0 [3];
  float afStackY_11b4 [67];
  int aiStackY_10a8 [10];
  float afStackY_1080 [31];
  CDeformableModelInstance *apCStackY_1004 [904];
  float in_stack_fffffe20;
  float in_stack_fffffe24;
  code *apcStack_1d4 [2];
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
  float in_stack_fffffe5c;
  CQuaternion4f *in_stack_fffffe60;
  float in_stack_fffffe64;
  CQuaternion4f local_18c;
  float local_17c;
  float afStack_178 [4];
  float fStack_168;
  undefined1 auStack_164 [12];
  float afStack_158 [8];
  undefined4 uStack_138;
  CQuaternion4f CStack_134;
  undefined4 uStack_124;
  undefined1 auStack_120 [12];
  float afStack_114 [6];
  undefined4 local_fc;
  CQuaternion4f CStack_f8;
  undefined4 auStack_e4 [6];
  undefined4 local_cc;
  undefined1 auStack_c8 [16];
  int aiStack_b8 [8];
  undefined4 uStack_98;
  float afStack_94 [4];
  float fStack_84;
  undefined4 uStack_74;
  undefined4 uStack_58;
  undefined4 auStack_54 [4];
  undefined4 uStack_44;
  float afStack_40 [4];
  undefined4 local_30;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  float local_1c;
  int local_18;
  CDeformableModelInstance *pCStack_14;
  
  bVar6 = 0;
  if (in_stack_00000008 == 0) {
    local_24 = DAT_03f6bad8;
    local_28 = DAT_03f6bae0;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe20);
    *(float *)(&stack0xfffffe38 + (uint)bVar6 * -8) = afStack_114[(uint)bVar6 * -2];
    *(float *)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         afStack_114[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    *(float *)((int)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4) =
         (afStack_114 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0x3fc90fdb,in_stack_fffffe24);
    local_18 = in_stack_00000004 + 0x1fc08;
    puVar2 = (undefined4 *)&stack0xfffffe5c;
  }
  else {
    local_24 = DAT_03f6badc;
    local_28 = DAT_03f6bae4;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe20);
    *(code **)(&stack0xfffffe38 + (uint)bVar6 * -8) = apcStack_1d4[(uint)bVar6 * -2];
    *(code **)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
         apcStack_1d4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    *(code **)((int)(&stack0xfffffe3c + (uint)bVar6 * -8 + (uint)bVar6 * -8) +
              ((uint)bVar6 * -2 + 1) * 4) =
         (apcStack_1d4 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_quaternionFromAngleZ_FUN_005f7a30((CQuaternion4f *)0xbfc90fdb,in_stack_fffffe24);
    local_18 = in_stack_00000004 + 0x1fbe8;
    puVar2 = auStack_e4;
  }
  puVar3 = puVar2 + (uint)bVar6 * -2 + 1;
  pCVar9 = (CQuaternion4f *)*puVar2;
  *(undefined4 *)(&stack0xfffffe4c + (uint)bVar6 * -8) = *puVar3;
  *(undefined4 *)(&stack0xfffffe50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
       puVar3[(uint)bVar6 * -2 + 1];
  *(undefined4 *)
   ((int)(&stack0xfffffe50 + (uint)bVar6 * -8 + (uint)bVar6 * -8) + ((uint)bVar6 * -2 + 1) * 4) =
       (puVar3 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
  if (0.0 < (1.0 - (1.0 - *(float *)(local_18 + 0x14)) * *(float *)(in_stack_00000004 + 0x2a90)) *
            *(float *)(in_stack_00000004 + 0x2a90)) {
    pCStack_14 = (CDeformableModelInstance *)(in_stack_00000004 + 0x158);
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(pCStack_14);
    core_motion_cpp_CMotionList_findMotionIndex_FUN_0052d460(this_ptr);
    apcStack_1d4[0] = *(code **)(in_stack_00000004 + 0x2a90);
    iVar1 = core_motion_cpp_CMotionController_FUN_0052e3a0();
    apcStack_1d4[1] = core_skeleton_cpp_FUN_0059ddb0;
    local_20 = iVar1;
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059eb50(unaff_EDI);
    apcStack_1d4[1] = (code *)0x5c040c;
    core_xform_cpp_quaternionFromAngleY_FUN_005f79f0
              (*(CQuaternion4f **)(unaff_ESI + 0xc),in_stack_fffffe38);
    pfVar4 = afStack_158 + 2;
    afStack_158[1] = (float)local_30;
    afStack_158[(uint)bVar6 * -2 + 2] = afStack_40[(uint)bVar6 * -2 + 5];
    afStack_158[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 3] =
         afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 6];
    (afStack_158 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 3)[(uint)bVar6 * -2 + 1] =
         (afStack_40 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 6)[(uint)bVar6 * -2 + 1];
    apcStack_1d4[1] = (code *)0x5c0436;
    core_xform_cpp_quaternionFromAngleX_FUN_005f79b0(*(CQuaternion4f **)(iVar1 + 8),(float)pfVar4);
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
    local_fc = uStack_58;
    puVar2 = (undefined4 *)((int)&CStack_f8 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 4);
    *(undefined4 *)((int)&CStack_f8 + (uint)bVar6 * -8) = auStack_54[(uint)bVar6 * -2];
    *puVar2 = auStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    puVar2[(uint)bVar6 * -2 + 1] =
         (auStack_54 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_xform_cpp_multiplyQuaternion_FUN_005f7640(&CStack_f8,in_stack_fffffe50,in_stack_fffffe54);
    afStack_114[3] = (float)uStack_44;
    afStack_114[(uint)bVar6 * -2 + 4] = afStack_40[(uint)bVar6 * -2];
    afStack_114[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
         afStack_40[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
    (afStack_114 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
         (afStack_40 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
    core_skeleton_cpp_CDeformableModelInstance_FUN_0059f750();
    if ((float)DOUBLE_00653944 < *(float *)(in_stack_00000004 + 0x1fc8c)) {
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


// Assembly code:
// 005c02b0: PUSH EBX
//   Label: core_stranger.cpp_CStranger_FUN_005c02b0
// 005c02b1: PUSH ESI
// 005c02b2: PUSH EDI
// 005c02b3: PUSH EBP
// 005c02b4: MOV EBP,ESP
// 005c02b6: SUB ESP,0x1cc
// 005c02bc: AND ESP,0xfffffff8
// 005c02bf: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005c02c2: CMP dword ptr [EBP + 0x18],0x0
//   XREF to: Stack[0x8] (READ)
// 005c02c6: JZ 0x005c05ad
//   XREF to: 005c05ad (CONDITIONAL_JUMP)
// 005c02cc: PUSH 0xbfc90fdb
// 005c02d1: MOV EAX,[0x03f6badc]
//   XREF to: 03f6badc (READ)
// 005c02d6: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 005c02da: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005c02e1: MOV EAX,[0x03f6bae4]
//   XREF to: 03f6bae4 (READ)
// 005c02e6: LEA EDI,[ESP + 0x18]
//   XREF to: Stack[-0x1cc] (DATA)
// 005c02ea: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005c02f1: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005c02f6: LEA ESI,[ESP + 0x8]
//   XREF to: Stack[-0x1dc] (DATA)
// 005c02fa: ADD ESP,0x4
// 005c02fd: MOVSD ES:EDI,ESI
// 005c02fe: MOVSD ES:EDI,ESI
// 005c02ff: MOVSD ES:EDI,ESI
// 005c0300: MOVSD ES:EDI,ESI
// 005c0301: PUSH 0xbfc90fdb
// 005c0306: LEA ESI,[ESP + 0xf8]
//   XREF to: Stack[-0xec] (DATA)
// 005c030d: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x1bc] (DATA)
// 005c0311: CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
//   XREF to: 005f7a30 (UNCONDITIONAL_CALL)
// 005c0316: ADD ESP,0x4
// 005c0319: LEA EAX,[EBX + 0x1fbe8]
// 005c031f: LEA ESI,[ESP + 0xf4]
//   XREF to: Stack[-0xec] (DATA)
// 005c0326: MOV dword ptr [ESP + 0x1c0],EAX
//   Label: LAB_005c0326
//   XREF to: Stack[-0x20] (WRITE)
// 005c032d: MOVSD ES:EDI,ESI
// 005c032e: MOVSD ES:EDI,ESI
// 005c032f: MOVSD ES:EDI,ESI
// 005c0330: MOVSD ES:EDI,ESI
// 005c0331: MOV EAX,dword ptr [EBX + 0x2a90]
// 005c0337: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1e0] (DATA)
// 005c033a: MOV EAX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x20] (READ)
// 005c0341: FLD float ptr [EAX + 0x14]
// 005c0344: FLD1
// 005c0346: FSUBRP
// 005c0348: FLD float ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c034b: FXCH
// 005c034d: FMUL ST1
// 005c034f: FLD1
// 005c0351: FSUBRP
// 005c0353: FMULP
// 005c0355: FST float ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c0358: FLDZ
// 005c035a: FCOMPP
// 005c035c: FNSTSW AX
// 005c035e: SAHF
// 005c035f: JNC 0x005c05a6
//   XREF to: 005c05a6 (CONDITIONAL_JUMP)
// 005c0365: MOV EAX,dword ptr [EBX + 0x2a8c]
// 005c036b: SHL EAX,0x3
// 005c036e: MOV ESI,EAX
// 005c0370: SHL EAX,0x3
// 005c0373: SUB EAX,ESI
// 005c0375: LEA ESI,[EBX + 0x262c]
// 005c037b: ADD EAX,ESI
// 005c037d: PUSH 0x1
// 005c037f: ADD EAX,0x8
// 005c0382: PUSH EAX
// 005c0383: LEA EAX,[EBX + 0x158]
// 005c0389: PUSH EAX
// 005c038a: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005c0391: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005c0396: ADD ESP,0x4
// 005c0399: PUSH EAX
// 005c039a: CALL core_motion.cpp_CMotionList_findMotionIndex_FUN_0052d460
//   XREF to: 0052d460 (UNCONDITIONAL_CALL)
// 005c039f: ADD ESP,0xc
// 005c03a2: PUSH dword ptr [EBX + 0x2a90]
// 005c03a8: PUSH EAX
// 005c03a9: MOV EDI,dword ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x1c] (READ)
// 005c03b0: PUSH EDI
// 005c03b1: MOV ESI,EAX
// 005c03b3: CALL core_motion.cpp_CMotionController_FUN_0052e3a0
//   XREF to: 0052e3a0 (UNCONDITIONAL_CALL)
// 005c03b8: MOV dword ptr [ESP + 0x1d4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005c03bf: FLD float ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x18] (READ)
// 005c03c6: ADD ESP,0xc
// 005c03c9: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005c03ce: MOV EAX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x24] (READ)
// 005c03d5: PUSH EAX
// 005c03d6: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1e0] (READ)
// 005c03da: FSTP float ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x34] (WRITE)
// 005c03e1: PUSH dword ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x34] (READ)
// 005c03e8: PUSH ESI
// 005c03e9: PUSH EDI
// 005c03ea: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059eb50
//   XREF to: 0059eb50 (UNCONDITIONAL_CALL)
// 005c03ef: ADD ESP,0x18
// 005c03f2: MOV EAX,dword ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x20] (READ)
// 005c03f9: LEA ESI,[ESP + 0x194]
//   XREF to: Stack[-0x4c] (DATA)
// 005c0400: PUSH dword ptr [EAX + 0xc]
// 005c0403: LEA EDI,[ESP + 0x78]
//   XREF to: Stack[-0x16c] (DATA)
// 005c0407: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005c040c: ADD ESP,0x4
// 005c040f: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x16c] (DATA)
// 005c0413: LEA ESI,[ESP + 0x194]
//   XREF to: Stack[-0x4c] (DATA)
// 005c041a: PUSH EAX
// 005c041b: MOVSD ES:EDI,ESI
// 005c041c: MOVSD ES:EDI,ESI
// 005c041d: MOVSD ES:EDI,ESI
// 005c041e: MOVSD ES:EDI,ESI
// 005c041f: MOV EAX,dword ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x20] (READ)
// 005c0426: LEA ESI,[ESP + 0x48]
//   XREF to: Stack[-0x19c] (DATA)
// 005c042a: PUSH dword ptr [EAX + 0x8]
// 005c042d: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x17c] (DATA)
// 005c0431: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005c0436: LEA ESI,[ESP + 0x4c]
//   XREF to: Stack[-0x19c] (DATA)
// 005c043a: ADD ESP,0x4
// 005c043d: LEA EAX,[ESP + 0x68]
//   XREF to: Stack[-0x17c] (DATA)
// 005c0441: MOVSD ES:EDI,ESI
// 005c0442: MOVSD ES:EDI,ESI
// 005c0443: MOVSD ES:EDI,ESI
// 005c0444: MOVSD ES:EDI,ESI
// 005c0445: PUSH EAX
// 005c0446: LEA ESI,[ESP + 0x13c]
//   XREF to: Stack[-0xac] (DATA)
// 005c044d: LEA EDI,[ESP + 0x5c]
//   XREF to: Stack[-0x18c] (DATA)
// 005c0451: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005c0456: ADD ESP,0x8
// 005c0459: LEA ESI,[ESP + 0x134]
//   XREF to: Stack[-0xac] (DATA)
// 005c0460: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1cc] (DATA)
// 005c0464: PUSH 0x3f733333
// 005c0469: PUSH EAX
// 005c046a: MOVSD ES:EDI,ESI
// 005c046b: MOVSD ES:EDI,ESI
// 005c046c: MOVSD ES:EDI,ESI
// 005c046d: MOVSD ES:EDI,ESI
// 005c046e: PUSH 0x665998
//   XREF to: 00665998 (DATA)
// 005c0473: LEA ESI,[ESP + 0x150]
//   XREF to: Stack[-0x9c] (DATA)
// 005c047a: LEA EDI,[ESP + 0x90]
//   XREF to: Stack[-0x15c] (DATA)
// 005c0481: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 005c0486: ADD ESP,0xc
// 005c0489: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x18c] (DATA)
// 005c048d: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x1e0] (DATA)
// 005c0490: LEA ESI,[ESP + 0x148]
//   XREF to: Stack[-0x9c] (DATA)
// 005c0497: PUSH EAX
// 005c0498: LEA EAX,[ESP + 0x8c]
//   XREF to: Stack[-0x15c] (DATA)
// 005c049f: MOVSD ES:EDI,ESI
// 005c04a0: MOVSD ES:EDI,ESI
// 005c04a1: MOVSD ES:EDI,ESI
// 005c04a2: MOVSD ES:EDI,ESI
// 005c04a3: PUSH EAX
// 005c04a4: LEA ESI,[ESP + 0x130]
//   XREF to: Stack[-0xbc] (DATA)
// 005c04ab: LEA EDI,[ESP + 0xa0]
//   XREF to: Stack[-0x14c] (DATA)
// 005c04b2: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005c04b7: LEA ESI,[ESP + 0x130]
//   XREF to: Stack[-0xbc] (DATA)
// 005c04be: ADD ESP,0x8
// 005c04c1: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x14c] (DATA)
// 005c04c8: MOVSD ES:EDI,ESI
// 005c04c9: MOVSD ES:EDI,ESI
// 005c04ca: MOVSD ES:EDI,ESI
// 005c04cb: MOVSD ES:EDI,ESI
// 005c04cc: PUSH EAX
// 005c04cd: MOV EDI,dword ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x24] (READ)
// 005c04d4: LEA EAX,[EBX + 0x808]
// 005c04da: SHL EDI,0x4
// 005c04dd: ADD EAX,EDI
// 005c04df: PUSH EAX
// 005c04e0: LEA ESI,[ESP + 0x180]
//   XREF to: Stack[-0x6c] (DATA)
// 005c04e7: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005c04ee: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 005c04f3: LEA EAX,[EBX + EDI*0x1]
// 005c04f6: MOV EDI,EAX
// 005c04f8: LEA ESI,[ESP + 0x180]
//   XREF to: Stack[-0x6c] (DATA)
// 005c04ff: ADD ESP,0xc
// 005c0502: LEA EDI,[EDI + 0x808]
// 005c0508: MOV dword ptr [ESP + 0x1b0],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005c050f: MOVSD ES:EDI,ESI
// 005c0510: MOVSD ES:EDI,ESI
// 005c0511: MOVSD ES:EDI,ESI
// 005c0512: MOVSD ES:EDI,ESI
// 005c0513: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x18c] (DATA)
// 005c0517: PUSH EAX
// 005c0518: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x1bc] (DATA)
// 005c051c: PUSH EAX
// 005c051d: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x1cc] (DATA)
// 005c0521: PUSH EAX
// 005c0522: LEA ESI,[ESP + 0x160]
//   XREF to: Stack[-0x8c] (DATA)
// 005c0529: LEA EDI,[ESP + 0xc0]
//   XREF to: Stack[-0x12c] (DATA)
// 005c0530: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005c0535: LEA ESI,[ESP + 0x160]
//   XREF to: Stack[-0x8c] (DATA)
// 005c053c: ADD ESP,0x8
// 005c053f: LEA EAX,[ESP + 0xb8]
//   XREF to: Stack[-0x12c] (DATA)
// 005c0546: MOVSD ES:EDI,ESI
// 005c0547: MOVSD ES:EDI,ESI
// 005c0548: MOVSD ES:EDI,ESI
// 005c0549: MOVSD ES:EDI,ESI
// 005c054a: PUSH EAX
// 005c054b: LEA ESI,[ESP + 0x16c]
//   XREF to: Stack[-0x7c] (DATA)
// 005c0552: LEA EDI,[ESP + 0xac]
//   XREF to: Stack[-0x13c] (DATA)
// 005c0559: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005c055e: LEA ESI,[ESP + 0x16c]
//   XREF to: Stack[-0x7c] (DATA)
// 005c0565: ADD ESP,0x8
// 005c0568: MOVSD ES:EDI,ESI
// 005c0569: MOVSD ES:EDI,ESI
// 005c056a: MOVSD ES:EDI,ESI
// 005c056b: MOVSD ES:EDI,ESI
// 005c056c: PUSH 0x59ddb0
//   XREF to: 0059ddb0 (DATA)
// 005c0571: MOV ESI,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x28] (READ)
// 005c0578: PUSH ESI
// 005c0579: LEA EAX,[ESP + 0xac]
//   XREF to: Stack[-0x13c] (DATA)
// 005c0580: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1e0] (READ)
// 005c0584: PUSH EAX
// 005c0585: MOV EDI,dword ptr [ESP + 0x1d4]
//   XREF to: Stack[-0x1c] (READ)
// 005c058c: PUSH EDI
// 005c058d: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059f750
//   XREF to: 0059f750 (UNCONDITIONAL_CALL)
// 005c0592: FLD float ptr [EBX + 0x1fc8c]
// 005c0598: ADD ESP,0x14
// 005c059b: FCOMP double ptr [0x00653944]
//   XREF to: 00653944 (READ)
// 005c05a1: FNSTSW AX
// 005c05a3: SAHF
// 005c05a4: JA 0x005c060c
//   XREF to: 005c060c (CONDITIONAL_JUMP)
// 005c05a6: MOV ESP,EBP
//   Label: LAB_005c05a6
// 005c05a8: POP EBP
// 005c05a9: POP EDI
// 005c05aa: POP ESI
// 005c05ab: POP EBX
// 005c05ac: RET
// 005c05ad: PUSH 0x3fc90fdb
//   Label: LAB_005c05ad
// 005c05b2: MOV EAX,[0x03f6bad8]
//   XREF to: 03f6bad8 (READ)
// 005c05b7: LEA ESI,[ESP + 0xc8]
//   XREF to: Stack[-0x11c] (DATA)
// 005c05be: MOV dword ptr [ESP + 0x1c0],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 005c05c5: MOV EAX,[0x03f6bae0]
//   XREF to: 03f6bae0 (READ)
// 005c05ca: LEA EDI,[ESP + 0x18]
//   XREF to: Stack[-0x1cc] (DATA)
// 005c05ce: MOV dword ptr [ESP + 0x1bc],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 005c05d5: CALL core_xform.cpp_quaternionFromAngleY_FUN_005f79f0
//   XREF to: 005f79f0 (UNCONDITIONAL_CALL)
// 005c05da: LEA ESI,[ESP + 0xc8]
//   XREF to: Stack[-0x11c] (DATA)
// 005c05e1: ADD ESP,0x4
// 005c05e4: MOVSD ES:EDI,ESI
// 005c05e5: MOVSD ES:EDI,ESI
// 005c05e6: MOVSD ES:EDI,ESI
// 005c05e7: MOVSD ES:EDI,ESI
// 005c05e8: PUSH 0x3fc90fdb
// 005c05ed: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0x1ac] (DATA)
// 005c05f1: LEA EDI,[ESP + 0x28]
//   XREF to: Stack[-0x1bc] (DATA)
// 005c05f5: CALL core_xform.cpp_quaternionFromAngleZ_FUN_005f7a30
//   XREF to: 005f7a30 (UNCONDITIONAL_CALL)
// 005c05fa: ADD ESP,0x4
// 005c05fd: LEA EAX,[EBX + 0x1fc08]
// 005c0603: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x1ac] (DATA)
// 005c0607: JMP 0x005c0326
//   XREF to: 005c0326 (UNCONDITIONAL_JUMP)
// 005c060c: PUSH 0x3fc90fdb
//   Label: LAB_005c060c
// 005c0611: LEA ESI,[ESP + 0x188]
//   XREF to: Stack[-0x5c] (DATA)
// 005c0618: LEA EDI,[ESP + 0xe8]
//   XREF to: Stack[-0xfc] (DATA)
// 005c061f: CALL core_xform.cpp_quaternionFromAngleX_FUN_005f79b0
//   XREF to: 005f79b0 (UNCONDITIONAL_CALL)
// 005c0624: ADD ESP,0x4
// 005c0627: LEA EAX,[ESP + 0xe4]
//   XREF to: Stack[-0xfc] (DATA)
// 005c062e: LEA ESI,[ESP + 0x184]
//   XREF to: Stack[-0x5c] (DATA)
// 005c0635: PUSH EAX
// 005c0636: LEA EAX,[ESP + 0x88]
//   XREF to: Stack[-0x15c] (DATA)
// 005c063d: MOVSD ES:EDI,ESI
// 005c063e: MOVSD ES:EDI,ESI
// 005c063f: MOVSD ES:EDI,ESI
// 005c0640: MOVSD ES:EDI,ESI
// 005c0641: PUSH EAX
// 005c0642: LEA ESI,[ESP + 0x10c]
//   XREF to: Stack[-0xdc] (DATA)
// 005c0649: LEA EDI,[ESP + 0xdc]
//   XREF to: Stack[-0x10c] (DATA)
// 005c0650: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 005c0655: LEA ESI,[ESP + 0x10c]
//   XREF to: Stack[-0xdc] (DATA)
// 005c065c: ADD ESP,0x8
// 005c065f: MOVSD ES:EDI,ESI
// 005c0660: MOVSD ES:EDI,ESI
// 005c0661: MOVSD ES:EDI,ESI
// 005c0662: MOVSD ES:EDI,ESI
// 005c0663: LEA EAX,[ESP + 0xd4]
//   XREF to: Stack[-0x10c] (DATA)
// 005c066a: PUSH dword ptr [EBX + 0x1fc8c]
// 005c0670: PUSH EAX
// 005c0671: MOV EAX,dword ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x2c] (READ)
// 005c0678: PUSH EAX
// 005c0679: LEA ESI,[ESP + 0x120]
//   XREF to: Stack[-0xcc] (DATA)
// 005c0680: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 005c0685: ADD ESP,0xc
// 005c0688: MOV EDI,dword ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x30] (READ)
// 005c068f: LEA ESI,[ESP + 0x114]
//   XREF to: Stack[-0xcc] (DATA)
// 005c0696: LEA EDI,[EDI + 0x808]
// 005c069c: MOVSD ES:EDI,ESI
// 005c069d: MOVSD ES:EDI,ESI
// 005c069e: MOVSD ES:EDI,ESI
// 005c069f: MOVSD ES:EDI,ESI
// 005c06a0: MOV ESP,EBP
// 005c06a2: POP EBP
// 005c06a3: POP EDI
// 005c06a4: POP ESI
// 005c06a5: POP EBX
// 005c06a6: RET
