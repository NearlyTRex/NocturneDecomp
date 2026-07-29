// Name: core_path.cpp_CPathMap_renderPathMap_FUN_00547fc0
// Address: 00547fc0
// MANUAL RECONSTRUCTION
// Address Range: [[00547fc0, 0054838a] [0061080d, 0061082b]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0(CPathMap *this_ptr,int depth,int red,int green,int fog)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_renderPathMap_FUN_00547fc0(CPathMap *this_ptr,int depth,int red,int green,int fog)

{
  float fVar1;
  float fVar2;
  int iVar1;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  CVector3i local_70;
  CVector3f local_64;
  int local_58;
  int local_54 [4];
  CDemonRenderer *this_ptr_00;
  
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
  SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.A.i = 0;
  SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.B.i = 0;
  SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.C.i = 0;
  SMRGLPrimitiveQuad_030d4fd0.base.surface_normal.D.i = 0;
  SMRGLPrimitiveQuad_030d4fd0.vertices[0].vertex_index = 0;
  SMRGLPrimitiveQuad_030d4fd0.vertices[1].vertex_index = 1;
  SMRGLPrimitiveQuad_030d4fd0.vertices[2].vertex_index = 2;
  SMRGLPrimitiveQuad_030d4fd0.vertices[0].texture_u = 0x80 << 16;
  SMRGLPrimitiveQuad_030d4fd0.vertices[0].texture_v = 0x80 << 16;
  SMRGLPrimitiveQuad_030d4fd0.vertices[1].texture_u = 0x80 << 16;
  SMRGLPrimitiveQuad_030d4fd0.vertices[1].texture_v = 0x80 << 16;
  SMRGLPrimitiveQuad_030d4fd0.vertices[2].texture_u = 0x80 << 16;
  SMRGLPrimitiveQuad_030d4fd0.vertices[2].texture_v = 0x80 << 16;
  SMRGLPrimitiveQuad_030d4fd0.vertices[3].texture_u = 0x80 << 16;
  SMRGLPrimitiveQuad_030d4fd0.vertices[3].texture_v = 0x80 << 16;
  SMRGLPrimitiveQuad_030d4fd0.vertices[3].vertex_index = 3;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
  iVar3 = depth << 8;
  iVar4 = red << 8;
  iVar5 = green << 8;
  local_58 = 0;
  iVar6 = fog << 8;
  do {
    local_54[1] = 0;
    do {
      if ((-1000 < this_ptr->height_cache_tags[local_54[1]][local_58]) &&
         (this_ptr->height_cache_tags[local_54[1]][local_58] < 1000)) {
        fVar1 = g_CDemonRaytraceInstance.adjusted_size.x * 256.0f;
        fVar2 = g_CDemonRaytraceInstance.adjusted_size.z * 256.0f;
        local_70.x = (int)ROUND(ROUND((float)local_58 * fVar1));
        local_70.z = (int)ROUND(ROUND((float)local_54[1] * fVar2));
        local_70.y = (int)ROUND(ROUND(g_CDemonRaytraceInstance.bbox_min.y * (float)256 +
                                      (float)this_ptr->height_cache[local_54[1]][local_58] *
                                      g_CDemonRaytraceInstance.adjusted_size.y * 256.0f +
                                      (float)256));
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_70);
        local_70.x = (int)ROUND(ROUND((float)local_70.x + fVar1));
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_70);
        local_70.z = (int)ROUND(ROUND((float)local_70.z + fVar2));
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_70);
        local_70.x = (int)ROUND(ROUND((float)local_70.x - fVar1));
        engine_special_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_70);
        this_ptr_00 = g_CDemonRendererPtr2;
        g_CDemonRendererPtr2->vertex_buffer_ptr->r = iVar3;
        this_ptr_00->vertex_buffer_ptr->g = iVar4;
        this_ptr_00->vertex_buffer_ptr->b = iVar5;
        this_ptr_00->vertex_buffer_ptr->a = iVar6;
        this_ptr_00->vertex_buffer_ptr[1].r = iVar3;
        this_ptr_00->vertex_buffer_ptr[1].g = iVar4;
        this_ptr_00->vertex_buffer_ptr[1].b = iVar5;
        this_ptr_00->vertex_buffer_ptr[1].a = iVar6;
        this_ptr_00->vertex_buffer_ptr[2].r = iVar3;
        this_ptr_00->vertex_buffer_ptr[2].g = iVar4;
        this_ptr_00->vertex_buffer_ptr[2].b = iVar5;
        this_ptr_00->vertex_buffer_ptr[2].a = iVar6;
        this_ptr_00->vertex_buffer_ptr[3].r = iVar3;
        this_ptr_00->vertex_buffer_ptr[3].g = iVar4;
        this_ptr_00->vertex_buffer_ptr[3].b = iVar5;
        this_ptr_00->vertex_buffer_ptr[3].a = iVar6;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_0048bba0
                  (this_ptr_00,(SMRGLPrimitivePoly *)&SMRGLPrimitiveQuad_030d4fd0);
      }
      local_54[1] = local_54[1] + 1;
    } while (local_54[1] < 100);
    local_58 = local_58 + 1;
  } while (local_58 < 100);
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
  return;
}
