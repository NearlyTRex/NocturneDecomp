// Name: core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0
// Address: 0052aac0
// Address Range: [[0052aac0, 0052ac97]]
// Convention: __cdecl
// Signature: void core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0(CMorphModel * this_ptr)
// Cross-references:
//   core_morph.cpp_CMorphModel_addPart_FUN_0052a580 (0052a580) at 0052a6f8 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_morph_cpp_0063a2a3
//   TerminatedCString s_CMorphModel_setFaceList__0063a2b5
//   TerminatedCString s_core_morph_cpp_0063a2e3
//   TerminatedCString s_CMorphModel_setFaceList__0063a2f5
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_02f43974
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60

#include "nocturne.h"

void __cdecl core_morph_cpp_CMorphModel_setFaceList_FUN_0052aac0(CMorphModel *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  char *pcVar10;
  int unaff_EDI;
  undefined4 *puVar11;
  byte bVar12;
  int in_stack_00000008;
  int in_stack_00000010;
  int in_stack_00000018;
  int *in_stack_0000001c;
  int in_stack_00000024;
  int in_stack_00000028;
  int local_18;
  
  bVar12 = 0;
  if ((in_stack_00000008 < 0) || (*(int *)this_ptr->field0_0x0 <= in_stack_00000008)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x152;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid part index");
  }
  if (*(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 0x10) +
      *(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 8) <
      (int)in_stack_0000001c +
      in_stack_00000024 + *(int *)(this_ptr->field0_0x0 + in_stack_00000008 * 0x10 + 0x10)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x159;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setFaceList - invalid vertex range");
  }
  if (0 < in_stack_00000024) {
    pcVar10 = this_ptr->field0_0x0 + in_stack_00000008 * 0x10;
    do {
      iVar4 = core_morph_cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
                        (this_ptr,(char *)(*in_stack_0000001c * 0x48 + in_stack_00000018 + 8));
      iVar6 = 2;
      if (2 < *(int *)(in_stack_00000010 + 4)) {
        iVar7 = in_stack_00000010 + 0x18;
        iVar5 = (int)pcVar10 * 0x3c;
        do {
          iVar2 = DAT_02f43974;
          *(undefined4 *)(*(int *)(this_ptr->field2_0x58 + 8) + 4 + iVar5) = 3;
          if (iVar2 == 0) {
            puVar9 = (undefined4 *)(*(int *)(this_ptr->field2_0x58 + 8) + 0x18 + iVar5);
            puVar11 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar8 = (undefined4 *)(in_stack_00000010 + 0x1c + (uint)bVar12 * -8);
            *puVar9 = *(undefined4 *)(in_stack_00000010 + 0x18);
            *puVar11 = *puVar8;
            puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            puVar9 = (undefined4 *)(*(int *)(this_ptr->field2_0x58 + 8) + 0x24 + iVar5);
            puVar11 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar8 = (undefined4 *)(iVar7 + 0x10 + (uint)bVar12 * -8);
            *puVar9 = *(undefined4 *)(iVar7 + 0xc);
            *puVar11 = *puVar8;
            puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            iVar2 = *(int *)(this_ptr->field2_0x58 + 8);
            iVar3 = iVar7;
          }
          else {
            puVar9 = (undefined4 *)(*(int *)(this_ptr->field2_0x58 + 8) + 0x18 + iVar5);
            puVar11 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar8 = (undefined4 *)(iVar7 + 0x1c + (uint)bVar12 * -8);
            *puVar9 = *(undefined4 *)(iVar7 + 0x18);
            *puVar11 = *puVar8;
            puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            puVar9 = (undefined4 *)(*(int *)(this_ptr->field2_0x58 + 8) + 0x24 + iVar5);
            puVar11 = puVar9 + (uint)bVar12 * -2 + 1;
            puVar8 = (undefined4 *)(iVar7 + 0x10 + (uint)bVar12 * -8);
            *puVar9 = *(undefined4 *)(iVar7 + 0xc);
            *puVar11 = *puVar8;
            puVar11[(uint)bVar12 * -2 + 1] = puVar8[(uint)bVar12 * -2 + 1];
            iVar2 = *(int *)(this_ptr->field2_0x58 + 8);
            iVar3 = in_stack_00000010;
          }
          puVar8 = (undefined4 *)(iVar2 + 0x30 + iVar5);
          puVar11 = puVar8 + (uint)bVar12 * -2 + 1;
          puVar9 = (undefined4 *)(iVar3 + 0x1c + (uint)bVar12 * -8);
          *puVar8 = *(undefined4 *)(iVar3 + 0x18);
          *puVar11 = *puVar9;
          puVar11[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
          *(int *)(*(int *)(this_ptr->field2_0x58 + 8) + iVar5) = iVar4;
          piVar1 = (int *)(*(int *)(this_ptr->field2_0x58 + 8) + iVar5 + 0x18);
          *piVar1 = *piVar1 + *(int *)(unaff_EDI + 0xc);
          piVar1 = (int *)(*(int *)(this_ptr->field2_0x58 + 8) + iVar5 + 0x24);
          *piVar1 = *piVar1 + *(int *)(unaff_EDI + 0xc);
          iVar7 = iVar7 + 0xc;
          iVar6 = iVar6 + 1;
          piVar1 = (int *)(*(int *)(this_ptr->field2_0x58 + 8) + iVar5 + 0x30);
          *piVar1 = *piVar1 + *(int *)(unaff_EDI + 0xc);
          iVar5 = iVar5 + 0x3c;
          pcVar10 = pcVar10 + 1;
        } while (iVar6 < *(int *)(in_stack_00000010 + 4));
      }
      local_18 = local_18 + 1;
      in_stack_00000010 = in_stack_00000010 + in_stack_00000018;
    } while (local_18 < in_stack_00000028);
  }
  return;
}


// Assembly code:
// 0052aac0: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0
// 0052aac1: PUSH ESI
// 0052aac2: PUSH EDI
// 0052aac3: PUSH EBP
// 0052aac4: SUB ESP,0x18
// 0052aac7: MOV EBX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x4] (READ)
// 0052aacb: MOV ESI,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x8] (READ)
// 0052aacf: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x1c] (READ)
// 0052aad3: TEST ESI,ESI
// 0052aad5: JL 0x0052aadb
//   XREF to: 0052aadb (CONDITIONAL_JUMP)
// 0052aad7: CMP ESI,dword ptr [EBX]
// 0052aad9: JL 0x0052aafe
//   XREF to: 0052aafe (CONDITIONAL_JUMP)
// 0052aadb: MOV ECX,0x63a2a3
//   Label: LAB_0052aadb
//   XREF to: 0063a2a3 (PARAM)
// 0052aae0: MOV EBP,0x152
// 0052aae5: PUSH 0x63a2b5
//   XREF to: 0063a2b5 (DATA)
// 0052aaea: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052aaf0: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 0052aaf6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052aafb: ADD ESP,0x4
// 0052aafe: MOV EAX,ESI
//   Label: LAB_0052aafe
// 0052ab00: SHL EAX,0x4
// 0052ab03: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x10]
// 0052ab07: MOV ECX,dword ptr [EBX + EAX*0x1 + 0x8]
// 0052ab0b: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x20] (READ)
// 0052ab0f: ADD EDI,EDX
// 0052ab11: ADD EDX,ECX
// 0052ab13: ADD EAX,EDI
// 0052ab15: CMP EAX,EDX
// 0052ab17: JLE 0x0052ab3b
//   XREF to: 0052ab3b (CONDITIONAL_JUMP)
// 0052ab19: MOV EBP,0x63a2e3
//   XREF to: 0063a2e3 (DATA)
// 0052ab1e: MOV EAX,0x159
// 0052ab23: PUSH 0x63a2f5
//   XREF to: 0063a2f5 (DATA)
// 0052ab28: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0052ab2e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052ab33: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052ab38: ADD ESP,0x4
// 0052ab3b: MOV ECX,dword ptr [ESP + 0x48]
//   Label: LAB_0052ab3b
//   XREF to: Stack[0x20] (READ)
// 0052ab3f: MOV EBP,dword ptr [ESP + 0x34]
//   XREF to: Stack[0xc] (READ)
// 0052ab43: XOR EDX,EDX
// 0052ab45: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 0052ab49: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0052ab4d: TEST ECX,ECX
// 0052ab4f: JLE 0x0052ac67
//   XREF to: 0052ac67 (CONDITIONAL_JUMP)
// 0052ab55: SHL ESI,0x4
// 0052ab58: LEA EAX,[EBX + ESI*0x1]
// 0052ab5b: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052ab5f: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x18] (READ)
// 0052ab63: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0052ab67: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0052ab67
//   XREF to: Stack[-0x24] (READ)
// 0052ab6b: IMUL EAX,dword ptr [EAX],0x48
// 0052ab6e: ADD EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x14] (READ)
// 0052ab72: ADD EAX,0x8
// 0052ab75: PUSH EAX
// 0052ab76: PUSH EBX
// 0052ab77: CALL core_morph.cpp_CMorphModel_findOrAddTexture_FUN_0052ae60
//   XREF to: 0052ae60 (UNCONDITIONAL_CALL)
// 0052ab7c: MOV ECX,0x2
// 0052ab81: ADD ESP,0x8
// 0052ab84: MOV EDI,dword ptr [EBP + 0x4]
// 0052ab87: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0052ab8b: CMP EDI,ECX
// 0052ab8d: JLE 0x0052ac41
//   XREF to: 0052ac41 (CONDITIONAL_JUMP)
// 0052ab93: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0052ab97: LEA EDX,[EBP + 0x18]
// 0052ab9a: IMUL EAX,ESI,0x3c
// 0052ab9d: MOV ESI,dword ptr [EBX + 0x60]
//   Label: LAB_0052ab9d
// 0052aba0: MOV EDI,dword ptr [0x02f43974]
//   XREF to: 02f43974 (READ)
// 0052aba6: MOV dword ptr [ESI + EAX*0x1 + 0x4],0x3
// 0052abae: TEST EDI,EDI
// 0052abb0: JZ 0x0052ac6f
//   XREF to: 0052ac6f (CONDITIONAL_JUMP)
// 0052abb6: MOV ESI,dword ptr [EBX + 0x60]
// 0052abb9: LEA EDI,[ESI + EAX*0x1 + 0x18]
// 0052abbd: LEA ESI,[EDX + 0x18]
// 0052abc0: MOVSD ES:EDI,ESI
// 0052abc1: MOVSD ES:EDI,ESI
// 0052abc2: MOVSD ES:EDI,ESI
// 0052abc3: MOV ESI,dword ptr [EBX + 0x60]
// 0052abc6: LEA EDI,[ESI + EAX*0x1 + 0x24]
// 0052abca: LEA ESI,[EDX + 0xc]
// 0052abcd: MOVSD ES:EDI,ESI
// 0052abce: MOVSD ES:EDI,ESI
// 0052abcf: MOVSD ES:EDI,ESI
// 0052abd0: MOV ESI,dword ptr [EBX + 0x60]
// 0052abd3: LEA EDI,[ESI + EAX*0x1 + 0x30]
// 0052abd7: LEA ESI,[EBP + 0x18]
// 0052abda: MOVSD ES:EDI,ESI
//   Label: LAB_0052abda
// 0052abdb: MOVSD ES:EDI,ESI
// 0052abdc: MOVSD ES:EDI,ESI
// 0052abdd: MOV ESI,dword ptr [EBX + 0x60]
// 0052abe0: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 0052abe4: MOV dword ptr [ESI + EAX*0x1],EDI
// 0052abe7: MOV ESI,dword ptr [EBX + 0x60]
// 0052abea: ADD ESI,EAX
// 0052abec: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x28] (DATA)
// 0052abef: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052abf3: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052abf6: MOV ESI,dword ptr [ESI + 0xc]
// 0052abf9: ADD dword ptr [EDI + 0x18],ESI
// 0052abfc: MOV ESI,dword ptr [EBX + 0x60]
// 0052abff: ADD ESI,EAX
// 0052ac01: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x28] (DATA)
// 0052ac04: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052ac08: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052ac0b: MOV ESI,dword ptr [ESI + 0xc]
// 0052ac0e: ADD dword ptr [EDI + 0x24],ESI
// 0052ac11: MOV ESI,dword ptr [EBX + 0x60]
// 0052ac14: ADD ESI,EAX
// 0052ac16: MOV dword ptr [ESP],ESI
//   XREF to: Stack[-0x28] (DATA)
// 0052ac19: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 0052ac1d: ADD EDX,0xc
// 0052ac20: MOV EDI,dword ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0052ac23: MOV ESI,dword ptr [ESI + 0xc]
// 0052ac26: INC ECX
// 0052ac27: ADD dword ptr [EDI + 0x30],ESI
// 0052ac2a: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 0052ac2e: ADD EAX,0x3c
// 0052ac31: INC ESI
// 0052ac32: MOV EDI,dword ptr [EBP + 0x4]
// 0052ac35: MOV dword ptr [ESP + 0x10],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 0052ac39: CMP ECX,EDI
// 0052ac3b: JL 0x0052ab9d
//   XREF to: 0052ab9d (CONDITIONAL_JUMP)
// 0052ac41: MOV ESI,dword ptr [ESP + 0x38]
//   Label: LAB_0052ac41
//   XREF to: Stack[0x10] (READ)
// 0052ac45: MOV EDI,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x24] (READ)
// 0052ac49: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0052ac4d: MOV EDX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x20] (READ)
// 0052ac51: ADD EDI,0x4
// 0052ac54: INC EAX
// 0052ac55: ADD EBP,ESI
// 0052ac57: MOV dword ptr [ESP + 0x4],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0052ac5b: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0052ac5f: CMP EAX,EDX
// 0052ac61: JL 0x0052ab67
//   XREF to: 0052ab67 (CONDITIONAL_JUMP)
// 0052ac67: ADD ESP,0x18
//   Label: LAB_0052ac67
// 0052ac6a: POP EBP
// 0052ac6b: POP EDI
// 0052ac6c: POP ESI
// 0052ac6d: POP EBX
// 0052ac6e: RET
// 0052ac6f: MOV ESI,dword ptr [EBX + 0x60]
//   Label: LAB_0052ac6f
// 0052ac72: LEA EDI,[ESI + EAX*0x1 + 0x18]
// 0052ac76: LEA ESI,[EBP + 0x18]
// 0052ac79: MOVSD ES:EDI,ESI
// 0052ac7a: MOVSD ES:EDI,ESI
// 0052ac7b: MOVSD ES:EDI,ESI
// 0052ac7c: MOV ESI,dword ptr [EBX + 0x60]
// 0052ac7f: LEA EDI,[ESI + EAX*0x1 + 0x24]
// 0052ac83: LEA ESI,[EDX + 0xc]
// 0052ac86: MOVSD ES:EDI,ESI
// 0052ac87: MOVSD ES:EDI,ESI
// 0052ac88: MOVSD ES:EDI,ESI
// 0052ac89: MOV ESI,dword ptr [EBX + 0x60]
// 0052ac8c: LEA EDI,[ESI + EAX*0x1 + 0x30]
// 0052ac90: LEA ESI,[EDX + 0x18]
// 0052ac93: JMP 0x0052abda
//   XREF to: 0052abda (UNCONDITIONAL_JUMP)
