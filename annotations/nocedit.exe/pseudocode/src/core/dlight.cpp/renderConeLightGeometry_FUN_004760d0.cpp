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
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CDemonRenderer *pCVar5;
  int iVar6;
  float fVar7;
  BADSPACEBASE *in_ESP;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  unkbyte10 Var12;
  float10 fVar13;
  double dVar14;
  CDemonRenderer *this_ptr;
  SMRGLHeaderPrimitive *in_stack_ffffff58;
  SMRGLHeaderPrimitive local_9c;
  uint local_84;
  float local_80;
  float local_7c;
  CVector3i local_78;
  int local_6c;
  CVector3i local_68;
  CVector3i local_58;
  CVector3i aCStack_48 [2];
  float local_30;
  float local_2c;
  int local_24;
  float local_1c;
  float local_18;
  float fStack_14;
  
  iVar6 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar6 != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,rotation,(CVector3i *)0x0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,g_LightTextures)
  ;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  local_1c = 1.0 / max_distance;
  iVar6 = 1;
  do {
    fVar8 = (float10)iVar6 * ((float10)18 / (float10)(float)in_stack_ffffff58) *
            (float10)0.125;
    this_ptr = (CDemonRenderer *)(float)fVar8;
    Var12 = fpatan(fVar8,(float10)1);
    fVar8 = (float10)fcos(Var12);
    fVar7 = 0.0;
    fVar1 = (float)(fVar8 * (float10)max_distance);
    do {
      pCVar5 = g_CDemonRendererPtr;
      fVar8 = (float10)(int)fVar7 * (float10)0.125f * (float10)3.1415926535000001 *
              (float10)2;
      fVar7 = (float)((int)fVar7 + 1);
      fVar9 = (float10)fsin(fVar8);
      fVar13 = (float10)(int)fVar7 * (float10)0.125f * (float10)3.1415926535000001 *
               (float10)2;
      fVar10 = (float10)fsin(fVar13);
      fVar8 = (float10)fcos(fVar8);
      fVar13 = (float10)fcos(fVar13);
      fVar11 = (float10)(float)this_ptr;
      local_18 = (float)(fVar9 * fVar11);
      fStack_14 = (float)(fVar8 * fVar11);
      fVar2 = (float)(fVar10 * fVar11);
      local_78.y = (int)(fVar1 * 0.0);
      local_7c = (float)local_78.y * local_18;
      local_78.x = (int)((float)local_78.y * fStack_14);
      fVar3 = (max_distance - (float)local_78.y) * local_1c;
      fVar4 = (float)1024;
      local_2c = (float)local_78.y;
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)((max_distance - fVar1) * local_1c * fVar4));
      local_24 = (int)ROUND(dVar14);
      dVar14 = crt_math_c_round_FUN_005fe6b0((double)(fVar3 * fVar4));
      local_2c = (float)(int)ROUND(dVar14);
      local_78.z = (int)ROUND(local_7c * 256f);
      local_6c = (int)ROUND((float)local_78.x * 256f);
      local_68.x = (int)ROUND((float)local_78.y * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&pCVar5->vertex_buffer_ptr->projected_vertex,&local_78);
      local_80 = local_30 * fStack_14;
      local_7c = local_30 * fVar2;
      local_78.x = (int)local_30;
      local_68.x = (int)ROUND(local_80 * 256f);
      local_68.y = (int)ROUND(local_7c * 256f);
      local_68.z = (int)ROUND(local_30 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_68);
      local_7c = fVar1 * fVar2;
      local_78.x = (int)(fVar1 * (float)(fVar13 * fVar11));
      local_58.x = (int)ROUND(local_7c * 256f);
      local_58.y = (int)ROUND((float)local_78.x * 256f);
      local_58.z = (int)ROUND(fVar1 * 256f);
      local_78.y = (int)fVar1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_58);
      local_78.x = (int)(fVar7 * fStack_14);
      local_78.y = (int)(fVar7 * fVar2);
      aCStack_48[0].x = (int)ROUND((float)local_78.x * 256f);
      aCStack_48[0].y = (int)ROUND((float)local_78.y * 256f);
      aCStack_48[0].z = (int)ROUND(fVar7 * 256f);
      local_78.z = (int)fVar7;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,aCStack_48);
      this_ptr = g_CDemonRendererPtr;
      g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = local_1c;
      this_ptr->vertex_buffer_ptr->fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->color = 0xffff;
      this_ptr->vertex_buffer_ptr->light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[1].w_recip = local_1c;
      this_ptr->vertex_buffer_ptr[1].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].color = 0xffff;
      this_ptr->vertex_buffer_ptr[1].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[2].w_recip = local_18;
      this_ptr->vertex_buffer_ptr[2].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].color = 0xffff;
      this_ptr->vertex_buffer_ptr[2].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[3].w_recip = local_18;
      this_ptr->vertex_buffer_ptr[3].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].color = 0xffff;
      this_ptr->vertex_buffer_ptr[3].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
      local_9c.base.count = 4;
      local_9c.surface_normal.D = 0;
      local_9c.surface_normal.C = 0;
      local_9c.surface_normal.B = 0;
      local_9c.surface_normal.A = 0;
      local_78.x = 3;
      in_stack_ffffff58 = &local_9c;
      local_84 = 0;
      local_80 = 1.4013e-45;
      local_7c = 2.8026e-45;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                (this_ptr,in_stack_ffffff58);
    } while ((int)fVar7 < 8);
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
