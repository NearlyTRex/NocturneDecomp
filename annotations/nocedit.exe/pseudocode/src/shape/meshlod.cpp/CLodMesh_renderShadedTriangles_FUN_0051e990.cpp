// Name: shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990
// Address: 0051e990
// Address Range: [[0051e990, 0051eac3]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990 (CLodMesh *this_ptr,int use_palette_coloring)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990
          (CLodMesh *this_ptr,int use_palette_coloring)

{
  float fVar1;
  CLodFace *pCVar2;
  uint uVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  double dVar7;
  double dVar8;
  int blue_component;
  SMRGLHeaderPrimitive SStack_60;
  uint local_48;
  uint local_3c;
  uint local_30;
  int iStack_20;
  int iStack_1c;
  
  SStack_60.base.count = 3;
  SStack_60.surface_normal.D = 0;
  SStack_60.surface_normal.C = 0;
  SStack_60.surface_normal.B = 0;
  SStack_60.surface_normal.A = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,0xff);
  uVar3 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  if (0 < this_ptr->tri_count) {
    iVar4 = 0;
    do {
      pCVar2 = this_ptr->tri_data;
      if (*(int *)((int)pCVar2->edge_perpendiculars + iVar4 + -0x14) == 0) {
        local_48 = *(uint *)((int)(pCVar2->uv_coords + -2) + iVar4 + 4);
        local_3c = *(uint *)((int)(pCVar2->uv_coords + -1) + iVar4);
        local_30 = *(uint *)((int)(pCVar2->uv_coords + -1) + iVar4 + 4);
        if (use_palette_coloring == 0) {
          fVar5 = (float10)127.0f;
          fVar1 = *(float *)((int)(pCVar2->edge_perpendiculars + -1) + iVar4);
          fVar6 = (float10)*(float *)((int)pCVar2->edge_perpendiculars + iVar4 + -0x10) * fVar5 +
                  fVar5;
          dVar7 = round
                            ((double)((float10)*(float *)((int)pCVar2->edge_perpendiculars +
                                                         iVar4 + -8) * fVar5 + fVar5));
          dVar8 = round((double)((float10)fVar1 * fVar5 + fVar5));
          iStack_20 = (int)ROUND(dVar7);
          blue_component = 0x51eaa9;
          iStack_1c = (int)ROUND(dVar8);
          dVar7 = round((double)fVar6);
          iStack_20 = (int)ROUND(dVar7);
          engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                    (g_CDemonRendererPtr2,iStack_20,(int)ROUND(dVar8),blue_component);
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,-((uVar3 & 0x7f) + 0x80));
        }
        engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                  (g_CDemonRendererPtr2,&SStack_60);
      }
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 0x8c;
    } while ((int)uVar3 < this_ptr->tri_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return;
}
