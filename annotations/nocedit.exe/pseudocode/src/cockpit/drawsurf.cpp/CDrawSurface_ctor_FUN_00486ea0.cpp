// Name: cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
// Address: 00486ea0
// Address Range: [[00486ea0, 00486ed0]]
// Convention: __cdecl
// Signature: CDrawSurface * cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0(CDrawSurface * this_ptr, int x, int y, int width, int height, CDrawSurface * parent_surface)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489d8c [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559dbe [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0

#include "nocturne.h"

CDrawSurface * __cdecl
cockpit_drawsurf_cpp_CDrawSurface_ctor_FUN_00486ea0
          (CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface)

{
  cockpit_drawsurf_cpp_CDrawSurface_init_FUN_00486ee0(this_ptr,x,y,width,height,parent_surface);
  return this_ptr;
}


// Assembly code:
// 00486ea0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_ctor_FUN_00486ea0
// 00486ea1: PUSH ESI
// 00486ea2: PUSH EDI
// 00486ea3: PUSH EBP
// 00486ea4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00486ea8: MOV EDX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00486eac: PUSH EDX
// 00486ead: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x14] (READ)
// 00486eb1: PUSH ECX
// 00486eb2: MOV ESI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x10] (READ)
// 00486eb6: PUSH ESI
// 00486eb7: MOV EDI,dword ptr [ESP + 0x28]
//   XREF to: Stack[0xc] (READ)
// 00486ebb: PUSH EDI
// 00486ebc: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x8] (READ)
// 00486ec0: PUSH EBP
// 00486ec1: PUSH EBX
// 00486ec2: CALL cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00486ee0
//   XREF to: 00486ee0 (UNCONDITIONAL_CALL)
// 00486ec7: ADD ESP,0x18
// 00486eca: MOV EAX,EBX
// 00486ecc: POP EBP
// 00486ecd: POP EDI
// 00486ece: POP ESI
// 00486ecf: POP EBX
// 00486ed0: RET
