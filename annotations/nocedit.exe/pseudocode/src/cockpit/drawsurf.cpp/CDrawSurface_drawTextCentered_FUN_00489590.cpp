// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590
// Address: 00489590
// Address Range: [[00489590, 004895b6]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredPrintf_FUN_004895f0 (004895f0) at 0048964a [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0 (004895c0) at 004895d6 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_00489590
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,x,y,0,height,(char *)0x0,2);
  return;
}


// Assembly code:
// 00489590: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590
// 00489591: PUSH ESI
// 00489592: PUSH 0x2
// 00489594: PUSH 0x0
// 00489596: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0048959a: PUSH EDX
// 0048959b: PUSH 0x0
// 0048959d: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 004895a1: PUSH ECX
// 004895a2: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004895a6: PUSH EBX
// 004895a7: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 004895ab: PUSH ESI
// 004895ac: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
//   XREF to: 00489120 (UNCONDITIONAL_CALL)
// 004895b1: ADD ESP,0x1c
// 004895b4: POP ESI
// 004895b5: POP EBX
// 004895b6: RET
