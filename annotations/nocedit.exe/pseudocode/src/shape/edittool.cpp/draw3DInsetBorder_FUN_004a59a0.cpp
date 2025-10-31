// Name: shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
// Address: 004a59a0
// Address Range: [[004a59a0, 004a5ad1]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0(int left, int top, int right, int bottom, int inner_y, int style)
// Cross-references:
//   shape_edittool.cpp_CEdScrollBar_render_FUN_004a5c10 (004a5c10) at 004a5e77 [UNCONDITIONAL_CALL]
// Globals:
//   int g_InsetColor
//   int g_ActiveRenderColor
// Function calls:
//   engine_2d.c_drawHLine_FUN_00402ee0
//   engine_2d.c_drawVLine_FUN_00402ff0

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_draw3DInsetBorder_FUN_004a59a0
          (int left,int top,int right,int bottom,int inner_y,int style)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  g_ActiveRenderColor = g_InsetColor;
  if ((style == 0) || (style == 1)) {
    iVar3 = (right + left + -1) / 2 + inner_y;
    iVar2 = (bottom - top) / 3;
    iVar1 = iVar3 + iVar2;
    if (style == 0) {
      iVar4 = inner_y + top + iVar2 + 1;
      iVar5 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawHLine_FUN_00402ee0(iVar5,iVar4,iVar3);
          iVar4 = iVar4 + 1;
          iVar3 = iVar2;
          iVar5 = iVar5 + -1;
        } while (iVar2 < iVar1);
      }
    }
    else {
      iVar5 = (bottom - iVar2) + -2 + inner_y;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawHLine_FUN_00402ee0(iVar4,iVar5,iVar3);
          iVar5 = iVar5 + -1;
          iVar3 = iVar2;
          iVar4 = iVar4 + -1;
        } while (iVar2 < iVar1);
        return;
      }
    }
  }
  else {
    iVar3 = (top + bottom + -1) / 2 + inner_y;
    iVar2 = (right - left) / 3;
    iVar1 = iVar3 + iVar2;
    if (style == 2) {
      iVar5 = inner_y + left + iVar2 + 1;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawVLine_FUN_00402ff0(iVar5,iVar4,iVar3);
          iVar5 = iVar5 + 1;
          iVar3 = iVar2;
          iVar4 = iVar4 + -1;
        } while (iVar2 < iVar1);
        return;
      }
    }
    else {
      iVar5 = (right - iVar2) + -2 + inner_y;
      iVar4 = iVar3;
      if (0 < iVar2) {
        do {
          iVar2 = iVar3 + 1;
          engine_2d_c_drawVLine_FUN_00402ff0(iVar5,iVar4,iVar3);
          iVar5 = iVar5 + -1;
          iVar3 = iVar2;
          iVar4 = iVar4 + -1;
        } while (iVar2 < iVar1);
        return;
      }
    }
  }
  return;
}


