// Name: core_setdir.cpp_CZThumb_popRenderingContext_FUN_00574ef0
// Address: 00574ef0
// Address Range: [[00574ef0, 00574f13]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(CZThumb *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_popRenderingContext_FUN_00574ef0(CZThumb *this_ptr)

{
  engine_drender_cpp_CDemonRenderer_popViewport_FUN_0048c8c0();
  g_WindowWidth = g_SavedWindowWidth;
  g_WindowHeight = g_SavedWindowHeight;
  return;
}
