// Name: core_dlight.cpp_FUN_00464190
// Address: 00464190
// Address Range: [[00464190, 0046498a]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_FUN_00464190(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_FUN_00464190(CDemonLight *this_ptr)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float *pfVar4;
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
  SMRGLHeaderPrimitive local_18c [4];
  uint local_188;
  uint local_184;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  float local_164;
  float local_160 [2];
  byte local_158 [12];
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
  float local_104;
  float local_100 [4];
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  float local_c8;
  float afStack_c4 [4];
  float local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  CVector3f local_a4;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float afStack_7c [5];
  int local_68;
  int aiStack_64 [2];
  int local_5c;
  int local_58;
  int local_54;
  float local_50;
  float local_4c [5];
  int local_38;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float *local_1c;
  int local_18;
  float local_14;
  
  bVar5 = 0;
  if ((*(int *)&this_ptr->field_0x1cbc != 0) && (*(int *)&g_CGamePtr->field_0xc == 2)) {
    engine_matrix_c_FUN_00483ae0(DAT_00612560);
    local_ec = local_4c[2];
    local_100[(uint)bVar5 * -2 + 6] = local_4c[(uint)bVar5 * -2 + 3];
    local_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
         local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
    local_ec = local_ec - *(float *)&this_ptr->field_0x4;
    local_e8 = local_e8 - *(float *)&this_ptr->field_0x8;
    local_e4 = local_e4 - *(float *)&this_ptr->field_0xc;
    core_dirmat_cpp_FUN_0045f700(&this_ptr->field_0x10,local_100 + 5);
    local_13c[2] = local_c8;
    local_13c[(uint)bVar5 * -2 + 3] = afStack_c4[(uint)bVar5 * -2];
    local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
         afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
    if (local_100 + 5 != local_13c + 2) {
      local_ec = local_13c[2];
      local_e8 = local_13c[3];
      local_e4 = local_12c;
    }
    local_30 = local_e8 * local_e8;
    local_28 = ((local_e4 * (float)_DAT_005d91d4) / *(float *)&this_ptr->field_0x38) *
               (float)_DAT_005d91dc;
    local_24 = local_ec * local_ec + local_30;
    local_2c = local_28 * local_28;
    if (local_24 <= local_2c) {
      local_194 = 1.0 - local_24 / local_2c;
      engine_matrix_c_FUN_00483ac0(DAT_00612560);
      local_110 = local_68;
      local_10c[(uint)bVar5 * -2] = aiStack_64[(uint)bVar5 * -2];
      local_10c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           aiStack_64[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
      local_98 = (float)local_110 * _DAT_005febd8;
      local_94 = (float)local_10c[0] * _DAT_005febd8;
      local_90 = (float)local_10c[1] * _DAT_005febd8;
      afStack_c4[2] = (float)local_110 * _DAT_005febd8 - *(float *)&this_ptr->field_0x4;
      afStack_c4[3] = (float)local_10c[0] * _DAT_005febd8 - *(float *)&this_ptr->field_0x8;
      local_b4 = (float)local_10c[1] * _DAT_005febd8 - *(float *)&this_ptr->field_0xc;
      local_100[2] = afStack_c4[2];
      local_100[(uint)bVar5 * -2 + 3] = afStack_c4[(uint)bVar5 * -2 + 3];
      local_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4] =
           afStack_c4[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
      local_198 = SQRT(local_f0 * local_f0 +
                       local_100[2] * local_100[2] + local_100[3] * local_100[3]);
      if (0.0 < local_198) {
        fVar1 = 1.0 / local_198;
        local_100[2] = local_100[2] * fVar1;
        local_100[3] = local_100[3] * fVar1;
        local_f0 = local_f0 * fVar1;
        afStack_7c[4] = 1.0;
        afStack_7c[2] = 0.0;
        afStack_7c[3] = 0.0;
        local_14 = (float)(0xffff - _DAT_01c51cac);
        core_dirmat_cpp_FUN_0045f690(&this_ptr->field_0x10,afStack_7c + 2);
        local_50 = local_80;
        local_4c[(uint)bVar5 * -2] = afStack_7c[(uint)bVar5 * -2];
        local_4c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
             afStack_7c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
        if (0.0 < (local_f0 * local_4c[1] + local_100[2] * local_50 + local_100[3] * local_4c[0]) *
                  local_14 * _DAT_005d91e4) {
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,1);
          local_18 = 0;
          local_1c = (float *)&this_ptr->field_0x4;
          do {
            pfVar4 = local_1c;
            local_14 = (float)local_18;
            fVar3 = (float)local_18 * _DAT_005d91e8 * *(float *)&this_ptr->field_0x140;
            fVar1 = *(float *)&this_ptr->field_0x38;
            local_190 = fVar3;
            local_11c = *(float *)&this_ptr->field_0x18;
            local_140 = *(float *)&this_ptr->field_0x18 * fVar3;
            local_118 = *(float *)&this_ptr->field_0x24;
            local_114 = *(float *)&this_ptr->field_0x30;
            local_13c[0] = *(float *)&this_ptr->field_0x24 * fVar3;
            local_13c[1] = *(float *)&this_ptr->field_0x30 * fVar3;
            local_164 = local_140;
            local_160[(uint)bVar5 * -2] = local_13c[(uint)bVar5 * -2];
            local_160[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            local_128 = *pfVar4 + local_164;
            local_124 = pfVar4[1] + local_160[0];
            local_120 = pfVar4[2] + local_160[1];
            local_104 = *pfVar4 + local_164;
            local_100[(uint)bVar5 * -2] = local_13c[(uint)bVar5 * -2 + 6];
            local_100[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
                 local_13c[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7];
            if ((float *)local_158 != &local_104) {
              local_158._0_4_ = local_104;
              local_158._4_4_ = local_100[0];
              local_158._8_4_ = local_100[1];
            }
            local_20 = (fVar3 * (float)_DAT_005d91d4) / fVar1;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                      (DAT_00612560,(CVector3f *)local_158);
            engine_matrix_c_FUN_00483b70(DAT_00612560);
            translation = (CVector3f *)0x0;
            euler_angles = &local_14c;
            local_14c._0_4_ = local_a4._0_4_;
            *(uint *)((int)&local_14c + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&local_a4 + (uint)bVar5 * -8 + 4);
            this_ptr_01 = DAT_00612560;
            *(uint *)((int)&local_14c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)((int)&local_a4 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00483850
                      (this_ptr_01,euler_angles,translation);
            local_84 = 0.0;
            local_8c = local_20;
            local_88 = local_20;
            local_e0 = (int)ROUND(local_20 * _DAT_005febd0);
            local_dc = (int)ROUND(local_20 * _DAT_005febd0);
            local_d8 = (int)ROUND(_DAT_005febd0 * 0.0);
            engine_special_cpp_FUN_00580173
                      (*(SProjectedVertex **)DAT_00612560,(CVector3i *)&local_e0);
            local_8c = -local_8c;
            local_d4 = (int)ROUND(local_8c * _DAT_005febd0);
            local_d0 = (int)ROUND(local_88 * _DAT_005febd0);
            local_cc = (int)ROUND(local_84 * _DAT_005febd0);
            engine_special_cpp_FUN_00580173
                      ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x30),(CVector3i *)&local_d4);
            local_88 = -local_88;
            local_b0 = (int)ROUND(local_8c * _DAT_005febd0);
            local_ac = (int)ROUND(local_88 * _DAT_005febd0);
            local_a8 = (int)ROUND(local_84 * _DAT_005febd0);
            engine_special_cpp_FUN_00580173
                      ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x60),(CVector3i *)&local_b0);
            local_8c = -local_8c;
            local_5c = (int)ROUND(local_8c * _DAT_005febd0);
            local_58 = (int)ROUND(local_88 * _DAT_005febd0);
            local_54 = (int)ROUND(local_84 * _DAT_005febd0);
            engine_special_cpp_FUN_00580173
                      ((SProjectedVertex *)(*(int *)DAT_00612560 + 0x90),(CVector3i *)&local_5c);
            engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00484f00
                      (DAT_00612560,(SMRGLTextureBasic *)&DAT_006122c0);
            local_188 = 4;
            local_178 = 0;
            local_17c = 0;
            local_180 = 0;
            local_184 = 0;
            local_174 = 0;
            fVar6 = ((((float10)*(float *)&this_ptr->field_0x140 - (float10)local_190) *
                     (float10)_DAT_005d91ec) / (float10)*(float *)&this_ptr->field_0x140) *
                    (float10)local_194;
            iVar2 = *(int *)DAT_00612560;
            round();
            local_38 = (int)ROUND(fVar6);
            *(int *)(iVar2 + 0x2c) = local_38;
            *(uint *)(*(int *)this_ptr_00 + 0x20) = 0xffff;
            *(uint *)(*(int *)this_ptr_00 + 0x24) = 0xffff;
            *(uint *)(*(int *)this_ptr_00 + 0x28) = 0xffff;
            local_170 = 1;
            *(int *)(*(int *)this_ptr_00 + 0x5c) = local_38;
            *(uint *)(*(int *)this_ptr_00 + 0x50) = 0xffff;
            *(uint *)(*(int *)this_ptr_00 + 0x54) = 0xffff;
            *(uint *)(*(int *)this_ptr_00 + 0x58) = 0xffff;
            local_16c = 2;
            *(int *)(*(int *)this_ptr_00 + 0x8c) = local_38;
            *(uint *)(*(int *)this_ptr_00 + 0x80) = 0xffff;
            *(uint *)(*(int *)this_ptr_00 + 0x84) = 0xffff;
            *(uint *)(*(int *)this_ptr_00 + 0x88) = 0xffff;
            local_168 = 3;
            *(int *)(*(int *)this_ptr_00 + 0xbc) = local_38;
            *(uint *)(*(int *)this_ptr_00 + 0xb0) = 0xffff;
            *(uint *)(*(int *)this_ptr_00 + 0xb4) = 0xffff;
            *(uint *)(*(int *)this_ptr_00 + 0xb8) = 0xffff;
            *(uint *)(*(int *)this_ptr_00 + 0x18) = 0xf80000;
            *(uint *)(*(int *)this_ptr_00 + 0x1c) = 0xf80000;
            *(uint *)(*(int *)this_ptr_00 + 0x48) = 0x80000;
            *(uint *)(*(int *)this_ptr_00 + 0x4c) = 0xf80000;
            *(uint *)(*(int *)this_ptr_00 + 0x78) = 0x80000;
            *(uint *)(*(int *)this_ptr_00 + 0x7c) = 0x80000;
            *(uint *)(*(int *)this_ptr_00 + 0xa8) = 0xf80000;
            *(uint *)(*(int *)this_ptr_00 + 0xac) = 0x80000;
            engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00482e30
                      (this_ptr_00,local_18c);
            engine_matrix_c_pop_FUN_004839a0();
            local_18 = local_18 + 1;
          } while (local_18 < 0x19);
          engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00483dd0(DAT_00612560,0);
          return;
        }
      }
    }
  }
  return;
}
