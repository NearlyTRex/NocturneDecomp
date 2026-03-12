// Name: shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990
// Address: 0051e990
// Address Range: [[0051e990, 0051eac3]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh *this_ptr,int use_palette_coloring)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh *this_ptr,int use_palette_coloring)

{
  CLodFace *pCVar2;
  uint uVar2;
  int iVar3;
  SMRGLHeaderPrimitive SStack_60;
  int local_18;
  int local_14;
  CLodFace *pCVar1;
  
  SStack_60.base.count = 3;
  SStack_60.surface_normal.D = 0;
  SStack_60.surface_normal.C = 0;
  SStack_60.surface_normal.B = 0;
  SStack_60.surface_normal.A = 0;
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr2,0xff);
  uVar2 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,1);
  if (0 < this_ptr->tri_count) {
    iVar3 = 0;
    do {
      pCVar2 = this_ptr->tri_data;
      if (*(int *)((int)pCVar2->edge_perpendiculars + iVar3 + -0x14) == 0) {
        if (use_palette_coloring == 0) {
          engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                    (g_CDemonRendererPtr2,
                     (int)ROUND(ROUND(*(float *)((int)pCVar2->edge_perpendiculars + iVar3 + -0x10) *
                                      127.0f + 127.0f)),
                     (int)ROUND(ROUND(*(float *)((int)(pCVar2->edge_perpendiculars + -1) + iVar3) *
                                      127.0f + 127.0f)),
                     (int)ROUND(ROUND(*(float *)((int)pCVar2->edge_perpendiculars + iVar3 + -8) *
                                      127.0f + 127.0f)));
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr2,-((uVar2 & 0x7f) + 0x80));
        }
        engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                  (g_CDemonRendererPtr2,&SStack_60);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x8c;
    } while ((int)uVar2 < this_ptr->tri_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr2,0);
  return;
}
