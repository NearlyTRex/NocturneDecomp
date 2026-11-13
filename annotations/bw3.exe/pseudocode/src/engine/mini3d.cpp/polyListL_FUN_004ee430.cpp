// Name: engine_mini3d.cpp_polyListL_FUN_004ee430
// Address: 004ee430
// Address Range: [[004ee430, 004ee5ab]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListL_FUN_004ee430(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyListL_FUN_004ee430(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float *out;
  uint clip_flags;
  int iVar1;
  int in_stack_00000014;
  
  _DAT_01ed3198 = _DAT_01ed3198 + triangle_count;
  _DAT_01d76c34 = _DAT_01d76c34 + vertex_count;
  if (_DAT_01d7a694 == 0) {
    if ((_DAT_02cf60bc != (code *)0x0) && (_DAT_01c6cee8 != 0)) {
      (*_DAT_02cf60bc)(vertices,vertex_count,indices,triangle_count,_DAT_01c6e2b4);
      return;
    }
    engine_mini3d_cpp_updateTransform_FUN_004edcc0();
    engine_mini3d_cpp_updateRenderState_FUN_004f2430();
    engine_mini3d_cpp_allocVertexList_FUN_004ede40();
    if (10000 < vertex_count) {
      _DAT_01d71de0 = "..\\engine\\mini3d.cpp";
      _DAT_01d71de4 = 0x7e6;
      core_main_c_FUN_004e4330("CMini3D::polyList - Too many verticies : %d",vertex_count);
    }
    iVar1 = 0;
    clip_flags = 0;
    out = _DAT_01d76f60;
    if (0 < vertex_count) {
      do {
        engine_mini3d_cpp_transformVertex_FUN_004eea30((CVector3f *)vertices,out);
        iVar1 = iVar1 + 1;
        engine_mini3d_cpp_computeVertexFog_FUN_004ef890(out);
        out[7] = ((CVector3f *)((int)vertices + 0x18))->y;
        clip_flags = clip_flags | (uint)out[4];
        out[8] = ((CVector3f *)((int)vertices + 0x18))->z;
        out[9] = ((CVector3f *)((int)vertices + 0xc))->x;
        out[10] = ((CVector3f *)((int)vertices + 0xc))->y;
        out[0xb] = ((CVector3f *)((int)vertices + 0xc))->z;
        out[0xc] = ((CVector3f *)((int)vertices + 0x18))->x;
        out = out + 0x10;
        vertices = (float *)((int)vertices + 0x24);
      } while (iVar1 < in_stack_00000014);
    }
    if (_DAT_01d7a698 == 0) {
      engine_mini3d_cpp_drawTransformedList_FUN_004f12b0
                (_DAT_01d76f60,vertex_count,indices,triangle_count,clip_flags);
      return;
    }
    engine_mini3d_cpp_userClipPolyList_FUN_004f2e30
              (_DAT_01d76f60,vertex_count,indices,triangle_count);
  }
  else {
    engine_mini3d_cpp_polyListSurface_FUN_004f2490(vertices,vertex_count,indices,triangle_count);
  }
  return;
}
