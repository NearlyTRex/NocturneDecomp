// Name: engine_mini3d.cpp_polyList2_FUN_00512940
// Address: 00512940
// Address Range: [[00512940, 005129cf]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyList2_FUN_00512940(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyList2_FUN_00512940(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  _DAT_01e7dac8 = _DAT_01e7dac8 + triangle_count;
  _DAT_01d224b4 = _DAT_01d224b4 + vertex_count;
  engine_mini3d_cpp_updateTransform_FUN_005124f0();
  engine_mini3d_cpp_updateRenderState_FUN_00516c60();
  if ((_DAT_02c8345c != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c8345c)(vertices,vertex_count,indices,triangle_count,_DAT_01c51d14);
    return;
  }
  _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
  _DAT_01d1d404 = 0x71f;
  core_main_c_FUN_005030e0("CMini3D::polyList - Software does not suport multitexture");
  return;
}
