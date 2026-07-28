// Name: cockpit_drawsurf.cpp_CDrawSurface_init_FUN_0045b4c0
// Address: 0045b4c0
// Address Range: [[0045b4c0, 0045b5e2]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_0045b4c0(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface )

#include "nocturne.h"

void __cdecl cockpit_drawsurf_cpp_CDrawSurface_init_FUN_0045b4c0(CDrawSurface *this_ptr,int x,int y,int width,int height,CDrawSurface *parent_surface )

{
  this_ptr->x = x;
  this_ptr->y = y;
  this_ptr->width = width;
  this_ptr->height = height;
  this_ptr->clip_left = this_ptr->x;
  this_ptr->clip_top = this_ptr->y;
  this_ptr->clip_right = this_ptr->x + this_ptr->width + -1;
  this_ptr->clip_bottom = this_ptr->y + this_ptr->height + -1;
  if (parent_surface != (CDrawSurface *)0x0) {
    this_ptr->x = this_ptr->x + parent_surface->x;
    this_ptr->y = this_ptr->y + parent_surface->y;
    this_ptr->clip_left = this_ptr->clip_left + parent_surface->x;
    this_ptr->clip_top = this_ptr->clip_top + parent_surface->y;
    this_ptr->clip_right = this_ptr->clip_right + parent_surface->x;
    this_ptr->clip_bottom = this_ptr->clip_bottom + parent_surface->y;
    if (this_ptr->clip_left < parent_surface->clip_left) {
      this_ptr->clip_left = parent_surface->clip_left;
    }
    if (this_ptr->clip_top < parent_surface->clip_top) {
      this_ptr->clip_top = parent_surface->clip_top;
    }
    if (parent_surface->clip_right < this_ptr->clip_right) {
      this_ptr->clip_right = parent_surface->clip_right;
    }
    if (parent_surface->clip_bottom < this_ptr->clip_bottom) {
      this_ptr->clip_bottom = parent_surface->clip_bottom;
    }
  }
  if (this_ptr->clip_left < 0) {
    this_ptr->clip_left = 0;
  }
  if (this_ptr->clip_top < 0) {
    this_ptr->clip_top = 0;
  }
  if (DAT_005b761c <= this_ptr->clip_right) {
    this_ptr->clip_right = DAT_005b761c + -1;
  }
  if (this_ptr->clip_bottom < DAT_005b7620) {
    return;
  }
  this_ptr->clip_bottom = DAT_005b7620 + -1;
  return;
}
