// Name: engine_mini3d.cpp_polyListD3DL_FUN_004ee1a0
// Address: 004ee1a0
// Address Range: [[004ee1a0, 004ee39a]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_004ee1a0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_polyListD3DL_FUN_004ee1a0(float *vertices,int vertex_count,ushort *indices,int triangle_count)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float *out;
  uint clip_flags;
  int unaff_ESI;
  int iVar5;
  int iVar6;
  
  g_RenderedTriangleCount = g_RenderedTriangleCount + triangle_count;
  g_INT_01d76c34 = g_INT_01d76c34 + vertex_count;
  if (g_INT_01d7a694 == 0) {
    engine_mini3d_cpp_updateTransform_FUN_004edcc0();
    engine_mini3d_cpp_updateRenderState_FUN_004f2430();
    if ((g_PTR_02cf60c0 == (byte *)0x0) || (g_INT_01c6cee8 == 0)) {
      engine_mini3d_cpp_allocVertexList_FUN_004ede40();
      if (10000 < vertex_count) {
        g_CurrentFilename = "..\\engine\\mini3d.cpp";
        g_CurrentLineNumber = 1887;
        core_main_c_displayErrorAndQuit_FUN_004e4330("CMini3D::polyList - Too many verticies : %d");
      }
      clip_flags = 0;
      if (0 < vertex_count) {
        out = g_FLOAT_PTR_01d76f60;
        iVar5 = 0;
        do {
          engine_mini3d_cpp_transformVertex_FUN_004eea30((CVector3f *)vertices,out);
          fVar1 = ((CVector3f *)((int)vertices + 0xc))->y;
          fVar2 = (float)((uint)fVar1 >> 8 & 0xff) * 0.003921569f;
          fVar3 = (float)((uint)fVar1 >> 0x10 & 0xff) * 0.003921569f;
          fVar4 = (float)((uint)fVar1 >> 0x18) * 0.003921569f;
          iVar6 = iVar5 + 0x40;
          out[9] = (float)((uint)fVar1 & 0xff) * 0.003921569f;
          out[10] = fVar2;
          out[0xb] = fVar3;
          out[0xc] = fVar4;
          out[7] = ((CVector3f *)((int)vertices + 0x18))->x;
          out[8] = ((CVector3f *)((int)vertices + 0x18))->y;
          engine_mini3d_cpp_computeVertexFog_FUN_004ef890(out);
          out = out + 0x10;
          clip_flags = clip_flags | *(uint *)(iVar5 + 0x10 + (int)g_FLOAT_PTR_01d76f60);
          vertices = &((CVector3f *)((int)vertices + 0x18))->z;
          iVar5 = iVar6;
        } while (iVar6 < unaff_ESI);
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
      (*(code *)g_PTR_02cf60c0)
                (vertices,vertex_count,indices,triangle_count,g_RenderStateFlags.dword);
    }
  }
  else {
    engine_mini3d_cpp_polyListSurface_FUN_004f2490(vertices,vertex_count,indices,triangle_count);
  }
  return;
}
