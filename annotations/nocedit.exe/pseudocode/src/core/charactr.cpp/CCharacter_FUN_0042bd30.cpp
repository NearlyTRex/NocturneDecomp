// Name: core_charactr.cpp_CCharacter_FUN_0042bd30
// Address: 0042bd30
// Address Range: [[0042bd30, 0042bf26]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042bd30(CCharacter * this_ptr)
// Cross-references:
//   core_batcreat.cpp_FUN_00415dd0 (00415dd0) at 00415f74 [UNCONDITIONAL_CALL]
//   core_batman.cpp_FUN_00417660 (00417660) at 00417781 [UNCONDITIONAL_CALL]
//   core_bride.cpp_FUN_00424600 (00424600) at 004246f6 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042bcc0 (0042bcc0) at 0042bd14 [UNCONDITIONAL_CALL]
//   core_cow.cpp_FUN_004448c0 (004448c0) at 0044497a [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_00485b20 (00485b20) at 00485b73 [UNCONDITIONAL_CALL]
//   core_gargoyle.cpp_CGargoyle_unk4_FUN_004e5530 (004e5530) at 004e5641 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_FUN_004e8520 (004e8520) at 004e8600 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004fab60 (004fab60) at 004fac81 [UNCONDITIONAL_CALL]
//   core_mobster.cpp_FUN_00527380 (00527380) at 005274a0 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055c925 [UNCONDITIONAL_CALL]
//   core_smiley.cpp_FUN_005a32a0 (005a32a0) at 005a33db [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_FUN_005fc220 (005fc220) at 005fc300 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00823b10
// Function calls:
//   core_bodypart.cpp_FUN_0041add0
//   core_bodypart.cpp_FUN_0041ae50
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a1040
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042bd30(CCharacter *this_ptr)

{
  char *pcVar1;
  BADSPACEBASE *in_ESP;
  int iVar2;
  CCharacter *pCVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  byte bVar6;
  int in_stack_00000008;
  int in_stack_0000000c;
  undefined4 in_stack_00000010;
  CMatrix3x4f *in_stack_ffffff68;
  undefined4 local_6c [15];
  CVector3f local_30;
  CVector3f local_24;
  CMatrix3x4f *local_18;
  int local_14;
  
  bVar6 = 0;
  if (((this_ptr->model).model_name[0] != '\0') &&
     ((this_ptr->model).part_visibility_flags[in_stack_0000000c] != 0)) {
    core_skeleton_cpp_CDeformableModelInstance_FUN_005a1040(&this_ptr->model);
    local_14 = 0;
    if (0 < *(int *)(this_ptr->cloth_data + 0x35c)) {
      local_18 = (this_ptr->model).bone_transform.bone_world_matrices;
      pcVar1 = this_ptr->cloth_data + 0x360;
      do {
        if (in_stack_0000000c == *(int *)pcVar1) {
          core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
                    ((CMatrix3x4f *)(pcVar1 + 8),local_18 + *(int *)(pcVar1 + 4),in_stack_ffffff68);
          puVar4 = local_6c;
          puVar5 = (undefined4 *)&stack0xffffff64;
          for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                    ((CVector3f *)&stack0xffffff64,(CMatrix3x3f *)&local_24);
          core_bodypart_cpp_FUN_0041add0();
        }
        pcVar1 = pcVar1 + 0x38;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this_ptr->cloth_data + 0x35c));
    }
    iVar2 = 0;
    if (0 < *(int *)(this_ptr->cloth_data + 0x478)) {
      pcVar1 = this_ptr->cloth_data + 0x484;
      do {
        if ((in_stack_0000000c == *(int *)pcVar1) && (-1 < *(int *)(pcVar1 + 4))) {
          core_xform_cpp_transformVector3x4_FUN_005f4dc0
                    (&local_30,(CVector3f *)(pcVar1 + 8),
                     (this_ptr->model).bone_transform.bone_world_matrices + *(int *)(pcVar1 + 4));
          core_bodypart_cpp_FUN_0041ae50();
        }
        iVar2 = iVar2 + 1;
        pcVar1 = pcVar1 + 0x18;
      } while (iVar2 < *(int *)(this_ptr->cloth_data + 0x478));
    }
    iVar2 = 0;
    pCVar3 = this_ptr;
    do {
      if (in_stack_0000000c == *(int *)(pCVar3->carry_hands[0].field0_0x0 + 4)) {
        (*(this_ptr->base_actor).vtable[1].renderTargetPoints)(&this_ptr->base_actor);
      }
      iVar2 = iVar2 + 1;
      pCVar3 = (CCharacter *)&(pCVar3->base_actor).orient_matrix.m[0].z;
    } while (iVar2 < 2);
    *(undefined4 *)(in_stack_00000008 + 0x158) = in_stack_00000010;
    return;
  }
  return;
}


