// Name: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_00464190
// Address: 00464190
// Address Range: [[00464190, 0046498a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00464190(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_00464190(CDemonLight *this_ptr)

{
  float fVar1;
  SRenderVertex *pSVar2;
  float fVar3;
  UVector3 *pUVar4;
  byte bVar5;
  double dVar6;
  float afStackY_114c [21];
  int aiStackY_10f8 [3];
  float afStackY_10ec [39];
  int aiStackY_1050 [6];
  float afStackY_1038 [933];
  CDemonRenderer *pCVar7;
  CVector3f *euler_angles;
  CVector3f *translation;
  float local_198;
  float local_194;
  SMRGLHeaderPrimitive local_190;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  float local_164;
  float local_160 [2];
  CVector3f local_158;
  CVector3f local_14c;
  float local_140;
  float local_13c [2];
  CVector3f local_134;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  int local_110;
  int local_10c [2];
  CVector3f local_104;
  float local_f8;
  float local_f4 [2];
  CVector3f local_ec;
  CVector3i local_e0;
  CVector3i local_d4;
  CVector3f local_c8;
  float local_bc;
  float local_b8 [2];
  CVector3i local_b0;
  CVector3f local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  CVector3f local_80;
  CVector3f local_74;
  CVector3i local_68;
  CVector3i local_5c;
  float local_50;
  float local_4c [2];
  CVector3f local_44;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  UVector3 *local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  if ((this_ptr->volumetric_enabled != 0) && (g_CGamePtr->halo_mode == 2)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0
              (g_CDemonRenderer_PTR_00612560,&local_44);
    local_ec.x = local_44.x;
    *(uint *)((int)&local_ec + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_44 + (uint)bVar5 * -8 + 4);
    *(uint *)((int)&local_ec + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
         *(uint *)((int)&local_44 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    local_ec.x = local_ec.x - (this_ptr->base).base.position.f.x;
    local_ec.y = local_ec.y - (this_ptr->base).base.position.f.y;
    local_ec.z = local_ec.z - (this_ptr->base).base.position.f.z;
    core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
              (&(this_ptr->base).base.rotation_matrix,&local_ec,&local_c8);
    local_134.x = local_c8.x;
    local_13c[(uint)bVar5 * -2 + 3] = *(float *)((int)&local_c8 + (uint)bVar5 * -8 + 4);
    local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         *(float *)((int)&local_c8 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    if (&local_ec != (CVector3f *)(local_13c + 2)) {
      local_ec.x = local_134.x;
      local_ec.y = local_134.y;
      local_ec.z = local_134.z;
    }
    local_30 = local_ec.y * local_ec.y;
    local_28 = ((local_ec.z * (float)18) / (this_ptr->base).base.focal_length) *
               (float)2;
    local_24 = local_ec.x * local_ec.x + local_30;
    local_2c = local_28 * local_28;
    if (local_24 <= local_2c) {
      local_194 = 1.0 - local_24 / local_2c;
      engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_00483ac0
                (g_CDemonRenderer_PTR_00612560,&local_68);
      local_110 = local_68.x;
      local_10c[(uint)bVar5 * -2] = *(int *)((int)&local_68 + (uint)bVar5 * -8 + 4);
      local_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(int *)((int)&local_68 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      local_98 = (float)local_110 * 0.00390625f;
      local_94 = (float)local_10c[0] * 0.00390625f;
      local_90 = (float)local_10c[1] * 0.00390625f;
      local_bc = (float)local_110 * 0.00390625f - (this_ptr->base).base.position.f.x;
      local_b8[0] = (float)local_10c[0] * 0.00390625f - (this_ptr->base).base.position.f.y;
      local_b8[1] = (float)local_10c[1] * 0.00390625f - (this_ptr->base).base.position.f.z;
      local_f8 = local_bc;
      local_f4[(uint)bVar5 * -2] = local_b8[(uint)bVar5 * -2];
      local_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           local_b8[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      local_198 = SQRT(local_f4[1] * local_f4[1] + local_f8 * local_f8 + local_f4[0] * local_f4[0]);
      if (0.0 < local_198) {
        fVar1 = 1.0 / local_198;
        local_f8 = local_f8 * fVar1;
        local_f4[0] = local_f4[0] * fVar1;
        local_f4[1] = local_f4[1] * fVar1;
        local_74.z = 1.0;
        local_74.x = 0.0;
        local_74.y = 0.0;
        local_14 = (float)(0xffff - g_PerspectiveReciprocal);
        core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690
                  (&(this_ptr->base).base.rotation_matrix,&local_74,&local_80);
        local_50 = local_80.x;
        local_4c[(uint)bVar5 * -2] = *(float *)((int)&local_80 + (uint)bVar5 * -8 + 4);
        local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             *(float *)((int)&local_80 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
        if (0.0 < (local_f4[1] * local_4c[1] + local_f8 * local_50 + local_f4[0] * local_4c[0]) *
                  local_14 * 1.525902e-05f) {
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
                    (g_CDemonRenderer_PTR_00612560,1);
          local_18 = 0;
          local_1c = &(this_ptr->base).base.position;
          do {
            pUVar4 = local_1c;
            local_14 = (float)local_18;
            fVar3 = (float)local_18 * 0.04f * (this_ptr->base).max_distance;
            fVar1 = (this_ptr->base).base.focal_length;
            local_190.base.type = (int)fVar3;
            local_11c = (this_ptr->base).base.rotation_matrix.m[0].z;
            local_140 = local_11c * fVar3;
            local_118 = (this_ptr->base).base.rotation_matrix.m[1].z;
            local_114 = (this_ptr->base).base.rotation_matrix.m[2].z;
            local_13c[0] = local_118 * fVar3;
            local_13c[1] = local_114 * fVar3;
            local_164 = local_140;
            local_160[(uint)bVar5 * -2] = local_13c[(uint)bVar5 * -2];
            local_160[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            local_128 = (pUVar4->f).x + local_164;
            local_124 = (pUVar4->f).y + local_160[0];
            local_120 = (pUVar4->f).z + local_160[1];
            local_104.x = local_128;
            *(float *)((int)&local_104 + (uint)bVar5 * -8 + 4) = local_13c[(uint)bVar5 * -2 + 6];
            *(float *)((int)&local_104 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
            if (&local_158 != &local_104) {
              local_158.x = local_104.x;
              local_158.y = local_104.y;
              local_158.z = local_104.z;
            }
            local_20 = (fVar3 * (float)18) / fVar1;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                      (g_CDemonRenderer_PTR_00612560,&local_158);
            engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00483b70
                      (g_CDemonRenderer_PTR_00612560,&local_a4);
            translation = (CVector3f *)0x0;
            euler_angles = &local_14c;
            local_14c.x = local_a4.x;
            *(uint *)((int)&local_14c + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&local_a4 + (uint)bVar5 * -8 + 4);
            pCVar7 = g_CDemonRenderer_PTR_00612560;
            *(uint *)((int)&local_14c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)((int)&local_a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                      (pCVar7,euler_angles,translation);
            local_84 = 0.0;
            local_8c = local_20;
            local_88 = local_20;
            local_e0.x = (int)ROUND(local_20 * 256.0f);
            local_e0.y = (int)ROUND(local_20 * 256.0f);
            local_e0.z = (int)ROUND(256.0f * 0.0);
            engine_special_cpp_transformAndProjectPoint_FUN_00580173
                      (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex,&local_e0
                      );
            local_8c = -local_8c;
            local_d4.x = (int)ROUND(local_8c * 256.0f);
            local_d4.y = (int)ROUND(local_88 * 256.0f);
            local_d4.z = (int)ROUND(local_84 * 256.0f);
            engine_special_cpp_transformAndProjectPoint_FUN_00580173
                      (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[1].projected_vertex,
                       &local_d4);
            local_88 = -local_88;
            local_b0.x = (int)ROUND(local_8c * 256.0f);
            local_b0.y = (int)ROUND(local_88 * 256.0f);
            local_b0.z = (int)ROUND(local_84 * 256.0f);
            engine_special_cpp_transformAndProjectPoint_FUN_00580173
                      (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[2].projected_vertex,
                       &local_b0);
            local_8c = -local_8c;
            local_5c.x = (int)ROUND(local_8c * 256.0f);
            local_5c.y = (int)ROUND(local_88 * 256.0f);
            local_5c.z = (int)ROUND(local_84 * 256.0f);
            engine_special_cpp_transformAndProjectPoint_FUN_00580173
                      (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[3].projected_vertex,
                       &local_5c);
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                      (g_CDemonRenderer_PTR_00612560,&g_LightGlow.headlight);
            pCVar7 = g_CDemonRenderer_PTR_00612560;
            local_190.surface_normal.A.i = 4;
            local_178 = 0;
            local_190.surface_normal.D.i = 0;
            local_190.surface_normal.C.i = 0;
            local_190.surface_normal.B.i = 0;
            local_174 = 0;
            pSVar2 = g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr;
            dVar6 = round
                              ((double)(((((this_ptr->base).max_distance -
                                          (float)local_190.base.type) * (float)8192) /
                                        (this_ptr->base).max_distance) * local_194));
            local_44.z = (float)(int)ROUND(dVar6);
            pSVar2->a = (int)local_44.z;
            pCVar7->vertex_buffer_ptr->r = 0xffff;
            pCVar7->vertex_buffer_ptr->g = 0xffff;
            pCVar7->vertex_buffer_ptr->b = 0xffff;
            local_174 = 1;
            pCVar7->vertex_buffer_ptr[1].a = (int)local_44.z;
            pCVar7->vertex_buffer_ptr[1].r = 0xffff;
            pCVar7->vertex_buffer_ptr[1].g = 0xffff;
            pCVar7->vertex_buffer_ptr[1].b = 0xffff;
            local_170 = 2;
            pCVar7->vertex_buffer_ptr[2].a = (int)local_44.z;
            pCVar7->vertex_buffer_ptr[2].r = 0xffff;
            pCVar7->vertex_buffer_ptr[2].g = 0xffff;
            pCVar7->vertex_buffer_ptr[2].b = 0xffff;
            local_16c = 3;
            pCVar7->vertex_buffer_ptr[3].a = (int)local_44.z;
            pCVar7->vertex_buffer_ptr[3].r = 0xffff;
            pCVar7->vertex_buffer_ptr[3].g = 0xffff;
            pCVar7->vertex_buffer_ptr[3].b = 0xffff;
            pCVar7->vertex_buffer_ptr->u = 0xf80000;
            pCVar7->vertex_buffer_ptr->v = 0xf80000;
            pCVar7->vertex_buffer_ptr[1].u = 0x80000;
            pCVar7->vertex_buffer_ptr[1].v = 0xf80000;
            pCVar7->vertex_buffer_ptr[2].u = 0x80000;
            pCVar7->vertex_buffer_ptr[2].v = 0x80000;
            pCVar7->vertex_buffer_ptr[3].u = 0xf80000;
            pCVar7->vertex_buffer_ptr[3].v = 0x80000;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
                      (pCVar7,&local_190);
            engine_drender_cpp_pop_FUN_004839a0();
            local_1c = (UVector3 *)((int)&(local_1c->f).x + 1);
          } while ((int)local_1c < 0x19);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0
                    (g_CDemonRenderer_PTR_00612560,0);
          return;
        }
      }
    }
  }
  return;
}