// Assembly code:
// 004a59a0: PUSH EBX
//   Label: shape_edittool.cpp_draw3DInsetBorder_FUN_004a59a0
// 004a59a1: PUSH ESI
// 004a59a2: PUSH EDI
// 004a59a3: PUSH EBP
// 004a59a4: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004a59a8: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004a59ac: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004a59b0: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004a59b4: MOV EAX,[0x02cf2aec]
//   XREF to: 02cf2aec (READ)
// 004a59b9: MOV [0x02d02570],EAX
//   XREF to: 02d02570 (WRITE)
// 004a59be: TEST EDI,EDI
// 004a59c0: JNZ 0x004a5a25
//   XREF to: 004a5a25 (CONDITIONAL_JUMP)
// 004a59c2: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_004a59c2
//   XREF to: Stack[0xc] (READ)
// 004a59c6: ADD EDX,EBP
// 004a59c8: DEC EDX
// 004a59c9: MOV EAX,EDX
// 004a59cb: SAR EDX,0x1f
// 004a59ce: SUB EAX,EDX
// 004a59d0: SAR EAX,0x1
// 004a59d2: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a59d6: MOV EDX,ECX
// 004a59d8: LEA EBX,[EAX + ESI*0x1]
// 004a59db: SUB EDX,EBP
// 004a59dd: MOV EBP,0x3
// 004a59e2: MOV EAX,EDX
// 004a59e4: SAR EDX,0x1f
// 004a59e7: IDIV EBP
// 004a59e9: LEA EBP,[EBX + EAX*0x1]
// 004a59ec: TEST EDI,EDI
// 004a59ee: JNZ 0x004a5a7c
//   XREF to: 004a5a7c (CONDITIONAL_JUMP)
// 004a59f4: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a59f8: ADD EDX,EAX
// 004a59fa: INC EDX
// 004a59fb: ADD ESI,EDX
// 004a59fd: TEST EAX,EAX
// 004a59ff: JLE 0x004a5a20
//   XREF to: 004a5a20 (CONDITIONAL_JUMP)
// 004a5a01: MOV EDI,EBX
// 004a5a03: PUSH EBX
//   Label: LAB_004a5a03
// 004a5a04: PUSH ESI
// 004a5a05: PUSH EDI
// 004a5a06: INC EBX
// 004a5a07: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a5a0c: INC ESI
// 004a5a0d: ADD ESP,0xc
// 004a5a10: DEC EDI
// 004a5a11: CMP EBX,EBP
// 004a5a13: JL 0x004a5a03
//   XREF to: 004a5a03 (CONDITIONAL_JUMP)
// 004a5a15: LEA EAX,[EAX]
// 004a5a1b: LEA EDX,[EDX]
// 004a5a1e: MOV EBX,EBX
// 004a5a20: POP EBP
//   Label: LAB_004a5a20
// 004a5a21: POP EDI
// 004a5a22: POP ESI
// 004a5a23: POP EBX
// 004a5a24: RET
// 004a5a25: CMP EDI,0x1
//   Label: LAB_004a5a25
// 004a5a28: JZ 0x004a59c2
//   XREF to: 004a59c2 (CONDITIONAL_JUMP)
// 004a5a2a: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004a5a2e: ADD EDX,ECX
// 004a5a30: DEC EDX
// 004a5a31: MOV EAX,EDX
// 004a5a33: SAR EDX,0x1f
// 004a5a36: SUB EAX,EDX
// 004a5a38: SAR EAX,0x1
// 004a5a3a: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004a5a3e: LEA EBX,[EAX + ESI*0x1]
// 004a5a41: SUB EDX,EBP
// 004a5a43: MOV ECX,0x3
// 004a5a48: MOV EAX,EDX
// 004a5a4a: SAR EDX,0x1f
// 004a5a4d: IDIV ECX
// 004a5a4f: LEA EDX,[EBX + EAX*0x1]
// 004a5a52: CMP EDI,0x2
// 004a5a55: JNZ 0x004a5aa3
//   XREF to: 004a5aa3 (CONDITIONAL_JUMP)
// 004a5a57: ADD EBP,EAX
// 004a5a59: INC EBP
// 004a5a5a: LEA EDI,[ESI + EBP*0x1]
// 004a5a5d: TEST EAX,EAX
// 004a5a5f: JLE 0x004a5a20
//   XREF to: 004a5a20 (CONDITIONAL_JUMP)
// 004a5a61: MOV ESI,EBX
// 004a5a63: MOV EBP,EDX
// 004a5a65: PUSH EBX
//   Label: LAB_004a5a65
// 004a5a66: PUSH ESI
// 004a5a67: PUSH EDI
// 004a5a68: INC EBX
// 004a5a69: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 004a5a6e: DEC ESI
// 004a5a6f: ADD ESP,0xc
// 004a5a72: INC EDI
// 004a5a73: CMP EBX,EBP
// 004a5a75: JL 0x004a5a65
//   XREF to: 004a5a65 (CONDITIONAL_JUMP)
// 004a5a77: POP EBP
// 004a5a78: POP EDI
// 004a5a79: POP ESI
// 004a5a7a: POP EBX
// 004a5a7b: RET
// 004a5a7c: MOV EDX,ECX
//   Label: LAB_004a5a7c
// 004a5a7e: SUB EDX,EAX
// 004a5a80: SUB EDX,0x2
// 004a5a83: LEA EDI,[EDX + ESI*0x1]
// 004a5a86: TEST EAX,EAX
// 004a5a88: JLE 0x004a5a20
//   XREF to: 004a5a20 (CONDITIONAL_JUMP)
// 004a5a8a: MOV ESI,EBX
// 004a5a8c: PUSH EBX
//   Label: LAB_004a5a8c
// 004a5a8d: PUSH EDI
// 004a5a8e: PUSH ESI
// 004a5a8f: INC EBX
// 004a5a90: CALL engine_2d.c_drawHLine_FUN_00402ee0
//   XREF to: 00402ee0 (UNCONDITIONAL_CALL)
// 004a5a95: DEC EDI
// 004a5a96: ADD ESP,0xc
// 004a5a99: DEC ESI
// 004a5a9a: CMP EBX,EBP
// 004a5a9c: JL 0x004a5a8c
//   XREF to: 004a5a8c (CONDITIONAL_JUMP)
// 004a5a9e: POP EBP
// 004a5a9f: POP EDI
// 004a5aa0: POP ESI
// 004a5aa1: POP EBX
// 004a5aa2: RET
// 004a5aa3: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_004a5aa3
//   XREF to: Stack[0xc] (READ)
// 004a5aa7: SUB ECX,EAX
// 004a5aa9: SUB ECX,0x2
// 004a5aac: LEA EDI,[ECX + ESI*0x1]
// 004a5aaf: TEST EAX,EAX
// 004a5ab1: JLE 0x004a5a20
//   XREF to: 004a5a20 (CONDITIONAL_JUMP)
// 004a5ab7: MOV ESI,EBX
// 004a5ab9: MOV EBP,EDX
// 004a5abb: PUSH EBX
//   Label: LAB_004a5abb
// 004a5abc: PUSH ESI
// 004a5abd: PUSH EDI
// 004a5abe: INC EBX
// 004a5abf: CALL engine_2d.c_drawVLine_FUN_00402ff0
//   XREF to: 00402ff0 (UNCONDITIONAL_CALL)
// 004a5ac4: DEC ESI
// 004a5ac5: ADD ESP,0xc
// 004a5ac8: DEC EDI
// 004a5ac9: CMP EBX,EBP
// 004a5acb: JL 0x004a5abb
//   XREF to: 004a5abb (CONDITIONAL_JUMP)
// 004a5acd: POP EBP
// 004a5ace: POP EDI
// 004a5acf: POP ESI
// 004a5ad0: POP EBX
// 004a5ad1: RET
