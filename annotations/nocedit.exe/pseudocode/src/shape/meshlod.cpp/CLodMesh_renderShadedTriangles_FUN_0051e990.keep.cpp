// Name: shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990
// Address: 0051e990
// MANUAL RECONSTRUCTION
// Address Range: [[0051e990, 0051eac3]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh *this_ptr,int use_palette_coloring)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh *this_ptr,int use_palette_coloring)

{
  uint uVar2;
  SMRGLPrimitiveQuad SStack_60;
  CLodFace *pCVar1;

  SStack_60.base.base.count = 3;
  SStack_60.base.surface_normal.D.i = 0;
  SStack_60.base.surface_normal.C.i = 0;
  SStack_60.base.surface_normal.B.i = 0;
  SStack_60.base.surface_normal.A.i = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,0xff);
  uVar2 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  if (0 < this_ptr->tri_count) {
    do {
      pCVar1 = this_ptr->tri_data + uVar2;
      if (pCVar1->processed_flag == 0) {
        SStack_60.vertices[0].vertex_index = pCVar1->vertex_idx_0;
        SStack_60.vertices[1].vertex_index = pCVar1->vertex_idx_1;
        SStack_60.vertices[2].vertex_index = pCVar1->vertex_idx_2;
        if (use_palette_coloring == 0) {
          engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                    (g_CDemonRendererPtr2,
                     (int)ROUND(ROUND((pCVar1->normal).x * 127.0f + 127.0f)),
                     (int)ROUND(ROUND((pCVar1->normal).y * 127.0f + 127.0f)),
                     (int)ROUND(ROUND((pCVar1->normal).z * 127.0f + 127.0f)));
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,-((uVar2 & 0x7f) + 0x80));
        }
        engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_0048a8a0
                  (g_CDemonRendererPtr2,(SMRGLPrimitivePoly *)&SStack_60);
      }
      uVar2 = uVar2 + 1;
    } while ((int)uVar2 < this_ptr->tri_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return;
}
