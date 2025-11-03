// Name: core_charactr.cpp_CCharacter_FUN_0042d090
// Address: 0042d090
// Address Range: [[0042d090, 0042d2fa]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042d090(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_ApplyGestureLookAt_FUN_0042dfc0 (0042dfc0) at 0042dff4 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042f3e0 (0042f3e0) at 0042f717 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_computePickupInLoop_FUN_0042f800 (0042f800) at 0042f825 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5550 (004d5550) at 004d556c [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525889 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_getTranslation_FUN_005f6110
//   core_xform.cpp_inverse_FUN_005f6210
//   core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042d090(CCharacter *this_ptr)

{
  float fVar1;
  undefined4 *extraout_EAX;
  CVector3f *pCVar2;
  int iVar3;
  SCarryHand *pSVar4;
  BADSPACEBASE *in_ESP;
  CVector3f *unaff_ESI;
  undefined4 *puVar5;
  CVector3f *unaff_EDI;
  undefined4 *puVar6;
  byte bVar7;
  float in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  CMatrix3x4f *in_stack_fffffd8c;
  CMatrix3x4f *in_stack_fffffd90;
  CMatrix3x4f *in_stack_fffffd98;
  CMatrix3x4f *in_stack_fffffda0;
  CMatrix3x4f *input_matrix;
  undefined4 auStack_240 [11];
  undefined4 uStack_214;
  undefined1 auStack_210 [52];
  undefined4 auStack_1dc [10];
  undefined4 auStack_1b4 [14];
  undefined4 uStack_17c;
  CMatrix3x4f CStack_178;
  undefined4 auStack_148 [13];
  undefined4 auStack_114 [14];
  undefined4 auStack_dc [10];
  undefined1 auStack_b4 [36];
  undefined4 uStack_90;
  undefined1 auStack_8c [100];
  COrientation *local_28;
  CLocation *local_24;
  char *local_20;
  SCarryHand *local_1c;
  float local_18;
  float fStack_14;
  
  bVar7 = 0;
  local_28 = &(this_ptr->base_actor).orient;
  local_24 = &(this_ptr->base_actor).location;
  local_18 = 0.0;
  local_20 = (this_ptr->model).field3_0x508 + 0x978;
  pSVar4 = this_ptr->carry_hands;
  do {
    if (pSVar4->carry_actor != (CDemonActor *)0x0) {
      local_1c = pSVar4;
      (*(this_ptr->base_actor).vtable[1].isActiveTarget)(&this_ptr->base_actor);
      puVar5 = auStack_1b4;
      puVar6 = &uStack_214;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      if (*(float *)(pSVar4->field2_0xc + 0x34) < 1.0) {
        fVar1 = *(float *)(pSVar4->field2_0xc + 0x30) * in_stack_00000008 +
                *(float *)(pSVar4->field2_0xc + 0x34);
        *(float *)(pSVar4->field2_0xc + 0x34) = fVar1;
        if (fVar1 <= 1.0) {
          core_xform_cpp_inverse_FUN_005f6210
                    ((CMatrix3x4f *)(*(int *)pSVar4->field0_0x0 * 0x30 + (int)fStack_14),
                     in_stack_fffffd8c);
          puVar5 = auStack_240;
          puVar6 = (undefined4 *)(auStack_8c + 0x28);
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    ((CMatrix3x4f *)auStack_210,(CMatrix3x4f *)(auStack_8c + 0x2c),in_stack_fffffd90
                    );
          puVar5 = auStack_1dc;
          puVar6 = &uStack_90;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_lerpMatrix3x4_FUN_005f7140
                    ((CMatrix3x4f *)pSVar4->field2_0xc,(CMatrix3x4f *)auStack_8c,
                     *(float *)(pSVar4->field2_0xc + 0x34));
          puVar5 = auStack_148;
          puVar6 = &uStack_17c;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    (&CStack_178,(CMatrix3x4f *)(unaff_ESI + *(int *)pSVar4->field0_0x0 * 4),
                     in_stack_fffffd98);
          puVar5 = auStack_114;
          puVar6 = (undefined4 *)(auStack_210 + 8);
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
        }
        else {
          pSVar4->field2_0xc[0x34] = '\0';
          pSVar4->field2_0xc[0x35] = '\0';
          pSVar4->field2_0xc[0x36] = -0x80;
          pSVar4->field2_0xc[0x37] = '?';
        }
      }
      in_stack_fffffd90 = (CMatrix3x4f *)auStack_b4;
      in_stack_fffffd8c = (CMatrix3x4f *)0x42d186;
      core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
                (in_stack_fffffd90,unaff_ESI,unaff_EDI);
      core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                ((CMatrix3x4f *)(auStack_210 + 0x10),(CMatrix3x4f *)(auStack_b4 + 4),
                 in_stack_fffffda0);
      input_matrix = (CMatrix3x4f *)&stack0xfffffff0;
      puVar5 = auStack_dc;
      puVar6 = (undefined4 *)&stack0xfffffda0;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar6 = *puVar5;
        puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
        puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
      }
      in_stack_fffffd98 = (CMatrix3x4f *)0x42d1c9;
      core_xform_cpp_getTranslation_FUN_005f6110((CVector3f *)&stack0xfffffda4,input_matrix);
      in_stack_fffffda0 = (CMatrix3x4f *)&stack0xfffffda8;
      iVar3 = *(int *)(in_stack_0000000c + 8);
      *(undefined4 *)(iVar3 + 0x20) = *extraout_EAX;
      *(undefined4 *)(iVar3 + 0x24) = extraout_EAX[1];
      *(undefined4 *)(iVar3 + 0x28) = extraout_EAX[2];
      pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                         ((CVector3f *)&stack0xfffffda8,(CMatrix3x3f *)&local_18);
      iVar3 = *(int *)(in_stack_00000010 + 8);
      if ((CVector3f *)(iVar3 + 0x30) != pCVar2) {
        ((CVector3f *)(iVar3 + 0x30))->x = pCVar2->x;
        *(float *)(iVar3 + 0x34) = pCVar2->y;
        *(float *)(iVar3 + 0x38) = pCVar2->z;
      }
      core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
                (*(CDemonActor **)(in_stack_00000010 + 8));
    }
    local_18 = (float)((int)local_18 + 1);
    pSVar4 = pSVar4 + 1;
  } while ((int)local_18 < 2);
  return;
}


