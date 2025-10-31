// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
// Address: 00489420
// Address Range: [[00489420, 00489440]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420(CDrawSurface * this_ptr, int x, int y, char * text)
// Cross-references:
//   cockpit_drawsurf.cpp_testDrawingSurface_FUN_00489d30 (00489d30) at 00489ebb [UNCONDITIONAL_CALL]
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
          (CDrawSurface *this_ptr,int x,int y,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
            (this_ptr,(int)text,x,(char *)y);
  return;
}


// Assembly code:
// 00489420: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAlignedWrapper_FUN_00489420
// 00489421: PUSH ESI
// 00489422: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00489426: PUSH EDX
// 00489427: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 0048942b: PUSH ECX
// 0048942c: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00489430: PUSH EBX
// 00489431: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00489435: PUSH ESI
// 00489436: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
//   XREF to: 004893f0 (UNCONDITIONAL_CALL)
// 0048943b: ADD ESP,0x10
// 0048943e: POP ESI
// 0048943f: POP EBX
// 00489440: RET
