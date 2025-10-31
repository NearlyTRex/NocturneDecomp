// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0
// Address: 00489ad0
// Address Range: [[00489ad0, 00489ae9]]
// Convention: __cdecl
// Signature: void cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0(CDrawSurface * this_ptr, int y, int height, char * text)
// Function calls:
//   cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0
          (CDrawSurface *this_ptr,int y,int height,char *text)

{
  char *unaff_EBX;
  
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
            (this_ptr,height,y,unaff_EBX);
  return;
}


// Assembly code:
// 00489ad0: PUSH EBX
//   Label: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidthWrapper_FUN_00489ad0
// 00489ad1: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00489ad5: PUSH EDX
// 00489ad6: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 00489ada: PUSH ECX
// 00489adb: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00489adf: PUSH EBX
// 00489ae0: CALL cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullWidth_FUN_00489ab0
//   XREF to: 00489ab0 (UNCONDITIONAL_CALL)
// 00489ae5: ADD ESP,0xc
// 00489ae8: POP EBX
// 00489ae9: RET
