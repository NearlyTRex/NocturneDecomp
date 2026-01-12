// Name: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210
// Address: 00475210
// Address Range: [[00475210, 00475878] [00475894, 004758c3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight *this_ptr)

{
  CDemonRenderer *this_ptr_00;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  int iVar1;
  float10 fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  unkbyte10 Var7;
  float10 fVar8;
  double dVar9;
  int iVar10;
  SMRGLHeaderPrimitive local_dc;
  uint local_c4;
  uint local_c0;
  CVector3i local_bc;
  CVector3i local_a8;
  float local_9c;
  float local_98;
  float local_94;
  CVector3f CStack_90;
  CVector3i local_84;
  CVector3i local_78 [2];
  int local_60;
  int iStack_5c;
  float local_4c;
  int local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int iStack_14;
  
  if (this_ptr->field17_0x1cbc != 0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&(this_ptr->base).base.position);
    core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
              ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&CStack_90);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)&CStack_90,(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,g_LightTextures);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    iVar10 = 1;
    do {
      fVar2 = (float10)iVar10 *
              ((float10)18 / (float10)(this_ptr->base).base.projection_scale) *
              (float10)0.0625;
      Var7 = fpatan(fVar2,(float10)1);
      fVar3 = (float10)fcos(Var7);
      local_48 = 0;
      local_44 = (float)fVar3;
      do {
        fVar3 = (float10)local_48 * (float10)0.0625f * (float10)3.1415926535000001 *
                (float10)2;
        fVar4 = (float10)fsin(fVar3);
        fVar8 = (float10)(local_48 + 1) * (float10)0.0625f * (float10)3.1415926535000001 *
                (float10)2;
        fVar5 = (float10)fsin(fVar8);
        fVar3 = (float10)fcos(fVar3);
        fVar8 = (float10)fcos(fVar8);
        local_18 = this_ptr->shadow_map_width / 2;
        iStack_14 = this_ptr->shadow_map_height / 2;
        fVar6 = (float10)(float)fVar2;
        local_34 = (float)(fVar3 * fVar6);
        dVar9 = crt_math_c_round_FUN_005fe6b0
                          ((double)((float)iStack_14 - (float)iStack_14 * local_34));
        local_60 = (int)ROUND(dVar9);
        local_3c = (float)(fVar4 * fVar6);
        fVar5 = fVar5 * fVar6;
        fVar8 = fVar8 * fVar6;
        dVar9 = crt_math_c_round_FUN_005fe6b0
                          ((double)((float)(int)local_1c * local_3c + (float)(int)local_1c));
        iStack_5c = (int)ROUND(dVar9);
        local_28 = (float)this_ptr->shadow_depth_buffer[extraout_EAX] * (float)0.00390625;
        local_40 = (float)fVar5;
        local_3c = (float)fVar8;
        iVar1 = 0;
        local_24 = local_28;
        do {
          local_4c = (this_ptr->base).max_distance;
          local_1c = (float)iVar1 * local_44 * local_4c * 0.25f;
          iStack_14 = iVar1 + 1;
          local_20 = (float)iStack_14 * local_44 * local_4c * 0.25f;
          fVar8 = ((float10)local_4c - (float10)local_20) * ((float10)1 / (float10)local_4c) *
                  (float10)1024;
          fVar3 = (float10)local_1c;
          dVar9 = crt_math_c_round_FUN_005fe6b0
                            ((double)(((float10)local_4c - (float10)local_1c) *
                                      ((float10)1 / (float10)local_4c) * (float10)1024));
          fVar4 = (float10)dVar9;
          dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
          local_38 = (float)(int)ROUND(fVar4);
          local_34 = (float)(int)ROUND(dVar9);
          local_9c = local_2c;
          if (fVar3 < (float10)local_2c) {
            local_9c = local_24;
          }
          local_a8.y = (int)(local_9c * local_40);
          local_a8.z = (int)(local_9c * local_3c);
          local_bc.x = (int)ROUND((float)local_a8.y * 256f);
          local_bc.y = (int)ROUND((float)local_a8.z * 256f);
          local_bc.z = (int)ROUND(local_9c * 256f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_bc);
          local_94 = local_28;
          if (local_1c < local_28) {
            local_94 = local_1c;
          }
          local_9c = local_94 * local_40;
          local_98 = local_94 * local_3c;
          local_a8.x = (int)ROUND(local_9c * 256f);
          local_a8.y = (int)ROUND(local_98 * 256f);
          local_a8.z = (int)ROUND(local_94 * 256f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_a8);
          local_94 = local_28;
          if (local_20 < local_28) {
            local_94 = local_20;
          }
          local_9c = local_94 * local_40;
          local_98 = local_94 * local_3c;
          local_78[0].x = (int)ROUND(local_9c * 256f);
          local_78[0].y = (int)ROUND(local_98 * 256f);
          local_78[0].z = (int)ROUND(local_94 * 256f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,local_78);
          local_94 = local_24;
          if (local_20 < local_24) {
            local_94 = local_20;
          }
          local_9c = local_94 * local_38;
          local_98 = local_94 * local_34;
          local_84.x = (int)ROUND(local_9c * 256f);
          local_84.y = (int)ROUND(local_98 * 256f);
          local_84.z = (int)ROUND(local_94 * 256f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_84);
          this_ptr_00 = g_CDemonRendererPtr;
          g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = local_30;
          this_ptr_00->vertex_buffer_ptr->fog = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr->color = 0xffff;
          this_ptr_00->vertex_buffer_ptr->light = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr->u = 2.2775203e-38;
          this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
          this_ptr_00->vertex_buffer_ptr[1].w_recip = local_30;
          this_ptr_00->vertex_buffer_ptr[1].fog = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
          this_ptr_00->vertex_buffer_ptr[1].light = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
          this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
          this_ptr_00->vertex_buffer_ptr[2].w_recip = local_2c;
          this_ptr_00->vertex_buffer_ptr[2].fog = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
          this_ptr_00->vertex_buffer_ptr[2].light = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
          this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
          this_ptr_00->vertex_buffer_ptr[3].w_recip = local_2c;
          this_ptr_00->vertex_buffer_ptr[3].fog = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[3].color = 0xffff;
          this_ptr_00->vertex_buffer_ptr[3].light = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
          iVar1 = iVar1 + 1;
          this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
          local_dc.surface_normal.D = 0;
          local_dc.surface_normal.C = 0;
          local_dc.base.count = 4;
          local_dc.surface_normal.B = 0;
          local_c0 = 1;
          local_dc.surface_normal.A = 0;
          local_c4 = 0;
          local_bc.y = 3;
          local_bc.x = 2;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr_00,&local_dc)
          ;
        } while (iVar1 < 4);
        local_48 = local_48 + 1;
      } while (local_48 < 0x10);
      iVar10 = iVar10 + 1;
    } while (iVar10 < 0x10);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    return;
  }
  return;
}
