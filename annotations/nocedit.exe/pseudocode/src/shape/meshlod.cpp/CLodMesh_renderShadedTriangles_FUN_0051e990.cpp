// Name: shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990
// Address: 0051e990
// Address Range: [[0051e990, 0051eac3]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_renderShadedTriangles_FUN_0051e990(CLodMesh * this_ptr, int use_palette_coloring)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_renderShadedTriangles_FUN_0051e990
          (CLodMesh *this_ptr,int use_palette_coloring)

{
  CLodFace *pCVar1;
  int green_component;
  uint uVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
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
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,0xff);
  uVar2 = 0;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  if (0 < this_ptr->tri_count) {
    iVar3 = 0;
    do {
      pCVar1 = this_ptr->tri_data;
      if (*(int *)((int)pCVar1->edge_perpendiculars + iVar3 + -0x14) == 0) {
        local_48 = *(uint *)((int)(pCVar1->uv_coords + -2) + iVar3 + 4);
        local_3c = *(uint *)((int)(pCVar1->uv_coords + -1) + iVar3);
        local_30 = *(uint *)((int)(pCVar1->uv_coords + -1) + iVar3 + 4);
        if (use_palette_coloring == 0) {
          fVar4 = (float10)127f;
          fVar5 = (float10)*(float *)((int)(pCVar1->edge_perpendiculars + -1) + iVar3) * fVar4 +
                  fVar4;
          fVar6 = (float10)*(float *)((int)pCVar1->edge_perpendiculars + iVar3 + -0x10) * fVar4 +
                  fVar4;
          dVar7 = crt_math_c_round_FUN_005fe6b0
                            ((double)((float10)*(float *)((int)pCVar1->edge_perpendiculars +
                                                         iVar3 + -8) * fVar4 + fVar4));
          fVar4 = (float10)dVar7;
          dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
          iStack_20 = (int)ROUND(fVar4);
          iStack_1c = (int)ROUND(dVar7);
          blue_component = 0x51eaa9;
          dVar7 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
          iStack_20 = (int)ROUND(dVar7);
          engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                    (g_CDemonRendererPtr,iStack_20,green_component,blue_component);
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,-((uVar2 & 0x7f) + 0x80));
        }
        engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                  (g_CDemonRendererPtr,&SStack_60);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x8c;
    } while ((int)uVar2 < this_ptr->tri_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}
