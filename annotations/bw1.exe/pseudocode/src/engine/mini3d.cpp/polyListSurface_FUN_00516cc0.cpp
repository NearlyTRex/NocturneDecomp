// Name: engine_mini3d.cpp_polyListSurface_FUN_00516cc0
// Address: 00516cc0
// Address Range: [[00516cc0, 00516e33]]
// Convention: __cdecl
// Signature: int __cdecl engine_mini3d_cpp_polyListSurface_FUN_00516cc0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

int __cdecl engine_mini3d_cpp_polyListSurface_FUN_00516cc0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float fVar1;
  float extraout_EAX;
  int extraout_EAX_00;
  float *pfVar2;
  int iVar3;
  uint local_14;
  
  g_RenderedTriangleCount = g_RenderedTriangleCount + triangle_count;
  g_INT_01d224b4 = g_INT_01d224b4 + vertex_count;
  engine_mini3d_cpp_allocVertexList_FUN_00512670();
  if (10000 < vertex_count) {
    g_CurrentFilename = "..\\engine\\mini3d.cpp";
    g_CurrentLineNumber = 4830;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CMini3D::polyList - Too many verticies : %d");
  }
  iVar3 = 0;
  local_14 = 0;
  fVar1 = (float)g_INT_01d25f14;
  if (g_INT_01d25f14 == 1) {
    pfVar2 = g_FLOAT_PTR_01d227e4;
    if (0 < vertex_count) {
      do {
        iVar3 = iVar3 + 1;
        engine_mini3d_cpp_transformVertexSurface_FUN_00513370((CVector3f *)vertices,pfVar2);
        fVar1 = pfVar2[4];
        pfVar2 = pfVar2 + 8;
        local_14 = local_14 | (uint)fVar1;
        vertices = &((CVector3f *)((int)vertices + 0x18))->z;
      } while (iVar3 < vertex_count);
    }
  }
  else {
    pfVar2 = g_FLOAT_PTR_01d227e4;
    if (0 < vertex_count) {
      do {
        iVar3 = iVar3 + 1;
        engine_mini3d_cpp_transformVertexOrtho_FUN_00513480((CVector3f *)vertices,pfVar2);
        pfVar2 = pfVar2 + 8;
        vertices = &((CVector3f *)((int)vertices + 0x18))->z;
        fVar1 = extraout_EAX;
      } while (iVar3 < vertex_count);
    }
  }
  if (local_14 == 0) {
    iVar3 = 0;
    if (0 < triangle_count) {
      do {
        engine_mini3d_cpp_fillSurfaceTriangle_FUN_00516fd0
                  (g_FLOAT_PTR_01d227e4 + (uint)*indices * 8,
                   g_FLOAT_PTR_01d227e4 + (uint)indices[1] * 8,
                   g_FLOAT_PTR_01d227e4 + (uint)indices[2] * 8);
        iVar3 = iVar3 + 1;
        indices = indices + 3;
        fVar1 = (float)triangle_count;
      } while (iVar3 < triangle_count);
    }
  }
  else {
    iVar3 = 0;
    if (0 < triangle_count) {
      do {
        engine_mini3d_cpp_drawSurfaceTriangle_FUN_00517240
                  (g_FLOAT_PTR_01d227e4 + (uint)*indices * 8,
                   g_FLOAT_PTR_01d227e4 + (uint)indices[1] * 8,
                   g_FLOAT_PTR_01d227e4 + (uint)indices[2] * 8);
        iVar3 = iVar3 + 1;
        indices = indices + 3;
      } while (iVar3 < triangle_count);
      return extraout_EAX_00;
    }
  }
  return (int)fVar1;
}
