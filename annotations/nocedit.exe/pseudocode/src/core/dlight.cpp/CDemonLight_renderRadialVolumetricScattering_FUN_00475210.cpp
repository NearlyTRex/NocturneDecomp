// Name: core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210
// Address: 00475210
// Address Range: [[00475210, 00475878] [00475894, 004758c3]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_renderRadialVolumetricScattering_FUN_00475210(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  unkbyte10 Var9;
  float10 fVar10;
  double dVar11;
  double dVar12;
  int iVar13;
  float fVar14;
  SMRGLHeaderPrimitive local_cc;
  CVector3i local_b4;
  uint local_a8;
  CVector3i local_a4;
  float local_98;
  float local_94;
  byte auStack_90 [8];
  float local_88;
  byte local_78 [12];
  int iStack_6c;
  int iStack_68;
  int local_50;
  int local_4c;
  float local_44;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float fStack_14;
  
  if (this_ptr->field17_0x1cbc != 0) {
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
              (g_CDemonRendererPtr,(CVector3f *)&(this_ptr->base).base.position);
    core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
              ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,(CVector3f *)auStack_90);
    engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
              (g_CDemonRendererPtr,(CVector3i *)(auStack_90 + 4),(CVector3i *)0x0);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr,g_LightTextures);
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    iVar13 = 1;
    do {
      fVar5 = (float10)iVar13 *
              ((float10)18 / (float10)(this_ptr->base).base.projection_scale) *
              (float10)0.0625;
      fVar14 = (float)fVar5;
      Var9 = fpatan(fVar5,(float10)1);
      fVar5 = (float10)fcos(Var9);
      local_38 = 0.0;
      local_34 = (float)fVar5;
      do {
        fVar5 = (float10)(int)local_38 * (float10)0.0625f * (float10)3.1415926535000001 *
                (float10)2;
        fVar6 = (float10)fsin(fVar5);
        fVar10 = (float10)((int)local_38 + 1) * (float10)0.0625f * (float10)3.1415926535000001 *
                 (float10)2;
        fVar7 = (float10)fsin(fVar10);
        fVar5 = (float10)fcos(fVar5);
        fVar10 = (float10)fcos(fVar10);
        fVar8 = (float10)fVar14;
        local_24 = (float)(fVar5 * fVar8);
        fVar1 = (float)(this_ptr->shadow_map_height / 2);
        iVar4 = this_ptr->shadow_map_width;
        dVar11 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 - fVar1 * local_24));
        local_50 = (int)ROUND(dVar11);
        iVar4 = local_50 * iVar4;
        local_2c = (float)(fVar6 * fVar8);
        fVar10 = fVar10 * fVar8;
        dVar11 = crt_math_c_round_FUN_005fe6b0
                           ((double)((float)unaff_EDI * local_2c + (float)unaff_EDI));
        local_4c = (int)ROUND(dVar11);
        local_20 = (float)this_ptr->shadow_depth_buffer[iVar4 + local_4c] * (float)0.00390625;
        local_38 = (float)(fVar7 * fVar8);
        local_34 = (float)fVar10;
        iVar4 = 0;
        local_1c = local_20;
        do {
          local_44 = (this_ptr->base).max_distance;
          fStack_14 = (float)iVar4 * local_3c * local_44 * 0.25f;
          fVar3 = 1.0 / local_44;
          unaff_EDI = iVar4 + 1;
          local_18 = (float)unaff_EDI * local_3c * local_44 * 0.25f;
          fVar2 = local_44 - local_18;
          fVar1 = (float)1024;
          fVar5 = (float10)fStack_14;
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)((local_44 - fStack_14) * fVar3 * fVar1));
          dVar12 = crt_math_c_round_FUN_005fe6b0((double)(fVar2 * fVar3 * fVar1));
          local_30 = (int)ROUND(dVar11);
          local_2c = (float)(int)ROUND(dVar12);
          local_94 = local_24;
          if (fVar5 < (float10)local_24) {
            local_94 = local_1c;
          }
          local_a4.z = (int)(local_94 * local_38);
          local_98 = local_94 * local_34;
          local_b4.x = (int)ROUND((float)local_a4.z * 256f);
          local_b4.y = (int)ROUND(local_98 * 256f);
          local_b4.z = (int)ROUND(local_94 * 256f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_b4);
          auStack_90._0_4_ = local_24;
          if (local_18 < local_24) {
            auStack_90._0_4_ = local_18;
          }
          local_98 = (float)auStack_90._0_4_ * local_3c;
          local_94 = (float)auStack_90._0_4_ * local_38;
          local_a4.x = (int)ROUND(local_98 * 256f);
          local_a4.y = (int)ROUND(local_94 * 256f);
          local_a4.z = (int)ROUND((float)auStack_90._0_4_ * 256f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_a4);
          auStack_90._4_4_ = local_20;
          if (local_18 < local_20) {
            auStack_90._4_4_ = local_18;
          }
          local_94 = (float)auStack_90._4_4_ * local_38;
          auStack_90._0_4_ = (float)auStack_90._4_4_ * local_34;
          local_78._8_4_ = (uint)ROUND(local_94 * 256f);
          iStack_6c = (int)ROUND((float)auStack_90._0_4_ * 256f);
          iStack_68 = (int)ROUND((float)auStack_90._4_4_ * 256f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                     (CVector3i *)(local_78 + 8));
          local_88 = local_18;
          if (fStack_14 < local_18) {
            local_88 = fStack_14;
          }
          auStack_90._0_4_ = local_88 * local_2c;
          auStack_90._4_4_ = local_88 * local_28;
          local_78._0_4_ = (uint)ROUND((float)auStack_90._0_4_ * 256f);
          local_78._4_4_ = (uint)ROUND((float)auStack_90._4_4_ * 256f);
          local_78._8_4_ = (uint)ROUND(local_88 * 256f);
          wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                    (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                     (CVector3i *)local_78);
          this_ptr_00 = g_CDemonRendererPtr;
          g_CDemonRendererPtr->vertex_buffer_ptr->w_recip = local_20;
          this_ptr_00->vertex_buffer_ptr->fog = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr->color = 0xffff;
          this_ptr_00->vertex_buffer_ptr->light = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr->u = 2.2775203e-38;
          this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
          this_ptr_00->vertex_buffer_ptr[1].w_recip = local_20;
          this_ptr_00->vertex_buffer_ptr[1].fog = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
          this_ptr_00->vertex_buffer_ptr[1].light = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
          this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
          this_ptr_00->vertex_buffer_ptr[2].w_recip = local_1c;
          this_ptr_00->vertex_buffer_ptr[2].fog = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
          this_ptr_00->vertex_buffer_ptr[2].light = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
          this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
          this_ptr_00->vertex_buffer_ptr[3].w_recip = local_1c;
          this_ptr_00->vertex_buffer_ptr[3].fog = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[3].color = 0xffff;
          this_ptr_00->vertex_buffer_ptr[3].light = 9.18341e-41;
          this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
          iVar4 = iVar4 + 1;
          this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
          local_cc.surface_normal.D = 0;
          local_cc.surface_normal.C = 0;
          local_cc.base.count = 4;
          local_cc.surface_normal.B = 0;
          local_b4.y = 1;
          local_cc.surface_normal.A = 0;
          local_b4.x = 0;
          local_a8 = 3;
          local_b4.z = 2;
          engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0(this_ptr_00,&local_cc)
          ;
        } while (iVar4 < 4);
        local_34 = (float)((int)local_34 + 1);
      } while ((int)local_34 < 0x10);
      iVar13 = iVar13 + 1;
    } while (iVar13 < 0x10);
    engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    return;
  }
  return;
}
