// Name: core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50
// Address: 0059eb50
// Address Range: [[0059eb50, 0059f221]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50()
// Cross-references:
//   core_charactr.cpp_CCharacter_applyGesture_FUN_0042d3d0 (0042d3d0) at 0042d495 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_FUN_0042e570 (0042e570) at 0042e5b8 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4d80 (004d4d80) at 004d5329 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6d40 (004d6d40) at 004d6f65 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d6f80 (004d6f80) at 004d7050 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6906 [UNCONDITIONAL_CALL]
//   core_hostage.cpp_RelatedToRescuedTownsfolk_FUN_004f4bd0 (004f4bd0) at 004f5f18 [UNCONDITIONAL_CALL]
//   core_icepick.cpp_FUN_004f8810 (004f8810) at 004f8890 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_CMobster_aimTommyGun_FUN_005267a0 (005267a0) at 005269f2 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005582c0 (005582c0) at 0055845b [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e020 (0059e020) at 0059e059 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005be520 (005be520) at 005bf703 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bfb60 (005bfb60) at 005bfe79 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c02b0 (005c02b0) at 005c03ea [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\skeleton.cpp_0064edd0
//   TerminatedCString s_Write_me_0064ede5
//   undefined4 DAT_0064edf0
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_motion.cpp_CMotionController_FUN_0052e4c0
//   core_skeleton.cpp_CDeformableModel_FUN_0059a070
//   core_skeleton.cpp_CDeformableModel_FUN_0059a100
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   core_xform.cpp_negateFirstComponent_FUN_005f75e0
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2(undefined4
   param_1, undefined4 param_2, undefined4 param_3, undefined4 param_4, undefined4 param_5,
   undefined4 param_6) */

