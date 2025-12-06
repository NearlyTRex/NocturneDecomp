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
  CDemonRenderer *this_ptr;
  int iVar2;
  float fVar3;
  float *pfVar4;
  BADSPACEBASE *in_ESP;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  unkbyte10 Var8;
  float10 fVar9;
  double dVar10;
  float unaff_retaddr;
  float fVar11;
  float in_stack_ffffff58;
  SMRGLHeaderPrimitive local_8c;
  float local_74;
  float local_70;
  float local_6c;
  CVector3i local_68;
  CVector3i local_58;
  CVector3i CStack_48;
  CVector3i local_38;
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 != 0) {
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
  iVar2 = 1;
  do {
    fVar5 = (float10)iVar2 * ((float10)18 / (float10)in_stack_ffffff58) *
            (float10)0.125;
    fVar11 = (float)fVar5;
    Var8 = fpatan(fVar5,(float10)1);
    fVar5 = (float10)fcos(Var8);
    fVar3 = 0.0;
    fVar1 = (float)(fVar5 * (float10)max_distance);
    do {
      fVar5 = (float10)(int)fVar3 * (float10)0.125f * (float10)3.1415926535000001 *
              (float10)2;
      fVar3 = (float)((int)fVar3 + 1);
      fVar6 = (float10)fsin(fVar5);
      fVar9 = (float10)(int)fVar3 * (float10)0.125f * (float10)3.1415926535000001 *
              (float10)2;
      fsin(fVar9);
      fVar5 = (float10)fcos(fVar5);
      fVar9 = (float10)fcos(fVar9);
      fVar7 = (float10)fVar11;
      local_18 = (float)(fVar6 * fVar7);
      fStack_14 = (float)(fVar5 * fVar7);
      local_74 = fVar1 * 0.0;
      local_8c.surface_normal.C = (int)(local_74 * local_18);
      local_8c.surface_normal.D = (int)(local_74 * fStack_14);
      fVar5 = ((float10)max_distance - (float10)fVar1) * (float10)local_1c *
              (float10)1024;
      fVar6 = ((float10)max_distance - (float10)local_74) * (float10)local_1c *
              (float10)1024;
      local_2c = local_74;
      dVar10 = crt_math_c_round_FUN_005fe6b0
                         ((double)CONCAT44 /* combine 2-byte values */(g_CDemonRendererPtr,&local_8c.surface_normal.C));
      local_1c = (float)(int)ROUND(fVar5);
      dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
      pfVar4 = SUB84 /* extract 2-byte value */(dVar10,0);
      local_1c = (float)(int)ROUND(fVar6);
      local_70 = (float)(int)ROUND(*pfVar4 * 256f);
      local_6c = (float)(int)ROUND(pfVar4[1] * 256f);
      local_68.x = (int)ROUND(pfVar4[2] * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                ((SProjectedVertex *)*(uint *)((ulonglong)dVar10 >> 0x20),&local_68);
      local_70 = local_20 * fVar3;
      local_6c = local_20 * unaff_retaddr;
      local_68.x = (int)local_20;
      local_58.x = (int)ROUND(local_70 * 256f);
      local_58.y = (int)ROUND(local_6c * 256f);
      local_58.z = (int)ROUND(local_20 * 256f);
      fVar11 = 6.555962e-39;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_58);
      local_6c = (float)rotation * unaff_retaddr;
      local_68.x = (int)((float)rotation * (float)position);
      local_68.y = (int)rotation;
      CStack_48.x = (int)ROUND(local_6c * 256f);
      CStack_48.y = (int)ROUND((float)local_68.x * 256f);
      CStack_48.z = (int)ROUND((float)rotation * 256f);
      in_stack_ffffff58 = 6.556125e-39;
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&CStack_48);
      local_68.x = (int)(param_3 * fVar3);
      local_68.y = (int)(param_3 * unaff_retaddr);
      local_68.z = (int)param_3;
      local_38.x = (int)ROUND((float)local_68.x * 256f);
      local_38.y = (int)ROUND((float)local_68.y * 256f);
      local_38.z = (int)ROUND(param_3 * 256f);
      wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_38);
      this_ptr = g_CDemonRendererPtr;
      g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = (float)(fVar9 * fVar7);
      this_ptr->vertex_buffer_ptr->fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->color = 0xffff;
      this_ptr->vertex_buffer_ptr->light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr->u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr->v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[1].w_recip = (float)(fVar9 * fVar7);
      this_ptr->vertex_buffer_ptr[1].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].color = 0xffff;
      this_ptr->vertex_buffer_ptr[1].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[1].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[1].v = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[2].w_recip = fVar1;
      this_ptr->vertex_buffer_ptr[2].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].color = 0xffff;
      this_ptr->vertex_buffer_ptr[2].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[2].u = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[2].v = 7.34684e-40;
      this_ptr->vertex_buffer_ptr[3].w_recip = fVar1;
      this_ptr->vertex_buffer_ptr[3].fog = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].color = 0xffff;
      this_ptr->vertex_buffer_ptr[3].light = 9.18341e-41;
      this_ptr->vertex_buffer_ptr[3].u = 2.2775203e-38;
      this_ptr->vertex_buffer_ptr[3].v = 7.34684e-40;
      local_8c.base.count = 4;
      local_8c.surface_normal.D = 0;
      local_8c.surface_normal.C = 0;
      local_8c.surface_normal.B = 0;
      local_8c.surface_normal.A = 0;
      local_68.x = 3;
      local_74 = 0.0;
      local_70 = 1.4013e-45;
      local_6c = 2.8026e-45;
      engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr,&local_8c);
    } while ((int)fVar3 < 8);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}
