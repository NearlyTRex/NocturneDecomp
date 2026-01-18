// Name: core_dlight.cpp_renderConeLightGeometry_FUN_004760d0
// Address: 004760d0
// Address Range: [[004760d0, 004765b8]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_renderConeLightGeometry_FUN_004760d0(CVector3f * position, CVector3i * rotation, float param_3, float max_distance)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_renderConeLightGeometry_FUN_004760d0
          (CVector3f *position,CVector3i *rotation,float param_3,float max_distance)

{
  CDemonRenderer *this_ptr;
  int iVar1;
  int iVar2;
  float *extraout_EAX;
  uint *extraout_EDX;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  unkbyte10 Var7;
  float10 fVar8;
  double dVar9;
  SMRGLHeaderPrimitive local_c0;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  CVector3i local_8c;
  CVector3i local_80;
  CVector3i local_74;
  CVector3i local_68 [2];
  float fStack_48;
  float local_40;
  float fStack_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  local_c0.base.count = (int)param_3;
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
  local_30 = 1.0 / max_distance;
  iVar1 = 1;
  do {
    fVar3 = (float10)iVar1 * ((float10)18 / (float10)(float)local_c0.base.count) *
            (float10)0.125;
    local_c0.base.type = (int)(float)fVar3;
    Var7 = fpatan(fVar3,(float10)1);
    fVar3 = (float10)fcos(Var7);
    iVar2 = 0;
    local_1c = (float)(fVar3 * (float10)max_distance);
    do {
      fVar3 = (float10)iVar2 * (float10)0.125f * (float10)3.1415926535000001 *
              (float10)2;
      iVar2 = iVar2 + 1;
      fVar4 = (float10)fsin(fVar3);
      fVar8 = (float10)iVar2 * (float10)0.125f * (float10)3.1415926535000001 *
              (float10)2;
      fVar5 = (float10)fsin(fVar8);
      fVar3 = (float10)fcos(fVar3);
      fVar8 = (float10)fcos(fVar8);
      fVar6 = (float10)(float)local_c0.base.type;
      local_2c = (float)(fVar4 * fVar6);
      local_28 = (float)(fVar3 * fVar6);
      local_24 = (float)(fVar5 * fVar6);
      local_20 = (float)(fVar8 * fVar6);
      local_8c.y = (int)(local_1c * 0.0);
      local_90 = (float)local_8c.y * local_2c;
      local_8c.x = (int)((float)local_8c.y * local_28);
      fVar3 = ((float10)max_distance - (float10)(float)local_8c.y) * (float10)local_30 *
              (float10)1024;
      local_40 = (float)local_8c.y;
      local_18 = iVar2;
      dVar9 = crt_math_c_round_FUN_005fe6b0
                        ((double)(((float10)max_distance - (float10)local_1c) * (float10)local_30 *
                                 (float10)1024));
      local_38 = (int)ROUND(dVar9);
      dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
      local_40 = (float)(int)ROUND(dVar9);
      local_8c.z = (int)ROUND(*extraout_EAX * 256.0f);
      local_80.x = (int)ROUND(extraout_EAX[1] * 256.0f);
      local_80.y = (int)ROUND(extraout_EAX[2] * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)*extraout_EDX,&local_8c);
      local_98 = fStack_48 * local_2c;
      local_94 = fStack_48 * local_28;
      local_90 = fStack_48;
      local_80.x = (int)ROUND(local_98 * 256.0f);
      local_80.y = (int)ROUND(local_94 * 256.0f);
      local_80.z = (int)ROUND(fStack_48 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_80);
      local_98 = local_24 * local_2c;
      local_94 = local_24 * local_28;
      local_90 = local_24;
      local_74.x = (int)ROUND(local_98 * 256.0f);
      local_74.y = (int)ROUND(local_94 * 256.0f);
      local_74.z = (int)ROUND(local_24 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_74);
      local_98 = local_24 * local_34;
      local_94 = local_24 * local_30;
      local_90 = local_24;
      local_68[0].x = (int)ROUND(local_98 * 256.0f);
      local_68[0].y = (int)ROUND(local_94 * 256.0f);
      local_68[0].z = (int)ROUND(local_24 * 256.0f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,local_68);
      this_ptr = g_CDemonRendererPtr2;
      g_CDemonRendererPtr2->vertex_buffer_ptr->w_recip = local_40;
      this_ptr->vertex_buffer_ptr->fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->color = 0xffff;
      this_ptr->vertex_buffer_ptr->light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[1].w_recip = local_40;
      this_ptr->vertex_buffer_ptr[1].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].color = 0xffff;
      this_ptr->vertex_buffer_ptr[1].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[2].w_recip = fStack_3c;
      this_ptr->vertex_buffer_ptr[2].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].color = 0xffff;
      this_ptr->vertex_buffer_ptr[2].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[3].w_recip = fStack_3c;
      this_ptr->vertex_buffer_ptr[3].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].color = 0xffff;
      this_ptr->vertex_buffer_ptr[3].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
      local_c0.base.count = 4;
      local_c0.surface_normal.D = 0;
      local_c0.surface_normal.C = 0;
      local_c0.surface_normal.B = 0;
      local_c0.surface_normal.A = 0;
      local_9c = 3;
      local_a8 = 0;
      local_a4 = 1;
      local_a0 = 2;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr,&local_c0);
    } while (iVar2 < 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
  return;
}
