// Name: shape_edittool.cpp_drawDashedLine_FUN_0049d290
// Address: 0049d290
// Address Range: [[0049d290, 0049d3c6]]
// Convention: __cdecl
// Signature: void shape_edittool.cpp_drawDashedLine_FUN_0049d290(int x1, int y1, int x2, int y2, int dash_length)
// Cross-references:
//   shape_edittool.cpp_CEdButton_paint_FUN_004a65e0 (004a65e0) at 004a6720 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CPickList_renderDialog_FUN_004a4d40 (004a4d40) at 004a5073 [UNCONDITIONAL_CALL]
// Function calls:
//   engine_2d.c_plotPixel_FUN_00401140

#include "nocturne.h"

void __cdecl
shape_edittool_cpp_drawDashedLine_FUN_0049d290(int x1,int y1,int x2,int y2,int dash_length)

{
  int iVar1;
  int iVar2;
  
  iVar2 = y2;
  iVar1 = x1;
  if (x2 < x1) {
    x1 = x2;
    x2 = iVar1;
  }
  if (y2 < y1) {
    y2 = y1;
    y1 = iVar2;
  }
  iVar1 = 1;
  if (x1 < x2) {
    iVar2 = x1;
    do {
      if (iVar1 % (dash_length * 2) < dash_length) {
        engine_2d_c_plotPixel_FUN_00401140(iVar2,y1);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < x2);
  }
  if (y1 < y2) {
    iVar2 = y1;
    do {
      if (iVar1 % (dash_length * 2) < dash_length) {
        engine_2d_c_plotPixel_FUN_00401140(x2,iVar2);
      }
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 1;
    } while (iVar2 < y2);
  }
  if (x1 < x2) {
    do {
      if (iVar1 % (dash_length * 2) < dash_length) {
        engine_2d_c_plotPixel_FUN_00401140(x2,y2);
      }
      x2 = x2 + -1;
      iVar1 = iVar1 + 1;
    } while (x1 < x2);
  }
  if (y1 < y2) {
    do {
      while (iVar1 % (dash_length * 2) < dash_length) {
        engine_2d_c_plotPixel_FUN_00401140(x1,y2);
        y2 = y2 + -1;
        iVar1 = iVar1 + 1;
        if (y2 <= y1) {
          return;
        }
      }
      y2 = y2 + -1;
      iVar1 = iVar1 + 1;
    } while (y1 < y2);
  }
  return;
}


// Assembly code:
// 0049d290: PUSH EBX
//   Label: shape_edittool.cpp_drawDashedLine_FUN_0049d290
// 0049d291: PUSH ESI
// 0049d292: PUSH EDI
// 0049d293: PUSH EBP
// 0049d294: SUB ESP,0x10
// 0049d297: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 0049d29b: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x14] (READ)
// 0049d29f: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0049d2a3: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0049d2a7: CMP EDX,ECX
// 0049d2a9: JG 0x0049d39e
//   XREF to: 0049d39e (CONDITIONAL_JUMP)
// 0049d2af: MOV EBX,dword ptr [ESP + 0x30]
//   Label: LAB_0049d2af
//   XREF to: Stack[0x10] (READ)
// 0049d2b3: CMP EBP,EBX
// 0049d2b5: JLE 0x0049d2bf
//   XREF to: 0049d2bf (CONDITIONAL_JUMP)
// 0049d2b7: MOV EDX,EBP
// 0049d2b9: MOV EBP,EBX
// 0049d2bb: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[0x10] (WRITE)
// 0049d2bf: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_0049d2bf
//   XREF to: Stack[0x4] (READ)
// 0049d2c3: MOV EAX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0049d2c7: MOV EBX,0x1
// 0049d2cc: CMP EDI,EAX
// 0049d2ce: JGE 0x0049d2fc
//   XREF to: 0049d2fc (CONDITIONAL_JUMP)
// 0049d2d0: LEA EDX,[ESI + ESI*0x1]
// 0049d2d3: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 0049d2d7: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_0049d2d7
//   XREF to: Stack[-0x1c] (READ)
// 0049d2db: MOV EDX,EBX
// 0049d2dd: MOV EAX,EBX
// 0049d2df: SAR EDX,0x1f
// 0049d2e2: IDIV ECX
// 0049d2e4: CMP EDX,ESI
// 0049d2e6: JGE 0x0049d2f2
//   XREF to: 0049d2f2 (CONDITIONAL_JUMP)
// 0049d2e8: PUSH EBP
// 0049d2e9: PUSH EDI
// 0049d2ea: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0049d2ef: ADD ESP,0x8
// 0049d2f2: MOV EDX,dword ptr [ESP + 0x2c]
//   Label: LAB_0049d2f2
//   XREF to: Stack[0xc] (READ)
// 0049d2f6: INC EDI
// 0049d2f7: INC EBX
// 0049d2f8: CMP EDI,EDX
// 0049d2fa: JL 0x0049d2d7
//   XREF to: 0049d2d7 (CONDITIONAL_JUMP)
// 0049d2fc: MOV ECX,dword ptr [ESP + 0x30]
//   Label: LAB_0049d2fc
//   XREF to: Stack[0x10] (READ)
// 0049d300: MOV EDI,EBP
// 0049d302: CMP EBP,ECX
// 0049d304: JGE 0x0049d336
//   XREF to: 0049d336 (CONDITIONAL_JUMP)
// 0049d306: LEA EDX,[ESI + ESI*0x1]
// 0049d309: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0049d30d: MOV ECX,dword ptr [ESP + 0xc]
//   Label: LAB_0049d30d
//   XREF to: Stack[-0x14] (READ)
// 0049d311: MOV EDX,EBX
// 0049d313: MOV EAX,EBX
// 0049d315: SAR EDX,0x1f
// 0049d318: IDIV ECX
// 0049d31a: CMP EDX,ESI
// 0049d31c: JGE 0x0049d32c
//   XREF to: 0049d32c (CONDITIONAL_JUMP)
// 0049d31e: PUSH EDI
// 0049d31f: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0xc] (READ)
// 0049d323: PUSH EAX
// 0049d324: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0049d329: ADD ESP,0x8
// 0049d32c: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_0049d32c
//   XREF to: Stack[0x10] (READ)
// 0049d330: INC EDI
// 0049d331: INC EBX
// 0049d332: CMP EDI,EAX
// 0049d334: JL 0x0049d30d
//   XREF to: 0049d30d (CONDITIONAL_JUMP)
// 0049d336: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_0049d336
//   XREF to: Stack[0x4] (READ)
// 0049d33a: MOV EDI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0xc] (READ)
// 0049d33e: CMP EDI,ECX
// 0049d340: JLE 0x0049d370
//   XREF to: 0049d370 (CONDITIONAL_JUMP)
// 0049d342: LEA EDX,[ESI + ESI*0x1]
// 0049d345: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x20] (DATA)
// 0049d348: MOV ECX,dword ptr [ESP]
//   Label: LAB_0049d348
//   XREF to: Stack[-0x20] (DATA)
// 0049d34b: MOV EDX,EBX
// 0049d34d: MOV EAX,EBX
// 0049d34f: SAR EDX,0x1f
// 0049d352: IDIV ECX
// 0049d354: CMP EDX,ESI
// 0049d356: JGE 0x0049d366
//   XREF to: 0049d366 (CONDITIONAL_JUMP)
// 0049d358: MOV EAX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x10] (READ)
// 0049d35c: PUSH EAX
// 0049d35d: PUSH EDI
// 0049d35e: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0049d363: ADD ESP,0x8
// 0049d366: MOV EDX,dword ptr [ESP + 0x24]
//   Label: LAB_0049d366
//   XREF to: Stack[0x4] (READ)
// 0049d36a: DEC EDI
// 0049d36b: INC EBX
// 0049d36c: CMP EDI,EDX
// 0049d36e: JG 0x0049d348
//   XREF to: 0049d348 (CONDITIONAL_JUMP)
// 0049d370: MOV EDI,dword ptr [ESP + 0x30]
//   Label: LAB_0049d370
//   XREF to: Stack[0x10] (READ)
// 0049d374: CMP EBP,EDI
// 0049d376: JGE 0x0049d396
//   XREF to: 0049d396 (CONDITIONAL_JUMP)
// 0049d378: LEA EDX,[ESI + ESI*0x1]
// 0049d37b: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 0049d37f: MOV ECX,dword ptr [ESP + 0x8]
//   Label: LAB_0049d37f
//   XREF to: Stack[-0x18] (READ)
// 0049d383: MOV EDX,EBX
// 0049d385: MOV EAX,EBX
// 0049d387: SAR EDX,0x1f
// 0049d38a: IDIV ECX
// 0049d38c: CMP EDX,ESI
// 0049d38e: JL 0x0049d3ab
//   XREF to: 0049d3ab (CONDITIONAL_JUMP)
// 0049d390: DEC EDI
// 0049d391: INC EBX
// 0049d392: CMP EDI,EBP
// 0049d394: JG 0x0049d37f
//   XREF to: 0049d37f (CONDITIONAL_JUMP)
// 0049d396: ADD ESP,0x10
//   Label: LAB_0049d396
// 0049d399: POP EBP
// 0049d39a: POP EDI
// 0049d39b: POP ESI
// 0049d39c: POP EBX
// 0049d39d: RET
// 0049d39e: MOV dword ptr [ESP + 0x24],ECX
//   Label: LAB_0049d39e
//   XREF to: Stack[0x4] (WRITE)
// 0049d3a2: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[0xc] (WRITE)
// 0049d3a6: JMP 0x0049d2af
//   XREF to: 0049d2af (UNCONDITIONAL_JUMP)
// 0049d3ab: PUSH EDI
//   Label: LAB_0049d3ab
// 0049d3ac: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0049d3b0: PUSH EAX
// 0049d3b1: CALL engine_2d.c_plotPixel_FUN_00401140
//   XREF to: 00401140 (UNCONDITIONAL_CALL)
// 0049d3b6: ADD ESP,0x8
// 0049d3b9: DEC EDI
// 0049d3ba: INC EBX
// 0049d3bb: CMP EDI,EBP
// 0049d3bd: JG 0x0049d37f
//   XREF to: 0049d37f (CONDITIONAL_JUMP)
// 0049d3bf: ADD ESP,0x10
// 0049d3c2: POP EBP
// 0049d3c3: POP EDI
// 0049d3c4: POP ESI
// 0049d3c5: POP EBX
// 0049d3c6: RET