// Assembly code:
// 0042bd30: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042bd30
// 0042bd31: PUSH ESI
// 0042bd32: PUSH EDI
// 0042bd33: PUSH EBP
// 0042bd34: MOV EBP,ESP
// 0042bd36: SUB ESP,0x8c
// 0042bd3c: SUB EBP,0x72
// 0042bd3f: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0042bd45: MOV EBX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0042bd4b: MOV DL,byte ptr [EAX + 0x23b8]
// 0042bd51: ADD EBX,0x158
// 0042bd57: TEST DL,DL
// 0042bd59: JZ 0x0042bd75
//   XREF to: 0042bd75 (CONDITIONAL_JUMP)
// 0042bd5b: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0042bd61: MOV EDX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0042bd67: SHL EAX,0x2
// 0042bd6a: ADD EAX,EDX
// 0042bd6c: CMP dword ptr [EAX + 0x2298],0x0
// 0042bd73: JNZ 0x0042bd7d
//   XREF to: 0042bd7d (CONDITIONAL_JUMP)
// 0042bd75: LEA ESP,[EBP + 0x72]
//   Label: LAB_0042bd75
//   XREF to: Stack[-0x10] (DATA)
// 0042bd78: POP EBP
// 0042bd79: POP EDI
// 0042bd7a: POP ESI
// 0042bd7b: POP EBX
// 0042bd7c: RET
// 0042bd7d: MOV ESI,dword ptr [EBP + 0x8e]
//   Label: LAB_0042bd7d
//   XREF to: Stack[0xc] (READ)
// 0042bd83: PUSH ESI
// 0042bd84: MOV EDI,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x8] (READ)
// 0042bd8a: PUSH EDI
// 0042bd8b: PUSH EBX
// 0042bd8c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a1040
//   XREF to: 005a1040 (UNCONDITIONAL_CALL)
// 0042bd91: XOR EAX,EAX
// 0042bd93: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0042bd96: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0042bd9c: MOV EDX,dword ptr [EAX + 0x2df4]
// 0042bda2: ADD ESP,0xc
// 0042bda5: TEST EDX,EDX
// 0042bda7: JLE 0x0042bde5
//   XREF to: 0042bde5 (CONDITIONAL_JUMP)
// 0042bda9: MOV EBX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0042bdaf: ADD EAX,0xfd8
// 0042bdb4: ADD EBX,0x2df8
// 0042bdba: MOV dword ptr [EBP + 0x6a],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0042bdbd: MOV ECX,dword ptr [EBP + 0x8e]
//   Label: LAB_0042bdbd
//   XREF to: Stack[0xc] (READ)
// 0042bdc3: CMP ECX,dword ptr [EBX]
// 0042bdc5: JZ 0x0042be7d
//   XREF to: 0042be7d (CONDITIONAL_JUMP)
// 0042bdcb: MOV ECX,dword ptr [EBP + 0x6e]
//   Label: LAB_0042bdcb
//   XREF to: Stack[-0x14] (READ)
// 0042bdce: MOV ESI,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0042bdd4: ADD EBX,0x38
// 0042bdd7: INC ECX
// 0042bdd8: MOV EDI,dword ptr [ESI + 0x2df4]
// 0042bdde: MOV dword ptr [EBP + 0x6e],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0042bde1: CMP ECX,EDI
// 0042bde3: JL 0x0042bdbd
//   XREF to: 0042bdbd (CONDITIONAL_JUMP)
// 0042bde5: MOV EAX,dword ptr [EBP + 0x86]
//   Label: LAB_0042bde5
//   XREF to: Stack[0x4] (READ)
// 0042bdeb: MOV EDX,dword ptr [EAX + 0x2f10]
// 0042bdf1: XOR ESI,ESI
// 0042bdf3: TEST EDX,EDX
// 0042bdf5: JLE 0x0042be25
//   XREF to: 0042be25 (CONDITIONAL_JUMP)
// 0042bdf7: LEA EDI,[EAX + 0xfd8]
// 0042bdfd: LEA EBX,[EAX + 0x2f1c]
// 0042be03: MOV ECX,dword ptr [EBP + 0x8e]
//   Label: LAB_0042be03
//   XREF to: Stack[0xc] (READ)
// 0042be09: CMP ECX,dword ptr [EBX]
// 0042be0b: JZ 0x0042beee
//   XREF to: 0042beee (CONDITIONAL_JUMP)
// 0042be11: MOV EAX,dword ptr [EBP + 0x86]
//   Label: LAB_0042be11
//   XREF to: Stack[0x4] (READ)
// 0042be17: INC ESI
// 0042be18: MOV EDX,dword ptr [EAX + 0x2f10]
// 0042be1e: ADD EBX,0x18
// 0042be21: CMP ESI,EDX
// 0042be23: JL 0x0042be03
//   XREF to: 0042be03 (CONDITIONAL_JUMP)
// 0042be25: MOV ESI,dword ptr [EBP + 0x86]
//   Label: LAB_0042be25
//   XREF to: Stack[0x4] (READ)
// 0042be2b: MOV EDI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0042be31: XOR EBX,EBX
// 0042be33: CMP EDI,dword ptr [ESI + 0x24b0]
//   Label: LAB_0042be33
// 0042be39: JNZ 0x0042be5a
//   XREF to: 0042be5a (CONDITIONAL_JUMP)
// 0042be3b: PUSH 0x0
// 0042be3d: MOV EAX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0042be43: PUSH EBX
// 0042be44: MOV EDX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0042be4a: MOV EAX,dword ptr [EAX + 0x154]
// 0042be50: PUSH EDX
// 0042be51: CALL dword ptr [EAX + 0x13c]
// 0042be57: ADD ESP,0xc
// 0042be5a: INC EBX
//   Label: LAB_0042be5a
// 0042be5b: ADD ESI,0x44
// 0042be5e: CMP EBX,0x2
// 0042be61: JL 0x0042be33
//   XREF to: 0042be33 (CONDITIONAL_JUMP)
// 0042be63: MOV EAX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x8] (READ)
// 0042be69: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x10] (READ)
// 0042be6f: MOV dword ptr [EAX + 0x158],EBX
// 0042be75: LEA ESP,[EBP + 0x72]
//   XREF to: Stack[-0x10] (DATA)
// 0042be78: POP EBP
// 0042be79: POP EDI
// 0042be7a: POP ESI
// 0042be7b: POP EBX
// 0042be7c: RET
// 0042be7d: MOV ESI,dword ptr [EBX + 0x4]
//   Label: LAB_0042be7d
// 0042be80: LEA EAX,[ESI*0x4 + 0x0]
// 0042be87: SUB EAX,ESI
// 0042be89: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x18] (READ)
// 0042be8c: SHL EAX,0x4
// 0042be8f: ADD EAX,ESI
// 0042be91: PUSH EAX
// 0042be92: LEA EAX,[EBX + 0x8]
// 0042be95: PUSH EAX
// 0042be96: LEA ESI,[EBP + 0x16]
//   XREF to: Stack[-0x6c] (DATA)
// 0042be99: LEA EDI,[EBP + -0x1a]
//   XREF to: Stack[-0x9c] (DATA)
// 0042be9c: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0042bea1: ADD ESP,0x8
// 0042bea4: LEA EAX,[EBP + 0x5e]
//   XREF to: Stack[-0x24] (DATA)
// 0042bea7: MOV ECX,0xc
// 0042beac: PUSH EAX
// 0042bead: LEA EAX,[EBP + -0x1a]
//   XREF to: Stack[-0x9c] (DATA)
// 0042beb0: LEA ESI,[EBP + 0x16]
//   XREF to: Stack[-0x6c] (DATA)
// 0042beb3: PUSH EAX
// 0042beb4: MOVSD.REP ES:EDI,ESI
// 0042beb6: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 0042bebb: ADD ESP,0x8
// 0042bebe: PUSH EAX
// 0042bebf: MOV EAX,dword ptr [EBP + -0xe]
//   XREF to: Stack[-0x90] (READ)
// 0042bec2: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0042bec5: MOV EAX,dword ptr [EBP + 0x2]
//   XREF to: Stack[-0x80] (READ)
// 0042bec8: MOV dword ptr [EBP + 0x4a],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0042becb: MOV EAX,dword ptr [EBP + 0x12]
//   XREF to: Stack[-0x70] (READ)
// 0042bece: MOV dword ptr [EBP + 0x4e],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0042bed1: LEA EAX,[EBP + 0x46]
//   XREF to: Stack[-0x3c] (DATA)
// 0042bed4: PUSH EAX
// 0042bed5: PUSH 0x823b10
//   XREF to: 00823b10 (DATA)
// 0042beda: MOV EDI,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x8] (READ)
// 0042bee0: PUSH EDI
// 0042bee1: CALL core_bodypart.cpp_FUN_0041add0
//   XREF to: 0041add0 (UNCONDITIONAL_CALL)
// 0042bee6: ADD ESP,0x10
// 0042bee9: JMP 0x0042bdcb
//   XREF to: 0042bdcb (UNCONDITIONAL_JUMP)
// 0042beee: MOV EAX,dword ptr [EBX + 0x4]
//   Label: LAB_0042beee
// 0042bef1: TEST EAX,EAX
// 0042bef3: JL 0x0042be11
//   XREF to: 0042be11 (CONDITIONAL_JUMP)
// 0042bef9: IMUL EAX,EAX,0x30
// 0042befc: ADD EAX,EDI
// 0042befe: PUSH EAX
// 0042beff: LEA EAX,[EBX + 0x8]
// 0042bf02: PUSH EAX
// 0042bf03: LEA EAX,[EBP + 0x52]
//   XREF to: Stack[-0x30] (DATA)
// 0042bf06: PUSH EAX
// 0042bf07: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0042bf0c: ADD ESP,0xc
// 0042bf0f: LEA EAX,[EBP + 0x52]
//   XREF to: Stack[-0x30] (DATA)
// 0042bf12: PUSH EAX
// 0042bf13: MOV ECX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x8] (READ)
// 0042bf19: PUSH ECX
// 0042bf1a: CALL core_bodypart.cpp_FUN_0041ae50
//   XREF to: 0041ae50 (UNCONDITIONAL_CALL)
// 0042bf1f: ADD ESP,0x8
// 0042bf22: JMP 0x0042be11
//   XREF to: 0042be11 (UNCONDITIONAL_JUMP)
