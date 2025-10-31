// Name: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0
// Address: 004885d0
// Address Range: [[004885d0, 00488626]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2, int border_width, int border_height)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int border_width,int border_height)

{
  int x;
  int y;
  
  x = ((y1 + x1 + 1) - border_width) / 2;
  y = ((y2 + x2 + 1) - border_height) / 2;
  cockpit_drawsurf_cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
            (this_ptr,x,y,border_width + x + -1,border_height + -1 + y);
  return;
}


// Assembly code:
// 004885d0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawRectangleBetweenPoints_FUN_004885d0
// 004885d1: PUSH ESI
// 004885d2: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004885d6: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 004885da: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004885de: ADD EDX,ECX
// 004885e0: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 004885e4: INC EDX
// 004885e5: SUB EDX,ECX
// 004885e7: MOV EAX,EDX
// 004885e9: SAR EDX,0x1f
// 004885ec: SUB EAX,EDX
// 004885ee: SAR EAX,0x1
// 004885f0: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 004885f4: ADD EDX,EBX
// 004885f6: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x1c] (READ)
// 004885fa: INC EDX
// 004885fb: SUB EDX,EBX
// 004885fd: MOV ECX,EAX
// 004885ff: MOV EAX,EDX
// 00488601: SAR EDX,0x1f
// 00488604: SUB EAX,EDX
// 00488606: SAR EAX,0x1
// 00488608: LEA EDX,[EBX + EAX*0x1 + -0x1]
// 0048860c: PUSH EDX
// 0048860d: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x18] (READ)
// 00488611: ADD EDX,ECX
// 00488613: DEC EDX
// 00488614: PUSH EDX
// 00488615: PUSH EAX
// 00488616: PUSH ECX
// 00488617: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0048861b: PUSH ESI
// 0048861c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawRectangleOutline_FUN_004884d0
//   XREF to: 004884d0 (UNCONDITIONAL_CALL)
// 00488621: ADD ESP,0x14
// 00488624: POP ESI
// 00488625: POP EBX
// 00488626: RET
