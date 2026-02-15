// Name: core_path.cpp_CPathMap_FUN_00547fc0
// Address: 00547fc0
// Address Range: [[00547fc0, 0054838a]]
// Convention: __cdecl
// Signature: void __cdecl core_path_cpp_CPathMap_FUN_00547fc0(CPathMap *this_ptr)

#include "nocturne.h"

void __cdecl core_path_cpp_CPathMap_FUN_00547fc0(CPathMap *this_ptr)

{
  CDemonRenderer *pCVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int aiStackY_1040 [1004];
  byte *puVar9;
  CVector3i *pCVar10;
  int iStack_7c;
  CVector3f local_64;
  float local_58;
  float local_54;
  int local_50;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  float fStack_34;
  int local_2c;
  byte *local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar3 = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 != 0) {
    return;
  }
  local_64.x = (float)(this_ptr->grid_origin).x * g_CDemonRaytraceInstance.adjusted_size.x +
               g_CDemonRaytraceInstance.bbox_min.x;
  local_64.y = 0.0;
  local_64.z = (float)(this_ptr->grid_origin).z * g_CDemonRaytraceInstance.adjusted_size.z +
               g_CDemonRaytraceInstance.bbox_min.z;
  iStack_7c = 0x548026;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,&local_64);
  iStack_7c = 0x54803f;
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
  iStack_7c = 0x5480c6;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,0);
  local_20 = in_stack_00000008 << 8;
  local_28 = (byte *)(in_stack_0000000c << 8);
  local_24 = in_stack_00000010 << 8;
  local_58 = 0.0;
  local_2c = 0;
  local_1c = in_stack_00000014 << 8;
  do {
    local_50 = 0;
    local_18 = (int)(this_ptr->height_cache + -1) + 0x160 + local_2c;
    do {
      pCVar1 = g_CDemonRendererPtr2;
      if ((-1000 < *(int *)(local_18 + 0x9c70)) && (*(int *)(local_18 + 0x9c70) < 1000)) {
        local_54 = *(float *)(local_18 + 0x30);
        fVar4 = (float10)256;
        fVar5 = (float10)g_CDemonRaytraceInstance.bbox_min.y * fVar4;
        local_4c = local_58;
        (&local_48)[(uint)bVar3 * -2] = (&local_54)[(uint)bVar3 * -2];
        (&local_44)[(uint)bVar3 * -2 + (uint)bVar3 * -2] =
             (&local_50)[(uint)bVar3 * -2 + (uint)bVar3 * -2];
        fVar6 = (float10)(int)local_48 *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.y * 256.0f);
        local_14 = local_44;
        fVar7 = (float10)local_44 *
                (float10)(g_CDemonRaytraceInstance.adjusted_size.z * 256.0f);
        local_40 = g_CDemonRaytraceInstance.adjusted_size.x * 256.0f;
        local_3c = g_CDemonRaytraceInstance.adjusted_size.y * 256.0f;
        local_38 = g_CDemonRaytraceInstance.adjusted_size.z * 256.0f;
        round
                  ((double)((float)(int)local_4c *
                           g_CDemonRaytraceInstance.adjusted_size.x * 256.0f));
        fVar5 = fVar5 + fVar6;
        iStack_7c = 0x548213;
        round((double)fVar7);
        pCVar10 = (CVector3i *)0x548222;
        dVar8 = round((double)(fVar5 + fVar4));
        iVar2 = (int)ROUND(dVar8);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr->projected_vertex,pCVar10);
        pCVar1 = g_CDemonRendererPtr2;
        local_20 = iStack_7c;
        pCVar10 = (CVector3i *)0x548252;
        round((double)((float)iStack_7c + local_4c));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr[1].projected_vertex,pCVar10);
        pCVar1 = g_CDemonRendererPtr2;
        puVar9 = &stack0xffffff80;
        pCVar10 = (CVector3i *)0x548286;
        local_24 = iVar2;
        dVar8 = round((double)((float)iVar2 + local_48));
        iStack_7c = (int)ROUND(dVar8);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr[2].projected_vertex,pCVar10);
        pCVar1 = g_CDemonRendererPtr2;
        local_28 = puVar9;
        round((double)((float)(int)puVar9 - local_54));
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&pCVar1->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)&stack0xffffff7c);
        pCVar1 = g_CDemonRendererPtr2;
        g_CDemonRendererPtr2->vertex_buffer_ptr->light = (int)local_38;
        pCVar1->vertex_buffer_ptr->color = (int)local_40;
        pCVar1->vertex_buffer_ptr->fog = (int)local_3c;
        pCVar1->vertex_buffer_ptr->w_recip = fStack_34;
        pCVar1->vertex_buffer_ptr[1].light = (int)local_38;
        pCVar1->vertex_buffer_ptr[1].color = (int)local_40;
        pCVar1->vertex_buffer_ptr[1].fog = (int)local_3c;
        pCVar1->vertex_buffer_ptr[1].w_recip = fStack_34;
        pCVar1->vertex_buffer_ptr[2].light = (int)local_38;
        pCVar1->vertex_buffer_ptr[2].color = (int)local_40;
        pCVar1->vertex_buffer_ptr[2].fog = (int)local_3c;
        pCVar1->vertex_buffer_ptr[2].w_recip = fStack_34;
        pCVar1->vertex_buffer_ptr[3].light = (int)local_38;
        pCVar1->vertex_buffer_ptr[3].color = (int)local_40;
        pCVar1->vertex_buffer_ptr[3].fog = (int)local_3c;
        pCVar1->vertex_buffer_ptr[3].w_recip = fStack_34;
        engine_drender_cpp_CDemonRenderer_renderMaximumQualityVariant_FUN_0048bba0
                  (pCVar1,&SMRGLPrimitiveQuad_030d4fd0.base);
      }
      local_50 = local_50 + 1;
      local_18 = local_18 + 400;
    } while (local_50 < 100);
    local_58 = (float)((int)local_58 + 1);
    local_2c = local_2c + 4;
  } while ((int)local_58 < 100);
  iStack_7c = 0x548163;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_0048c9f0(g_CDemonRendererPtr2,1);
  return;
}
