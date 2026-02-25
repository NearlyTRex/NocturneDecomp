// Name: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0
// Address: 004758d0
// Address Range: [[004758d0, 00475fb7]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_004758d0(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  CVector3f *pCVar3;
  CMatrix3x3f *this_ptr_01;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  unkbyte10 Var10;
  float10 fVar11;
  int aiStackY_10d8 [987];
  SMRGLHeaderPrimitive local_160;
  uint local_148;
  uint local_144;
  uint local_140;
  uint local_13c;
  CVector3f local_138;
  CVector3i local_12c;
  CVector3f local_120;
  float local_114;
  float local_110;
  float local_10c;
  CVector3f local_108;
  float local_fc;
  float local_f8;
  float local_f4;
  CVector3i local_f0;
  float local_e4;
  float local_e0;
  float local_dc;
  CVector3i local_d8;
  CVector3f local_cc;
  CVector3i local_c0;
  CVector3f local_b4;
  CVector3i local_a8;
  int local_9c;
  int local_98 [8];
  int local_78;
  int local_70;
  float local_6c;
  int local_68;
  int local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  int local_50;
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
  int local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  if (((this_ptr->volumetric_enabled != 0) &&
      ((float)0.10000000000000001 <= (g_CDemonSetPtr->active_fog).density_multiplier)) &&
     (g_CGamePtr->halo_mode != 0)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginToBuffer_FUN_0048c760
              (g_CDemonRendererPtr2,&local_f0);
    local_9c = local_f0.x;
    local_98[(uint)bVar5 * -2] = *(int *)((int)&local_f0 + (uint)bVar5 * -8 + 4);
    local_98[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
         *(int *)((int)&local_f0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    local_114 = (float)local_9c * 0.00390625f;
    local_110 = (float)local_98[0] * 0.00390625f;
    local_10c = (float)local_98[1] * 0.00390625f;
    local_e4 = local_114 - (float)(this_ptr->base).base.position.x;
    local_e0 = local_110 - (float)(this_ptr->base).base.position.y;
    local_dc = local_10c - (float)(this_ptr->base).base.position.z;
    local_54 = SQRT(local_dc * local_dc + local_e4 * local_e4 + local_e0 * local_e0);
    if (0.0 < local_54) {
      fVar1 = 1.0 / local_54;
      local_e4 = local_e4 * fVar1;
      local_e0 = local_e0 * fVar1;
      local_120.x = 0.0;
      local_120.y = 0.0;
      local_120.z = 1.0;
      this_ptr_01 = &(this_ptr->base).base.rotation_matrix;
      local_dc = local_dc * fVar1;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(this_ptr_01,&local_108,&local_120);
      engine_drender_cpp_CDemonRenderer_getCameraOriginScaled_FUN_0048c780
                (g_CDemonRendererPtr2,&local_138.x);
      local_138.x = local_138.x - (float)(this_ptr->base).base.position.x;
      local_138.y = local_138.y - (float)(this_ptr->base).base.position.y;
      local_138.z = local_138.z - (float)(this_ptr->base).base.position.z;
      pCVar3 = core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
                         (this_ptr_01,&local_cc,&local_138);
      if (&local_138 != pCVar3) {
        local_138.x = pCVar3->x;
        local_138.y = pCVar3->y;
        local_138.z = pCVar3->z;
      }
      fVar1 = ((local_138.z * (float)18) / (this_ptr->base).base.focal_length) *
              (float)2;
      fVar2 = local_138.x * local_138.x + local_138.y * local_138.y;
      fVar1 = fVar1 * fVar1;
      local_58 = 1.0 - fVar2 / fVar1;
      if ((fVar1 <= fVar2) || (local_58 <= (float)0.5)) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,(CVector3f *)&(this_ptr->base).base.position);
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
                  (&(this_ptr->base).base.rotation_matrix,&local_b4);
        local_50 = 1;
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                  (g_CDemonRendererPtr2,(CVector3i *)&local_b4,(CVector3i *)0x0);
        do {
          fVar6 = (float10)local_50 *
                  ((float10)18 / (float10)(this_ptr->base).base.focal_length) *
                  (float10)0.0625;
          local_4c = (float)fVar6;
          Var10 = fpatan(fVar6,(float10)1);
          fVar7 = (float10)fcos(Var10);
          local_48 = 0;
          local_44 = (float)((float10)1 - fVar6);
          local_40 = (float)fVar7;
          do {
            fVar6 = (float10)local_48 * (float10)0.0625f * (float10)3.1415926535000001 *
                    (float10)2;
            fVar7 = (float10)fsin(fVar6);
            fVar11 = (float10)(local_48 + 1) * (float10)0.0625f * (float10)3.1415926535000001 *
                     (float10)2;
            fVar8 = (float10)fsin(fVar11);
            fVar6 = (float10)fcos(fVar6);
            fVar11 = (float10)fcos(fVar11);
            local_18 = this_ptr->shadow_map_width - (this_ptr->shadow_map_width >> 0x1f) >> 1;
            fVar9 = (float10)local_4c;
            local_30 = (float)(fVar6 * fVar9);
            fVar1 = (float)(this_ptr->shadow_map_height - (this_ptr->shadow_map_height >> 0x1f) >> 1
                           );
            local_78 = (int)ROUND(ROUND(fVar1 - fVar1 * local_30));
            local_34 = (float)(fVar7 * fVar9);
            local_70 = (int)ROUND(ROUND((float)local_18 * local_34 + (float)local_18));
            local_2c = (float)this_ptr->shadow_depth_buffer
                              [local_78 * this_ptr->shadow_map_width + local_70] *
                       (float)0.00390625;
            local_24 = 0;
            local_3c = (float)(fVar8 * fVar9);
            local_38 = (float)(fVar9 * fVar11);
            local_28 = local_2c;
            do {
              local_6c = (this_ptr->base).max_distance;
              local_20 = (float)local_24 * local_40 * local_6c * 0.25f;
              local_14 = local_24 + 1;
              local_1c = (float)local_14 * local_40 * local_6c * 0.25f;
              local_60 = this_ptr->volumetric_intensity *
                         (local_6c - local_20) * (1.0 / local_6c) * (float)512 *
                         local_44;
              local_5c = local_44 *
                         (local_6c - local_1c) * (1.0 / local_6c) * (float)512 *
                         this_ptr->volumetric_intensity;
              local_68 = (int)ROUND(local_60);
              local_64 = (int)ROUND(local_5c);
              local_f4 = local_28;
              if (local_20 < local_28) {
                local_f4 = local_20;
              }
              local_fc = local_f4 * local_34;
              local_f8 = local_f4 * local_30;
              local_12c.x = (int)ROUND(local_fc * 256.0f);
              local_12c.y = (int)ROUND(local_f8 * 256.0f);
              local_12c.z = (int)ROUND(local_f4 * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_12c);
              local_f4 = local_2c;
              if (local_20 < local_2c) {
                local_f4 = local_20;
              }
              local_fc = local_f4 * local_3c;
              local_f8 = local_f4 * local_38;
              local_a8.x = (int)ROUND(local_fc * 256.0f);
              local_a8.y = (int)ROUND(local_f8 * 256.0f);
              local_a8.z = (int)ROUND(local_f4 * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_a8);
              local_f4 = local_2c;
              if (local_1c < local_2c) {
                local_f4 = local_1c;
              }
              local_fc = local_f4 * local_3c;
              local_f8 = local_f4 * local_38;
              local_d8.x = (int)ROUND(local_fc * 256.0f);
              local_d8.y = (int)ROUND(local_f8 * 256.0f);
              local_d8.z = (int)ROUND(local_f4 * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_d8);
              local_f4 = local_28;
              if (local_1c < local_28) {
                local_f4 = local_1c;
              }
              local_fc = local_f4 * local_34;
              local_f8 = local_f4 * local_30;
              local_c0.x = (int)ROUND(local_fc * 256.0f);
              local_c0.y = (int)ROUND(local_f8 * 256.0f);
              local_c0.z = (int)ROUND(local_f4 * 256.0f);
              wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                        (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_c0);
              this_ptr_00 = g_CDemonRendererPtr2;
              g_CDemonRendererPtr2->vertex_buffer_ptr->z = local_68;
              this_ptr_00->vertex_buffer_ptr[1].z = local_68;
              this_ptr_00->vertex_buffer_ptr[2].z = local_64;
              this_ptr_00->vertex_buffer_ptr[3].z = local_64;
              local_160.base.count = 4;
              local_140 = 1;
              local_160.surface_normal.D = 0;
              local_160.surface_normal.C = 0;
              local_160.surface_normal.B = 0;
              local_160.surface_normal.A = 0;
              iVar4 = local_24 + 1;
              local_144 = 2;
              local_13c = 0;
              local_148 = 3;
              local_24 = iVar4;
              engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0048c8d0
                        (this_ptr_00,&local_160,
                         core_dcamera_cpp_renderVolumetricLightScanline_FUN_00450440);
            } while (iVar4 < 4);
            local_48 = local_48 + 1;
          } while (local_48 < 0x10);
          local_50 = local_50 + 1;
        } while (local_50 < 0x10);
        engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
        return;
      }
    }
  }
  return;
}
