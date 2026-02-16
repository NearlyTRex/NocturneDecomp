// Name: shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990
// Address: 0051e990
// Address Range: [[0051e990, 0051eac3]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh *this_ptr,int use_palette_coloring)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh *this_ptr,int use_palette_coloring)

{
  CLodFace *pCVar1;
  float fVar2;
  float fVar3;
  uint uVar4;
  int iVar5;
  double dVar6;
  double dVar7;
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
  uVar4 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  if (0 < this_ptr->tri_count) {
    iVar5 = 0;
    do {
      pCVar1 = this_ptr->tri_data;
      if (*(int *)((int)pCVar1->edge_perpendiculars + iVar5 + -0x14) == 0) {
        local_48 = *(uint *)((int)(pCVar1->uv_coords + -2) + iVar5 + 4);
        local_3c = *(uint *)((int)(pCVar1->uv_coords + -1) + iVar5);
        local_30 = *(uint *)((int)(pCVar1->uv_coords + -1) + iVar5 + 4);
        if (use_palette_coloring == 0) {
          fVar2 = *(float *)((int)(pCVar1->edge_perpendiculars + -1) + iVar5) * 127.0f +
                  127.0f;
          fVar3 = *(float *)((int)pCVar1->edge_perpendiculars + iVar5 + -0x10) * 127.0f +
                  127.0f;
          dVar6 = round
                            ((double)(*(float *)((int)pCVar1->edge_perpendiculars + iVar5 + -8) *
                                      127.0f + 127.0f));
          dVar7 = round((double)fVar2);
          iStack_20 = (int)ROUND(dVar6);
          blue_component = 0x51eaa9;
          iStack_1c = (int)ROUND(dVar7);
          dVar6 = round((double)fVar3);
          iStack_20 = (int)ROUND(dVar6);
          engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                    (g_CDemonRendererPtr2,iStack_20,(int)ROUND(dVar7),blue_component);
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,-((uVar4 & 0x7f) + 0x80));
        }
        engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                  (g_CDemonRendererPtr2,&SStack_60);
      }
      uVar4 = uVar4 + 1;
      iVar5 = iVar5 + 0x8c;
    } while ((int)uVar4 < this_ptr->tri_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return;
}
