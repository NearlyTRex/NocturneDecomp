// Name: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0
// Address: 00474ad0
// Address Range: [[00474ad0, 0047520c]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl
core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00474ad0(CDemonLight *this_ptr)

{
  SRenderVertex *pSVar1;
  CDemonCamera *pCVar2;
  CDemonLight *pCVar3;
  CVector3f *pCVar4;
  CDemonRenderer *this_ptr_00;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  int iVar5;
  byte bVar6;
  double dVar7;
  float in_stack_00000008;
  float afStackY_10b0 [988];
  CVector3i *in_stack_fffffed0;
  float in_stack_fffffefc;
  byte auStack_fc [8];
  int local_f4;
  int local_f0;
  int local_ec;
  int local_e8;
  uint local_e4;
  CVector3f local_e0;
  byte auStack_d0 [8];
  float local_c8;
  float local_c4 [7];
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3i local_9c;
  float fStack_90;
  float local_8c;
  byte local_88 [8];
  float local_80;
  CVector3i local_7c;
  float local_70;
  float local_6c;
  CVector3f CStack_64;
  CVector3i local_54;
  int local_48;
  float local_2c;
  float local_28;
  float local_24;
  CVector3i local_20;
  float local_14;
  
  pCVar3 = this_ptr;
  bVar6 = 0;
  if ((this_ptr->field17_0x1cbc != 0) && (g_CGamePtr->halo_mode == 2)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr,&local_8c);
    local_88._0_4_ = (float)local_88._0_4_ - (float)(this_ptr->base).base.position.x;
    local_88._4_4_ = (float)local_88._4_4_ - (float)(this_ptr->base).base.position.y;
    local_80 = local_80 - (float)(this_ptr->base).base.position.z;
    pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&CStack_64,
                        (CVector3f *)local_88);
    if ((CVector3f *)(local_88 + 4) != pCVar4) {
      local_88._4_4_ = pCVar4->x;
      local_80 = pCVar4->y;
      local_7c.x = (int)pCVar4->z;
    }
    local_20.x = (int)(local_80 * local_80);
    local_20.z = (int)((((float)local_7c.x * (float)18) /
                       (this_ptr->base).base.projection_scale) * (float)2);
    local_14 = (float)local_88._4_4_ * (float)local_88._4_4_ + (float)local_20.x;
    local_20.y = (int)((float)local_20.z * (float)local_20.z);
    if (local_14 <= (float)local_20.y) {
      engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                (g_CDemonRendererPtr,in_stack_fffffed0);
      local_54.x = (int)local_c8;
      *(float *)((int)&local_54 + (uint)bVar6 * -8 + 4) = local_c4[(uint)bVar6 * -2];
      *(float *)((int)&local_54 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8) =
           local_c4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
      local_7c.y = (int)((float)local_54.y * 0.00390625f);
      local_7c.z = (int)((float)local_54.z * 0.00390625f);
      local_70 = (float)local_48 * 0.00390625f;
      local_2c = (float)local_7c.z - (float)(this_ptr->base).base.position.x;
      local_28 = local_70 - (float)(this_ptr->base).base.position.y;
      local_6c = local_6c - (float)(this_ptr->base).base.position.z;
      local_24 = SQRT(local_6c * local_6c + local_2c * local_2c + local_28 * local_28);
      pCVar2 = &this_ptr->base;
      if (0.0 < local_24) {
        local_24 = 1.0 / local_24;
        local_2c = local_2c * local_24;
        local_28 = local_28 * local_24;
        local_24 = local_6c * local_24;
        local_e0.x = 0.0;
        local_e0.y = 0.0;
        local_e0.z = 1.0;
        pCVar4 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,
                            (CVector3f *)(auStack_fc + 4),&local_e0);
        if (0.0 < ((float)local_20.x * pCVar4->z + local_28 * pCVar4->x + local_24 * pCVar4->y) *
                  unaff_EBX * 1.525902e-05f) {
          iVar5 = 0;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
          do {
            local_9c.z = (int)((float)iVar5 * 0.04f * (this_ptr->base).max_distance);
            local_a8 = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
            local_9c.x = (int)(local_a8 * (float)local_9c.z);
            local_a4 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
            local_9c.y = (int)(local_a4 * (float)local_9c.z);
            local_a0 = (float)(this_ptr->base).base.rotation_matrix.m[2].z;
            local_9c.z = (int)(local_a0 * (float)local_9c.z);
            fStack_90 = (float)(pCVar2->base).position.x + (float)local_9c.x;
            local_8c = (float)(pCVar3->base).base.position.y + (float)local_9c.y;
            local_88._0_4_ = (float)(pCVar3->base).base.position.z + (float)local_9c.z;
            if ((float *)(auStack_d0 + 4) != &fStack_90) {
              auStack_d0._4_4_ = fStack_90;
              local_c8 = local_8c;
              local_c4[0] = (float)local_88._0_4_;
            }
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                      (g_CDemonRendererPtr,(CVector3f *)(auStack_d0 + 4));
            engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                      (g_CDemonRendererPtr,&local_80);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                      (g_CDemonRendererPtr,&local_7c,(CVector3i *)0x0);
            local_2c = in_stack_00000008;
            local_28 = 0.0;
            local_54.x = (int)ROUND(in_stack_00000008 * 256f);
            local_54.y = (int)ROUND(in_stack_00000008 * 256f);
            local_54.z = (int)ROUND(256f * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,&local_54);
            local_2c = -local_2c;
            local_20.x = (int)ROUND(local_2c * 256f);
            local_20.y = (int)ROUND(local_28 * 256f);
            local_20.z = (int)ROUND(local_24 * 256f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_20);
            local_24 = -local_24;
            auStack_d0._0_4_ = (uint)ROUND(local_28 * 256f);
            auStack_d0._4_4_ = (uint)ROUND(local_24 * 256f);
            local_c8 = (float)(int)ROUND((float)local_20.x * 256f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,
                       (CVector3i *)auStack_d0);
            local_24 = -local_24;
            local_9c.x = (int)ROUND(local_24 * 256f);
            local_9c.y = (int)ROUND((float)local_20.x * 256f);
            local_9c.z = (int)ROUND((float)local_20.y * 256f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,&local_9c);
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr,g_LightTextures + 1);
            local_f4 = 4;
            local_e4 = 0;
            local_e8 = 0;
            local_ec = 0;
            local_f0 = 0;
            local_e0.x = 0.0;
            pSVar1 = g_CDemonRendererPtr->vertex_buffer_ptr;
            dVar7 = crt_math_c_round_FUN_005fe6b0
                              ((double)(((((this_ptr->base).max_distance - in_stack_fffffefc) *
                                         (float)8192) / (this_ptr->base).max_distance) *
                                       (float)auStack_fc._0_4_));
            this_ptr = (CDemonLight *)(int)ROUND(dVar7);
            pSVar1->w_recip = (float)this_ptr;
            this_ptr_00->vertex_buffer_ptr->light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr->color = 0xffff;
            this_ptr_00->vertex_buffer_ptr->fog = 9.18341e-41;
            local_e0.x = 1.4013e-45;
            this_ptr_00->vertex_buffer_ptr[1].w_recip = (float)this_ptr;
            this_ptr_00->vertex_buffer_ptr[1].light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
            this_ptr_00->vertex_buffer_ptr[1].fog = 9.18341e-41;
            local_e0.y = 2.8026e-45;
            this_ptr_00->vertex_buffer_ptr[2].w_recip = (float)this_ptr;
            this_ptr_00->vertex_buffer_ptr[2].light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
            this_ptr_00->vertex_buffer_ptr[2].fog = 9.18341e-41;
            local_e0.z = 4.2039e-45;
            this_ptr_00->vertex_buffer_ptr[3].w_recip = (float)this_ptr;
            this_ptr_00->vertex_buffer_ptr[3].light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr[3].color = 0xffff;
            this_ptr_00->vertex_buffer_ptr[3].fog = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr->u = 2.2775203e-38;
            this_ptr_00->vertex_buffer_ptr->v = 2.2775203e-38;
            this_ptr_00->vertex_buffer_ptr[1].u = 7.34684e-40;
            this_ptr_00->vertex_buffer_ptr[1].v = 2.2775203e-38;
            this_ptr_00->vertex_buffer_ptr[2].u = 7.34684e-40;
            this_ptr_00->vertex_buffer_ptr[2].v = 7.34684e-40;
            this_ptr_00->vertex_buffer_ptr[3].u = 2.2775203e-38;
            this_ptr_00->vertex_buffer_ptr[3].v = 7.34684e-40;
            engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
                      (this_ptr_00,(SMRGLHeaderPrimitive *)auStack_fc);
            iVar5 = iVar5 + 1;
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          } while (iVar5 < 0x19);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
          return;
        }
      }
    }
  }
  return;
}
