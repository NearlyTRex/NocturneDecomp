// Name: core_skeledit.cpp_FUN_0058ec60
// Address: 0058ec60
// Address Range: [[0058ec60, 0058edd7]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058ec60()
// Cross-references:
//   core_skeledit.cpp_FUN_0058c190 (0058c190) at 0058c367 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 s_..\core\skeledit.cpp_0064b0ca
//   TerminatedCString s_CDeformableModel_removeU_0064b0df
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_string.c_memmove_FUN_005fe5e0

#include "nocturne.h"

void core_skeledit_cpp_FUN_0058ec60(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int in_stack_0000000c;
  int *in_stack_00000010;
  int *in_stack_00000014;
  int *local_14;
  int *piStack_10;
  int *piStack_c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x34);
  if (*(int *)(in_stack_0000000c + 0xb8) != 1) {
    g_CurrentFilename = "?..\\core\\skeledit.cpp" + 1;
    g_CurrentLineNumber = 0xa72;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDeformableModel::removeUnusedTextures() - textureSetCount must be 1.");
  }
  iVar4 = 0;
  if (0 < in_stack_00000010[0x2f]) {
    piStack_10 = in_stack_00000010 + 0x30;
    local_14 = in_stack_00000010 + 0x42;
    do {
      iVar5 = 0;
      if (0 < *in_stack_00000010) {
        piStack_c = in_stack_00000010;
        do {
          iVar2 = 0;
          for (iVar3 = 0; iVar3 < piStack_c[0x15] + piStack_c[0x1a]; iVar3 = iVar3 + 1) {
            if (iVar4 == *(int *)(iVar2 + piStack_c[0x24])) {
              iVar4 = iVar4 + 1;
              local_14 = local_14 + 0x12;
              piStack_10 = piStack_10 + 0x12;
              goto LAB_0058ed3a;
            }
            iVar2 = iVar2 + 4;
          }
          iVar5 = iVar5 + 1;
          piStack_c = piStack_c + 1;
        } while (iVar5 < *in_stack_00000010);
      }
      iVar5 = in_stack_00000010[0x2f];
      in_stack_00000010[0x2f] = iVar5 + -1;
      crt_string_c_memmove_FUN_005fe5e0(piStack_10,local_14,((iVar5 + -1) - iVar4) * 0x48);
      iVar5 = 0;
      piVar6 = in_stack_00000014;
      if (0 < *in_stack_00000014) {
        do {
          iVar3 = 0;
          iVar2 = 0;
          while (iVar2 < piVar6[0x15] + piVar6[0x1a]) {
            iVar1 = *(int *)(piVar6[0x24] + iVar3);
            if (iVar4 < iVar1) {
              *(int *)(piVar6[0x24] + iVar3) = iVar1 + -1;
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 4;
            }
            else {
              iVar2 = iVar2 + 1;
              iVar3 = iVar3 + 4;
            }
          }
          piVar6 = piVar6 + 1;
          iVar5 = iVar5 + 1;
        } while (iVar5 < *in_stack_00000014);
      }
LAB_0058ed3a:
    } while (iVar4 < in_stack_00000010[0x2f]);
  }
  return;
}


