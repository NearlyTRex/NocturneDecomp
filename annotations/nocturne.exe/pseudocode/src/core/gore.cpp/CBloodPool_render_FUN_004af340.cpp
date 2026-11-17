// Name: core_gore.cpp_CBloodPool_render_FUN_004af340
// Address: 004af340
// Address Range: [[004af340, 004af6f7]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodPool_render_FUN_004af340(CBloodPool *this_ptr,int expire_flag)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodPool_render_FUN_004af340(CBloodPool *this_ptr,int expire_flag)

{
  EBloodType EVar1;
  double dVar2;
  CVector3i CStack_54;
  CVector3i local_48;
  CVector3i local_3c;
  uint local_30;
  uint local_2c;
  uint local_28;
  CVector3i local_24;
  int local_18;
  
  CStack_54.x = 0x4af359;
  dVar2 = round((double)(this_ptr->age * (float)8));
  local_18 = (int)ROUND(dVar2);
  if (local_18 < 0) {
    local_18 = 0;
  }
  else if (0x1c < local_18) {
    this_ptr->expired = 1;
    local_18 = 0x1c;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (g_CDemonRenderer_PTR_005ae704,&this_ptr->position);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (g_CDemonRenderer_PTR_005ae704,
             g_SMRGLTextureBasic_ARRAY_005b9d4c + this_ptr->texture_variant * 0x1d + local_18);
  local_30 = 0xbfaa9fbe;
  local_28 = 0xbfaa9fbe;
  local_2c = 0;
  local_24.x = (int)ROUND(256.0f * -1.333);
  local_24.y = (int)ROUND(256.0f * 0.0);
  local_24.z = (int)ROUND(256.0f * -1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_24);
  local_30 = 0x3faa9fbe;
  local_2c = 0;
  local_28 = 0xbfaa9fbe;
  CStack_54.x = (int)ROUND(256.0f * 1.333);
  CStack_54.y = (int)ROUND(256.0f * 0.0);
  CStack_54.z = (int)ROUND(256.0f * -1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,&CStack_54);
  local_30 = 0x3faa9fbe;
  local_28 = 0x3faa9fbe;
  local_2c = 0;
  local_48.x = (int)ROUND(256.0f * 1.333);
  local_48.y = (int)ROUND(256.0f * 0.0);
  local_48.z = (int)ROUND(256.0f * 1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,&local_48);
  local_30 = 0xbfaa9fbe;
  local_2c = 0;
  local_28 = 0x3faa9fbe;
  local_3c.x = (int)ROUND(256.0f * -1.333);
  local_3c.y = (int)ROUND(256.0f * 0.0);
  local_3c.z = (int)ROUND(256.0f * 1.333);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c
            (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,&local_3c);
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004af532:
    g_SRenderVertex_ARRAY_005c5014[0].r = 0x2000;
    g_SRenderVertex_ARRAY_005c5014[0].g = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_005c5014[0].r = 0;
    g_SRenderVertex_ARRAY_005c5014[0].g = 0x7f80;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004af532;
    g_SRenderVertex_ARRAY_005c5014[0].g = 0;
    g_SRenderVertex_ARRAY_005c5014[0].r = 0;
  }
  g_SRenderVertex_ARRAY_005c5014[0].b = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004af55f:
    g_SRenderVertex_ARRAY_005c5014[1].r = 0x2000;
    g_SRenderVertex_ARRAY_005c5014[1].g = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_005c5014[1].g = 0x7f80;
    g_SRenderVertex_ARRAY_005c5014[1].r = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004af55f;
    g_SRenderVertex_ARRAY_005c5014[1].g = 0;
    g_SRenderVertex_ARRAY_005c5014[1].r = 0;
  }
  g_SRenderVertex_ARRAY_005c5014[1].b = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 == BLOOD_TYPE_RED) {
LAB_004af58c:
    g_SRenderVertex_ARRAY_005c5014[2].r = 0x2000;
    g_SRenderVertex_ARRAY_005c5014[2].g = 0;
  }
  else if (EVar1 < BLOOD_TYPE_NONE) {
    g_SRenderVertex_ARRAY_005c5014[2].g = 0x7f80;
    g_SRenderVertex_ARRAY_005c5014[2].r = 0;
  }
  else {
    if (EVar1 != BLOOD_TYPE_NONE) goto LAB_004af58c;
    g_SRenderVertex_ARRAY_005c5014[2].g = 0;
    g_SRenderVertex_ARRAY_005c5014[2].r = 0;
  }
  g_SRenderVertex_ARRAY_005c5014[2].b = 0;
  EVar1 = this_ptr->blood_type;
  if (EVar1 != BLOOD_TYPE_RED) {
    if (EVar1 < BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_005c5014[3].g = 0x7f80;
      g_SRenderVertex_ARRAY_005c5014[3].r = 0;
      goto LAB_004af5dc;
    }
    if (EVar1 == BLOOD_TYPE_NONE) {
      g_SRenderVertex_ARRAY_005c5014[3].g = 0;
      g_SRenderVertex_ARRAY_005c5014[3].r = 0;
      goto LAB_004af5dc;
    }
  }
  g_SRenderVertex_ARRAY_005c5014[3].r = 0x2000;
  g_SRenderVertex_ARRAY_005c5014[3].g = 0;
LAB_004af5dc:
  g_SRenderVertex_ARRAY_005c5014[3].b = 0;
  engine_drender_cpp_CDemonRenderer_renderBlendedDirect_FUN_004602a0
            (g_CDemonRenderer_PTR_005ae704,&g_SMRGLPrimitiveQuadIndex_01c78c80.base);
  return;
}