void core_skeleton_cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  int iVar8;
  CQuaternion4f *quat2_ptr;
  CQuaternion4f *pCVar9;
  BADSPACEBASE *in_ESP;
  CQuaternion4f *pCVar10;
  undefined4 *puVar12;
  float *pfVar13;
  float *pfVar14;
  undefined4 *puVar15;
  byte bVar16;
  int in_stack_00000004;
  CQuaternion4f *in_stack_00000010;
  int in_stack_00000014;
  code *in_stack_00000018;
  float afStackY_1940 [1023];
  CQuaternion4f *in_stack_fffff6c8;
  CQuaternion4f local_934 [100];
  int aiStack_2f4 [100];
  float fStack_164;
  float afStack_160 [7];
  CQuaternion4f CStack_144;
  undefined4 local_134;
  float afStack_130 [7];
  CQuaternion4f local_114;
  CQuaternion4f local_104;
  float local_f4;
  float afStack_f0 [7];
  CQuaternion4f local_d4;
  float local_c4;
  float afStack_c0 [3];
  CQuaternion4f local_b4 [4];
  float afStack_68 [3];
  int local_5c;
  int local_58;
  CQuaternion4f *local_4c;
  int local_48;
  int local_44;
  CQuaternion4f *local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  CQuaternion4f *local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  CQuaternion4f *local_18;
  undefined4 *puVar11;
  
  bVar16 = 0;
  if ((float)_DAT_0064edf0 < (float)in_stack_00000010) {
    core_motion_cpp_CMotionController_FUN_0052e4c0();
    iVar7 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
    if (*(int *)(in_stack_00000004 + 0x2250) == 0) {
      if (0 < *(int *)(iVar7 + 0x28558)) {
        local_2c = (CQuaternion4f *)(in_stack_00000004 + 0x6b0);
        local_34 = in_stack_00000004;
        local_1c = 0;
        do {
          iVar8 = core_skeleton_cpp_CDeformableModel_FUN_0059a100();
          if (-1 < iVar8) {
            quat2_ptr = (CQuaternion4f *)(*in_stack_00000018)();
            local_18 = quat2_ptr;
            core_skeleton_cpp_CDeformableModel_FUN_0059a070();
            pCVar9 = local_2c;
            pCVar10 = &CStack_144;
            CStack_144.w = fStack_164;
            pfVar13 = (float *)((int)&CStack_144 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
            *(float *)((int)&CStack_144 + (uint)bVar16 * -8 + 4) = afStack_160[(uint)bVar16 * -2];
            *pfVar13 = afStack_160[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
            pfVar13[(uint)bVar16 * -2 + 1] =
                 (afStack_160 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (pCVar9,pCVar10,quat2_ptr,(float)in_stack_fffff6c8);
            pfVar13 = (float *)(local_34 + 0x6b4 + (uint)bVar16 * -8);
            *(float *)(local_34 + 0x6b0) = afStack_160[3];
            pfVar14 = pfVar13 + (uint)bVar16 * -2 + 1;
            *pfVar13 = afStack_160[(uint)bVar16 * -2 + 4];
            *pfVar14 = afStack_160[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 5];
            pfVar14[(uint)bVar16 * -2 + 1] =
                 (afStack_160 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 5)[(uint)bVar16 * -2 + 1];
          }
          local_34 = local_34 + 0x10;
          local_2c = local_2c + 1;
          local_1c = local_1c + 1;
        } while (local_1c < *(int *)(iVar7 + 0x28558));
      }
    }
    else if (*(int *)(in_stack_00000004 + 0x2250) == 1) {
      local_20 = 0;
      if (0 < *(int *)(iVar7 + 0x28558)) {
        local_44 = 0;
        local_28 = 0;
        do {
          iVar8 = core_skeleton_cpp_CDeformableModel_FUN_0059a100();
          *(int *)((int)aiStack_2f4 + local_28) = iVar8;
          if (-1 < iVar8) {
            core_skeleton_cpp_CDeformableModel_FUN_0059a070();
            pfVar13 = (float *)((int)local_934 + (uint)bVar16 * -8 + local_44 + 4);
            *(float *)((int)&local_934[0].w + local_44) = afStack_130[3];
            pfVar14 = pfVar13 + (uint)bVar16 * -2 + 1;
            *pfVar13 = afStack_130[(uint)bVar16 * -2 + 4];
            *pfVar14 = afStack_130[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 5];
            pfVar14[(uint)bVar16 * -2 + 1] =
                 (afStack_130 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 5)[(uint)bVar16 * -2 + 1];
          }
          local_20 = local_20 + 1;
          local_28 = local_28 + 4;
          local_44 = local_44 + 0x10;
        } while (local_20 < *(int *)(iVar7 + 0x28558));
      }
      iVar8 = *(int *)(iVar7 + 0x2857c + in_stack_00000014 * 0x24);
      if (-1 < iVar8) {
        core_skeleton_cpp_CDeformableModel_FUN_0059a070();
        pfVar13 = (float *)((int)local_934 + (uint)bVar16 * -8 + iVar8 * 0x10 + 4);
        local_934[iVar8].w = local_f4;
        pfVar14 = pfVar13 + (uint)bVar16 * -2 + 1;
        *pfVar13 = afStack_f0[(uint)bVar16 * -2];
        *pfVar14 = afStack_f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
        pfVar14[(uint)bVar16 * -2 + 1] =
             (afStack_f0 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
      }
      local_24 = 0;
      if (0 < *(int *)(iVar7 + 0x28558)) {
        local_4c = (CQuaternion4f *)(in_stack_00000004 + 0x6b0);
        local_3c = 0;
        local_38 = in_stack_00000004;
        local_30 = iVar7;
        local_40 = (CQuaternion4f *)(in_stack_00000004 + 0x6b0);
        do {
          if (-1 < *(int *)((int)aiStack_2f4 + local_3c)) {
            iVar8 = *(int *)(local_30 + 0x2857c);
            local_48 = local_24 * 0x10;
            if (iVar8 < 0) {
              pCVar10 = local_934 + local_24;
            }
            else {
              local_18 = (CQuaternion4f *)(iVar8 * 0x10);
              core_xform_cpp_negateFirstComponent_FUN_005f75e0(local_934 + iVar8,in_stack_fffff6c8);
              pCVar10 = local_b4;
              pCVar9 = (CQuaternion4f *)((int)&local_934[0].w + local_48);
              local_b4[0].w = afStack_f0[3];
              pfVar13 = (float *)((int)local_b4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
              *(float *)((int)local_b4 + (uint)bVar16 * -8 + 4) = afStack_f0[(uint)bVar16 * -2 + 4];
              *pfVar13 = afStack_f0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 5];
              pfVar13[(uint)bVar16 * -2 + 1] =
                   (afStack_f0 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 5)[(uint)bVar16 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(pCVar9,pCVar10,in_stack_fffff6c8);
              pCVar10 = (CQuaternion4f *)((int)&local_18->w + (int)&local_4c->w);
              local_114.w = local_c4;
              pfVar13 = (float *)((int)&local_104 + ((uint)bVar16 * -2 + (uint)bVar16 * -2 + -2) * 4
                                 );
              *(float *)((int)&local_104 + ((uint)bVar16 * -2 + -3) * 4) =
                   afStack_c0[(uint)bVar16 * -2];
              *pfVar13 = afStack_c0[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
              pfVar13[(uint)bVar16 * -2 + 1] =
                   (afStack_c0 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
              core_xform_cpp_multiplyQuaternion_FUN_005f7640(&local_114,pCVar10,in_stack_fffff6c8);
              pCVar10 = &local_104;
            }
            puVar11 = (undefined4 *)((int)pCVar10 + ((uint)bVar16 * -2 + 1) * 4);
            local_d4.w = pCVar10->w;
            puVar15 = (undefined4 *)((int)&local_d4 + (uint)bVar16 * -8 + (uint)bVar16 * -8 + 8);
            puVar12 = puVar11 + (uint)bVar16 * -2 + 1;
            *(undefined4 *)((int)&local_d4 + (uint)bVar16 * -8 + 4) = *puVar11;
            *puVar15 = *puVar12;
            puVar15[(uint)bVar16 * -2 + 1] = puVar12[(uint)bVar16 * -2 + 1];
            core_xform_cpp_slerpQuaternion_FUN_005f77e0
                      (local_40,&local_d4,in_stack_00000010,(float)in_stack_fffff6c8);
            pfVar13 = (float *)(local_38 + 0x6b4 + (uint)bVar16 * -8);
            *(undefined4 *)(local_38 + 0x6b0) = local_134;
            pfVar14 = pfVar13 + (uint)bVar16 * -2 + 1;
            *pfVar13 = afStack_130[(uint)bVar16 * -2];
            *pfVar14 = afStack_130[(uint)bVar16 * -2 + (uint)bVar16 * -2 + 1];
            pfVar14[(uint)bVar16 * -2 + 1] =
                 (afStack_130 + (uint)bVar16 * -2 + (uint)bVar16 * -2 + 1)[(uint)bVar16 * -2 + 1];
          }
          local_24 = local_24 + 1;
          local_3c = local_3c + 4;
          local_30 = local_30 + 0x24;
          local_38 = local_38 + 0x10;
          local_40 = local_40 + 1;
        } while (local_24 < *(int *)(iVar7 + 0x28558));
      }
    }
    else {
      g_CurrentFilename = "MbP?..\\core\\skeleton.cpp" + 4;
      g_CurrentLineNumber = 0xa82;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Write me!");
    }
    if (in_stack_00000014 < 0) {
      local_5c = local_5c * 0xc;
      iVar8 = *(int *)(iVar7 + 0x29374);
      fVar1 = *(float *)(local_5c + 4 + iVar8);
      fVar2 = *(float *)(local_5c + 8 + iVar8);
      fVar5 = 1.0 - (float)in_stack_fffff6c8;
      local_58 = local_58 * 0xc;
      iVar7 = *(int *)(iVar7 + 0x29374);
      fVar3 = *(float *)(local_58 + 4 + iVar7);
      fVar4 = *(float *)(local_58 + 8 + iVar7);
      fVar6 = 1.0 - (float)in_stack_00000010;
      pfVar13 = (float *)(in_stack_00000004 + 0x6a4);
      if (pfVar13 != afStack_68) {
        *pfVar13 = *pfVar13 * fVar6 +
                   (*(float *)(local_58 + iVar7) * fVar5 +
                   *(float *)(local_5c + iVar8) * (float)in_stack_fffff6c8) *
                   *(float *)(in_stack_00000004 + 0x508) * (float)in_stack_00000010;
        *(float *)(in_stack_00000004 + 0x6a8) =
             *(float *)(in_stack_00000004 + 0x6a8) * fVar6 +
             (fVar3 * fVar5 + fVar1 * (float)in_stack_fffff6c8) *
             *(float *)(in_stack_00000004 + 0x50c) * (float)in_stack_00000010;
        *(float *)(in_stack_00000004 + 0x6ac) =
             *(float *)(in_stack_00000004 + 0x6ac) * fVar6 +
             (fVar4 * fVar5 + fVar2 * (float)in_stack_fffff6c8) *
             *(float *)(in_stack_00000004 + 0x510) * (float)in_stack_00000010;
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 0059eb50: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_UnkSomethingWriteMe2_FUN_0059eb50
// 0059eb51: PUSH ESI
// 0059eb52: PUSH EDI
// 0059eb53: PUSH EBP
// 0059eb54: MOV EBP,ESP
// 0059eb56: SUB ESP,0x924
// 0059eb5c: AND ESP,0xfffffff8
// 0059eb5f: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0059eb62: FCOMP double ptr [0x0064edf0]
//   XREF to: 0064edf0 (READ)
// 0059eb68: FNSTSW AX
// 0059eb6a: SAHF
// 0059eb6b: JA 0x0059eb74
//   XREF to: 0059eb74 (CONDITIONAL_JUMP)
// 0059eb6d: MOV ESP,EBP
//   Label: LAB_0059eb6d
// 0059eb6f: POP EBP
// 0059eb70: POP EDI
// 0059eb71: POP ESI
// 0059eb72: POP EBX
// 0059eb73: RET
// 0059eb74: MOV EAX,ESP
//   Label: LAB_0059eb74
// 0059eb76: PUSH EAX
// 0059eb77: LEA EAX,[ESP + 0x8e0]
//   XREF to: Stack[-0x5c] (DATA)
// 0059eb7e: PUSH EAX
// 0059eb7f: LEA EAX,[ESP + 0x8e8]
//   XREF to: Stack[-0x58] (DATA)
// 0059eb86: PUSH EAX
// 0059eb87: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0059eb8a: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0059eb8d: PUSH EDX
// 0059eb8e: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059eb91: PUSH ECX
// 0059eb92: CALL core_motion.cpp_CMotionController_FUN_0052e4c0
//   XREF to: 0052e4c0 (UNCONDITIONAL_CALL)
// 0059eb97: ADD ESP,0x18
// 0059eb9a: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059eb9d: PUSH EBX
// 0059eb9e: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 0059eba3: ADD ESP,0x4
// 0059eba6: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059eba9: MOV EDI,dword ptr [ESI + 0x2250]
// 0059ebaf: MOV EBX,EAX
// 0059ebb1: TEST EDI,EDI
// 0059ebb3: JNZ 0x0059eefc
//   XREF to: 0059eefc (CONDITIONAL_JUMP)
// 0059ebb9: MOV ESI,dword ptr [EAX + 0x28558]
// 0059ebbf: MOV dword ptr [ESP + 0x91c],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 0059ebc6: TEST ESI,ESI
// 0059ebc8: JLE 0x0059ecd9
//   XREF to: 0059ecd9 (CONDITIONAL_JUMP)
// 0059ebce: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ebd1: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ebd4: ADD EAX,0x6b0
// 0059ebd9: MOV dword ptr [ESP + 0x904],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 0059ebe0: MOV dword ptr [ESP + 0x90c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059ebe7: MOV ESI,dword ptr [EBP + 0x24]
//   Label: LAB_0059ebe7
//   XREF to: Stack[0x14] (READ)
// 0059ebea: PUSH ESI
// 0059ebeb: MOV EDI,dword ptr [ESP + 0x920]
//   XREF to: Stack[-0x1c] (READ)
// 0059ebf2: PUSH EDI
// 0059ebf3: PUSH EBX
// 0059ebf4: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059ebf9: ADD ESP,0xc
// 0059ebfc: TEST EAX,EAX
// 0059ebfe: JL 0x0059ec9a
//   XREF to: 0059ec9a (CONDITIONAL_JUMP)
// 0059ec04: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059ec07: PUSH EDX
// 0059ec08: PUSH EAX
// 0059ec09: PUSH dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0059ec0c: PUSH ESI
// 0059ec0d: PUSH EDI
// 0059ec0e: CALL dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0059ec11: MOV dword ptr [ESP + 0x934],EAX
// 0059ec18: FLD float ptr [ESP + 0x934]
// 0059ec1f: ADD ESP,0x14
// 0059ec22: SUB ESP,0x4
// 0059ec25: MOV ESI,EDI
// 0059ec27: FSTP float ptr [ESP]
// 0059ec2a: MOV EDI,dword ptr [ESP + 0x8e0]
// 0059ec31: PUSH dword ptr [ESP + 0x4]
// 0059ec35: PUSH EDI
// 0059ec36: MOV EAX,dword ptr [ESP + 0x8ec]
// 0059ec3d: PUSH EAX
// 0059ec3e: MOV EDX,ESI
// 0059ec40: PUSH EDX
// 0059ec41: PUSH EBX
// 0059ec42: LEA ESI,[ESP + 0x7ec]
// 0059ec49: LEA EDI,[ESP + 0x80c]
// 0059ec50: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 0059ec55: LEA ESI,[ESP + 0x7ec]
// 0059ec5c: ADD ESP,0x14
// 0059ec5f: LEA EAX,[ESP + 0x7f8]
// 0059ec66: MOV ECX,dword ptr [ESP + 0x910]
// 0059ec6d: PUSH EAX
// 0059ec6e: MOVSD ES:EDI,ESI
// 0059ec6f: MOVSD ES:EDI,ESI
// 0059ec70: MOVSD ES:EDI,ESI
// 0059ec71: MOVSD ES:EDI,ESI
// 0059ec72: PUSH ECX
// 0059ec73: LEA ESI,[ESP + 0x7f0]
// 0059ec7a: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0059ec7f: ADD ESP,0xc
// 0059ec82: MOV EDI,dword ptr [ESP + 0x904]
// 0059ec89: LEA ESI,[ESP + 0x7e4]
// 0059ec90: LEA EDI,[EDI + 0x6b0]
// 0059ec96: MOVSD ES:EDI,ESI
// 0059ec97: MOVSD ES:EDI,ESI
// 0059ec98: MOVSD ES:EDI,ESI
// 0059ec99: MOVSD ES:EDI,ESI
// 0059ec9a: MOV EDI,dword ptr [ESP + 0x904]
//   Label: LAB_0059ec9a
//   XREF to: Stack[-0x34] (READ)
// 0059eca1: MOV EAX,dword ptr [ESP + 0x90c]
//   XREF to: Stack[-0x2c] (READ)
// 0059eca8: MOV EDX,dword ptr [ESP + 0x91c]
//   XREF to: Stack[-0x1c] (READ)
// 0059ecaf: MOV ECX,dword ptr [EBX + 0x28558]
// 0059ecb5: ADD EDI,0x10
// 0059ecb8: ADD EAX,0x10
// 0059ecbb: INC EDX
// 0059ecbc: MOV dword ptr [ESP + 0x904],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 0059ecc3: MOV dword ptr [ESP + 0x90c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059ecca: MOV dword ptr [ESP + 0x91c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0059ecd1: CMP EDX,ECX
// 0059ecd3: JL 0x0059ebe7
//   XREF to: 0059ebe7 (CONDITIONAL_JUMP)
// 0059ecd9: CMP dword ptr [EBP + 0x24],0x0
//   Label: LAB_0059ecd9
//   XREF to: Stack[0x14] (READ)
// 0059ecdd: JGE 0x0059eb6d
//   XREF to: 0059eb6d (CONDITIONAL_JUMP)
// 0059ece3: MOV ESI,dword ptr [ESP + 0x8dc]
//   XREF to: Stack[-0x5c] (READ)
// 0059ecea: LEA EAX,[ESI*0x4 + 0x0]
// 0059ecf1: SUB EAX,ESI
// 0059ecf3: LEA ESI,[EAX*0x4 + 0x0]
// 0059ecfa: MOV EAX,dword ptr [EBX + 0x29374]
// 0059ed00: FLD float ptr [ESI + EAX*0x1]
// 0059ed03: FMUL float ptr [ESP]
//   XREF to: Stack[-0x938] (DATA)
// 0059ed06: FSTP float ptr [ESP + 0x8b8]
//   XREF to: Stack[-0x80] (WRITE)
// 0059ed0d: FLD float ptr [ESI + EAX*0x1 + 0x4]
// 0059ed11: FMUL float ptr [ESP]
//   XREF to: Stack[-0x938] (DATA)
// 0059ed14: FSTP float ptr [ESP + 0x8bc]
//   XREF to: Stack[-0x7c] (WRITE)
// 0059ed1b: FLD float ptr [ESI + EAX*0x1 + 0x8]
// 0059ed1f: FMUL float ptr [ESP]
//   XREF to: Stack[-0x938] (DATA)
// 0059ed22: MOV ESI,dword ptr [ESP + 0x8e0]
//   XREF to: Stack[-0x58] (READ)
// 0059ed29: FLD float ptr [ESP]
//   XREF to: Stack[-0x938] (DATA)
// 0059ed2c: LEA EAX,[ESI*0x4 + 0x0]
// 0059ed33: FLD1
// 0059ed35: SUB EAX,ESI
// 0059ed37: FSUBRP
// 0059ed39: LEA ESI,[EAX*0x4 + 0x0]
// 0059ed40: FXCH
// 0059ed42: FSTP float ptr [ESP + 0x8c0]
// 0059ed49: MOV EAX,dword ptr [EBX + 0x29374]
// 0059ed4f: FSTP float ptr [ESP + 0x8e4]
// 0059ed56: FLD float ptr [ESI + EAX*0x1]
// 0059ed59: FMUL float ptr [ESP + 0x8e4]
// 0059ed60: FSTP float ptr [ESP + 0x8ac]
// 0059ed67: FLD float ptr [ESI + EAX*0x1 + 0x4]
// 0059ed6b: FMUL float ptr [ESP + 0x8e4]
// 0059ed72: FSTP float ptr [ESP + 0x8b0]
// 0059ed79: FLD float ptr [ESI + EAX*0x1 + 0x8]
// 0059ed7d: FMUL float ptr [ESP + 0x8e4]
// 0059ed84: FLD float ptr [ESP + 0x8ac]
// 0059ed8b: FADD float ptr [ESP + 0x8b8]
// 0059ed92: FLD float ptr [ESP + 0x8b0]
// 0059ed99: FXCH
// 0059ed9b: FSTP float ptr [ESP + 0x8c4]
// 0059eda2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059eda5: FLD float ptr [ESP + 0x8c4]
// 0059edac: FXCH
// 0059edae: FADD float ptr [ESP + 0x8bc]
// 0059edb5: FXCH ST2
// 0059edb7: FST float ptr [ESP + 0x8b4]
// 0059edbe: FADD float ptr [ESP + 0x8c0]
// 0059edc5: FXCH ST2
// 0059edc7: FSTP float ptr [ESP + 0x8c8]
// 0059edce: FXCH
// 0059edd0: FSTP float ptr [ESP + 0x8cc]
// 0059edd7: FMUL float ptr [EAX + 0x508]
// 0059eddd: FLD float ptr [ESP + 0x8c8]
// 0059ede4: FXCH
// 0059ede6: FSTP float ptr [ESP + 0x8c4]
// 0059eded: FMUL float ptr [EAX + 0x50c]
// 0059edf3: FLD float ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0059edf6: FLD float ptr [ESP + 0x8c4]
// 0059edfd: FMUL ST1
// 0059edff: FLD float ptr [ESP + 0x8cc]
// 0059ee06: FXCH ST3
// 0059ee08: FSTP float ptr [ESP + 0x8c8]
// 0059ee0f: FXCH ST2
// 0059ee11: FMUL float ptr [EAX + 0x510]
// 0059ee17: FLD float ptr [ESP + 0x8c8]
// 0059ee1e: FMUL ST2
// 0059ee20: FLD ST2
// 0059ee22: FLD1
// 0059ee24: FSUBRP
// 0059ee26: FXCH ST2
// 0059ee28: FST float ptr [ESP + 0x8cc]
// 0059ee2f: FMULP ST3
// 0059ee31: FXCH
// 0059ee33: FSTP float ptr [ESP + 0x8e8]
// 0059ee3a: LEA EBX,[EAX + 0x6a4]
// 0059ee40: FXCH ST2
// 0059ee42: FSTP float ptr [ESP + 0x8a0]
// 0059ee49: FXCH
// 0059ee4b: FSTP float ptr [ESP + 0x8a4]
// 0059ee52: FSTP float ptr [ESP + 0x8a8]
// 0059ee59: FLD float ptr [EBX]
// 0059ee5b: FMUL float ptr [ESP + 0x8e8]
// 0059ee62: FSTP float ptr [ESP + 0x894]
// 0059ee69: FLD float ptr [EBX + 0x4]
// 0059ee6c: FMUL float ptr [ESP + 0x8e8]
// 0059ee73: FSTP float ptr [ESP + 0x898]
// 0059ee7a: FLD float ptr [EBX + 0x8]
// 0059ee7d: FMUL float ptr [ESP + 0x8e8]
// 0059ee84: LEA EAX,[ESP + 0x8d0]
// 0059ee8b: FLD float ptr [ESP + 0x894]
// 0059ee92: FADD float ptr [ESP + 0x8a0]
// 0059ee99: FLD float ptr [ESP + 0x898]
// 0059eea0: FXCH
// 0059eea2: FSTP float ptr [ESP + 0x8d0]
// 0059eea9: FADD float ptr [ESP + 0x8a4]
// 0059eeb0: FXCH
// 0059eeb2: FST float ptr [ESP + 0x89c]
// 0059eeb9: FADD float ptr [ESP + 0x8a8]
// 0059eec0: FXCH
// 0059eec2: FSTP float ptr [ESP + 0x8d4]
// 0059eec9: FSTP float ptr [ESP + 0x8d8]
// 0059eed0: CMP EBX,EAX
// 0059eed2: JZ 0x0059eb6d
//   XREF to: 0059eb6d (CONDITIONAL_JUMP)
// 0059eed8: MOV EAX,dword ptr [ESP + 0x8d0]
// 0059eedf: MOV dword ptr [EBX],EAX
// 0059eee1: MOV EAX,dword ptr [ESP + 0x8d4]
// 0059eee8: MOV dword ptr [EBX + 0x4],EAX
// 0059eeeb: MOV EAX,dword ptr [ESP + 0x8d8]
// 0059eef2: MOV dword ptr [EBX + 0x8],EAX
// 0059eef5: MOV ESP,EBP
// 0059eef7: POP EBP
// 0059eef8: POP EDI
// 0059eef9: POP ESI
// 0059eefa: POP EBX
// 0059eefb: RET
// 0059eefc: CMP EDI,0x1
//   Label: LAB_0059eefc
// 0059eeff: JNZ 0x0059f1fa
//   XREF to: 0059f1fa (CONDITIONAL_JUMP)
// 0059ef05: XOR EDI,EDI
// 0059ef07: MOV EDX,dword ptr [EAX + 0x28558]
// 0059ef0d: MOV dword ptr [ESP + 0x918],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0059ef14: TEST EDX,EDX
// 0059ef16: JLE 0x0059ef8c
//   XREF to: 0059ef8c (CONDITIONAL_JUMP)
// 0059ef18: MOV dword ptr [ESP + 0x8f4],EDI
//   XREF to: Stack[-0x44] (WRITE)
// 0059ef1f: MOV dword ptr [ESP + 0x910],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0059ef26: MOV EAX,dword ptr [EBP + 0x24]
//   Label: LAB_0059ef26
//   XREF to: Stack[0x14] (READ)
// 0059ef29: PUSH EAX
// 0059ef2a: MOV EDX,dword ptr [ESP + 0x91c]
//   XREF to: Stack[-0x20] (READ)
// 0059ef31: PUSH EDX
// 0059ef32: PUSH EBX
// 0059ef33: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a100
//   XREF to: 0059a100 (UNCONDITIONAL_CALL)
// 0059ef38: ADD ESP,0xc
// 0059ef3b: MOV ESI,dword ptr [ESP + 0x910]
//   XREF to: Stack[-0x28] (READ)
// 0059ef42: MOV dword ptr [ESP + ESI*0x1 + 0x644],EAX
// 0059ef49: TEST EAX,EAX
// 0059ef4b: JGE 0x0059f10b
//   XREF to: 0059f10b (CONDITIONAL_JUMP)
// 0059ef51: MOV EDI,dword ptr [ESP + 0x910]
//   Label: LAB_0059ef51
//   XREF to: Stack[-0x28] (READ)
// 0059ef58: MOV EAX,dword ptr [ESP + 0x8f4]
//   XREF to: Stack[-0x44] (READ)
// 0059ef5f: MOV EDX,dword ptr [ESP + 0x918]
//   XREF to: Stack[-0x20] (READ)
// 0059ef66: MOV ECX,dword ptr [EBX + 0x28558]
// 0059ef6c: ADD EDI,0x4
// 0059ef6f: ADD EAX,0x10
// 0059ef72: INC EDX
// 0059ef73: MOV dword ptr [ESP + 0x910],EDI
//   XREF to: Stack[-0x28] (WRITE)
// 0059ef7a: MOV dword ptr [ESP + 0x8f4],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0059ef81: MOV dword ptr [ESP + 0x918],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0059ef88: CMP EDX,ECX
// 0059ef8a: JL 0x0059ef26
//   XREF to: 0059ef26 (CONDITIONAL_JUMP)
// 0059ef8c: MOV ESI,dword ptr [EBP + 0x24]
//   Label: LAB_0059ef8c
//   XREF to: Stack[0x14] (READ)
// 0059ef8f: LEA EAX,[ESI*0x8 + 0x0]
// 0059ef96: ADD EAX,ESI
// 0059ef98: MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2857c]
// 0059ef9f: TEST EDI,EDI
// 0059efa1: JL 0x0059efd9
//   XREF to: 0059efd9 (CONDITIONAL_JUMP)
// 0059efa3: MOV ESI,dword ptr [ESP + 0x8dc]
//   XREF to: Stack[-0x5c] (READ)
// 0059efaa: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x938] (DATA)
// 0059efad: PUSH ESI
// 0059efae: MOV EAX,dword ptr [ESP + 0x8e8]
//   XREF to: Stack[-0x58] (READ)
// 0059efb5: PUSH EAX
// 0059efb6: PUSH EDI
// 0059efb7: PUSH EBX
// 0059efb8: LEA ESI,[ESP + 0x858]
//   XREF to: Stack[-0xf4] (DATA)
// 0059efbf: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 0059efc4: SHL EDI,0x4
// 0059efc7: ADD ESP,0x14
// 0059efca: LEA ESI,[ESP + 0x844]
//   XREF to: Stack[-0xf4] (DATA)
// 0059efd1: LEA EDI,[ESP + EDI*0x1 + 0x4]
// 0059efd5: MOVSD ES:EDI,ESI
// 0059efd6: MOVSD ES:EDI,ESI
// 0059efd7: MOVSD ES:EDI,ESI
// 0059efd8: MOVSD ES:EDI,ESI
// 0059efd9: XOR EDX,EDX
//   Label: LAB_0059efd9
// 0059efdb: MOV ECX,dword ptr [EBX + 0x28558]
// 0059efe1: MOV dword ptr [ESP + 0x914],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0059efe8: TEST ECX,ECX
// 0059efea: JLE 0x0059ecd9
//   XREF to: 0059ecd9 (CONDITIONAL_JUMP)
// 0059eff0: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059eff3: ADD EAX,0x6b0
// 0059eff8: MOV dword ptr [ESP + 0x8ec],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0059efff: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0059f002: MOV dword ptr [ESP + 0x8fc],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0059f009: MOV dword ptr [ESP + 0x900],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0059f010: MOV EAX,dword ptr [ESP + 0x8ec]
//   XREF to: Stack[-0x4c] (READ)
// 0059f017: MOV dword ptr [ESP + 0x908],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0059f01e: MOV dword ptr [ESP + 0x8f8],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0059f025: MOV EAX,dword ptr [ESP + 0x8fc]
//   Label: LAB_0059f025
//   XREF to: Stack[-0x3c] (READ)
// 0059f02c: CMP dword ptr [ESP + EAX*0x1 + 0x644],0x0
// 0059f034: JL 0x0059f0a5
//   XREF to: 0059f0a5 (CONDITIONAL_JUMP)
// 0059f036: MOV ESI,dword ptr [ESP + 0x914]
//   XREF to: Stack[-0x24] (READ)
// 0059f03d: MOV EAX,dword ptr [ESP + 0x908]
//   XREF to: Stack[-0x30] (READ)
// 0059f044: SHL ESI,0x4
// 0059f047: MOV EAX,dword ptr [EAX + 0x2857c]
// 0059f04d: MOV dword ptr [ESP + 0x8f0],ESI
//   XREF to: Stack[-0x48] (WRITE)
// 0059f054: TEST EAX,EAX
// 0059f056: JGE 0x0059f151
//   XREF to: 0059f151 (CONDITIONAL_JUMP)
// 0059f05c: LEA EDI,[ESP + 0x864]
//   XREF to: Stack[-0xd4] (DATA)
// 0059f063: LEA ESI,[ESP + ESI*0x1 + 0x4]
// 0059f067: MOVSD ES:EDI,ESI
//   Label: LAB_0059f067
// 0059f068: MOVSD ES:EDI,ESI
// 0059f069: MOVSD ES:EDI,ESI
// 0059f06a: MOVSD ES:EDI,ESI
// 0059f06b: LEA EAX,[ESP + 0x864]
//   XREF to: Stack[-0xd4] (DATA)
// 0059f072: PUSH dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0059f075: PUSH EAX
// 0059f076: MOV ESI,dword ptr [ESP + 0x900]
//   XREF to: Stack[-0x40] (READ)
// 0059f07d: PUSH ESI
// 0059f07e: LEA ESI,[ESP + 0x810]
//   XREF to: Stack[-0x134] (DATA)
// 0059f085: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 0059f08a: ADD ESP,0xc
// 0059f08d: MOV EDI,dword ptr [ESP + 0x900]
//   XREF to: Stack[-0x38] (READ)
// 0059f094: LEA ESI,[ESP + 0x804]
//   XREF to: Stack[-0x134] (DATA)
// 0059f09b: LEA EDI,[EDI + 0x6b0]
// 0059f0a1: MOVSD ES:EDI,ESI
// 0059f0a2: MOVSD ES:EDI,ESI
// 0059f0a3: MOVSD ES:EDI,ESI
// 0059f0a4: MOVSD ES:EDI,ESI
// 0059f0a5: MOV EDX,dword ptr [ESP + 0x8fc]
//   Label: LAB_0059f0a5
//   XREF to: Stack[-0x3c] (READ)
// 0059f0ac: MOV ECX,dword ptr [ESP + 0x908]
//   XREF to: Stack[-0x30] (READ)
// 0059f0b3: MOV ESI,dword ptr [ESP + 0x900]
//   XREF to: Stack[-0x38] (READ)
// 0059f0ba: MOV EDI,dword ptr [ESP + 0x8f8]
//   XREF to: Stack[-0x40] (READ)
// 0059f0c1: MOV EAX,dword ptr [ESP + 0x914]
//   XREF to: Stack[-0x24] (READ)
// 0059f0c8: ADD EDX,0x4
// 0059f0cb: ADD ECX,0x24
// 0059f0ce: ADD ESI,0x10
// 0059f0d1: ADD EDI,0x10
// 0059f0d4: INC EAX
// 0059f0d5: MOV dword ptr [ESP + 0x8fc],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 0059f0dc: MOV dword ptr [ESP + 0x908],ECX
//   XREF to: Stack[-0x30] (WRITE)
// 0059f0e3: MOV dword ptr [ESP + 0x900],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 0059f0ea: MOV dword ptr [ESP + 0x8f8],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 0059f0f1: MOV EDX,dword ptr [EBX + 0x28558]
// 0059f0f7: MOV dword ptr [ESP + 0x914],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0059f0fe: CMP EAX,EDX
// 0059f100: JGE 0x0059ecd9
//   XREF to: 0059ecd9 (CONDITIONAL_JUMP)
// 0059f106: JMP 0x0059f025
//   XREF to: 0059f025 (UNCONDITIONAL_JUMP)
// 0059f10b: MOV ESI,dword ptr [ESP + 0x8dc]
//   Label: LAB_0059f10b
//   XREF to: Stack[-0x5c] (READ)
// 0059f112: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x938] (DATA)
// 0059f115: PUSH ESI
// 0059f116: MOV EDI,dword ptr [ESP + 0x8e8]
//   XREF to: Stack[-0x58] (READ)
// 0059f11d: PUSH EDI
// 0059f11e: MOV EAX,dword ptr [ESP + 0x924]
//   XREF to: Stack[-0x20] (READ)
// 0059f125: PUSH EAX
// 0059f126: PUSH EBX
// 0059f127: LEA ESI,[ESP + 0x828]
//   XREF to: Stack[-0x124] (DATA)
// 0059f12e: CALL core_skeleton.cpp_CDeformableModel_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 0059f133: ADD ESP,0x14
// 0059f136: MOV EDI,dword ptr [ESP + 0x8f4]
//   XREF to: Stack[-0x44] (READ)
// 0059f13d: LEA ESI,[ESP + 0x814]
//   XREF to: Stack[-0x124] (DATA)
// 0059f144: LEA EDI,[ESP + EDI*0x1 + 0x4]
// 0059f148: MOVSD ES:EDI,ESI
// 0059f149: MOVSD ES:EDI,ESI
// 0059f14a: MOVSD ES:EDI,ESI
// 0059f14b: MOVSD ES:EDI,ESI
// 0059f14c: JMP 0x0059ef51
//   XREF to: 0059ef51 (UNCONDITIONAL_JUMP)
// 0059f151: SHL EAX,0x4
//   Label: LAB_0059f151
// 0059f154: MOV dword ptr [ESP + 0x920],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0059f15b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x934] (DATA)
// 0059f15f: ADD EAX,dword ptr [ESP + 0x920]
//   XREF to: Stack[-0x18] (READ)
// 0059f166: PUSH EAX
// 0059f167: LEA ESI,[ESP + 0x858]
//   XREF to: Stack[-0xe4] (DATA)
// 0059f16e: LEA EDI,[ESP + 0x888]
//   XREF to: Stack[-0xb4] (DATA)
// 0059f175: CALL core_xform.cpp_negateFirstComponent_FUN_005f75e0
//   XREF to: 005f75e0 (UNCONDITIONAL_CALL)
// 0059f17a: ADD ESP,0x4
// 0059f17d: LEA EAX,[ESP + 0x884]
//   XREF to: Stack[-0xb4] (DATA)
// 0059f184: MOV EDX,dword ptr [ESP + 0x8f0]
//   XREF to: Stack[-0x48] (READ)
// 0059f18b: PUSH EAX
// 0059f18c: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x934] (DATA)
// 0059f190: LEA ESI,[ESP + 0x858]
//   XREF to: Stack[-0xe4] (DATA)
// 0059f197: ADD EAX,EDX
// 0059f199: MOVSD ES:EDI,ESI
// 0059f19a: MOVSD ES:EDI,ESI
// 0059f19b: MOVSD ES:EDI,ESI
// 0059f19c: MOVSD ES:EDI,ESI
// 0059f19d: PUSH EAX
// 0059f19e: LEA ESI,[ESP + 0x87c]
//   XREF to: Stack[-0xc4] (DATA)
// 0059f1a5: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059f1aa: ADD ESP,0x8
// 0059f1ad: MOV EAX,dword ptr [ESP + 0x8ec]
//   XREF to: Stack[-0x4c] (READ)
// 0059f1b4: MOV ECX,dword ptr [ESP + 0x920]
//   XREF to: Stack[-0x18] (READ)
// 0059f1bb: LEA EDI,[ESP + 0x824]
//   XREF to: Stack[-0x114] (DATA)
// 0059f1c2: ADD EAX,ECX
// 0059f1c4: LEA ESI,[ESP + 0x874]
//   XREF to: Stack[-0xc4] (DATA)
// 0059f1cb: PUSH EAX
// 0059f1cc: LEA EAX,[ESP + 0x828]
//   XREF to: Stack[-0x114] (DATA)
// 0059f1d3: MOVSD ES:EDI,ESI
// 0059f1d4: MOVSD ES:EDI,ESI
// 0059f1d5: MOVSD ES:EDI,ESI
// 0059f1d6: MOVSD ES:EDI,ESI
// 0059f1d7: PUSH EAX
// 0059f1d8: LEA ESI,[ESP + 0x83c]
//   XREF to: Stack[-0x104] (DATA)
// 0059f1df: LEA EDI,[ESP + 0x86c]
//   XREF to: Stack[-0xd4] (DATA)
// 0059f1e6: CALL core_xform.cpp_multiplyQuaternion_FUN_005f7640
//   XREF to: 005f7640 (UNCONDITIONAL_CALL)
// 0059f1eb: LEA ESI,[ESP + 0x83c]
//   XREF to: Stack[-0x104] (DATA)
// 0059f1f2: ADD ESP,0x8
// 0059f1f5: JMP 0x0059f067
//   XREF to: 0059f067 (UNCONDITIONAL_JUMP)
// 0059f1fa: MOV ECX,0x64edd0
//   Label: LAB_0059f1fa
//   XREF to: 0064edd0 (PARAM)
// 0059f1ff: MOV ESI,0xa82
// 0059f204: PUSH 0x64ede5
//   XREF to: 0064ede5 (DATA)
// 0059f209: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0059f20f: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0059f215: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0059f21a: ADD ESP,0x4
// 0059f21d: JMP 0x0059ecd9
//   XREF to: 0059ecd9 (UNCONDITIONAL_JUMP)
