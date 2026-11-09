// Name: core_dlight.cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830
// Address: 0044c830
// Address Range: [[0044c830, 0044cf42]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_renderExternalVolumetricShafts_FUN_0044c830(CDemonLight *this_ptr)

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
  int local_164;
  int local_160;
  int local_15c;
  CVector3f local_158;
  float local_14c;
  float local_148;
  float local_144;
  float local_140;
  float afStack_13c [2];
  int local_134;
  int local_130;
  int local_12c;
  float local_128;
  float local_124 [4];
  float local_114;
  int local_110;
  int local_10c;
  int local_108;
  CVector3f local_104;
  uint local_f8;
  uint local_f4;
  uint local_f0;
  int local_e0;
  int local_dc;
  int local_d8;
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
  byte *local_18;
  int local_14;
  
  bVar4 = 0;
  if (((*(int *)&this_ptr->field_0x1cbc != 0) &&
      ((float)_DAT_005cf50f <= *(float *)&g_CDemonSetPtr->field_0x15ac80)) &&
     (*(int *)&g_CGamePtr->field_0xc != 0)) {
    engine_matrix_c_FUN_0046b5c0(DAT_0060b280);
    local_a4 = local_bc;
    (&local_a0)[(uint)bVar4 * -2] = afStack_b8[(uint)bVar4 * -2];
    (&local_a0)[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
    local_14c = (float)local_a4 * _DAT_005f5058;
    local_148 = (float)(int)local_a0 * _DAT_005f5058;
    local_144 = (float)local_9c * _DAT_005f5058;
    afStack_b8[2] = (float)local_a4 * _DAT_005f5058 - *(float *)&this_ptr->field_0x4;
    afStack_b8[3] = (float)(int)local_a0 * _DAT_005f5058 - *(float *)&this_ptr->field_0x8;
    local_a8 = (float)local_9c * _DAT_005f5058 - *(float *)&this_ptr->field_0xc;
    local_c8 = afStack_b8[2];
    local_c4[(uint)bVar4 * -2] = afStack_b8[(uint)bVar4 * -2 + 3];
    local_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
         afStack_b8[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
    if (0.0 < SQRT(local_c4[1] * local_c4[1] + local_c8 * local_c8 + local_c4[0] * local_c4[0])) {
      local_f0 = 0x3f800000;
      local_f8 = 0;
      local_18 = &this_ptr->field_0x10;
      local_f4 = 0;
      core_dirmat_cpp_FUN_00449530(local_18,&local_f8);
      engine_matrix_c_FUN_0046b5e0(DAT_0060b280);
      local_124[2] = local_140;
      local_124[(uint)bVar4 * -2 + 3] = afStack_13c[(uint)bVar4 * -2];
      local_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
           afStack_13c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      local_124[2] = local_124[2] - *(float *)&this_ptr->field_0x4;
      local_124[3] = local_124[3] - *(float *)&this_ptr->field_0x8;
      local_114 = local_114 - *(float *)&this_ptr->field_0xc;
      core_dirmat_cpp_FUN_004495a0(local_18,local_124 + 2);
      local_128 = local_98;
      local_124[(uint)bVar4 * -2] = afStack_94[(uint)bVar4 * -2];
      local_124[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
           afStack_94[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
      if (local_124 + 2 != &local_128) {
        local_124[2] = local_128;
        local_124[3] = local_124[0];
        local_114 = local_124[1];
      }
      fVar1 = ((local_114 * (float)_DAT_005cf517) / *(float *)&this_ptr->field_0x38) *
              (float)_DAT_005cf51f;
      fVar2 = local_124[2] * local_124[2] + local_124[3] * local_124[3];
      fVar1 = fVar1 * fVar1;
      local_5c = 1.0 - fVar2 / fVar1;
      if ((fVar1 <= fVar2) || (local_5c <= (float)_DAT_005cf527)) {
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                  (DAT_0060b280,(CVector3f *)&this_ptr->field_0x4);
        core_dirmat_cpp_FUN_004496e0(&this_ptr->field_0x10);
        translation = (CVector3f *)0x0;
        local_104._0_4_ = local_158._0_4_;
        *(uint *)((int)&local_104 + (uint)bVar4 * -8 + 4) =
             *(uint *)((int)&local_158 + (uint)bVar4 * -8 + 4);
        *(uint *)((int)&local_104 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
             *(uint *)((int)&local_158 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
        engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0046b350
                  (DAT_0060b280,&local_104,translation);
        local_58 = 1;
        do {
          fVar5 = (float10)local_58 *
                  ((float10)_DAT_005cf517 / (float10)*(float *)&this_ptr->field_0x38) *
                  (float10)_DAT_005cf52f;
          local_54 = (float)fVar5;
          Var9 = fpatan(fVar5,(float10)1);
          fVar6 = (float10)fcos(Var9);
          local_50 = 0;
          local_48 = (float)((float10)1 - fVar5);
          local_4c = (float)fVar6;
          do {
            fVar5 = (float10)local_50 * (float10)_DAT_005cf537 * (float10)_DAT_005cf53b *
                    (float10)_DAT_005cf51f;
            fVar6 = (float10)fsin(fVar5);
            fVar10 = (float10)(local_50 + 1) * (float10)_DAT_005cf537 * (float10)_DAT_005cf53b *
                     (float10)_DAT_005cf51f;
            fVar7 = (float10)fsin(fVar10);
            fVar5 = (float10)fcos(fVar5);
            fVar10 = (float10)fcos(fVar10);
            local_18 = (byte *)
                       (*(int *)&this_ptr->field_0x1cc0 - (*(int *)&this_ptr->field_0x1cc0 >> 0x1f)
                       >> 1);
            local_14 = *(int *)&this_ptr->field_0x1cc4 - (*(int *)&this_ptr->field_0x1cc4 >> 0x1f)
                       >> 1;
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
            local_34 = (float)*(ushort *)((iVar3 + local_1c) * 2 + *(int *)&this_ptr->field_0x2f94)
                       * (float)_DAT_005cf53f;
            local_2c = 0;
            local_40 = (float)fVar7;
            local_44 = (float)(fVar8 * fVar10);
            local_30 = local_34;
            do {
              local_70 = *(float *)&this_ptr->field_0x140;
              local_24 = (float)local_2c * local_4c * local_70 * _DAT_005cf547;
              local_14 = local_2c + 1;
              local_28 = (float)local_14 * local_4c * local_70 * _DAT_005cf547;
              local_64 = *(float *)&this_ptr->field_0x2fa8 *
                         (local_70 - local_24) * (1.0 / local_70) * (float)_DAT_005cf54f * local_48;
              local_60 = local_48 * (local_70 - local_28) * (1.0 / local_70) * (float)_DAT_005cf54f
                         * *(float *)&this_ptr->field_0x2fa8;
              local_6c = (int)ROUND(local_64);
              local_68 = (int)ROUND(local_60);
              local_cc = local_30;
              if (local_24 < local_30) {
                local_cc = local_24;
              }
              local_d4 = local_cc * local_38;
              local_d0 = local_cc * local_3c;
              local_e0 = (int)ROUND(local_d4 * _DAT_005f5050);
              local_dc = (int)ROUND(local_d0 * _DAT_005f5050);
              local_d8 = (int)ROUND(local_cc * _DAT_005f5050);
              engine_special_cpp_FUN_0055d723
                        (*(SProjectedVertex **)DAT_0060b280,(CVector3i *)&local_e0);
              local_cc = local_34;
              if (local_24 < local_34) {
                local_cc = local_24;
              }
              local_d4 = local_cc * local_40;
              local_d0 = local_cc * local_44;
              local_164 = (int)ROUND(local_d4 * _DAT_005f5050);
              local_160 = (int)ROUND(local_d0 * _DAT_005f5050);
              local_15c = (int)ROUND(local_cc * _DAT_005f5050);
              engine_special_cpp_FUN_0055d723
                        ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x30),(CVector3i *)&local_164);
              local_cc = local_34;
              if (local_28 < local_34) {
                local_cc = local_28;
              }
              local_d4 = local_cc * local_40;
              local_d0 = local_cc * local_44;
              local_134 = (int)ROUND(local_d4 * _DAT_005f5050);
              local_130 = (int)ROUND(local_d0 * _DAT_005f5050);
              local_12c = (int)ROUND(local_cc * _DAT_005f5050);
              engine_special_cpp_FUN_0055d723
                        ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x60),(CVector3i *)&local_134);
              local_cc = local_30;
              if (local_28 < local_30) {
                local_cc = local_28;
              }
              local_d4 = local_cc * local_38;
              local_d0 = local_cc * local_3c;
              local_110 = (int)ROUND(local_d4 * _DAT_005f5050);
              local_10c = (int)ROUND(local_d0 * _DAT_005f5050);
              local_108 = (int)ROUND(local_cc * _DAT_005f5050);
              engine_special_cpp_FUN_0055d723
                        ((SProjectedVertex *)(*(int *)DAT_0060b280 + 0x90),(CVector3i *)&local_110);
              this_ptr_00 = DAT_0060b280;
              *(int *)(*(int *)DAT_0060b280 + 0x20) = local_6c;
              *(int *)(*(int *)this_ptr_00 + 0x50) = local_6c;
              *(int *)(*(int *)this_ptr_00 + 0x80) = local_68;
              *(int *)(*(int *)this_ptr_00 + 0xb0) = local_68;
              local_188 = 4;
              local_16c = 1;
              local_178 = 0;
              local_17c = 0;
              local_180 = 0;
              local_184 = 0;
              iVar3 = local_2c + 1;
              local_170 = 2;
              local_168 = 0;
              local_174 = 3;
              local_2c = iVar3;
              engine_drender_cpp_CDemonRenderer_renderCustomScanline_FUN_0046b750
                        (this_ptr_00,local_18c,(CustomScanlineFunc *)0x43f980);
            } while (iVar3 < 4);
            local_50 = local_50 + 1;
          } while (local_50 < 0x10);
          local_58 = local_58 + 1;
        } while (local_58 < 0x10);
        engine_matrix_c_pop_FUN_0046b4a0();
        return;
      }
    }
  }
  return;
}
