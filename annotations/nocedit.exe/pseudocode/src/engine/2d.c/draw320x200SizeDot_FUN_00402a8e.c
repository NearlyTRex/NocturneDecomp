// Name: engine_2d.c_draw320x200SizeDot_FUN_00402a8e
// Address: 00402a8e
// Address Range: [[00402a8e, 00402c0d]]
// Convention: unknown
// Signature: undefined engine_2d.c_draw320x200SizeDot_FUN_00402a8e()
// Globals:
//   TerminatedCString s_engine_2d_c_00613164
//   TerminatedCString s_draw320x200SizeDot_unkno_00613173
//   int g_WindowHeight = 0xc8
//   int g_ViewportCenterXFixed
//   int g_ViewportCenterYFixed
//   int g_ViewportRightFixed
//   int g_ViewportBottomFixed
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_2d.c_plotPixel_FUN_00401140
//   engine_2d.c_project3DPointToScreen_FUN_00401770

#include "nocturne.h"

void engine_2d_c_draw320x200SizeDot_FUN_00402a8e(void)

{
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  
  if ((((0 < in_stack_0000000c) && (in_stack_00000004 <= in_stack_0000000c)) &&
      (SBORROW4(in_stack_00000004,-in_stack_0000000c) == in_stack_00000004 + in_stack_0000000c < 0))
     && ((in_stack_00000008 <= in_stack_0000000c &&
         (SBORROW4(in_stack_00000008,-in_stack_0000000c) ==
          in_stack_00000008 + in_stack_0000000c < 0)))) {
    if ((uint)g_WindowHeight < 400) {
      if (g_WindowHeight != 200) {
LAB_00402be6:
        g_CurrentFilename = "..\\engine\\2d.c";
        g_CurrentLineNumber = 0x7df;
        core_main_c_displayErrorAndQuit_FUN_00506f10("draw320x200SizeDot: unknown graphics option");
        return;
      }
      engine_2d_c_project3DPointToScreen_FUN_00401770
                (in_stack_00000004,in_stack_00000008,in_stack_0000000c);
    }
    else if ((uint)g_WindowHeight < 0x191) {
      iVar2 = (int)(((longlong)in_stack_00000004 * (longlong)g_ViewportCenterXFixed) /
                   (longlong)in_stack_0000000c) + g_ViewportRightFixed >> 0x10;
      iVar1 = g_ViewportBottomFixed +
              (int)(((longlong)in_stack_00000008 * (longlong)g_ViewportCenterYFixed) /
                   (longlong)in_stack_0000000c) >> 0x10;
      if (((-1 < iVar2) && (iVar2 < 0x140)) && ((-1 < iVar1 && (iVar1 < 399)))) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1 + 1);
        return;
      }
    }
    else {
      if (g_WindowHeight != 0x1e0) goto LAB_00402be6;
      iVar2 = (int)(((longlong)in_stack_00000004 * (longlong)g_ViewportCenterXFixed) /
                   (longlong)in_stack_0000000c) + g_ViewportRightFixed >> 0x10;
      iVar1 = (int)(((longlong)in_stack_00000008 * (longlong)g_ViewportCenterYFixed) /
                   (longlong)in_stack_0000000c) + g_ViewportBottomFixed >> 0x10;
      if ((((-1 < iVar2) && (iVar2 < 0x27f)) && (-1 < iVar1)) && (iVar1 < 0x1df)) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2 + 1,iVar1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2 + 1,iVar1 + 1);
        engine_2d_c_plotPixel_FUN_00401140(iVar2,iVar1 + 1);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 00402a8e: MOV EBX,EBX
