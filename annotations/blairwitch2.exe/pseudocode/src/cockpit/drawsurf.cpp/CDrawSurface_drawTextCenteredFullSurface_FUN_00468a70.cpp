// Name: cockpit_drawsurf.cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70
// Address: 00468a70
// Address Range: [[00468a70, 00468a8f]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70(CDrawSurface *this_ptr,char *text)

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredFullSurface_FUN_00468a70(CDrawSurface *this_ptr,char *text)

{
  cockpit_drawsurf_cpp_CDrawSurface_drawTextCenteredInAreaWithWidth_FUN_00468810
            (this_ptr,text,0,this_ptr->width + -1,0,this_ptr->height + -1);
  return;
}
