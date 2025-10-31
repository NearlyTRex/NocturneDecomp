// Name: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30
// Address: 00488a30
// Address Range: [[00488a30, 00488a86]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2, int inset_x, int inset_y)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y)

{
  int x1_00;
  int y1_00;
  
  x1_00 = ((y1 + x1 + 1) - inset_x) / 2;
  y1_00 = ((y2 + x2 + 1) - inset_y) / 2;
  cockpit_drawsurf_cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
            (this_ptr,x1_00,y1_00,inset_x + x1_00 + -1,inset_y + -1 + y1_00);
  return;
}


// Assembly code:
// 00488a30: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedInsetRectangle_FUN_00488a30
// 00488a31: PUSH ESI
// 00488a32: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00488a36: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 00488a3a: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00488a3e: ADD EDX,ECX
// 00488a40: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 00488a44: INC EDX
// 00488a45: SUB EDX,ECX
// 00488a47: MOV EAX,EDX
// 00488a49: SAR EDX,0x1f
// 00488a4c: SUB EAX,EDX
// 00488a4e: SAR EAX,0x1
// 00488a50: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 00488a54: ADD EDX,EBX
// 00488a56: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x1c] (READ)
// 00488a5a: INC EDX
// 00488a5b: SUB EDX,EBX
// 00488a5d: MOV ECX,EAX
// 00488a5f: MOV EAX,EDX
// 00488a61: SAR EDX,0x1f
// 00488a64: SUB EAX,EDX
// 00488a66: SAR EAX,0x1
// 00488a68: LEA EDX,[EBX + EAX*0x1 + -0x1]
// 00488a6c: PUSH EDX
// 00488a6d: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x18] (READ)
// 00488a71: ADD EDX,ECX
// 00488a73: DEC EDX
// 00488a74: PUSH EDX
// 00488a75: PUSH EAX
// 00488a76: PUSH ECX
// 00488a77: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 00488a7b: PUSH ESI
// 00488a7c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawAnimatedDashedLine_FUN_004887a0
//   XREF to: 004887a0 (UNCONDITIONAL_CALL)
// 00488a81: ADD ESP,0x14
// 00488a84: POP ESI
// 00488a85: POP EBX
// 00488a86: RET