//   Label: engine_2d.c_draw320x200SizeDot_FUN_00402a8e
// 00402a90: PUSH EBX
// 00402a91: PUSH ESI
// 00402a92: PUSH EDI
// 00402a93: PUSH EBP
// 00402a94: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00402a98: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00402a9c: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00402aa0: TEST ECX,ECX
// 00402aa2: JLE 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402aa4: CMP EAX,ECX
// 00402aa6: JG 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402aa8: MOV EDX,ECX
// 00402aaa: NEG EDX
// 00402aac: CMP EAX,EDX
// 00402aae: JL 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402ab0: CMP ESI,ECX
// 00402ab2: JG 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402ab4: CMP ESI,EDX
// 00402ab6: JL 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402ab8: MOV EDI,dword ptr [0x00679398]
//   XREF to: 00679398 (READ)
// 00402abe: CMP EDI,0x190
// 00402ac4: JNC 0x00402bd4
//   XREF to: 00402bd4 (CONDITIONAL_JUMP)
// 00402aca: CMP EDI,0xc8
// 00402ad0: JNZ 0x00402be6
//   XREF to: 00402be6 (CONDITIONAL_JUMP)
// 00402ad6: PUSH ECX
// 00402ad7: PUSH ESI
// 00402ad8: PUSH EAX
// 00402ad9: CALL engine_2d.c_project3DPointToScreen_FUN_00401770
//   XREF to: 00401770 (UNCONDITIONAL_CALL)
// 00402ade: ADD ESP,0xc
// 00402ae1: POP EBP
//   Label: LAB_00402ae1
// 00402ae2: POP EDI
// 00402ae3: POP ESI
// 00402ae4: POP EBX
// 00402ae5: RET
// 00402ae6: MOV EDX,dword ptr [0x02d02548]
//   Label: LAB_00402ae6
//   XREF to: 02d02548 (READ)
// 00402aec: MOV EBX,ECX
// 00402aee: IMUL EDX
// 00402af0: IDIV EBX
// 00402af2: MOV EBX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 00402af8: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 00402afe: LEA EDI,[EAX + EBX*0x1]
// 00402b01: MOV EBX,ECX
// 00402b03: MOV EAX,ESI
// 00402b05: IMUL EDX
// 00402b07: IDIV EBX
// 00402b09: MOV ESI,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 00402b0f: ADD ESI,EAX
// 00402b11: SAR EDI,0x10
// 00402b14: SAR ESI,0x10
// 00402b17: TEST EDI,EDI
// 00402b19: JL 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402b1b: CMP EDI,0x13f
// 00402b21: JG 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402b23: TEST ESI,ESI
// 00402b25: JL 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402b27: CMP ESI,0x18e
// 00402b2d: JG 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402b2f: PUSH ESI
// 00402b30: PUSH EDI
// 00402b31: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00402b36: ADD ESP,0x8
// 00402b39: INC ESI
// 00402b3a: PUSH ESI
// 00402b3b: PUSH EDI
// 00402b3c: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00402b41: ADD ESP,0x8
// 00402b44: POP EBP
// 00402b45: POP EDI
// 00402b46: POP ESI
// 00402b47: POP EBX
// 00402b48: RET
// 00402b49: MOV EDX,dword ptr [0x02d02548]
//   Label: LAB_00402b49
//   XREF to: 02d02548 (READ)
// 00402b4f: MOV EBX,ECX
// 00402b51: IMUL EDX
// 00402b53: IDIV EBX
// 00402b55: MOV EDX,dword ptr [0x02d02550]
//   XREF to: 02d02550 (READ)
// 00402b5b: MOV EBX,ECX
// 00402b5d: LEA EDI,[EAX + EDX*0x1]
// 00402b60: MOV EDX,dword ptr [0x02d0254c]
//   XREF to: 02d0254c (READ)
// 00402b66: MOV EAX,ESI
// 00402b68: IMUL EDX
// 00402b6a: IDIV EBX
// 00402b6c: MOV ECX,dword ptr [0x02d02554]
//   XREF to: 02d02554 (READ)
// 00402b72: LEA ESI,[EAX + ECX*0x1]
// 00402b75: SAR EDI,0x10
// 00402b78: SAR ESI,0x10
// 00402b7b: TEST EDI,EDI
// 00402b7d: JL 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402b83: CMP EDI,0x27e
// 00402b89: JG 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402b8f: TEST ESI,ESI
// 00402b91: JL 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402b97: CMP ESI,0x1de
// 00402b9d: JG 0x00402ae1
//   XREF to: 00402ae1 (CONDITIONAL_JUMP)
// 00402ba3: PUSH ESI
// 00402ba4: PUSH EDI
// 00402ba5: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00402baa: ADD ESP,0x8
// 00402bad: PUSH ESI
// 00402bae: LEA EBX,[EDI + 0x1]
// 00402bb1: PUSH EBX
// 00402bb2: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00402bb7: ADD ESP,0x8
// 00402bba: INC ESI
// 00402bbb: PUSH ESI
// 00402bbc: PUSH EBX
// 00402bbd: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00402bc2: ADD ESP,0x8
// 00402bc5: PUSH ESI
// 00402bc6: PUSH EDI
// 00402bc7: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 00402bcc: ADD ESP,0x8
// 00402bcf: POP EBP
// 00402bd0: POP EDI
// 00402bd1: POP ESI
// 00402bd2: POP EBX
// 00402bd3: RET
// 00402bd4: JBE 0x00402ae6
//   Label: LAB_00402bd4
//   XREF to: 00402ae6 (CONDITIONAL_JUMP)
// 00402bda: CMP EDI,0x1e0
// 00402be0: JZ 0x00402b49
//   XREF to: 00402b49 (CONDITIONAL_JUMP)
// 00402be6: MOV EDI,0x613164
//   Label: LAB_00402be6
//   XREF to: 00613164 (DATA)
// 00402beb: MOV EBP,0x7df
// 00402bf0: PUSH 0x613173
//   XREF to: 00613173 (DATA)
// 00402bf5: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00402bfb: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00402c01: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00402c06: ADD ESP,0x4
// 00402c09: POP EBP
// 00402c0a: POP EDI
// 00402c0b: POP ESI
// 00402c0c: POP EBX
// 00402c0d: RET
