// Name: cockpit_drawsurf.cpp_CDrawSurface_drawInsetRectangle_FUN_00488740
// Address: 00488740
// Address Range: [[00488740, 00488796]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawInsetRectangle_FUN_00488740(CDrawSurface * this_ptr, int x1, int y1, int x2, int y2, int inset_x, int inset_y)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawInsetRectangle_FUN_00488740
          (CDrawSurface *this_ptr,int x1,int y1,int x2,int y2,int inset_x,int inset_y)

{
  int x1_00;
  int y1_00;
  
  x1_00 = ((y1 + x1 + 1) - inset_x) / 2;
  y1_00 = ((y2 + x2 + 1) - inset_y) / 2;
  cockpit_drawsurf_cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
            (this_ptr,x1_00,y1_00,inset_x + x1_00 + -1,inset_y + -1 + y1_00);
  return;
}


// Assembly code:
// 00488740: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawInsetRectangle_FUN_00488740
// 00488741: PUSH ESI
// 00488742: MOV ECX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00488746: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0048874a: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0048874e: ADD EDX,ECX
// 00488750: MOV ECX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 00488754: INC EDX
// 00488755: SUB EDX,ECX
// 00488757: MOV EAX,EDX
// 00488759: SAR EDX,0x1f
// 0048875c: SUB EAX,EDX
// 0048875e: SAR EAX,0x1
// 00488760: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 00488764: ADD EDX,EBX
// 00488766: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x1c] (READ)
// 0048876a: INC EDX
// 0048876b: SUB EDX,EBX
// 0048876d: MOV ECX,EAX
// 0048876f: MOV EAX,EDX
// 00488771: SAR EDX,0x1f
// 00488774: SUB EAX,EDX
// 00488776: SAR EAX,0x1
// 00488778: LEA EDX,[EBX + EAX*0x1 + -0x1]
// 0048877c: PUSH EDX
// 0048877d: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x18] (READ)
// 00488781: ADD EDX,ECX
// 00488783: DEC EDX
// 00488784: PUSH EDX
// 00488785: PUSH EAX
// 00488786: PUSH ECX
// 00488787: MOV ESI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0048878b: PUSH ESI
// 0048878c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawSolidRectangle_FUN_00488630
//   XREF to: 00488630 (UNCONDITIONAL_CALL)
// 00488791: ADD ESP,0x14
// 00488794: POP ESI
// 00488795: POP EBX
// 00488796: RET
