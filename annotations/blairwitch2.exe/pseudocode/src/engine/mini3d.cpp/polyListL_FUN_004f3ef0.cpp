// Name: engine_mini3d.cpp_polyListL_FUN_004f3ef0
// Address: 004f3ef0
// Address Range: [[004f3ef0, 004f4096]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListL_FUN_004f3ef0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_polyListL_FUN_004f3ef0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float *out;
  uint clip_flags;
  int iVar1;
  ushort *in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  
  _DAT_01e61b58 = _DAT_01e61b58 + triangle_count;
  _DAT_01d09854 = _DAT_01d09854 + vertex_count;
  if (_DAT_01d0d2b4 == 0) {
    if (_DAT_01d09914 != 0) {
      in_stack_00000014 = engine_mini3d_cpp_mirrorFaces_FUN_004f34d0(indices,triangle_count);
    }
    if ((_DAT_0264bc90 != (code *)0x0) && (_DAT_01c37788 != 0)) {
      (*_DAT_0264bc90)(vertices,triangle_count,in_stack_00000014,in_stack_00000018,_DAT_01c38b54);
      return;
    }
    engine_mini3d_cpp_updateTransform_FUN_004f3740();
    engine_mini3d_cpp_updateRenderState_FUN_004f7da0();
    engine_mini3d_cpp_allocVertexList_FUN_004f38c0();
    if (10000 < triangle_count) {
      _DAT_01d046a0 = "..\\engine\\mini3d.cpp";
      _DAT_01d046a4 = 0x80d;
      core_main_c_FUN_004e4500("CMini3D::polyList - Too many verticies : %d",triangle_count);
    }
    iVar1 = 0;
    clip_flags = 0;
    out = _DAT_01d09b7c;
    if (0 < triangle_count) {
      do {
        engine_mini3d_cpp_transformVertex_FUN_004f4510((CVector3f *)vertices,out);
        iVar1 = iVar1 + 1;
        engine_mini3d_cpp_computeVertexFog_FUN_004f5370(out);
        out[7] = ((CVector3f *)((int)vertices + 0x18))->y;
        clip_flags = clip_flags | (uint)out[4];
        out[8] = ((CVector3f *)((int)vertices + 0x18))->z;
        out[9] = ((CVector3f *)((int)vertices + 0xc))->x;
        out[10] = ((CVector3f *)((int)vertices + 0xc))->y;
        out[0xb] = ((CVector3f *)((int)vertices + 0xc))->z;
        out[0xc] = ((CVector3f *)((int)vertices + 0x18))->x;
        out = out + 0x10;
        vertices = (float *)((int)vertices + 0x24);
      } while (iVar1 < in_stack_0000001c);
    }
    if (_DAT_01d0d2b8 == 0) {
      engine_mini3d_cpp_drawTransformedList_FUN_004f6d00
                (_DAT_01d09b7c,triangle_count,in_stack_00000014,in_stack_00000018,clip_flags);
      return;
    }
    engine_mini3d_cpp_userClipPolyList_FUN_004f8750
              (_DAT_01d09b7c,triangle_count,in_stack_00000014,in_stack_00000018);
  }
  else {
    engine_mini3d_cpp_polyListSurface_FUN_004f7e00(vertices,vertex_count,indices,triangle_count);
  }
  return;
}
