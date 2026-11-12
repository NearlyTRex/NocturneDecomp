// Name: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70
// Address: 0045ed70
// Address Range: [[0045ed70, 0045f482]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0045ed70(CDemonLight *this_ptr)

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
  float afStackY_1140 [1002];
  CVector3f *translation;
  SMRGLHeaderPrimitive local_18c;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  CVector3i local_164;
  float local_158;
  float afStack_154 [4];
  float local_144;
  float local_140;
  float afStack_13c [2];
  CVector3i local_134;
  float local_128;
  float local_124 [4];
  float local_114;
  CVector3i local_110;
  CVector3f local_104;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  CVector3i local_e0;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4 [2];
  int local_bc;
  float afStack_b8 [4];
  float local_a8;
  int local_a4;
  float local_a0;
  int local_9c;
  float local_98;
  float afStack_94 [7];
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
      ((float)_DAT_005bb544 <= (g_CDemonSetPtr->active_fog).density_multiplier)) &&
     (g_CGamePtr->halo_mode != 0)) {
    engine_drender_cpp_FUN_0046d1a0(DAT_005f2afc);
    local_a4 = local_bc;
    (&local_a0)[(uint)bVar4 * -2] = afStack_b8[(uint)bVar4 * -2];
    (&local_a0)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    afStack_154[2] = (float)local_a4 * _DAT_005de4f8;
    afStack_154[3] = (float)(int)local_a0 * _DAT_005de4f8;
    local_144 = (float)local_9c * _DAT_005de4f8;
    afStack_b8[2] = (float)local_a4 * _DAT_005de4f8 - (this_ptr->base).base.position.f.x;
    afStack_b8[3] = (float)(int)local_a0 * _DAT_005de4f8 - (this_ptr->base).base.position.f.y;
    local_a8 = (float)local_9c * _DAT_005de4f8 - (this_ptr->base).base.position.f.z;
    local_c8 = afStack_b8[2];
    local_c4[(uint)bVar4 * -2] = afStack_b8[(uint)bVar4 * -2 + 3];
    local_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (0.0 < SQRT(local_c4[1] * local_c4[1] + local_c8 * local_c8 + local_c4[0] * local_c4[0])) {
      local_f0 = 0x3f800000;
      local_f8 = 0;
      local_18 = &(this_ptr->base).base.rotation_matrix;
      local_f4 = 0;
      core_dirmat_cpp_FUN_0045b800(local_18,&local_f8);
      engine_drender_cpp_FUN_0046d1c0(DAT_005f2afc);
      local_124[2] = local_140;
      local_124[(uint)bVar4 * -2 + 3] = afStack_13c[(uint)bVar4 * -2];
      local_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      local_124[2] = local_124[2] - (this_ptr->base).base.position.f.x;
      local_124[3] = local_124[3] - (this_ptr->base).base.position.f.y;
      local_114 = local_114 - (this_ptr->base).base.position.f.z;
      core_dirmat_cpp_FUN_0045b870(local_18,local_124 + 2);
      local_128 = local_98;
      local_124[(uint)bVar4 * -2] = afStack_94[(uint)bVar4 * -2];
      local_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_94[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (local_124 + 2 != &local_128) {
        local_124[2] = local_128;
        local_124[3] = local_124[0];
        local_114 = local_124[1];
      }
      fVar1 = ((local_114 * (float)_DAT_005bb54c) / (this_ptr->base).base.focal_length) *
              (float)_DAT_005bb554;
      fVar2 = local_124[2] * local_124[2] + local_124[3] * local_124[3];
      fVar1 = fVar1 * fVar1;
      local_5c = 1.0 - fVar2 / fVar1;
      if ((fVar1 <= fVar2) || (local_5c <= (float)_DAT_005bb55c)) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                  (DAT_005f2afc,&(this_ptr->base).base.position.f);
        core_dirmat_cpp_FUN_0045b9b0(&(this_ptr->base).base.rotation_matrix);
        translation = (CVector3f *)0x0;
        local_104.x = local_158;
        *(float *)((int)&local_104 + (uint)bVar4 * -8 + 4) = afStack_154[(uint)bVar4 * -2];
        *(float *)((int)&local_104 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             afStack_154[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046cf30
                  (DAT_005f2afc,&local_104,translation);
        local_58 = 1;
        do {
          fVar5 = (float10)local_58 *
                  ((float10)_DAT_005bb54c / (float10)(this_ptr->base).base.focal_length) *
                  (float10)_DAT_005bb564;
          local_54 = (float)fVar5;
          Var9 = fpatan(fVar5,(float10)1);
          fVar6 = (float10)fcos(Var9);
          local_50 = 0;
          local_48 = (float)((float10)1 - fVar5);
          local_4c = (float)fVar6;
          do {
            fVar5 = (float10)local_50 * (float10)_DAT_005bb56c * (float10)_DAT_005bb570 *
                    (float10)_DAT_005bb554;
            fVar6 = (float10)fsin(fVar5);
            fVar10 = (float10)(local_50 + 1) * (float10)_DAT_005bb56c * (float10)_DAT_005bb570 *
                     (float10)_DAT_005bb554;
            fVar7 = (float10)fsin(fVar10);
            fVar5 = (float10)fcos(fVar5);
            fVar10 = (float10)fcos(fVar10);
            local_18 = (CMatrix3x3f *)
                       (this_ptr->shadow_map_width - (this_ptr->shadow_map_width >> 0x1f) >> 1);
            local_14 = this_ptr->shadow_map_height - (this_ptr->shadow_map_height >> 0x1f) >> 1;
            fVar8 = (float10)local_54;
            local_3c = (float)(fVar5 * fVar8);
            fVar5 = (float10)local_14 - (float10)local_14 * (float10)local_3c;
            round();
            local_78 = (int)ROUND(fVar5);
            local_38 = (float)(fVar6 * fVar8);
            fVar5 = (float10)(int)local_18 * (float10)local_38 + (float10)(int)local_18;
            fVar7 = fVar7 * fVar8;
            iVar3 = round();
            local_1c = (int)ROUND(fVar5);
            local_34 = (float)this_ptr->shadow_depth_buffer[iVar3 + local_1c] * (float)_DAT_005bb574
            ;
            local_2c = 0;
            local_40 = (float)fVar7;
            local_44 = (float)(fVar8 * fVar10);
            local_30 = local_34;
            do {
              local_70 = (this_ptr->base).max_distance;
              local_24 = (float)local_2c * local_4c * local_70 * _DAT_005bb57c;
              local_14 = local_2c + 1;
              local_28 = (float)local_14 * local_4c * local_70 * _DAT_005bb57c;
              local_64 = this_ptr->volumetric_intensity *
                         (local_70 - local_24) * (1.0 / local_70) * (float)_DAT_005bb584 * local_48;
              local_60 = local_48 * (local_70 - local_28) * (1.0 / local_70) * (float)_DAT_005bb584
                         * this_ptr->volumetric_intensity;
              local_6c = (int)ROUND(local_64);
              local_68 = (int)ROUND(local_60);
              local_cc = local_30;
              if (local_24 < local_30) {
                local_cc = local_24;
              }
              local_d4 = local_cc * local_38;
              local_d0 = local_cc * local_3c;
              local_e0.x = (int)ROUND(local_d4 * _DAT_005de4f0);
              local_e0.y = (int)ROUND(local_d0 * _DAT_005de4f0);
              local_e0.z = (int)ROUND(local_cc * _DAT_005de4f0);
              engine_special_cpp_FUN_005632a3
                        (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_e0);
              local_cc = local_34;
              if (local_24 < local_34) {
                local_cc = local_24;
              }
              local_d4 = local_cc * local_40;
              local_d0 = local_cc * local_44;
              local_164.x = (int)ROUND(local_d4 * _DAT_005de4f0);
              local_164.y = (int)ROUND(local_d0 * _DAT_005de4f0);
              local_164.z = (int)ROUND(local_cc * _DAT_005de4f0);
              engine_special_cpp_FUN_005632a3
                        (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_164);
              local_cc = local_34;
              if (local_28 < local_34) {
                local_cc = local_28;
              }
              local_d4 = local_cc * local_40;
              local_d0 = local_cc * local_44;
              local_134.x = (int)ROUND(local_d4 * _DAT_005de4f0);
              local_134.y = (int)ROUND(local_d0 * _DAT_005de4f0);
              local_134.z = (int)ROUND(local_cc * _DAT_005de4f0);
              engine_special_cpp_FUN_005632a3
                        (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_134);
              local_cc = local_30;
              if (local_28 < local_30) {
                local_cc = local_28;
              }
              local_d4 = local_cc * local_38;
              local_d0 = local_cc * local_3c;
              local_110.x = (int)ROUND(local_d4 * _DAT_005de4f0);
              local_110.y = (int)ROUND(local_d0 * _DAT_005de4f0);
              local_110.z = (int)ROUND(local_cc * _DAT_005de4f0);
              engine_special_cpp_FUN_005632a3
                        (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_110);
              this_ptr_00 = DAT_005f2afc;
              DAT_005f2afc->vertex_buffer_ptr->r = local_6c;
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
              engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046d330
                        (this_ptr_00,&local_18c,(CustomScanlineFunc *)0x44d180);
            } while (iVar3 < 4);
            local_50 = local_50 + 1;
          } while (local_50 < 0x10);
          local_58 = local_58 + 1;
        } while (local_58 < 0x10);
        engine_drender_cpp_pop_FUN_0046d080();
        return;
      }
    }
  }
  return;
}
