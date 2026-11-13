// Name: engine_mini3d.cpp_polyListD3DL2_FUN_004ee3a0
// Address: 004ee3a0
// Address Range: [[004ee3a0, 004ee42f]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_004ee3a0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyListD3DL2_FUN_004ee3a0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  _DAT_01ed3198 = _DAT_01ed3198 + triangle_count;
  _DAT_01d76c34 = _DAT_01d76c34 + vertex_count;
  engine_mini3d_cpp_updateTransform_FUN_004edcc0();
  engine_mini3d_cpp_updateRenderState_FUN_004f2430();
  if ((_DAT_02cf60c4 != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
    (*_DAT_02cf60c4)(vertices,vertex_count,indices,triangle_count,_DAT_01c6e2b4);
    return;
  }
  _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
  _DAT_01d71de4 = 0x7a9;
  core_main_c_FUN_004e4330("CMini3D::polyList - Software does not suport multitexture");
  return;
}
