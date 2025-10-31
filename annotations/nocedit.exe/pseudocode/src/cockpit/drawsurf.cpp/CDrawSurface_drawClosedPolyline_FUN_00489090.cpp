// Name: cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_00489090
// Address: 00489090
// Address Range: [[00489090, 004890d3]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_00489090(CDrawSurface * this_ptr, int point_count, CVector2i * points)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawClosedPolyline_FUN_00489090
          (CDrawSurface *this_ptr,int point_count,CVector2i *points)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CVector2i *pCVar4;
  
  iVar1 = point_count + -1;
  iVar2 = 0;
  pCVar4 = points;
  if (0 < point_count) {
    do {
      cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990
                (this_ptr,points[iVar1].x,points[iVar1].y,pCVar4->x,pCVar4->y);
      iVar3 = iVar2 + 1;
      iVar1 = iVar2;
      iVar2 = iVar3;
      pCVar4 = pCVar4 + 1;
    } while (iVar3 < point_count);
  }
  return;
}


// Assembly code:
// 00489090: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_00489090
// 00489091: PUSH EDI
// 00489092: PUSH EBP
// 00489093: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00489097: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0048909b: LEA EAX,[EDI + -0x1]
// 0048909e: XOR EBX,EBX
// 004890a0: TEST EDI,EDI
// 004890a2: JLE 0x004890d0
//   XREF to: 004890d0 (CONDITIONAL_JUMP)
// 004890a4: PUSH ESI
// 004890a5: MOV ESI,EBP
// 004890a7: MOV EDX,dword ptr [ESI + 0x4]
//   Label: LAB_004890a7
// 004890aa: PUSH EDX
// 004890ab: MOV ECX,dword ptr [ESI]
// 004890ad: PUSH ECX
// 004890ae: MOV EDX,dword ptr [EBP + EAX*0x8 + 0x4]
// 004890b2: PUSH EDX
// 004890b3: MOV ECX,dword ptr [EBP + EAX*0x8]
// 004890b7: PUSH ECX
// 004890b8: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004890bc: PUSH EAX
// 004890bd: ADD ESI,0x8
// 004890c0: CALL cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
//   XREF to: 00487990 (UNCONDITIONAL_CALL)
// 004890c5: MOV EAX,EBX
// 004890c7: INC EBX
// 004890c8: ADD ESP,0x14
// 004890cb: CMP EBX,EDI
// 004890cd: JL 0x004890a7
//   XREF to: 004890a7 (CONDITIONAL_JUMP)
// 004890cf: POP ESI
// 004890d0: POP EBP
//   Label: LAB_004890d0
// 004890d1: POP EDI
// 004890d2: POP EBX
// 004890d3: RET