// Assembly code:
// 0058ec60: PUSH 0x34
//   Label: core_skeledit.cpp_FUN_0058ec60
// 0058ec65: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0058ec6a: PUSH EBX
// 0058ec6b: PUSH ESI
// 0058ec6c: PUSH EDI
// 0058ec6d: PUSH EBP
// 0058ec6e: SUB ESP,0x14
// 0058ec71: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0058ec75: CMP dword ptr [EAX + 0xb8],0x1
// 0058ec7c: JNZ 0x0058ecdf
//   XREF to: 0058ecdf (CONDITIONAL_JUMP)
// 0058ec7e: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0058ec7e
//   XREF to: Stack[0x4] (READ)
// 0058ec82: MOV EDI,dword ptr [EAX + 0xbc]
// 0058ec88: XOR ESI,ESI
// 0058ec8a: TEST EDI,EDI
// 0058ec8c: JLE 0x0058ed4a
//   XREF to: 0058ed4a (CONDITIONAL_JUMP)
// 0058ec92: ADD EAX,0xc0
// 0058ec97: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058ec9b: ADD EAX,0x48
// 0058ec9e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0058eca2: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0058eca2
//   XREF to: Stack[0x4] (READ)
// 0058eca6: XOR EBP,EBP
// 0058eca8: XOR EDI,EDI
// 0058ecaa: MOV EDX,dword ptr [EAX]
// 0058ecac: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x24] (DATA)
// 0058ecaf: TEST EDX,EDX
// 0058ecb1: JLE 0x0058ed1c
//   XREF to: 0058ed1c (CONDITIONAL_JUMP)
// 0058ecb3: MOV EBP,0x4
// 0058ecb8: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0058ecbc: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_0058ecbc
//   XREF to: Stack[-0x18] (READ)
// 0058ecc0: XOR EDX,EDX
// 0058ecc2: XOR EBX,EBX
// 0058ecc4: MOV EAX,dword ptr [ECX + 0x54]
//   Label: LAB_0058ecc4
// 0058ecc7: ADD EAX,dword ptr [ECX + 0x68]
// 0058ecca: CMP EBX,EAX
// 0058eccc: JGE 0x0058ed07
//   XREF to: 0058ed07 (CONDITIONAL_JUMP)
// 0058ecce: MOV EAX,dword ptr [ECX + 0x90]
// 0058ecd4: CMP ESI,dword ptr [EDX + EAX*0x1]
// 0058ecd7: JZ 0x0058ed23
//   XREF to: 0058ed23 (CONDITIONAL_JUMP)
// 0058ecd9: INC EBX
// 0058ecda: ADD EDX,0x4
// 0058ecdd: JMP 0x0058ecc4
//   XREF to: 0058ecc4 (UNCONDITIONAL_JUMP)
// 0058ecdf: MOV ECX,0x64b0ca
//   Label: LAB_0058ecdf
//   XREF to: 0064b0ca (DATA)
// 0058ece4: MOV EBX,0xa72
// 0058ece9: PUSH 0x64b0df
//   XREF to: 0064b0df (DATA)
// 0058ecee: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0058ecf4: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0058ecfa: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0058ecff: ADD ESP,0x4
// 0058ed02: JMP 0x0058ec7e
//   XREF to: 0058ec7e (UNCONDITIONAL_JUMP)
// 0058ed07: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_0058ed07
//   XREF to: Stack[-0x18] (READ)
// 0058ed0b: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0058ed0f: INC EDI
// 0058ed10: ADD ECX,EBP
// 0058ed12: MOV EBX,dword ptr [EAX]
// 0058ed14: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0058ed18: CMP EDI,EBX
// 0058ed1a: JL 0x0058ecbc
//   XREF to: 0058ecbc (CONDITIONAL_JUMP)
// 0058ed1c: MOV EDI,dword ptr [ESP]
//   Label: LAB_0058ed1c
//   XREF to: Stack[-0x24] (DATA)
// 0058ed1f: TEST EDI,EDI
// 0058ed21: JZ 0x0058ed52
//   XREF to: 0058ed52 (CONDITIONAL_JUMP)
// 0058ed23: MOV EDX,dword ptr [ESP + 0x4]
//   Label: LAB_0058ed23
//   XREF to: Stack[-0x20] (READ)
// 0058ed27: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 0058ed2b: INC ESI
// 0058ed2c: ADD EDX,0x48
// 0058ed2f: ADD EAX,0x48
// 0058ed32: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0058ed36: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0058ed3a: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0058ed3a
//   XREF to: Stack[0x4] (READ)
// 0058ed3e: CMP ESI,dword ptr [EAX + 0xbc]
// 0058ed44: JL 0x0058eca2
//   XREF to: 0058eca2 (CONDITIONAL_JUMP)
// 0058ed4a: ADD ESP,0x14
//   Label: LAB_0058ed4a
// 0058ed4d: POP EBP
// 0058ed4e: POP EDI
// 0058ed4f: POP ESI
// 0058ed50: POP EBX
// 0058ed51: RET
// 0058ed52: MOV EAX,dword ptr [ESP + 0x28]
//   Label: LAB_0058ed52
//   XREF to: Stack[0x4] (READ)
// 0058ed56: MOV EBP,dword ptr [EAX + 0xbc]
// 0058ed5c: DEC EBP
// 0058ed5d: MOV dword ptr [EAX + 0xbc],EBP
// 0058ed63: MOV EAX,EBP
// 0058ed65: SUB EAX,ESI
// 0058ed67: IMUL EAX,EAX,0x48
// 0058ed6a: PUSH EAX
// 0058ed6b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x20] (READ)
// 0058ed6f: PUSH EAX
// 0058ed70: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 0058ed74: PUSH EDX
// 0058ed75: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0058ed7a: ADD ESP,0xc
// 0058ed7d: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0058ed81: MOV EBX,dword ptr [EAX]
// 0058ed83: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 0058ed87: TEST EBX,EBX
// 0058ed89: JLE 0x0058ed3a
//   XREF to: 0058ed3a (CONDITIONAL_JUMP)
// 0058ed8b: MOV EDI,EAX
// 0058ed8d: MOV EDX,EDI
//   Label: LAB_0058ed8d
// 0058ed8f: XOR EBX,EBX
// 0058ed91: XOR ECX,ECX
// 0058ed93: MOV EBP,dword ptr [EDX + 0x68]
//   Label: LAB_0058ed93
// 0058ed96: MOV EAX,dword ptr [EDX + 0x54]
// 0058ed99: ADD EAX,EBP
// 0058ed9b: CMP ECX,EAX
// 0058ed9d: JGE 0x0058edb3
//   XREF to: 0058edb3 (CONDITIONAL_JUMP)
// 0058ed9f: MOV EAX,dword ptr [EDX + 0x90]
// 0058eda5: ADD EAX,EBX
// 0058eda7: MOV EBP,dword ptr [EAX]
// 0058eda9: CMP ESI,EBP
// 0058edab: JL 0x0058edcf
//   XREF to: 0058edcf (CONDITIONAL_JUMP)
// 0058edad: INC ECX
// 0058edae: ADD EBX,0x4
// 0058edb1: JMP 0x0058ed93
//   XREF to: 0058ed93 (UNCONDITIONAL_JUMP)
// 0058edb3: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0058edb3
//   XREF to: Stack[-0x14] (READ)
// 0058edb7: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0058edbb: ADD EDI,0x4
// 0058edbe: INC EAX
// 0058edbf: MOV ECX,dword ptr [EDX]
// 0058edc1: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0058edc5: CMP EAX,ECX
// 0058edc7: JGE 0x0058ed3a
//   XREF to: 0058ed3a (CONDITIONAL_JUMP)
// 0058edcd: JMP 0x0058ed8d
//   XREF to: 0058ed8d (UNCONDITIONAL_JUMP)
// 0058edcf: DEC EBP
//   Label: LAB_0058edcf
// 0058edd0: MOV dword ptr [EAX],EBP
// 0058edd2: INC ECX
// 0058edd3: ADD EBX,0x4
// 0058edd6: JMP 0x0058ed93
//   XREF to: 0058ed93 (UNCONDITIONAL_JUMP)
