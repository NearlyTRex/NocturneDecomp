// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
// Address: 00489830
// Address Range: [[00489830, 00489857]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830(CDrawSurface * this_ptr, int x, int y, int width, int height, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489f18 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
          (CDrawSurface *this_ptr,int x,int y,int width,int height,char *text)

{
  char *unaff_EDI;
  
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
            (this_ptr,height,x,y,width,unaff_EDI);
  return;
}


// Assembly code:
// 00489830: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBoundsWrapper_FUN_00489830
// 00489831: PUSH ESI
// 00489832: PUSH EDI
// 00489833: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 00489837: PUSH EDX
// 00489838: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0048983c: PUSH ECX
// 0048983d: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00489841: PUSH EBX
// 00489842: MOV ESI,dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x14] (READ)
// 00489846: PUSH ESI
// 00489847: MOV EDI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0048984b: PUSH EDI
// 0048984c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredInBounds_FUN_00489800
//   XREF to: 00489800 (UNCONDITIONAL_CALL)
// 00489851: ADD ESP,0x14
// 00489854: POP EDI
// 00489855: POP ESI
// 00489856: POP EBX
// 00489857: RET
