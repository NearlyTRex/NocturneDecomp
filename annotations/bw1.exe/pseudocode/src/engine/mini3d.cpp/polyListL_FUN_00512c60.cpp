// Name: engine_mini3d.cpp_polyListL_FUN_00512c60
// Address: 00512c60
// Address Range: [[00512c60, 00512ddb]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListL_FUN_00512c60(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyListL_FUN_00512c60(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float *out;
  uint clip_flags;
  int iVar1;
  int in_stack_00000014;
  
  _DAT_01e7dac8 = _DAT_01e7dac8 + triangle_count;
  _DAT_01d224b4 = _DAT_01d224b4 + vertex_count;
  if (_DAT_01d25f14 == 0) {
    if ((_DAT_02c83460 != (code *)0x0) && (_DAT_01c50948 != 0)) {
      (*_DAT_02c83460)(vertices,vertex_count,indices,triangle_count,_DAT_01c51d14);
      return;
    }
    engine_mini3d_cpp_updateTransform_FUN_005124f0();
    engine_mini3d_cpp_updateRenderState_FUN_00516c60();
    engine_mini3d_cpp_allocVertexList_FUN_00512670();
    if (10000 < vertex_count) {
      _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
      _DAT_01d1d404 = 0x7e6;
      core_main_c_FUN_005030e0("CMini3D::polyList - Too many verticies : %d",vertex_count);
    }
    iVar1 = 0;
    clip_flags = 0;
    out = _DAT_01d227e0;
    if (0 < vertex_count) {
      do {
        engine_mini3d_cpp_transformVertex_FUN_00513260((CVector3f *)vertices,out);
        iVar1 = iVar1 + 1;
        engine_mini3d_cpp_computeVertexFog_FUN_005140c0(out);
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
    if (_DAT_01d25f18 == 0) {
      engine_mini3d_cpp_drawTransformedList_FUN_00515ae0
                (_DAT_01d227e0,vertex_count,indices,triangle_count,clip_flags);
      return;
    }
    engine_mini3d_cpp_userClipPolyList_FUN_00517660
              (_DAT_01d227e0,vertex_count,indices,triangle_count);
  }
  else {
    engine_mini3d_cpp_polyListSurface_FUN_00516cc0(vertices,vertex_count,indices,triangle_count);
  }
  return;
}
