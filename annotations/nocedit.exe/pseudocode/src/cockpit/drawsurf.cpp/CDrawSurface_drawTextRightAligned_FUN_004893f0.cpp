// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
// Address: 004893f0
// Address Range: [[004893f0, 00489416]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0(CDrawSurface * this_ptr, int x, int y, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedPrintf_FUN_00489450 (00489450) at 004894aa [UNCONDITIONAL_CALL]
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420 (00489420) at 00489436 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_RelatedToSubtitles_FUN_00559d80 (00559d80) at 00559ec3 [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
          (CDrawSurface *this_ptr,int x,int y,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,x,y,0,(int)text,(char *)0x0,0);
  return;
}


// Assembly code:
// 004893f0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
// 004893f1: PUSH ESI
// 004893f2: PUSH 0x0
// 004893f4: PUSH 0x0
// 004893f6: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004893fa: PUSH EDX
// 004893fb: PUSH 0x0
// 004893fd: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0xc] (READ)
// 00489401: PUSH ECX
// 00489402: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00489406: PUSH EBX
// 00489407: MOV ESI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0048940b: PUSH ESI
// 0048940c: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
//   XREF to: 00489120 (UNCONDITIONAL_CALL)
// 00489411: ADD ESP,0x1c
// 00489414: POP ESI
// 00489415: POP EBX
// 00489416: RET
