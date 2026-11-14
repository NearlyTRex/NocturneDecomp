// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_00480750
// Address: 00480750
// Address Range: [[00480750, 00480776]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00480750(CDrawSurface *this_ptr,char *text,int x,int y)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_00480750(CDrawSurface *this_ptr,char *text,int x,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00480480
            (this_ptr,text,x,0,y,0,TEXT_ALIGN_LEFT);
  return;
}
