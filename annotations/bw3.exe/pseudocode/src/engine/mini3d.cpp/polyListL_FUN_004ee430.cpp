// Name: engine_mini3d.cpp_polyListL_FUN_004ee430
// Address: 004ee430
// Address Range: [[004ee430, 004ee5ab]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListL_FUN_004ee430(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_polyListL_FUN_004ee430(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float *out;
  uint clip_flags;
  int iVar1;
  int in_stack_00000014;
  
  g_RenderedTriangleCount = g_RenderedTriangleCount + triangle_count;
  g_INT_01d76c34 = g_INT_01d76c34 + vertex_count;
  if (g_INT_01d7a694 == 0) {
    if ((g_PTR_02cf60bc != (byte *)0x0) && (g_INT_01c6cee8 != 0)) {
      (*(code *)g_PTR_02cf60bc)
                (vertices,vertex_count,indices,triangle_count,g_RenderStateFlags.dword);
      return;
    }
    engine_mini3d_cpp_updateTransform_FUN_004edcc0();
    engine_mini3d_cpp_updateRenderState_FUN_004f2430();
    engine_mini3d_cpp_allocVertexList_FUN_004ede40();
    if (10000 < vertex_count) {
      g_CurrentFilename = "..\\engine\\mini3d.cpp";
      g_CurrentLineNumber = 2022;
      core_main_c_displayErrorAndQuit_FUN_004e4330("CMini3D::polyList - Too many verticies : %d");
    }
    iVar1 = 0;
    clip_flags = 0;
    out = g_FLOAT_PTR_01d76f60;
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
    if (g_INT_01d7a698 == 0) {
      engine_mini3d_cpp_drawTransformedList_FUN_004f12b0
                (g_FLOAT_PTR_01d76f60,vertex_count,indices,triangle_count,clip_flags);
      return;
    }
    engine_mini3d_cpp_userClipPolyList_FUN_004f2e30
              (g_FLOAT_PTR_01d76f60,vertex_count,indices,triangle_count);
  }
  else {
    engine_mini3d_cpp_polyListSurface_FUN_004f2490(vertices,vertex_count,indices,triangle_count);
  }
  return;
}
