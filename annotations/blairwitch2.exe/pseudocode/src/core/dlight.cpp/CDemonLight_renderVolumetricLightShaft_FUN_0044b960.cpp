// Name: core_dlight.cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960
// Address: 0044b960
// Address Range: [[0044b960, 0044c15a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderVolumetricLightShaft_FUN_0044b960(CDemonLight *this_ptr)

{
  float fVar1;
  SRenderVertex *pSVar2;
  float fVar3;
  UVector3 *pUVar4;
  CDemonRenderer *this_ptr_00;
  byte bVar5;
  float10 fVar6;
  float afStackY_114c [21];
  int aiStackY_10f8 [3];
  float afStackY_10ec [39];
  int aiStackY_1050 [6];
  float afStackY_1038 [933];
  CDemonRenderer *this_ptr_01;
  CVector3f *euler_angles;
  CVector3f *translation;
  float local_198;
  float local_194;
  float local_190;
  SMRGLHeaderPrimitive local_18c;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  float local_164;
  float local_160 [2];
  CVector3f local_158;
  CVector3f local_14c;
  float local_140;
  float local_13c [4];
  float local_12c;
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
  float local_f4 [4];
  float local_e4;
  CVector3i local_e0;
  CVector3i local_d4;
  float local_c8;
  float afStack_c4 [4];
  float local_b4;
  CVector3i local_b0;
  float local_a4;
  float afStack_a0 [4];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float afStack_7c [5];
  CVector3i local_68;
  CVector3i local_5c;
  float local_50;
  float local_4c [5];
  int local_38;
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
    engine_drender_cpp_FUN_0046b5e0(DAT_0060b280);
    local_f4[2] = local_4c[2];
    local_f4[(uint)bVar5 * -2 + 3] = local_4c[(uint)bVar5 * -2 + 3];
    local_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    local_f4[2] = local_f4[2] - (this_ptr->base).base.position.f.x;
    local_f4[3] = local_f4[3] - (this_ptr->base).base.position.f.y;
    local_e4 = local_e4 - (this_ptr->base).base.position.f.z;
    core_dirmat_cpp_FUN_004495a0(&(this_ptr->base).base.rotation_matrix,local_f4 + 2);
    local_13c[2] = local_c8;
    local_13c[(uint)bVar5 * -2 + 3] = afStack_c4[(uint)bVar5 * -2];
    local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (local_f4 + 2 != local_13c + 2) {
      local_f4[2] = local_13c[2];
      local_f4[3] = local_13c[3];
      local_e4 = local_12c;
    }
    local_30 = local_f4[3] * local_f4[3];
    local_28 = ((local_e4 * (float)_DAT_005cf4b7) / (this_ptr->base).base.focal_length) *
               (float)_DAT_005cf4bf;
    local_24 = local_f4[2] * local_f4[2] + local_30;
    local_2c = local_28 * local_28;
    if (local_24 <= local_2c) {
      local_194 = 1.0 - local_24 / local_2c;
      engine_drender_cpp_CDemonRenderer_getCameraOriginFixed_FUN_0046b5c0(DAT_0060b280,&local_68);
      local_110 = local_68.x;
      local_10c[(uint)bVar5 * -2] = *(int *)((int)&local_68 + (uint)bVar5 * -8 + 4);
      local_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           *(int *)((int)&local_68 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
      afStack_a0[2] = (float)local_110 * _DAT_005f5058;
      afStack_a0[3] = (float)local_10c[0] * _DAT_005f5058;
      local_90 = (float)local_10c[1] * _DAT_005f5058;
      afStack_c4[2] = (float)local_110 * _DAT_005f5058 - (this_ptr->base).base.position.f.x;
      afStack_c4[3] = (float)local_10c[0] * _DAT_005f5058 - (this_ptr->base).base.position.f.y;
      local_b4 = (float)local_10c[1] * _DAT_005f5058 - (this_ptr->base).base.position.f.z;
      local_f8 = afStack_c4[2];
      local_f4[(uint)bVar5 * -2] = afStack_c4[(uint)bVar5 * -2 + 3];
      local_f4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      local_198 = SQRT(local_f4[1] * local_f4[1] + local_f8 * local_f8 + local_f4[0] * local_f4[0]);
      if (0.0 < local_198) {
        fVar1 = 1.0 / local_198;
        local_f8 = local_f8 * fVar1;
        local_f4[0] = local_f4[0] * fVar1;
        local_f4[1] = local_f4[1] * fVar1;
        afStack_7c[4] = 1.0;
        afStack_7c[2] = 0.0;
        afStack_7c[3] = 0.0;
        local_14 = (float)(0xffff - _DAT_01c38aec);
        core_dirmat_cpp_FUN_00449530(&(this_ptr->base).base.rotation_matrix,afStack_7c + 2);
        local_50 = local_80;
        local_4c[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2];
        local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if (0.0 < (local_f4[1] * local_4c[1] + local_f8 * local_50 + local_f4[0] * local_4c[0]) *
                  local_14 * _DAT_005cf4c7) {
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
          local_18 = 0;
          local_1c = &(this_ptr->base).base.position;
          do {
            pUVar4 = local_1c;
            local_14 = (float)local_18;
            fVar3 = (float)local_18 * _DAT_005cf4cb * (this_ptr->base).max_distance;
            fVar1 = (this_ptr->base).base.focal_length;
            local_190 = fVar3;
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
            local_20 = (fVar3 * (float)_DAT_005cf4b7) / fVar1;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                      (DAT_0060b280,&local_158);
            engine_drender_cpp_FUN_0046b670(DAT_0060b280);
            translation = (CVector3f *)0x0;
            euler_angles = &local_14c;
            local_14c.x = local_a4;
            *(float *)((int)&local_14c + (uint)bVar5 * -8 + 4) = afStack_a0[(uint)bVar5 * -2];
            this_ptr_01 = DAT_0060b280;
            *(float *)((int)&local_14c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 afStack_a0[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                      (this_ptr_01,euler_angles,translation);
            local_84 = 0.0;
            local_8c = local_20;
            local_88 = local_20;
            local_e0.x = (int)ROUND(local_20 * _DAT_005f5050);
            local_e0.y = (int)ROUND(local_20 * _DAT_005f5050);
            local_e0.z = (int)ROUND(_DAT_005f5050 * 0.0);
            engine_special_cpp_FUN_0055d723
                      (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_e0);
            local_8c = -local_8c;
            local_d4.x = (int)ROUND(local_8c * _DAT_005f5050);
            local_d4.y = (int)ROUND(local_88 * _DAT_005f5050);
            local_d4.z = (int)ROUND(local_84 * _DAT_005f5050);
            engine_special_cpp_FUN_0055d723
                      (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_d4);
            local_88 = -local_88;
            local_b0.x = (int)ROUND(local_8c * _DAT_005f5050);
            local_b0.y = (int)ROUND(local_88 * _DAT_005f5050);
            local_b0.z = (int)ROUND(local_84 * _DAT_005f5050);
            engine_special_cpp_FUN_0055d723
                      (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_b0);
            local_8c = -local_8c;
            local_5c.x = (int)ROUND(local_8c * _DAT_005f5050);
            local_5c.y = (int)ROUND(local_88 * _DAT_005f5050);
            local_5c.z = (int)ROUND(local_84 * _DAT_005f5050);
            engine_special_cpp_FUN_0055d723
                      (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_5c);
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
                      (DAT_0060b280,(SMRGLTextureBasic *)&DAT_0060afe0);
            local_18c.base.count = 4;
            local_18c.surface_normal.D.i = 0;
            local_18c.surface_normal.C.i = 0;
            local_18c.surface_normal.B.i = 0;
            local_18c.surface_normal.A.i = 0;
            local_174 = 0;
            fVar6 = ((((float10)(this_ptr->base).max_distance - (float10)local_190) *
                     (float10)_DAT_005cf4cf) / (float10)(this_ptr->base).max_distance) *
                    (float10)local_194;
            pSVar2 = DAT_0060b280->vertex_buffer_ptr;
            round();
            local_38 = (int)ROUND(fVar6);
            pSVar2->a = local_38;
            this_ptr_00->vertex_buffer_ptr->r = 0xffff;
            this_ptr_00->vertex_buffer_ptr->g = 0xffff;
            this_ptr_00->vertex_buffer_ptr->b = 0xffff;
            local_170 = 1;
            this_ptr_00->vertex_buffer_ptr[1].a = local_38;
            this_ptr_00->vertex_buffer_ptr[1].r = 0xffff;
            this_ptr_00->vertex_buffer_ptr[1].g = 0xffff;
            this_ptr_00->vertex_buffer_ptr[1].b = 0xffff;
            local_16c = 2;
            this_ptr_00->vertex_buffer_ptr[2].a = local_38;
            this_ptr_00->vertex_buffer_ptr[2].r = 0xffff;
            this_ptr_00->vertex_buffer_ptr[2].g = 0xffff;
            this_ptr_00->vertex_buffer_ptr[2].b = 0xffff;
            local_168 = 3;
            this_ptr_00->vertex_buffer_ptr[3].a = local_38;
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
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_0046a930
                      (this_ptr_00,&local_18c);
            engine_drender_cpp_pop_FUN_0046b4a0();
            local_18 = local_18 + 1;
          } while (local_18 < 0x19);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
          return;
        }
      }
    }
  }
  return;
}
