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
  float fVar2;
  CVector3f *pCVar3;
  CDemonRenderer *this_ptr_00;
  int iVar4;
  byte bVar5;
  double dVar6;
  int aiStackY_10bc [990];
  SMRGLHeaderPrimitive local_130;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  CVector3f local_104;
  CVector3i local_f8;
  CVector3f local_ec;
  CVector3f local_e0;
  CVector3i local_d4;
  CVector3i local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f local_a4;
  CVector3i local_98;
  CVector3f local_8c;
  float local_80;
  float local_7c;
  float local_78;
  CVector3i local_74;
  CVector3f local_68;
  int local_5c;
  int local_58 [2];
  float local_50;
  float local_4c;
  float local_48;
  CVector3i local_44;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar5 = 0;
  if ((this_ptr->field17_0x1cbc != 0) && (g_CGamePtr->halo_mode == 2)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
              (g_CDemonRendererPtr2,&local_8c.x);
    local_8c.x = local_8c.x - (float)(this_ptr->base).base.position.x;
    local_8c.y = local_8c.y - (float)(this_ptr->base).base.position.y;
    local_8c.z = local_8c.z - (float)(this_ptr->base).base.position.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                       ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_68,&local_8c);
    if (&local_8c != pCVar3) {
      local_8c.x = pCVar3->x;
      local_8c.y = pCVar3->y;
      local_8c.z = pCVar3->z;
    }
    local_28 = local_8c.y * local_8c.y;
    local_20 = ((local_8c.z * (float)18) / (this_ptr->base).base.projection_scale) *
               (float)2;
    local_1c = local_8c.x * local_8c.x + local_28;
    local_24 = local_20 * local_20;
    if (local_1c <= local_24) {
      local_130.base.type = (int)(1.0 - local_1c / local_24);
      engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
                (g_CDemonRendererPtr2,&local_d4);
      local_5c = local_d4.x;
      local_58[(uint)bVar5 * -2] = *(int *)((int)&local_d4 + (uint)bVar5 * -8 + 4);
      local_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(int *)((int)&local_d4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      local_80 = (float)local_5c * 0.00390625f;
      local_7c = (float)local_58[0] * 0.00390625f;
      local_78 = (float)local_58[1] * 0.00390625f;
      local_38 = local_80 - (float)(this_ptr->base).base.position.x;
      local_34 = local_7c - (float)(this_ptr->base).base.position.y;
      local_30 = local_78 - (float)(this_ptr->base).base.position.z;
      fVar2 = SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34);
      if (0.0 < fVar2) {
        fVar2 = 1.0 / fVar2;
        local_38 = local_38 * fVar2;
        local_34 = local_34 * fVar2;
        local_30 = local_30 * fVar2;
        local_ec.x = 0.0;
        local_ec.y = 0.0;
        local_ec.z = 1.0;
        local_14 = (float)(0xffff - (int)g_PerspectiveReciprocal);
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                           ((CMatrix3x3f *)&(this_ptr->base).base.rotation_matrix,&local_104,
                            &local_ec);
        if (0.0 < (local_30 * pCVar3->z + local_38 * pCVar3->x + local_34 * pCVar3->y) * local_14 *
                  1.525902e-05f) {
          iVar4 = 0;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
          do {
            fVar2 = (float)iVar4 * 0.04f * (this_ptr->base).max_distance;
            local_18 = (fVar2 * (float)18) / (this_ptr->base).base.projection_scale;
            local_bc = (float)(this_ptr->base).base.rotation_matrix.m[0].z;
            local_b0 = local_bc * fVar2;
            local_b8 = (float)(this_ptr->base).base.rotation_matrix.m[1].z;
            local_ac = local_b8 * fVar2;
            local_b4 = (float)(this_ptr->base).base.rotation_matrix.m[2].z;
            local_a8 = local_b4 * fVar2;
            local_a4.x = (float)(this_ptr->base).base.position.x + local_b0;
            local_a4.y = (float)(this_ptr->base).base.position.y + local_ac;
            local_a4.z = (float)(this_ptr->base).base.position.z + local_a8;
            if (&local_e0 != &local_a4) {
              local_e0.x = local_a4.x;
              local_e0.y = local_a4.y;
              local_e0.z = local_a4.z;
            }
            local_14 = (float)iVar4;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                      (g_CDemonRendererPtr2,&local_e0);
            engine_drender_cpp_CDemonRenderer_getCameraRotationAsRadians_FUN_0048c800
                      (g_CDemonRendererPtr2,(float *)&local_98);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                      (g_CDemonRendererPtr2,&local_98,(CVector3i *)0x0);
            local_50 = local_18;
            local_4c = local_18;
            local_48 = 0.0;
            local_74.x = (int)ROUND(local_18 * 256.0f);
            local_74.y = (int)ROUND(local_18 * 256.0f);
            local_74.z = (int)ROUND(256.0f * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_74);
            local_50 = -local_50;
            local_44.x = (int)ROUND(local_50 * 256.0f);
            local_44.y = (int)ROUND(local_4c * 256.0f);
            local_44.z = (int)ROUND(local_48 * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_44);
            local_4c = -local_4c;
            local_f8.x = (int)ROUND(local_50 * 256.0f);
            local_f8.y = (int)ROUND(local_4c * 256.0f);
            local_f8.z = (int)ROUND(local_48 * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_f8);
            local_50 = -local_50;
            local_c8.x = (int)ROUND(local_50 * 256.0f);
            local_c8.y = (int)ROUND(local_4c * 256.0f);
            local_c8.z = (int)ROUND(local_48 * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_c8);
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
                      (g_CDemonRendererPtr2,g_LightTextures + 1);
            local_130.surface_normal.A = 4;
            local_118 = 0;
            local_130.surface_normal.D = 0;
            local_130.surface_normal.C = 0;
            local_130.surface_normal.B = 0;
            local_114 = 0;
            pSVar1 = g_CDemonRendererPtr2->vertex_buffer_ptr;
            dVar6 = crt_math_c_round_FUN_005fe6b0
                              ((double)(((((this_ptr->base).max_distance - fVar2) *
                                         (float)8192) / (this_ptr->base).max_distance) *
                                       (float)local_130.base.type));
            local_30 = (float)(int)ROUND(dVar6);
            pSVar1->w_recip = local_30;
            this_ptr_00->vertex_buffer_ptr->light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr->color = 0xffff;
            this_ptr_00->vertex_buffer_ptr->fog = 9.18341e-41;
            local_114 = 1;
            this_ptr_00->vertex_buffer_ptr[1].w_recip = local_30;
            this_ptr_00->vertex_buffer_ptr[1].light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr[1].color = 0xffff;
            this_ptr_00->vertex_buffer_ptr[1].fog = 9.18341e-41;
            local_110 = 2;
            this_ptr_00->vertex_buffer_ptr[2].w_recip = local_30;
            this_ptr_00->vertex_buffer_ptr[2].light = 9.18341e-41;
            this_ptr_00->vertex_buffer_ptr[2].color = 0xffff;
            this_ptr_00->vertex_buffer_ptr[2].fog = 9.18341e-41;
            local_10c = 3;
            this_ptr_00->vertex_buffer_ptr[3].w_recip = local_30;
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
                      (this_ptr_00,&local_130);
            iVar4 = iVar4 + 1;
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
          } while (iVar4 < 0x19);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
          return;
        }
      }
    }
  }
  return;
}
