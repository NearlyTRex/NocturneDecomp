// Name: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_00467940
// Address: 00467940
// Address Range: [[00467940, 00467a62]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_00467940(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface )

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_00467940(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface )

{
  *(int *)(this_ptr + 8) = x;
  *(int *)(this_ptr + 0xc) = y;
  *(int *)this_ptr = width;
  *(int *)(this_ptr + 4) = height;
  *(uint *)(this_ptr + 0x10) = *(uint *)(this_ptr + 8);
  *(uint *)(this_ptr + 0x14) = *(uint *)(this_ptr + 0xc);
  *(int *)(this_ptr + 0x18) = *(int *)(this_ptr + 8) + *(int *)this_ptr + -1;
  *(int *)(this_ptr + 0x1c) = *(int *)(this_ptr + 0xc) + *(int *)(this_ptr + 4) + -1;
  if (parent_surface != (CDrawSurface *)0x0) {
    *(int *)(this_ptr + 8) = *(int *)(this_ptr + 8) + *(int *)(parent_surface + 8);
    *(int *)(this_ptr + 0xc) = *(int *)(this_ptr + 0xc) + *(int *)(parent_surface + 0xc);
    *(int *)(this_ptr + 0x10) = *(int *)(this_ptr + 0x10) + *(int *)(parent_surface + 8);
    *(int *)(this_ptr + 0x14) = *(int *)(this_ptr + 0x14) + *(int *)(parent_surface + 0xc);
    *(int *)(this_ptr + 0x18) = *(int *)(this_ptr + 0x18) + *(int *)(parent_surface + 8);
    *(int *)(this_ptr + 0x1c) = *(int *)(this_ptr + 0x1c) + *(int *)(parent_surface + 0xc);
    if (*(int *)(this_ptr + 0x10) < *(int *)(parent_surface + 0x10)) {
      *(int *)(this_ptr + 0x10) = *(int *)(parent_surface + 0x10);
    }
    if (*(int *)(this_ptr + 0x14) < *(int *)(parent_surface + 0x14)) {
      *(int *)(this_ptr + 0x14) = *(int *)(parent_surface + 0x14);
    }
    if (*(int *)(parent_surface + 0x18) < *(int *)(this_ptr + 0x18)) {
      *(int *)(this_ptr + 0x18) = *(int *)(parent_surface + 0x18);
    }
    if (*(int *)(parent_surface + 0x1c) < *(int *)(this_ptr + 0x1c)) {
      *(int *)(this_ptr + 0x1c) = *(int *)(parent_surface + 0x1c);
    }
  }
  if (*(int *)(this_ptr + 0x10) < 0) {
    *(uint *)(this_ptr + 0x10) = 0;
  }
  if (*(int *)(this_ptr + 0x14) < 0) {
    *(uint *)(this_ptr + 0x14) = 0;
  }
  if (DAT_005fba18 <= *(int *)(this_ptr + 0x18)) {
    *(int *)(this_ptr + 0x18) = DAT_005fba18 + -1;
  }
  if (*(int *)(this_ptr + 0x1c) < DAT_005fba1c) {
    return;
  }
  *(int *)(this_ptr + 0x1c) = DAT_005fba1c + -1;
  return;
}
