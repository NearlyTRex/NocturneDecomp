// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
// Address: 004895c0
// Address Range: [[004895c0, 004895e0]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0(CDrawSurface * this_ptr, int x, int y, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489f00 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
          (CDrawSurface *this_ptr,int x,int y,int height,char *text)

{
  char *unaff_ESI;
  
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCentered_FUN_00489590(this_ptr,height,x,y,unaff_ESI);
  return;
}


// Assembly code:
// 004895c0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredWrapper_FUN_004895c0
// 004895c1: PUSH ESI
// 004895c2: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004895c6: PUSH EDX
// 004895c7: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004895cb: PUSH ECX
// 004895cc: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004895d0: PUSH EBX
// 004895d1: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004895d5: PUSH ESI
// 004895d6: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCentered_FUN_00489590
//   XREF to: 00489590 (UNCONDITIONAL_CALL)
// 004895db: ADD ESP,0x10
// 004895de: POP ESI
// 004895df: POP EBX
// 004895e0: RET
