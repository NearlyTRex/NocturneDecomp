// Name: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520
// Address: 00450520
// Address Range: [[00450520, 00450c84]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00450520(CDemonLight *this_ptr)

{
  SRenderVertex *pSVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  CVector3f *pCVar3;
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
  int local_d4;
  int aiStack_d0 [2];
  CVector3i local_c8;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  CVector3f local_a4;
  CVector3f local_98;
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
  if ((this_ptr->volumetric_enabled != 0) && (g_CGame_PTR_005b9354->halo_mode == 2)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
              (g_CDemonRenderer_PTR_005ae704,&local_8c);
    local_8c.x = local_8c.x - (this_ptr->base).position.x;
    local_8c.y = local_8c.y - (this_ptr->base).position.y;
    local_8c.z = local_8c.z - (this_ptr->base).position.z;
    pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0044daa0
                       (&(this_ptr->base).rotation_matrix,&local_68,&local_8c);
    if (&local_8c != pCVar3) {
      local_8c.x = pCVar3->x;
      local_8c.y = pCVar3->y;
      local_8c.z = pCVar3->z;
    }
    local_28 = local_8c.y * local_8c.y;
    local_20 = ((local_8c.z * (float)18) / (this_ptr->base).focal_length) *
               (float)2;
    local_1c = local_8c.x * local_8c.x + local_28;
    local_24 = local_20 * local_20;
    if (local_1c <= local_24) {
      local_130.base.type = (int)(1.0 - local_1c / local_24);
      engine_drender_cpp_FUN_00460d10(g_CDemonRenderer_PTR_005ae704);
      local_5c = local_d4;
      local_58[(uint)bVar5 * -2] = aiStack_d0[(uint)bVar5 * -2];
      local_58[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           aiStack_d0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      local_80 = (float)local_5c * _DAT_0059c038;
      local_7c = (float)local_58[0] * _DAT_0059c038;
      local_78 = (float)local_58[1] * _DAT_0059c038;
      local_38 = local_80 - (this_ptr->base).position.x;
      local_34 = local_7c - (this_ptr->base).position.y;
      local_30 = local_78 - (this_ptr->base).position.z;
      fVar2 = SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34);
      if (0.0 < fVar2) {
        fVar2 = 1.0 / fVar2;
        local_38 = local_38 * fVar2;
        local_34 = local_34 * fVar2;
        local_30 = local_30 * fVar2;
        local_ec.x = 0.0;
        local_ec.y = 0.0;
        local_ec.z = 1.0;
        local_14 = (float)(0xffff - _DAT_01c038f4);
        pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                           (&(this_ptr->base).rotation_matrix,&local_104,&local_ec);
        if (0.0 < (local_30 * pCVar3->z + local_38 * pCVar3->x + local_34 * pCVar3->y) * local_14 *
                  1.525902e-05f) {
          iVar4 = 0;
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000
                    (g_CDemonRenderer_PTR_005ae704,1);
          do {
            fVar2 = (float)iVar4 * 0.04f * (this_ptr->base).fixed_point_scale;
            local_18 = (fVar2 * (float)18) / (this_ptr->base).focal_length;
            local_bc = (this_ptr->base).rotation_matrix.m[0].z;
            local_b0 = local_bc * fVar2;
            local_b8 = (this_ptr->base).rotation_matrix.m[1].z;
            local_ac = local_b8 * fVar2;
            local_b4 = (this_ptr->base).rotation_matrix.m[2].z;
            local_a8 = local_b4 * fVar2;
            local_a4.x = (this_ptr->base).position.x + local_b0;
            local_a4.y = (this_ptr->base).position.y + local_ac;
            local_a4.z = (this_ptr->base).position.z + local_a8;
            if (&local_e0 != &local_a4) {
              local_e0.x = local_a4.x;
              local_e0.y = local_a4.y;
              local_e0.z = local_a4.z;
            }
            local_14 = (float)iVar4;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                      (g_CDemonRenderer_PTR_005ae704,&local_e0);
            engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0
                      (g_CDemonRenderer_PTR_005ae704,&local_98);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
                      (g_CDemonRenderer_PTR_005ae704,&local_98,(CVector3f *)0x0);
            local_50 = local_18;
            local_4c = local_18;
            local_48 = 0.0;
            local_74.x = (int)ROUND(local_18 * _DAT_0059c030);
            local_74.y = (int)ROUND(local_18 * _DAT_0059c030);
            local_74.z = (int)ROUND(_DAT_0059c030 * 0.0);
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_74
                      );
            local_50 = -local_50;
            local_44.x = (int)ROUND(local_50 * _DAT_0059c030);
            local_44.y = (int)ROUND(local_4c * _DAT_0059c030);
            local_44.z = (int)ROUND(local_48 * _DAT_0059c030);
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,
                       &local_44);
            local_4c = -local_4c;
            local_f8.x = (int)ROUND(local_50 * _DAT_0059c030);
            local_f8.y = (int)ROUND(local_4c * _DAT_0059c030);
            local_f8.z = (int)ROUND(local_48 * _DAT_0059c030);
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,
                       &local_f8);
            local_50 = -local_50;
            local_c8.x = (int)ROUND(local_50 * _DAT_0059c030);
            local_c8.y = (int)ROUND(local_4c * _DAT_0059c030);
            local_c8.z = (int)ROUND(local_48 * _DAT_0059c030);
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
                       &local_c8);
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
                      (g_CDemonRenderer_PTR_005ae704,(SMRGLTextureBasic *)&DAT_005ae470);
            this_ptr_00 = g_CDemonRenderer_PTR_005ae704;
            local_130.surface_normal.A.i = 4;
            local_118 = 0;
            local_130.surface_normal.D.i = 0;
            local_130.surface_normal.C.i = 0;
            local_130.surface_normal.B.i = 0;
            local_114 = 0;
            pSVar1 = g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr;
            dVar6 = round
                              ((double)(((((this_ptr->base).fixed_point_scale - fVar2) *
                                         (float)_DAT_0057c87e) / (this_ptr->base).fixed_point_scale)
                                       * (float)local_130.base.type));
            local_30 = (float)(int)ROUND(dVar6);
            pSVar1->a = (int)local_30;
            this_ptr_00->vertex_buffer_ptr->r = 0xffff;
            this_ptr_00->vertex_buffer_ptr->g = 0xffff;
            this_ptr_00->vertex_buffer_ptr->b = 0xffff;
            local_114 = 1;
            this_ptr_00->vertex_buffer_ptr[1].a = (int)local_30;
            this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
            this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
            this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
            local_110 = 2;
            this_ptr_00->vertex_buffer_ptr[2].a = (int)local_30;
            this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
            this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
            this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
            local_10c = 3;
            this_ptr_00->vertex_buffer_ptr[3].a = (int)local_30;
            this_ptr_00->vertex_buffer_ptr[3].r = 0xffff;
            this_ptr_00->vertex_buffer_ptr[3].g = 0xffff;
            this_ptr_00->vertex_buffer_ptr[3].b = 0xffff;
            this_ptr_00->vertex_buffer_ptr->u = 0xf80000;
            this_ptr_00->vertex_buffer_ptr->v = 0xf80000;
            this_ptr_00->vertex_buffer_ptr[1].u = 0x80000;
            this_ptr_00->vertex_buffer_ptr[1].v = 0xf80000;
            this_ptr_00->vertex_buffer_ptr[2].u = 0x80000;
            this_ptr_00->vertex_buffer_ptr[2].v = 0x80000;
            this_ptr_00->vertex_buffer_ptr[3].u = 0xf80000;
            this_ptr_00->vertex_buffer_ptr[3].v = 0x80000;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
                      (this_ptr_00,&local_130);
            iVar4 = iVar4 + 1;
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0();
          } while (iVar4 < 0x19);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000
                    (g_CDemonRenderer_PTR_005ae704,0);
          return;
        }
      }
    }
  }
  return;
}
