// Name: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
// Address: 00487730
// Address Range: [[00487730, 00487818]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730(CDrawSurface * this_ptr, int center_x, int center_y, int radius)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomLeft_FUN_00487880 (00487880) at 00487898 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromBottomRight_FUN_004878b0 (004878b0) at 004878c8 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopLeft_FUN_00487820 (00487820) at 00487838 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawCircleFromTopRight_FUN_00487850 (00487850) at 00487868 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489e29 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawCircle_FUN_00487730
          (CDrawSurface *this_ptr,int center_x,int center_y,int radius)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CDrawSurface *this_ptr_00;
  int height;
  int iVar4;
  int iVar5;
  
  if (0 < radius) {
    iVar3 = center_x + this_ptr->x;
    iVar2 = center_y + this_ptr->y;
    if (((this_ptr->clip_left <= iVar3 + radius) || (this_ptr->clip_top <= iVar2 + radius)) &&
       ((iVar3 - radius <= this_ptr->clip_right || (iVar2 - radius <= this_ptr->clip_bottom)))) {
      this_ptr_00 = (CDrawSurface *)(iVar3 - this_ptr->x);
      iVar2 = iVar2 - this_ptr->y;
      iVar3 = 0;
      iVar5 = 1 - radius;
      cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
                (this_ptr,(int)this_ptr_00,iVar2,0,radius);
      if (0 < radius) {
        iVar4 = 1;
        height = radius;
        do {
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 2;
          iVar1 = iVar4;
          if (-1 < iVar5) {
            height = height + -1;
            iVar1 = (iVar3 - height) * 2 + 1;
          }
          iVar5 = iVar5 + iVar1;
          cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
                    (this_ptr_00,iVar2,radius,iVar3,height);
        } while (iVar3 < height);
      }
    }
  }
  return;
}


// Assembly code:
// 00487730: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawCircle_FUN_00487730
// 00487731: PUSH ESI
// 00487732: PUSH EDI
// 00487733: PUSH EBP
// 00487734: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00487738: TEST EBP,EBP
// 0048773a: JLE 0x00487794
//   XREF to: 00487794 (CONDITIONAL_JUMP)
// 0048773c: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00487740: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00487744: MOV EAX,dword ptr [EAX + 0x8]
// 00487747: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0048774b: ADD EDX,EAX
// 0048774d: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00487751: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00487755: MOV ESI,dword ptr [EBX + 0x10]
// 00487758: MOV EAX,dword ptr [EAX + 0xc]
// 0048775b: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[0x8] (WRITE)
// 0048775f: ADD ECX,EAX
// 00487761: LEA EAX,[EDX + EBP*0x1]
// 00487764: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[0xc] (WRITE)
// 00487768: CMP EAX,ESI
// 0048776a: JGE 0x00487776
//   XREF to: 00487776 (CONDITIONAL_JUMP)
// 0048776c: MOV EDI,dword ptr [EBX + 0x14]
// 0048776f: LEA EAX,[ECX + EBP*0x1]
// 00487772: CMP EAX,EDI
// 00487774: JL 0x00487794
//   XREF to: 00487794 (CONDITIONAL_JUMP)
// 00487776: MOV EBX,dword ptr [ESP + 0x14]
//   Label: LAB_00487776
//   XREF to: Stack[0x4] (READ)
// 0048777a: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048777e: MOV EDX,dword ptr [EBX + 0x18]
// 00487781: SUB EAX,EBP
// 00487783: CMP EAX,EDX
// 00487785: JLE 0x00487799
//   XREF to: 00487799 (CONDITIONAL_JUMP)
// 00487787: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048778b: MOV ECX,dword ptr [EBX + 0x1c]
// 0048778e: SUB EAX,EBP
// 00487790: CMP EAX,ECX
// 00487792: JLE 0x00487799
//   XREF to: 00487799 (CONDITIONAL_JUMP)
// 00487794: POP EBP
//   Label: LAB_00487794
// 00487795: POP EDI
// 00487796: POP ESI
// 00487797: POP EBX
// 00487798: RET
// 00487799: MOV EAX,dword ptr [ESP + 0x14]
//   Label: LAB_00487799
//   XREF to: Stack[0x4] (READ)
// 0048779d: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004877a1: SUB EBX,dword ptr [EAX + 0x8]
// 004877a4: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004877a8: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004877ac: SUB ESI,dword ptr [EAX + 0xc]
// 004877af: PUSH EBP
// 004877b0: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[0xc] (WRITE)
// 004877b4: XOR ESI,ESI
// 004877b6: PUSH ESI
// 004877b7: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004877bb: MOV dword ptr [ESP + 0x20],EBX
//   XREF to: Stack[0x8] (WRITE)
// 004877bf: PUSH EAX
// 004877c0: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004877c4: PUSH EDX
// 004877c5: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004877c9: MOV EDI,0x1
// 004877ce: PUSH ECX
// 004877cf: SUB EDI,EBP
// 004877d1: MOV EBX,EBP
// 004877d3: CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
//   XREF to: 004878e0 (UNCONDITIONAL_CALL)
// 004877d8: ADD ESP,0x14
// 004877db: TEST EBP,EBP
// 004877dd: JLE 0x00487794
//   XREF to: 00487794 (CONDITIONAL_JUMP)
// 004877df: MOV EBP,0x1
// 004877e4: INC ESI
//   Label: LAB_004877e4
// 004877e5: ADD EBP,0x2
// 004877e8: TEST EDI,EDI
// 004877ea: JL 0x00487815
//   XREF to: 00487815 (CONDITIONAL_JUMP)
// 004877ec: MOV EAX,ESI
// 004877ee: DEC EBX
// 004877ef: SUB EAX,EBX
// 004877f1: ADD EAX,EAX
// 004877f3: INC EAX
// 004877f4: ADD EDI,EAX
// 004877f6: PUSH EBX
//   Label: LAB_004877f6
// 004877f7: PUSH ESI
// 004877f8: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004877fc: PUSH EAX
// 004877fd: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00487801: PUSH EDX
// 00487802: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00487806: PUSH ECX
// 00487807: CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004878e0
//   XREF to: 004878e0 (UNCONDITIONAL_CALL)
// 0048780c: ADD ESP,0x14
// 0048780f: CMP ESI,EBX
// 00487811: JGE 0x00487794
//   XREF to: 00487794 (CONDITIONAL_JUMP)
// 00487813: JMP 0x004877e4
//   XREF to: 004877e4 (UNCONDITIONAL_JUMP)
// 00487815: ADD EDI,EBP
//   Label: LAB_00487815
// 00487817: JMP 0x004877f6
//   XREF to: 004877f6 (UNCONDITIONAL_JUMP)
