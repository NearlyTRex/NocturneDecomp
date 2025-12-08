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
  int iVar3;
  float fVar4;
  float *extraout_EAX;
  uint *extraout_EDX;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  unkbyte10 Var9;
  float10 fVar10;
  double dVar11;
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
  
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar3 != 0) {
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
  iVar3 = 1;
  do {
    fVar5 = (float10)iVar3 * ((float10)18 / (float10)(float)in_stack_ffffff58) *
            (float10)0.125;
    this_ptr = (CDemonRenderer *)(float)fVar5;
    Var9 = fpatan(fVar5,(float10)1);
    fVar5 = (float10)fcos(Var9);
    fVar4 = 0.0;
    fVar1 = (float)(fVar5 * (float10)max_distance);
    do {
      fVar5 = (float10)(int)fVar4 * (float10)0.125f * (float10)3.1415926535000001 *
              (float10)2;
      fVar4 = (float)((int)fVar4 + 1);
      fVar6 = (float10)fsin(fVar5);
      fVar10 = (float10)(int)fVar4 * (float10)0.125f * (float10)3.1415926535000001 *
               (float10)2;
      fVar7 = (float10)fsin(fVar10);
      fVar5 = (float10)fcos(fVar5);
      fVar10 = (float10)fcos(fVar10);
      fVar8 = (float10)(float)this_ptr;
      local_18 = (float)(fVar6 * fVar8);
      fStack_14 = (float)(fVar5 * fVar8);
      fVar2 = (float)(fVar7 * fVar8);
      local_78.y = (int)(fVar1 * 0.0);
      local_7c = (float)local_78.y * local_18;
      local_78.x = (int)((float)local_78.y * fStack_14);
      fVar5 = ((float10)max_distance - (float10)(float)local_78.y) * (float10)local_1c *
              (float10)1024;
      local_2c = (float)local_78.y;
      dVar11 = crt_math_c_round_FUN_005fe6b0
                         ((double)(((float10)max_distance - (float10)fVar1) * (float10)local_1c *
                                  (float10)1024));
      local_24 = (int)ROUND(dVar11);
      dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar5);
      local_2c = (float)(int)ROUND(dVar11);
      local_78.z = (int)ROUND(*extraout_EAX * 256f);
      local_6c = (int)ROUND(extraout_EAX[1] * 256f);
      local_68.x = (int)ROUND(extraout_EAX[2] * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)*extraout_EDX,&local_78);
      local_80 = local_30 * fStack_14;
      local_7c = local_30 * fVar2;
      local_78.x = (int)local_30;
      local_68.x = (int)ROUND(local_80 * 256f);
      local_68.y = (int)ROUND(local_7c * 256f);
      local_68.z = (int)ROUND(local_30 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_68);
      local_7c = fVar1 * fVar2;
      local_78.x = (int)(fVar1 * (float)(fVar10 * fVar8));
      local_58.x = (int)ROUND(local_7c * 256f);
      local_58.y = (int)ROUND((float)local_78.x * 256f);
      local_58.z = (int)ROUND(fVar1 * 256f);
      local_78.y = (int)fVar1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_58);
      local_78.x = (int)(fVar4 * fStack_14);
      local_78.y = (int)(fVar4 * fVar2);
      aCStack_48[0].x = (int)ROUND((float)local_78.x * 256f);
      aCStack_48[0].y = (int)ROUND((float)local_78.y * 256f);
      aCStack_48[0].z = (int)ROUND(fVar4 * 256f);
      local_78.z = (int)fVar4;
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
    } while ((int)fVar4 < 8);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 8);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
