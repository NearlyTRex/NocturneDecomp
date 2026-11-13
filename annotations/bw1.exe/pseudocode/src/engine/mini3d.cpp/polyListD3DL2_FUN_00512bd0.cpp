// Name: engine_mini3d.cpp_polyListD3DL2_FUN_00512bd0
// Address: 00512bd0
// Address Range: [[00512bd0, 00512c5f]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_00512bd0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_00512bd0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  _DAT_01e7dac8 = _DAT_01e7dac8 + triangle_count;
  _DAT_01d224b4 = _DAT_01d224b4 + vertex_count;
  engine_mini3d_cpp_updateTransform_FUN_005124f0();
  engine_mini3d_cpp_updateRenderState_FUN_00516c60();
  if ((_DAT_02c83468 != (code *)0x0) && (_DAT_01c50948 != 0)) {
    (*_DAT_02c83468)(vertices,vertex_count,indices,triangle_count,_DAT_01c51d14);
    return;
  }
  _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
  _DAT_01d1d404 = 0x7a9;
  core_main_c_FUN_005030e0("CMini3D::polyList - Software does not suport multitexture");
  return;
}
