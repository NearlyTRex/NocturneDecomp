// Name: core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0
// Address: 00547fc0
// Address Range: [[00547fc0, 0054838a]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0(CPathMap *this_ptr,int depth,int red,int green,int fog)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0(CPathMap *this_ptr,int depth,int red,int green,int fog)

{
  CDemonRenderer *this_ptr_00;
  int iVar1;
  byte bVar2;
  int aiStackY_1040 [1010];
  CVector3i local_70;
  CVector3f local_64;
  int local_58;
  int local_54 [4];
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar2 = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 != 0) {
    return;
  }
  local_64.x = (float)(this_ptr->grid_origin).x * g_CDemonRaytraceInstance.adjusted_size.x +
               g_CDemonRaytraceInstance.bbox_min.x;
  local_64.y = 0.0;
  local_64.z = (float)(this_ptr->grid_origin).z * g_CDemonRaytraceInstance.adjusted_size.z +
               g_CDemonRaytraceInstance.bbox_min.z;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&local_64);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,&SMRGLTextureBasic_00680bb0);
  SMRGLPrimitiveQuad_030d4fd0.base.base.count = 4;
  SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.A = 0;
  SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.B = 0;
  SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.C = 0;
  SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.D = 0;
  SMRGLPrimitiveQuad_030d4fd0.vertices[0].vertex_index = 0;
  SMRGLPrimitiveQuad_030d4fd0.vertices[1].vertex_index = 1;
  SMRGLPrimitiveQuad_030d4fd0.vertices[2].vertex_index = 2;
  SMRGLPrimitiveQuad_030d4fd0.vertices[0].texture_u = 0x800000;
  SMRGLPrimitiveQuad_030d4fd0.vertices[0].texture_v = 0x800000;
  SMRGLPrimitiveQuad_030d4fd0.vertices[1].texture_u = 0x800000;
  SMRGLPrimitiveQuad_030d4fd0.vertices[1].texture_v = 0x800000;
  SMRGLPrimitiveQuad_030d4fd0.vertices[2].texture_u = 0x800000;
  SMRGLPrimitiveQuad_030d4fd0.vertices[2].texture_v = 0x800000;
  SMRGLPrimitiveQuad_030d4fd0.vertices[3].texture_u = 0x800000;
  SMRGLPrimitiveQuad_030d4fd0.vertices[3].texture_v = 0x800000;
  SMRGLPrimitiveQuad_030d4fd0.vertices[3].vertex_index = 3;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
  local_20 = depth << 8;
  local_28 = red << 8;
  local_24 = green << 8;
  local_58 = 0;
  local_2c = 0;
  local_1c = fog << 8;
  do {
    local_54[1] = 0;
    local_18 = (int)(this_ptr->height_cache + -1) + 0x160 + local_2c;
    do {
      if ((-1000 < *(int *)(local_18 + 0x9c70)) && (*(int *)(local_18 + 0x9c70) < 1000)) {
        local_54[0] = *(int *)(local_18 + 0x30);
        local_54[2] = local_58;
        local_54[(uint)bVar2 * -2 + 3] = local_54[(uint)bVar2 * -2];
        local_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 4] =
             local_54[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
        local_14 = local_44;
        local_70.x = (int)ROUND(ROUND((float)local_54[2] *
                                      g_CDemonRaytraceInstance.adjusted_size.x * 256.0f));
        local_70.z = (int)ROUND(ROUND((float)local_44 *
                                      g_CDemonRaytraceInstance.adjusted_size.z * 256.0f));
        local_70.y = (int)ROUND(ROUND(g_CDemonRaytraceInstance.bbox_min.y * (float)256 +
                                      (float)local_54[3] *
                                      g_CDemonRaytraceInstance.adjusted_size.y * 256.0f +
                                      (float)256));
        local_40 = g_CDemonRaytraceInstance.adjusted_size.x * 256.0f;
        local_3c = g_CDemonRaytraceInstance.adjusted_size.y * 256.0f;
        local_38 = g_CDemonRaytraceInstance.adjusted_size.z * 256.0f;
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_70);
        local_14 = local_70.x;
        local_70.x = (int)ROUND(ROUND((float)local_70.x + local_40));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_70);
        local_14 = local_70.z;
        local_70.z = (int)ROUND(ROUND((float)local_70.z + local_38));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_70);
        local_14 = local_70.x;
        local_70.x = (int)ROUND(ROUND((float)local_70.x - local_40));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_70);
        this_ptr_00 = g_CDemonRendererPtr2;
        g_CDemonRendererPtr2->vertex_buffer_ptr->r = local_20;
        this_ptr_00->vertex_buffer_ptr->g = local_28;
        this_ptr_00->vertex_buffer_ptr->b = local_24;
        this_ptr_00->vertex_buffer_ptr->a = local_1c;
        this_ptr_00->vertex_buffer_ptr[1].r = local_20;
        this_ptr_00->vertex_buffer_ptr[1].g = local_28;
        this_ptr_00->vertex_buffer_ptr[1].b = local_24;
        this_ptr_00->vertex_buffer_ptr[1].a = local_1c;
        this_ptr_00->vertex_buffer_ptr[2].r = local_20;
        this_ptr_00->vertex_buffer_ptr[2].g = local_28;
        this_ptr_00->vertex_buffer_ptr[2].b = local_24;
        this_ptr_00->vertex_buffer_ptr[2].a = local_1c;
        this_ptr_00->vertex_buffer_ptr[3].r = local_20;
        this_ptr_00->vertex_buffer_ptr[3].g = local_28;
        this_ptr_00->vertex_buffer_ptr[3].b = local_24;
        this_ptr_00->vertex_buffer_ptr[3].a = local_1c;
        engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                  (this_ptr_00,&SMRGLPrimitiveQuad_030d4fd0.base);
      }
      local_54[1] = local_54[1] + 1;
      local_18 = local_18 + 400;
    } while (local_54[1] < 100);
    local_58 = local_58 + 1;
    local_2c = local_2c + 4;
  } while (local_58 < 100);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
  return;
}
