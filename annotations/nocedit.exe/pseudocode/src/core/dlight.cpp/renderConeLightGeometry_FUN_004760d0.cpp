// Name: core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
// Address: 004760d0
// Address Range: [[004760d0, 004765b8]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_004760d0(CVector3f *position,CVector3i *rotation,float fov,float falloff)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_004760d0(CVector3f *position,CVector3i *rotation,float fov,float falloff)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  unkbyte10 Var8;
  float10 fVar9;
  SMRGLHeaderPrimitive local_b8;
  uint local_a0;
  uint local_9c;
  uint local_98;
  uint local_94;
  float local_90;
  float local_8c;
  float local_88;
  CVector3i local_84;
  CVector3i local_78;
  CVector3i local_6c;
  CVector3i local_60 [2];
  float local_40;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar1 != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr2,position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr2,rotation,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
            (g_CDemonRendererPtr2,g_LightTextures);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
  local_30 = 1.0 / falloff;
  iVar1 = 1;
  do {
    fVar3 = (float10)iVar1 * ((float10)18 / (float10)fov) * (float10)0.125;
    Var8 = fpatan(fVar3,(float10)1);
    fVar4 = (float10)fcos(Var8);
    iVar2 = 0;
    local_1c = (float)(fVar4 * (float10)falloff);
    do {
      fVar4 = (float10)iVar2 * (float10)0.125f * (float10)3.1415926535000001 *
              (float10)2;
      iVar2 = iVar2 + 1;
      fVar5 = (float10)fsin(fVar4);
      fVar9 = (float10)iVar2 * (float10)0.125f * (float10)3.1415926535000001 *
              (float10)2;
      fVar6 = (float10)fsin(fVar9);
      fVar4 = (float10)fcos(fVar4);
      fVar9 = (float10)fcos(fVar9);
      fVar7 = (float10)(float)fVar3;
      local_2c = (float)(fVar5 * fVar7);
      local_28 = (float)(fVar4 * fVar7);
      local_24 = (float)(fVar6 * fVar7);
      local_20 = (float)(fVar9 * fVar7);
      local_88 = local_1c * 0.0;
      local_90 = local_88 * local_2c;
      local_8c = local_88 * local_28;
      local_34 = (int)ROUND(ROUND((falloff - local_1c) * local_30 * (float)1024));
      local_38 = (int)ROUND(ROUND((falloff - local_88) * local_30 * (float)1024));
      local_84.x = (int)ROUND(local_90 * 256.0f);
      local_84.y = (int)ROUND(local_8c * 256.0f);
      local_84.z = (int)ROUND(local_88 * 256.0f);
      local_40 = local_88;
      local_18 = iVar2;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_84);
      local_90 = local_40 * local_24;
      local_8c = local_40 * local_20;
      local_88 = local_40;
      local_78.x = (int)ROUND(local_90 * 256.0f);
      local_78.y = (int)ROUND(local_8c * 256.0f);
      local_78.z = (int)ROUND(local_40 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_78);
      local_90 = local_1c * local_24;
      local_8c = local_1c * local_20;
      local_88 = local_1c;
      local_6c.x = (int)ROUND(local_90 * 256.0f);
      local_6c.y = (int)ROUND(local_8c * 256.0f);
      local_6c.z = (int)ROUND(local_1c * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_6c);
      local_90 = local_1c * local_2c;
      local_8c = local_1c * local_28;
      local_88 = local_1c;
      local_60[0].x = (int)ROUND(local_90 * 256.0f);
      local_60[0].y = (int)ROUND(local_8c * 256.0f);
      local_60[0].z = (int)ROUND(local_1c * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,local_60);
      this_ptr = g_CDemonRendererPtr2;
      g_CDemonRendererPtr2->vertex_buffer_ptr->fog = local_38;
      this_ptr->vertex_buffer_ptr->g = 0xffff;
      this_ptr->vertex_buffer_ptr->r = 0xffff;
      this_ptr->vertex_buffer_ptr->z = 0xffff;
      this_ptr->vertex_buffer_ptr->u = 0xf80000;
      this_ptr->vertex_buffer_ptr->v = 0xf80000;
      this_ptr->vertex_buffer_ptr[1].fog = local_38;
      this_ptr->vertex_buffer_ptr[1].g = 0xffff;
      this_ptr->vertex_buffer_ptr[1].r = 0xffff;
      this_ptr->vertex_buffer_ptr[1].z = 0xffff;
      this_ptr->vertex_buffer_ptr[1].u = 0x80000;
      this_ptr->vertex_buffer_ptr[1].v = 0xf80000;
      this_ptr->vertex_buffer_ptr[2].fog = local_34;
      this_ptr->vertex_buffer_ptr[2].g = 0xffff;
      this_ptr->vertex_buffer_ptr[2].r = 0xffff;
      this_ptr->vertex_buffer_ptr[2].z = 0xffff;
      this_ptr->vertex_buffer_ptr[2].u = 0x80000;
      this_ptr->vertex_buffer_ptr[2].v = 0x80000;
      this_ptr->vertex_buffer_ptr[3].fog = local_34;
      this_ptr->vertex_buffer_ptr[3].g = 0xffff;
      this_ptr->vertex_buffer_ptr[3].r = 0xffff;
      this_ptr->vertex_buffer_ptr[3].z = 0xffff;
      this_ptr->vertex_buffer_ptr[3].u = 0xf80000;
      this_ptr->vertex_buffer_ptr[3].v = 0x80000;
      local_b8.base.count = 4;
      local_b8.surface_normal.D = 0;
      local_b8.surface_normal.C = 0;
      local_b8.surface_normal.B = 0;
      local_b8.surface_normal.A = 0;
      local_94 = 3;
      local_a0 = 0;
      local_9c = 1;
      local_98 = 2;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr,&local_b8);
    } while (iVar2 < 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
