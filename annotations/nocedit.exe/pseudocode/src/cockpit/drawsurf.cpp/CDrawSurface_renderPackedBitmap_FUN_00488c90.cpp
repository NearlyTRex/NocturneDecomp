// Name: cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90
// Address: 00488c90
// Address Range: [[00488c90, 00488ccd]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90(CDrawSurface * this_ptr, int x_offset, int y_offset, CPackedBitmap * bitmap_ptr)
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90
          (CDrawSurface *this_ptr,int x_offset,int y_offset,CPackedBitmap *bitmap_ptr)

{
  cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
            (bitmap_ptr,x_offset + this_ptr->x,y_offset + this_ptr->y,this_ptr->clip_left,
             this_ptr->clip_top,this_ptr->clip_right,this_ptr->clip_bottom);
  return;
}


// Assembly code:
// 00488c90: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90
// 00488c91: PUSH ESI
// 00488c92: PUSH EDI
// 00488c93: PUSH EBP
// 00488c94: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00488c98: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00488c9c: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00488ca0: MOV EDI,dword ptr [EAX + 0x1c]
// 00488ca3: MOV EBX,dword ptr [EAX + 0x8]
// 00488ca6: PUSH EDI
// 00488ca7: MOV EBP,dword ptr [EAX + 0x18]
// 00488caa: ADD EDX,EBX
// 00488cac: PUSH EBP
// 00488cad: MOV EBX,dword ptr [EAX + 0x14]
// 00488cb0: MOV ESI,dword ptr [EAX + 0xc]
// 00488cb3: PUSH EBX
// 00488cb4: ADD ECX,ESI
// 00488cb6: MOV ESI,dword ptr [EAX + 0x10]
// 00488cb9: PUSH ESI
// 00488cba: PUSH ECX
// 00488cbb: PUSH EDX
// 00488cbc: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x10] (READ)
// 00488cc0: PUSH EDI
// 00488cc1: CALL cockpit_pkbitmap.cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
//   XREF to: 0054adb0 (UNCONDITIONAL_CALL)
// 00488cc6: ADD ESP,0x1c
// 00488cc9: POP EBP
// 00488cca: POP EDI
// 00488ccb: POP ESI
// 00488ccc: POP EBX
// 00488ccd: RET
