// Name: core_morph.cpp_FUN_0052bb80
// Address: 0052bb80
// Address Range: [[0052bb80, 0052bcaa]]
// Convention: unknown
// Signature: undefined core_morph.cpp_FUN_0052bb80()
// Cross-references:
//   core_morph.cpp_FUN_0052bcb0 (0052bcb0) at 0052c2ea [UNCONDITIONAL_CALL]
// Globals:
//   int g_WindowWidth = 0x140
//   int g_WindowHeight = 0xc8
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_FUN_0052bb80(undefined4 param_1, undefined4 param_2) */

void core_morph_cpp_FUN_0052bb80(void)

{
  int iVar1;
  int x;
  int y;
  int in_stack_00000004;
  int in_stack_0000000c;
  undefined4 local_14;
  
  if ((*(byte *)(in_stack_00000004 + 0x13) & 0x80) == 0) {
    iVar1 = *(int *)(in_stack_00000004 + 0x14) >> 0x10;
    x = *(int *)(in_stack_00000004 + 0x10) >> 0x10;
    if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < iVar1)) && (iVar1 < g_WindowHeight)) {
      engine_2d_c_plotPixel_FUN_00401140(x,iVar1);
    }
    if (0 < in_stack_0000000c) {
      in_stack_0000000c = local_14 + in_stack_0000000c;
      y = local_14 + 1;
      iVar1 = x;
      do {
        local_14 = local_14 + -1;
        iVar1 = iVar1 + -1;
        x = x + 1;
        if (((-1 < iVar1) && (iVar1 < g_WindowWidth)) &&
           ((-1 < local_14 && (local_14 < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,local_14);
        }
        if (((-1 < iVar1) && (iVar1 < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(iVar1,y);
        }
        if ((((-1 < x) && (x < g_WindowWidth)) && (-1 < local_14)) && (local_14 < g_WindowHeight)) {
          engine_2d_c_plotPixel_FUN_00401140(x,local_14);
        }
        if (((-1 < x) && (x < g_WindowWidth)) && ((-1 < y && (y < g_WindowHeight)))) {
          engine_2d_c_plotPixel_FUN_00401140(x,y);
        }
        y = y + 1;
      } while (y <= in_stack_0000000c);
    }
  }
  return;
}


// Assembly code:
// 0052bb80: PUSH EBX
//   Label: core_morph.cpp_FUN_0052bb80
// 0052bb81: PUSH ESI
// 0052bb82: PUSH EDI
// 0052bb83: PUSH EBP
// 0052bb84: SUB ESP,0x8
// 0052bb87: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0052bb8b: TEST byte ptr [ESI + 0x13],0x80
// 0052bb8f: JNZ 0x0052bc1e
//   XREF to: 0052bc1e (CONDITIONAL_JUMP)
// 0052bb95: MOV EAX,dword ptr [ESI + 0x14]
// 0052bb98: MOV EBX,dword ptr [ESI + 0x10]
// 0052bb9b: SAR EAX,0x10
// 0052bb9e: SAR EBX,0x10
// 0052bba1: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x18] (DATA)
// 0052bba4: TEST EBX,EBX
// 0052bba6: JL 0x0052bbb4
//   XREF to: 0052bbb4 (CONDITIONAL_JUMP)
// 0052bba8: CMP EBX,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0052bbae: JL 0x0052bc26
//   XREF to: 0052bc26 (CONDITIONAL_JUMP)
// 0052bbb4: CMP dword ptr [ESP + 0x20],0x1
//   Label: LAB_0052bbb4
//   XREF to: Stack[0x8] (READ)
// 0052bbb9: JL 0x0052bc1e
//   XREF to: 0052bc1e (CONDITIONAL_JUMP)
// 0052bbbb: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052bbbe: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052bbc1: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x8] (READ)
// 0052bbc5: LEA EBP,[EBX + -0x1]
// 0052bbc8: DEC ESI
// 0052bbc9: LEA EDI,[EBX + 0x1]
// 0052bbcc: ADD EAX,EDX
// 0052bbce: MOV EBX,dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0052bbd1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0052bbd5: INC EBX
// 0052bbd6: TEST EBP,EBP
//   Label: LAB_0052bbd6
// 0052bbd8: JL 0x0052bbe2
//   XREF to: 0052bbe2 (CONDITIONAL_JUMP)
// 0052bbda: CMP EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0052bbe0: JL 0x0052bc41
//   XREF to: 0052bc41 (CONDITIONAL_JUMP)
// 0052bbe2: TEST EBP,EBP
//   Label: LAB_0052bbe2
// 0052bbe4: JL 0x0052bbf2
//   XREF to: 0052bbf2 (CONDITIONAL_JUMP)
// 0052bbe6: CMP EBP,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0052bbec: JL 0x0052bc59
//   XREF to: 0052bc59 (CONDITIONAL_JUMP)
// 0052bbf2: TEST EDI,EDI
//   Label: LAB_0052bbf2
// 0052bbf4: JL 0x0052bc02
//   XREF to: 0052bc02 (CONDITIONAL_JUMP)
// 0052bbf6: CMP EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0052bbfc: JL 0x0052bc71
//   XREF to: 0052bc71 (CONDITIONAL_JUMP)
// 0052bc02: TEST EDI,EDI
//   Label: LAB_0052bc02
// 0052bc04: JL 0x0052bc12
//   XREF to: 0052bc12 (CONDITIONAL_JUMP)
// 0052bc06: CMP EDI,dword ptr [0x00679394]
//   XREF to: 00679394 (READ)
// 0052bc0c: JL 0x0052bc8c
//   XREF to: 0052bc8c (CONDITIONAL_JUMP)
// 0052bc12: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_0052bc12
//   XREF to: Stack[-0x14] (READ)
// 0052bc16: DEC EBP
// 0052bc17: DEC ESI
// 0052bc18: INC EBX
// 0052bc19: INC EDI
// 0052bc1a: CMP EBX,EAX
// 0052bc1c: JLE 0x0052bbd6
//   XREF to: 0052bbd6 (CONDITIONAL_JUMP)
// 0052bc1e: ADD ESP,0x8
//   Label: LAB_0052bc1e
// 0052bc21: POP EBP
// 0052bc22: POP EDI
// 0052bc23: POP ESI
// 0052bc24: POP EBX
// 0052bc25: RET
// 0052bc26: TEST EAX,EAX
//   Label: LAB_0052bc26
// 0052bc28: JL 0x0052bbb4
//   XREF to: 0052bbb4 (CONDITIONAL_JUMP)
// 0052bc2a: CMP EAX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0052bc30: JGE 0x0052bbb4
//   XREF to: 0052bbb4 (CONDITIONAL_JUMP)
// 0052bc32: PUSH EAX
// 0052bc33: PUSH EBX
// 0052bc34: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0052bc39: ADD ESP,0x8
// 0052bc3c: JMP 0x0052bbb4
//   XREF to: 0052bbb4 (UNCONDITIONAL_JUMP)
// 0052bc41: TEST ESI,ESI
//   Label: LAB_0052bc41
// 0052bc43: JL 0x0052bbe2
//   XREF to: 0052bbe2 (CONDITIONAL_JUMP)
// 0052bc45: CMP ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0052bc4b: JGE 0x0052bbe2
//   XREF to: 0052bbe2 (CONDITIONAL_JUMP)
// 0052bc4d: PUSH ESI
// 0052bc4e: PUSH EBP
// 0052bc4f: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0052bc54: ADD ESP,0x8
// 0052bc57: JMP 0x0052bbe2
//   XREF to: 0052bbe2 (UNCONDITIONAL_JUMP)
// 0052bc59: TEST EBX,EBX
//   Label: LAB_0052bc59
// 0052bc5b: JL 0x0052bbf2
//   XREF to: 0052bbf2 (CONDITIONAL_JUMP)
// 0052bc5d: CMP EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0052bc63: JGE 0x0052bbf2
//   XREF to: 0052bbf2 (CONDITIONAL_JUMP)
// 0052bc65: PUSH EBX
// 0052bc66: PUSH EBP
// 0052bc67: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0052bc6c: ADD ESP,0x8
// 0052bc6f: JMP 0x0052bbf2
//   XREF to: 0052bbf2 (UNCONDITIONAL_JUMP)
// 0052bc71: TEST ESI,ESI
//   Label: LAB_0052bc71
// 0052bc73: JL 0x0052bc02
//   XREF to: 0052bc02 (CONDITIONAL_JUMP)
// 0052bc75: CMP ESI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0052bc7b: JGE 0x0052bc02
//   XREF to: 0052bc02 (CONDITIONAL_JUMP)
// 0052bc7d: PUSH ESI
// 0052bc7e: PUSH EDI
// 0052bc7f: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0052bc84: ADD ESP,0x8
// 0052bc87: JMP 0x0052bc02
//   XREF to: 0052bc02 (UNCONDITIONAL_JUMP)
// 0052bc8c: TEST EBX,EBX
//   Label: LAB_0052bc8c
// 0052bc8e: JL 0x0052bc12
//   XREF to: 0052bc12 (CONDITIONAL_JUMP)
// 0052bc90: CMP EBX,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 0052bc96: JGE 0x0052bc12
//   XREF to: 0052bc12 (CONDITIONAL_JUMP)
// 0052bc9c: PUSH EBX
// 0052bc9d: PUSH EDI
// 0052bc9e: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0052bca3: ADD ESP,0x8
// 0052bca6: JMP 0x0052bc12
//   XREF to: 0052bc12 (UNCONDITIONAL_JUMP)
