// Name: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
// Address: 00487990
// Address Range: [[00487990, 00487a23]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawClosedPolyline_FUN_00489090 (00489090) at 004890c0 [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489e16 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
//   cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawClippedLine_FUN_00487990
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000018;
  
  x1 = x1 + this_ptr->x;
  y1 = y1 + this_ptr->y;
  x2 = x2 + this_ptr->x;
  y2 = y2 + this_ptr->y;
  iVar1 = cockpit_drawsurf_cpp_CDrawSurface_clipLine_FUN_00487e20
                    (this_ptr,&x1,&y1,&x2,&y2,this_ptr->clip_left,this_ptr->clip_top,
                     this_ptr->clip_right,this_ptr->clip_bottom);
  if (iVar1 == 0) {
    return;
  }
  cockpit_drawsurf_cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
            (this_ptr,y1,x2,y2,in_stack_00000018);
  return;
}


// Assembly code:
// 00487990: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawClippedLine_FUN_00487990
// 00487991: PUSH ESI
// 00487992: PUSH EDI
// 00487993: PUSH EBP
// 00487994: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00487998: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0048799c: MOV EAX,dword ptr [EBX + 0x8]
// 0048799f: ADD EDX,EAX
// 004879a1: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[0x8] (WRITE)
// 004879a5: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004879a9: MOV EAX,dword ptr [EBX + 0xc]
// 004879ac: ADD ECX,EAX
// 004879ae: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[0xc] (WRITE)
// 004879b2: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004879b6: MOV EAX,dword ptr [EBX + 0x8]
// 004879b9: ADD ESI,EAX
// 004879bb: MOV dword ptr [ESP + 0x20],ESI
//   XREF to: Stack[0x10] (WRITE)
// 004879bf: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004879c3: MOV EAX,dword ptr [EBX + 0xc]
// 004879c6: ADD EDI,EAX
// 004879c8: MOV dword ptr [ESP + 0x24],EDI
//   XREF to: Stack[0x14] (WRITE)
// 004879cc: MOV EBP,dword ptr [EBX + 0x1c]
// 004879cf: PUSH EBP
// 004879d0: MOV EAX,dword ptr [EBX + 0x18]
// 004879d3: PUSH EAX
// 004879d4: MOV EDX,dword ptr [EBX + 0x14]
// 004879d7: PUSH EDX
// 004879d8: MOV ECX,dword ptr [EBX + 0x10]
// 004879db: PUSH ECX
// 004879dc: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[0x14] (DATA)
// 004879e0: PUSH EAX
// 004879e1: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[0x10] (DATA)
// 004879e5: PUSH EAX
// 004879e6: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[0xc] (DATA)
// 004879ea: PUSH EAX
// 004879eb: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[0x8] (DATA)
// 004879ef: PUSH EAX
// 004879f0: PUSH EBX
// 004879f1: CALL cockpit_drawsurf.cpp_CDrawSurface_clipLine_FUN_00487e20
//   XREF to: 00487e20 (UNCONDITIONAL_CALL)
// 004879f6: ADD ESP,0x24
// 004879f9: TEST EAX,EAX
// 004879fb: JNZ 0x00487a02
//   XREF to: 00487a02 (CONDITIONAL_JUMP)
// 004879fd: POP EBP
// 004879fe: POP EDI
// 004879ff: POP ESI
// 00487a00: POP EBX
// 00487a01: RET
// 00487a02: MOV ESI,dword ptr [ESP + 0x24]
//   Label: LAB_00487a02
//   XREF to: Stack[0x14] (READ)
// 00487a06: PUSH ESI
// 00487a07: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 00487a0b: PUSH EDI
// 00487a0c: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00487a10: PUSH EBP
// 00487a11: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00487a15: PUSH EAX
// 00487a16: PUSH EBX
// 00487a17: CALL cockpit_drawsurf.cpp_CDrawSurface_drawLineBresenham_FUN_00487ad0
//   XREF to: 00487ad0 (UNCONDITIONAL_CALL)
// 00487a1c: ADD ESP,0x14
// 00487a1f: POP EBP
// 00487a20: POP EDI
// 00487a21: POP ESI
// 00487a22: POP EBX
// 00487a23: RET
