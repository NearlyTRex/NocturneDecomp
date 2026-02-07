// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
// Address: 004893f0
// Address Range: [[004893f0, 00489416]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0 (CDrawSurface *this_ptr,char *text,int x,int y)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_drawTextRightAligned_FUN_004893f0
          (CDrawSurface *this_ptr,char *text,int x,int y)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextWithAlignment_FUN_00489120
            (this_ptr,text,x,0,y,0,TEXT_ALIGN_LEFT);
  return;
}
