// Name: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060
// Address: 00465060
// Address Range: [[00465060, 00465772]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060(CDemonLight *this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_00465060(CDemonLight *this_ptr)

{
  float fVar1;
  float fVar2;
  CDemonRenderer *this_ptr_00;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  unkbyte10 Var9;
  float10 fVar10;
  double dVar11;
  float afStackY_1140 [39];
  int aiStackY_10a4 [3];
  float afStackY_1098 [3];
  int aiStackY_108c [955];
  CVector3f *translation;
  SMRGLHeaderPrimitive local_18c;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  CVector3i local_164;
  CVector3f local_158;
  float local_14c;
  float local_148;
  float local_144;
  CVector3f local_140;
  CVector3i local_134;
  CVector3f local_128;
  CVector3f local_11c;
  CVector3i local_110;
  CVector3f local_104;
  CVector3f local_f8;
  CVector3f local_ec;
  CVector3i local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4 [2];
  CVector3i local_bc;
  float local_b0;
  float local_ac [2];
  int local_a4;
  int local_a0 [2];
  CVector3f local_98 [2];
  int local_78;
  float local_70;
  int local_6c;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  int local_58;
  float local_54;
  int local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  int local_2c;
  float local_28;
  float local_24;
  int local_1c;
  CMatrix3x3f *local_18;
  int local_14;
  
  bVar4 = 0;
  if (((this_ptr->volumetric_enabled != 0) &&
      ((float)0.10000000000000001 <= (g_CDemonSetPtr->active_fog).density_multiplier)) &&
     (g_CGamePtr->halo_mode != 0)) {
    engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_00483ac0
              (g_CDemonRenderer_PTR_00612560,&local_bc);
    local_a4 = local_bc.x;
    local_a0[(uint)bVar4 * -2] = *(int *)((int)&local_bc + (uint)bVar4 * -8 + 4);
    local_a0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         *(int *)((int)&local_bc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    local_14c = (float)local_a4 * 0.00390625f;
    local_148 = (float)local_a0[0] * 0.00390625f;
    local_144 = (float)local_a0[1] * 0.00390625f;
    local_b0 = (float)local_a4 * 0.00390625f - (this_ptr->base).base.position.f.x;
    local_ac[0] = (float)local_a0[0] * 0.00390625f - (this_ptr->base).base.position.f.y;
    local_ac[1] = (float)local_a0[1] * 0.00390625f - (this_ptr->base).base.position.f.z;
    local_c8 = local_b0;
    local_c4[(uint)bVar4 * -2] = local_ac[(uint)bVar4 * -2];
    local_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         local_ac[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    if (0.0 < SQRT(local_c4[1] * local_c4[1] + local_c8 * local_c8 + local_c4[0] * local_c4[0])) {
      local_f8.z = 1.0;
      local_f8.x = 0.0;
      local_18 = &(this_ptr->base).base.rotation_matrix;
      local_f8.y = 0.0;
      core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0045f690(local_18,&local_f8,&local_ec);
      engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00483ae0
                (g_CDemonRenderer_PTR_00612560,&local_140);
      local_11c.x = local_140.x;
      *(uint *)((int)&local_11c + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&local_140 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&local_11c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&local_140 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      local_11c.x = local_11c.x - (this_ptr->base).base.position.f.x;
      local_11c.y = local_11c.y - (this_ptr->base).base.position.f.y;
      local_11c.z = local_11c.z - (this_ptr->base).base.position.f.z;
      core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_0045f700
                (local_18,&local_11c,local_98);
      local_128.x = local_98[0].x;
      *(uint *)((int)&local_128 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)local_98 + (uint)bVar4 * -8 + 4);
      *(uint *)((int)&local_128 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)local_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      if (&local_11c != &local_128) {
        local_11c.x = local_128.x;
        local_11c.y = local_128.y;
        local_11c.z = local_128.z;
      }
      fVar1 = ((local_11c.z * (float)18) / (this_ptr->base).base.focal_length) *
              (float)2;
      fVar2 = local_11c.x * local_11c.x + local_11c.y * local_11c.y;
      fVar1 = fVar1 * fVar1;
      local_5c = 1.0 - fVar2 / fVar1;
      if ((fVar1 <= fVar2) || (local_5c <= (float)0.5)) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                  (g_CDemonRenderer_PTR_00612560,&(this_ptr->base).base.position.f);
        core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_0045f840
                  (&(this_ptr->base).base.rotation_matrix,&local_158);
        translation = (CVector3f *)0x0;
        local_104.x = local_158.x;
        *(uint *)((int)&local_104 + (uint)bVar4 * -8 + 4) =
             *(uint *)((int)&local_158 + (uint)bVar4 * -8 + 4);
        *(uint *)((int)&local_104 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)((int)&local_158 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                  (g_CDemonRenderer_PTR_00612560,&local_104,translation);
        local_58 = 1;
        do {
          fVar5 = (float10)local_58 *
                  ((float10)18 / (float10)(this_ptr->base).base.focal_length) *
                  (float10)0.0625;
          local_54 = (float)fVar5;
          Var9 = fpatan(fVar5,(float10)1);
          fVar6 = (float10)fcos(Var9);
          local_50 = 0;
          local_48 = (float)((float10)1 - fVar5);
          local_4c = (float)fVar6;
          do {
            fVar5 = (float10)local_50 * (float10)0.0625f * (float10)3.141593f *
                    (float10)2;
            fVar6 = (float10)fsin(fVar5);
            fVar10 = (float10)(local_50 + 1) * (float10)0.0625f * (float10)3.141593f
                     * (float10)2;
            fVar7 = (float10)fsin(fVar10);
            fVar5 = (float10)fcos(fVar5);
            fVar10 = (float10)fcos(fVar10);
            local_18 = (CMatrix3x3f *)
                       (this_ptr->shadow_map_width - (this_ptr->shadow_map_width >> 0x1f) >> 1);
            local_14 = this_ptr->shadow_map_height - (this_ptr->shadow_map_height >> 0x1f) >> 1;
            fVar8 = (float10)local_54;
            local_3c = (float)(fVar5 * fVar8);
            iVar3 = this_ptr->shadow_map_width;
            dVar11 = round
                               ((double)((float)local_14 - (float)local_14 * local_3c));
            local_78 = (int)ROUND(dVar11);
            iVar3 = local_78 * iVar3;
            local_38 = (float)(fVar6 * fVar8);
            local_18c.base.type = 0x4653e7;
            dVar11 = round
                               ((double)((float)(int)local_18 * local_38 + (float)(int)local_18));
            local_1c = (int)ROUND(dVar11);
            local_34 = (float)this_ptr->shadow_depth_buffer[iVar3 + local_1c] *
                       (float)0.00390625;
            local_2c = 0;
            local_40 = (float)(fVar7 * fVar8);
            local_44 = (float)(fVar8 * fVar10);
            local_30 = local_34;
            do {
              local_70 = (this_ptr->base).max_distance;
              local_24 = (float)local_2c * local_4c * local_70 * 0.25f;
              local_14 = local_2c + 1;
              local_28 = (float)local_14 * local_4c * local_70 * 0.25f;
              local_64 = this_ptr->volumetric_intensity *
                         (local_70 - local_24) * (1.0 / local_70) * (float)512 *
                         local_48;
              local_60 = local_48 *
                         (local_70 - local_28) * (1.0 / local_70) * (float)512 *
                         this_ptr->volumetric_intensity;
              local_6c = (int)ROUND(local_64);
              local_68 = (int)ROUND(local_60);
              local_cc = local_30;
              if (local_24 < local_30) {
                local_cc = local_24;
              }
              local_d4 = local_cc * local_38;
              local_d0 = local_cc * local_3c;
              local_e0.x = (int)ROUND(local_d4 * 256.0f);
              local_e0.y = (int)ROUND(local_d0 * 256.0f);
              local_e0.z = (int)ROUND(local_cc * 256.0f);
              engine_special_cpp_transformAndProjectPoint_FUN_00580173
                        (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->projected_vertex,
                         &local_e0);
              local_cc = local_34;
              if (local_24 < local_34) {
                local_cc = local_24;
              }
              local_d4 = local_cc * local_40;
              local_d0 = local_cc * local_44;
              local_164.x = (int)ROUND(local_d4 * 256.0f);
              local_164.y = (int)ROUND(local_d0 * 256.0f);
              local_164.z = (int)ROUND(local_cc * 256.0f);
              engine_special_cpp_transformAndProjectPoint_FUN_00580173
                        (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[1].projected_vertex,
                         &local_164);
              local_cc = local_34;
              if (local_28 < local_34) {
                local_cc = local_28;
              }
              local_d4 = local_cc * local_40;
              local_d0 = local_cc * local_44;
              local_134.x = (int)ROUND(local_d4 * 256.0f);
              local_134.y = (int)ROUND(local_d0 * 256.0f);
              local_134.z = (int)ROUND(local_cc * 256.0f);
              engine_special_cpp_transformAndProjectPoint_FUN_00580173
                        (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[2].projected_vertex,
                         &local_134);
              local_cc = local_30;
              if (local_28 < local_30) {
                local_cc = local_28;
              }
              local_d4 = local_cc * local_38;
              local_d0 = local_cc * local_3c;
              local_110.x = (int)ROUND(local_d4 * 256.0f);
              local_110.y = (int)ROUND(local_d0 * 256.0f);
              local_110.z = (int)ROUND(local_cc * 256.0f);
              engine_special_cpp_transformAndProjectPoint_FUN_00580173
                        (&g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr[3].projected_vertex,
                         &local_110);
              this_ptr_00 = g_CDemonRenderer_PTR_00612560;
              g_CDemonRenderer_PTR_00612560->vertex_buffer_ptr->r = local_6c;
              this_ptr_00->vertex_buffer_ptr[1].r = local_6c;
              this_ptr_00->vertex_buffer_ptr[2].r = local_68;
              this_ptr_00->vertex_buffer_ptr[3].r = local_68;
              local_18c.base.count = 4;
              local_16c = 1;
              local_18c.surface_normal.D.i = 0;
              local_18c.surface_normal.C.i = 0;
              local_18c.surface_normal.B.i = 0;
              local_18c.surface_normal.A.i = 0;
              iVar3 = local_2c + 1;
              local_170 = 2;
              local_168 = 0;
              local_174 = 3;
              local_2c = iVar3;
              engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_00483c50
                        (this_ptr_00,&local_18c,
                         core_dcamera_cpp_renderVolumetricLightScanline_FUN_00451040);
            } while (iVar3 < 4);
            local_50 = local_50 + 1;
          } while (local_50 < 0x10);
          local_58 = local_58 + 1;
        } while (local_58 < 0x10);
        engine_drender_cpp_pop_FUN_004839a0();
        return;
      }
    }
  }
  return;
}