// Assembly code:
// 0042d090: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042d090
// 0042d091: PUSH ESI
// 0042d092: PUSH EDI
// 0042d093: PUSH EBP
// 0042d094: MOV EBP,ESP
// 0042d096: SUB ESP,0x26c
// 0042d09c: AND ESP,0xfffffff8
// 0042d09f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042d0a2: ADD EAX,0x30
// 0042d0a5: MOV dword ptr [ESP + 0x258],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0042d0ac: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042d0af: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042d0b2: ADD EAX,0x20
// 0042d0b5: XOR EDX,EDX
// 0042d0b7: MOV dword ptr [ESP + 0x25c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0042d0be: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042d0c1: MOV dword ptr [ESP + 0x268],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0042d0c8: ADD EAX,0xfd8
// 0042d0cd: ADD EBX,0x24ac
// 0042d0d3: MOV dword ptr [ESP + 0x260],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0042d0da: MOV ECX,dword ptr [EBX + 0x8]
//   Label: LAB_0042d0da
// 0042d0dd: MOV dword ptr [ESP + 0x264],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0042d0e4: TEST ECX,ECX
// 0042d0e6: JNZ 0x0042d106
//   XREF to: 0042d106 (CONDITIONAL_JUMP)
// 0042d0e8: MOV ESI,dword ptr [ESP + 0x268]
//   Label: LAB_0042d0e8
//   XREF to: Stack[-0x18] (READ)
// 0042d0ef: INC ESI
// 0042d0f0: ADD EBX,0x44
// 0042d0f3: MOV dword ptr [ESP + 0x268],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0042d0fa: CMP ESI,0x2
// 0042d0fd: JL 0x0042d0da
//   XREF to: 0042d0da (CONDITIONAL_JUMP)
// 0042d0ff: MOV ESP,EBP
// 0042d101: POP EBP
// 0042d102: POP EDI
// 0042d103: POP ESI
// 0042d104: POP EBX
// 0042d105: RET
// 0042d106: MOV ESI,dword ptr [ESP + 0x268]
//   Label: LAB_0042d106
//   XREF to: Stack[-0x18] (READ)
// 0042d10d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042d110: PUSH ESI
// 0042d111: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0042d114: MOV EAX,dword ptr [EAX + 0x154]
// 0042d11a: PUSH EDI
// 0042d11b: LEA ESI,[ESP + 0xc8]
//   XREF to: Stack[-0x1c0] (DATA)
// 0042d122: CALL dword ptr [EAX + 0x140]
// 0042d128: MOV ECX,0xc
// 0042d12d: LEA EDI,[ESP + 0x68]
// 0042d131: LEA ESI,[ESP + 0xc8]
// 0042d138: ADD ESP,0x8
// 0042d13b: MOVSD.REP ES:EDI,ESI
// 0042d13d: FLD float ptr [EBX + 0x40]
// 0042d140: FLD1
// 0042d142: FCOMPP
// 0042d144: FNSTSW AX
// 0042d146: SAHF
// 0042d147: JBE 0x0042d169
//   XREF to: 0042d169 (CONDITIONAL_JUMP)
// 0042d149: FLD float ptr [EBX + 0x3c]
// 0042d14c: FMUL float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0042d14f: FADD float ptr [EBX + 0x40]
// 0042d152: FST float ptr [EBX + 0x40]
// 0042d155: FLD1
// 0042d157: FCOMPP
// 0042d159: FNSTSW AX
// 0042d15b: SAHF
// 0042d15c: JNC 0x0042d235
//   XREF to: 0042d235 (CONDITIONAL_JUMP)
// 0042d162: MOV dword ptr [EBX + 0x40],0x3f800000
// 0042d169: MOV EAX,dword ptr [ESP + 0x258]
//   Label: LAB_0042d169
// 0042d170: PUSH EAX
// 0042d171: MOV EDX,dword ptr [ESP + 0x260]
// 0042d178: PUSH EDX
// 0042d179: LEA EAX,[ESP + 0x1b8]
// 0042d180: PUSH EAX
// 0042d181: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0042d186: ADD ESP,0xc
// 0042d189: LEA EAX,[ESP + 0x1b0]
// 0042d190: PUSH EAX
// 0042d191: LEA EAX,[ESP + 0x64]
// 0042d195: PUSH EAX
// 0042d196: LEA ESI,[ESP + 0x188]
// 0042d19d: LEA EDI,[ESP + 0x8]
// 0042d1a1: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0042d1a6: ADD ESP,0x8
// 0042d1a9: LEA EAX,[ESP + 0x24c]
// 0042d1b0: MOV ECX,0xc
// 0042d1b5: PUSH EAX
// 0042d1b6: LEA EAX,[ESP + 0x4]
// 0042d1ba: LEA ESI,[ESP + 0x184]
// 0042d1c1: PUSH EAX
// 0042d1c2: MOVSD.REP ES:EDI,ESI
// 0042d1c4: CALL core_xform.cpp_getTranslation_FUN_005f6110
//   XREF to: 005f6110 (UNCONDITIONAL_CALL)
// 0042d1c9: ADD ESP,0x8
// 0042d1cc: MOV EDX,dword ptr [ESP + 0x264]
// 0042d1d3: MOV EDX,dword ptr [EDX + 0x8]
// 0042d1d6: MOV ECX,dword ptr [EAX]
// 0042d1d8: MOV dword ptr [EDX + 0x20],ECX
// 0042d1db: MOV ECX,dword ptr [EAX + 0x4]
// 0042d1de: MOV dword ptr [EDX + 0x24],ECX
// 0042d1e1: FLD float ptr [EAX + 0x8]
// 0042d1e4: LEA EAX,[ESP + 0x240]
// 0042d1eb: PUSH EAX
// 0042d1ec: LEA EAX,[ESP + 0x4]
// 0042d1f0: PUSH EAX
// 0042d1f1: FSTP float ptr [EDX + 0x28]
// 0042d1f4: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0042d1f9: ADD ESP,0x8
// 0042d1fc: MOV EDX,dword ptr [ESP + 0x264]
// 0042d203: MOV EDX,dword ptr [EDX + 0x8]
// 0042d206: ADD EDX,0x30
// 0042d209: CMP EDX,EAX
// 0042d20b: JZ 0x0042d21d
//   XREF to: 0042d21d (CONDITIONAL_JUMP)
// 0042d20d: MOV ECX,dword ptr [EAX]
// 0042d20f: MOV dword ptr [EDX],ECX
// 0042d211: MOV ECX,dword ptr [EAX + 0x4]
// 0042d214: MOV dword ptr [EDX + 0x4],ECX
// 0042d217: MOV ECX,dword ptr [EAX + 0x8]
// 0042d21a: MOV dword ptr [EDX + 0x8],ECX
// 0042d21d: MOV EAX,dword ptr [ESP + 0x264]
//   Label: LAB_0042d21d
// 0042d224: MOV ECX,dword ptr [EAX + 0x8]
// 0042d227: PUSH ECX
// 0042d228: CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
//   XREF to: 00408c10 (UNCONDITIONAL_CALL)
// 0042d22d: ADD ESP,0x4
// 0042d230: JMP 0x0042d0e8
//   XREF to: 0042d0e8 (UNCONDITIONAL_JUMP)
// 0042d235: IMUL EAX,dword ptr [EBX],0x30
//   Label: LAB_0042d235
// 0042d238: ADD EAX,dword ptr [ESP + 0x260]
// 0042d23f: PUSH EAX
// 0042d240: LEA ESI,[ESP + 0x34]
// 0042d244: LEA EDI,[ESP + 0x214]
// 0042d24b: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 0042d250: MOV ECX,0xc
// 0042d255: ADD ESP,0x4
// 0042d258: LEA EAX,[ESP + 0x210]
// 0042d25f: LEA ESI,[ESP + 0x30]
// 0042d263: PUSH EAX
// 0042d264: LEA EAX,[ESP + 0x64]
// 0042d268: MOVSD.REP ES:EDI,ESI
// 0042d26a: PUSH EAX
// 0042d26b: LEA ESI,[ESP + 0x98]
// 0042d272: LEA EDI,[ESP + 0x1e8]
// 0042d279: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0042d27e: MOV ECX,0xc
// 0042d283: LEA ESI,[ESP + 0x98]
// 0042d28a: ADD ESP,0x8
// 0042d28d: MOVSD.REP ES:EDI,ESI
// 0042d28f: LEA EAX,[ESP + 0x1e0]
// 0042d296: PUSH dword ptr [EBX + 0x40]
// 0042d299: PUSH EAX
// 0042d29a: LEA EAX,[EBX + 0xc]
// 0042d29d: PUSH EAX
// 0042d29e: LEA ESI,[ESP + 0x12c]
// 0042d2a5: LEA EDI,[ESP + 0xfc]
// 0042d2ac: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 0042d2b1: MOV ECX,0xc
// 0042d2b6: LEA ESI,[ESP + 0x12c]
// 0042d2bd: ADD ESP,0xc
// 0042d2c0: MOVSD.REP ES:EDI,ESI
// 0042d2c2: IMUL EAX,dword ptr [EBX],0x30
// 0042d2c5: ADD EAX,dword ptr [ESP + 0x260]
// 0042d2cc: PUSH EAX
// 0042d2cd: LEA EAX,[ESP + 0xf4]
// 0042d2d4: PUSH EAX
// 0042d2d5: LEA ESI,[ESP + 0x158]
// 0042d2dc: LEA EDI,[ESP + 0x68]
// 0042d2e0: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0042d2e5: MOV ECX,0xc
// 0042d2ea: LEA ESI,[ESP + 0x158]
// 0042d2f1: ADD ESP,0x8
// 0042d2f4: MOVSD.REP ES:EDI,ESI
// 0042d2f6: JMP 0x0042d169
//   XREF to: 0042d169 (UNCONDITIONAL_JUMP)
