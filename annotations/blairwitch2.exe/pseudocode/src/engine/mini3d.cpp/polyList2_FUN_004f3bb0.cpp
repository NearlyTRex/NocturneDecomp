// Name: engine_mini3d.cpp_polyList2_FUN_004f3bb0
// Address: 004f3bb0
// Address Range: [[004f3bb0, 004f3c3f]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyList2_FUN_004f3bb0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyList2_FUN_004f3bb0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  _DAT_01e61b58 = _DAT_01e61b58 + triangle_count;
  _DAT_01d09854 = _DAT_01d09854 + vertex_count;
  engine_mini3d_cpp_updateTransform_FUN_004f3740();
  engine_mini3d_cpp_updateRenderState_FUN_004f7da0();
  if ((_DAT_0264bc8c != (code *)0x0) && (_DAT_01c37788 != 0)) {
    (*_DAT_0264bc8c)(vertices,vertex_count,indices,triangle_count,_DAT_01c38b54);
    return;
  }
  _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
  _DAT_01d046a4 = 0x73a;
  core_main_c_FUN_004e4500("CMini3D::polyList - Software does not suport multitexture");
  return;
}
