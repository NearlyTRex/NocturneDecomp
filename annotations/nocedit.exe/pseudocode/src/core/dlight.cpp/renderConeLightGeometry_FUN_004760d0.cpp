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
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  unkbyte10 Var7;
  float10 fVar8;
  double dVar9;
  float fVar10;
  SMRGLHeaderPrimitive local_b4;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  float local_8c;
  CVector3i local_88;
  int local_7c;
  int local_78;
  CVector3i local_74;
  CVector3i local_68;
  CVector3i local_5c [2];
  float fStack_3c;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int iStack_14;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,rotation,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,g_LightTextures)
  ;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  local_2c = 1.0 / max_distance;
  iVar1 = 1;
  do {
    fVar3 = (float10)iVar1 * ((float10)18 / (float10)param_3) *
            (float10)0.125;
    fVar10 = (float)fVar3;
    Var7 = fpatan(fVar3,(float10)1);
    fVar3 = (float10)fcos(Var7);
    iVar2 = 0;
    local_18 = (float)(fVar3 * (float10)max_distance);
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
      fVar6 = (float10)fVar10;
      local_28 = (float)(fVar4 * fVar6);
      local_24 = (float)(fVar3 * fVar6);
      local_20 = (float)(fVar5 * fVar6);
      local_1c = (float)(fVar8 * fVar6);
      local_88.y = (int)(local_18 * 0.0);
      local_8c = (float)local_88.y * local_28;
      local_88.x = (int)((float)local_88.y * local_24);
      fVar3 = ((float10)max_distance - (float10)(float)local_88.y) * (float10)local_2c *
              (float10)1024;
      fStack_3c = (float)local_88.y;
      iStack_14 = iVar2;
      dVar9 = crt_math_c_round_FUN_005fe6b0
                        ((double)(((float10)max_distance - (float10)local_18) * (float10)local_2c *
                                 (float10)1024));
      local_34 = (float)(int)ROUND(dVar9);
      dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar3);
      fStack_3c = (float)(int)ROUND(dVar9);
      local_88.z = (int)ROUND(*extraout_EAX * 256f);
      local_7c = (int)ROUND(extraout_EAX[1] * 256f);
      local_78 = (int)ROUND(extraout_EAX[2] * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)*extraout_EDX,&local_88);
      local_8c = fStack_3c * local_20;
      local_88.x = (int)(fStack_3c * local_1c);
      local_88.y = (int)fStack_3c;
      local_74.x = (int)ROUND(local_8c * 256f);
      local_74.y = (int)ROUND((float)local_88.x * 256f);
      local_74.z = (int)ROUND(fStack_3c * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_74);
      local_8c = local_18 * local_20;
      local_88.x = (int)(local_18 * local_1c);
      local_88.y = (int)local_18;
      local_68.x = (int)ROUND(local_8c * 256f);
      local_68.y = (int)ROUND((float)local_88.x * 256f);
      local_68.z = (int)ROUND(local_18 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_68);
      local_8c = local_18 * local_28;
      local_88.x = (int)(local_18 * local_24);
      local_88.y = (int)local_18;
      local_5c[0].x = (int)ROUND(local_8c * 256f);
      local_5c[0].y = (int)ROUND((float)local_88.x * 256f);
      local_5c[0].z = (int)ROUND(local_18 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,local_5c);
      this_ptr = g_CDemonRendererPtr;
      g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = local_34;
      this_ptr->vertex_buffer_ptr->fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->color = 0xffff;
      this_ptr->vertex_buffer_ptr->light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[1].w_recip = local_34;
      this_ptr->vertex_buffer_ptr[1].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].color = 0xffff;
      this_ptr->vertex_buffer_ptr[1].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[2].w_recip = local_30;
      this_ptr->vertex_buffer_ptr[2].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].color = 0xffff;
      this_ptr->vertex_buffer_ptr[2].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[3].w_recip = local_30;
      this_ptr->vertex_buffer_ptr[3].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].color = 0xffff;
      this_ptr->vertex_buffer_ptr[3].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
      local_b4.base.count = 4;
      local_b4.surface_normal.D = 0;
      local_b4.surface_normal.C = 0;
      local_b4.surface_normal.B = 0;
      local_b4.surface_normal.A = 0;
      local_90 = 3;
      local_9c = 0;
      local_98 = 1;
      local_94 = 2;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr,&local_b4);
    } while (iVar2 < 8);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 8);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
