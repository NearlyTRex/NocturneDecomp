// Name: cockpit_drawsurf.cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90
// Address: 00488c90
// Address Range: [[00488c90, 00488ccd]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90 (CDrawSurface *this_ptr,int x_offset,int y_offset,CPackedBitmap *bitmap_ptr)

#include "nocturne.h"

void __cdecl
cockpit_drawsurf_cpp_CDrawSurface_renderPackedBitmap_FUN_00488c90
          (CDrawSurface *this_ptr,int x_offset,int y_offset,CPackedBitmap *bitmap_ptr)

{
  cockpit_pkbitmap_cpp_CPackedBitmap_renderIfIntersectsRect_FUN_0054adb0
            (bitmap_ptr,x_offset + this_ptr->x,y_offset + this_ptr->y,this_ptr->clip_left,
             this_ptr->clip_top,this_ptr->clip_right,this_ptr->clip_bottom);
  return;
}
