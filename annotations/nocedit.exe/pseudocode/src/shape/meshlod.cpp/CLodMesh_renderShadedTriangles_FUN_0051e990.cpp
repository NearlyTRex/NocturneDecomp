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
  int green_component;
  int iVar1;
  uint uVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  CDemonRenderer *blue_component;
  
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960(g_CDemonRendererPtr,0xff);
  uVar2 = 0;
  blue_component = g_CDemonRendererPtr;
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,1);
  if (0 < this_ptr->tri_count) {
    iVar3 = 0;
    do {
      iVar1 = (int)this_ptr->tri_data->attribute_indices + iVar3;
      if (*(int *)(iVar1 + 0x40) == 0) {
        if (use_palette_coloring == 0) {
          fVar4 = (float10)127f;
          fVar5 = (float10)*(float *)(iVar1 + 0x4c) * fVar4 + fVar4;
          fVar4 = (float10)*(float *)(iVar1 + 0x44) * fVar4 + fVar4;
          dVar6 = crt_math_c_round_FUN_005fe6b0
                            ((double)CONCAT44 /* combine 2-byte values */(iVar1,*(uint *)(iVar1 + 0x18)));
          dVar6 = crt_math_c_round_FUN_005fe6b0(dVar6);
          crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */((int)((ulonglong)dVar6 >> 0x20),(int)ROUND(fVar5)));
          engine_drender_cpp_CDemonRenderer_setRGBAColor_FUN_0048c970
                    (g_CDemonRendererPtr,(int)ROUND(fVar4),green_component,(int)blue_component);
        }
        else {
          engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
                    (g_CDemonRendererPtr,-((uVar2 & 0x7f) + 0x80));
        }
        blue_component = g_CDemonRendererPtr;
        engine_drender_cpp_CDemonRenderer_renderBasicTexturedVariant_FUN_0048a8a0
                  (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffffa4);
      }
      uVar2 = uVar2 + 1;
      iVar3 = iVar3 + 0x8c;
    } while ((int)uVar2 < this_ptr->tri_count);
  }
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_0048ca00(g_CDemonRendererPtr,0);
  return;
}
