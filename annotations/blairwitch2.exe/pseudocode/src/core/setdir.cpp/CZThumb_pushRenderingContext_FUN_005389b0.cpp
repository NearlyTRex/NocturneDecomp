// Name: core_setdir.cpp_CZThumb_pushRenderingContext_FUN_005389b0
// Address: 005389b0
// Address Range: [[005389b0, 00538a2e]]
// Convention: __cdecl
// Signature: void __cdecl core_setdir_cpp_CZThumb_pushRenderingContext_FUN_005389b0(CZThumb *this_ptr)

#include "nocturne.h"

void __cdecl core_setdir_cpp_CZThumb_pushRenderingContext_FUN_005389b0(CZThumb *this_ptr)

{
  g_INT_020b1518 = g_INT_006141b8;
  g_INT_020b151c = g_INT_006141bc;
  g_INT_006141b8 = this_ptr->width;
  g_INT_006141bc = this_ptr->height;
  engine_drender_cpp_CDemonRenderer_pushViewport_FUN_0046b710
            (g_CDemonRenderer_PTR_0060b280,0,0,this_ptr->width + -1,g_INT_006141bc + -1);
  engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0
            (g_CDemonRenderer_PTR_0060b280,&this_ptr->camera_position);
  engine_drender_cpp_CDemonRenderer_setProjectionScaleSimple_FUN_0046b4d0
            (g_CDemonRenderer_PTR_0060b280,this_ptr->projection_scale);
  engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0046b030
            (g_CDemonRenderer_PTR_0060b280,&this_ptr->look_at_position);
  return;
}
