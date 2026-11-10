// Name: core_cross.cpp_CCross_process_FUN_005a6ed0
// Address: 005a6ed0
// Address Range: [[005a6ed0, 005a794e]]
// Convention: __cdecl
// Signature: void __cdecl core_cross_cpp_CCross_process_FUN_005a6ed0(CCross *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cross_cpp_CCross_process_FUN_005a6ed0(CCross *this_ptr,float delta_time)

{
  byte *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_1a04 [1480];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  float *pfVar14;
  float *pfVar15;
  float fVar16;
  CCross *this_ptr_00;
  float fVar17;
  byte auStack_258 [48];
  uint uStack_228;
  float afStack_224 [7];
  float fStack_208;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  uint uStack_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  float fStack_1a8;
  float afStack_1a4 [5];
  float fStack_190;
  uint uStack_184;
  uint uStack_180;
  uint uStack_17c;
  float fStack_178;
  float afStack_174 [4];
  float fStack_164;
  float fStack_160;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float afStack_120 [4];
  float fStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  float fStack_100;
  float afStack_fc [4];
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float afStack_dc [3];
  float afStack_d0 [3];
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  uint uStack_b8;
  uint uStack_b4;
  uint uStack_b0;
  float fStack_ac;
  float afStack_a8 [7];
  uint uStack_8c;
  float fStack_88;
  float afStack_84 [4];
  float fStack_74;
  float fStack_70;
  float afStack_6c [6];
  float afStack_54 [4];
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float *pfStack_30;
  int iStack_2c;
  float *pfStack_28;
  int iStack_24;
  float *pfStack_20;
  float *pfStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar6 = 0;
  uVar2 = (**(code **)(*(int *)&this_ptr->field_0x2b0 + 0x9c))
                    (this_ptr,g_CCharacterClassInfo.name_hash);
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(uVar2);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
    if (iVar3 == 0) {
      fVar16 = *(float *)&this_ptr->field_0x82c + delta_time;
      goto LAB_005a6f19;
    }
  }
  fVar16 = *(float *)&this_ptr->field_0x82c - delta_time;
LAB_005a6f19:
  *(float *)&this_ptr->field_0x82c = fVar16;
  if (_DAT_005ffe6c < *(float *)&this_ptr->field_0x82c) {
    *(float *)&this_ptr->field_0x82c = _DAT_005ffe6c;
  }
  if (*(float *)&this_ptr->field_0x82c < 0.0) {
    *(uint *)&this_ptr->field_0x82c = 0;
  }
  fVar16 = *(float *)&this_ptr->field_0x82c / _DAT_005ffe6c;
  fVar17 = *(float *)&this_ptr->field_0x834 + delta_time;
  *(float *)&this_ptr->field_0x834 = fVar17;
  *(float *)&this_ptr->field_0x828 = fVar16;
  if (_DAT_005ffe70 <= fVar17) {
    *(uint *)&this_ptr->field_0x834 = 0;
  }
  fVar7 = (float10)fsin(((float10)*(float *)&this_ptr->field_0x834 / (float10)_DAT_005ffe70) *
                        (float10)_DAT_005f0765 * (float10)_DAT_005f0769);
  *(float *)&this_ptr->field_0x830 =
       (float)((float10)*(float *)&this_ptr->field_0x828 * (float10)_DAT_005f076d * fVar7 +
              (float10)_DAT_005f0775);
  core_melee_cpp_CMelee_process_FUN_004eacf0((CMelee *)this_ptr,delta_time);
  (**(code **)(*(int *)&this_ptr->field_0x2b0 + 4))();
  if (*(int *)&this_ptr->field_0x430 != 1) {
    *(float *)&this_ptr->field_0x2a8 = *(float *)&this_ptr->field_0x2a8 - delta_time;
    if ((0.0 < *(float *)&this_ptr->field_0x828) && (*(float *)&this_ptr->field_0x2a8 <= 0.0)) {
      *(uint *)&this_ptr->field_0x2a8 = 0x3e19999a;
      iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
      if (iVar3 != 0) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0((CDemonActor *)this_ptr);
        core_xform_cpp_FUN_00591c10(auStack_258);
        uStack_1b4 = 0;
        uStack_1b0 = 0x3fa66666;
        uStack_1ac = 0;
        core_xform_cpp_FUN_00591530();
        afStack_6c[2] = 0.5;
        fStack_88 = afStack_1a4[2];
        afStack_84[(uint)bVar6 * -2] = afStack_1a4[(uint)bVar6 * -2 + 3];
        afStack_84[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_1a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
        afStack_6c[3] = 0.7;
        afStack_6c[4] = 0.0;
        core_xform_cpp_FUN_00591530();
        uStack_17c = 0;
        fStack_124 = fStack_190;
        afStack_120[(uint)bVar6 * -2] = afStack_1a4[(uint)bVar6 * -2 + 6];
        afStack_120[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_1a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        uStack_180 = 0x3f333333;
        uStack_184 = 0xbf000000;
        core_xform_cpp_FUN_00591530();
        fStack_1cc = fStack_208;
        afStack_224[(uint)bVar6 * -2 + 0x17] = afStack_224[(uint)bVar6 * -2 + 8];
        afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x18] =
             afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 9];
        uStack_10c = 0;
        uStack_104 = 0;
        afStack_174[2] = _DAT_0265370c;
        afStack_174[(uint)bVar6 * -2 + 3] = *(float *)(&DAT_02653710 + (uint)bVar6 * -8);
        afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
             *(float *)(&DAT_02653714 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
        uStack_108 = 0x3f800000;
        core_xform_cpp_FUN_00591530();
        fStack_1a8 = afStack_6c[5];
        afStack_1a4[(uint)bVar6 * -2] = afStack_54[(uint)bVar6 * -2];
        afStack_1a4[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_54[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
        uStack_b4 = 0;
        uStack_b0 = 0;
        uStack_b8 = 0x3f000000;
        fStack_1d8 = fStack_1a8 * _DAT_005f077d;
        fStack_1d4 = afStack_1a4[0] * _DAT_005f077d;
        fStack_1d0 = afStack_1a4[1] * _DAT_005f077d;
        afStack_dc[0] = fStack_1a8 * _DAT_005f077d;
        afStack_fc[(uint)bVar6 * -2 + 9] = afStack_224[(uint)bVar6 * -2 + 0x14];
        afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
             afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x15];
        core_xform_cpp_FUN_00591530();
        fStack_ac = fStack_1f0;
        afStack_a8[(uint)bVar6 * -2] = afStack_224[(uint)bVar6 * -2 + 0xe];
        afStack_a8[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xf];
        puVar1 = &this_ptr->field_0x20;
        pfStack_30 = (float *)puVar1;
        fStack_e8 = fStack_ac * _DAT_005f077d;
        fStack_e4 = afStack_a8[0] * _DAT_005f077d;
        fStack_e0 = afStack_a8[1] * _DAT_005f077d;
        fStack_178 = fStack_ac * _DAT_005f077d;
        afStack_174[(uint)bVar6 * -2] = afStack_fc[(uint)bVar6 * -2 + 6];
        afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1] =
             afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
        fStack_88 = fStack_88 + *(float *)puVar1;
        afStack_84[0] = afStack_84[0] + *(float *)&this_ptr->field_0x24;
        afStack_84[1] = afStack_84[1] + *(float *)&this_ptr->field_0x28;
        afStack_174[2] = afStack_174[2] + *(float *)puVar1;
        afStack_174[3] = afStack_174[3] + *(float *)&this_ptr->field_0x24;
        fStack_164 = fStack_164 + *(float *)&this_ptr->field_0x28;
        fStack_124 = fStack_124 + *(float *)puVar1;
        afStack_120[0] = afStack_120[0] + *(float *)&this_ptr->field_0x24;
        afStack_120[1] = afStack_120[1] + *(float *)&this_ptr->field_0x28;
        fStack_1cc = fStack_1cc + *(float *)puVar1;
        fStack_1c8 = fStack_1c8 + *(float *)&this_ptr->field_0x24;
        fStack_1c4 = fStack_1c4 + *(float *)&this_ptr->field_0x28;
        pfVar15 = afStack_224 + 0x1f;
        pfVar14 = &fStack_88;
        fVar16 = *(float *)&this_ptr->field_0x828 * (float)_DAT_005f0785;
        uVar13 = 0x3f800000;
        uVar12 = 0x3f666666;
        uVar11 = 0x3f666666;
        uVar10 = 0;
        uVar9 = 0;
        uVar2 = *(uint *)&this_ptr->field_0x828;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        unkafter_superopt_cpp_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&this_ptr->field_0x828,uVar2,
                   uVar9,fVar16,uVar10,uVar11,uVar12,uVar13,pfVar14,pfVar15);
        pfVar14 = afStack_fc + 8;
        pfVar15 = afStack_174 + 2;
        fVar16 = *(float *)&this_ptr->field_0x828 * (float)_DAT_005f0785;
        uVar13 = 0x3f800000;
        uVar12 = 0x3f666666;
        uVar11 = 0x3f666666;
        uVar10 = 0;
        uVar9 = 0;
        uVar2 = *(uint *)&this_ptr->field_0x828;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        unkafter_superopt_cpp_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&this_ptr->field_0x828,uVar2,
                   uVar9,fVar16,uVar10,uVar11,uVar12,uVar13,pfVar15,pfVar14);
        pfVar14 = afStack_fc + 0x14;
        pfVar15 = &fStack_124;
        fVar16 = *(float *)&this_ptr->field_0x828 * (float)_DAT_005f0785;
        uVar13 = 0x3f800000;
        uVar12 = 0x3f666666;
        uVar11 = 0x3f666666;
        uVar10 = 0;
        uVar9 = 0;
        uVar2 = *(uint *)&this_ptr->field_0x828;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        unkafter_superopt_cpp_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&this_ptr->field_0x828,uVar2,
                   uVar9,fVar16,uVar10,uVar11,uVar12,uVar13,pfVar15,pfVar14);
        pfVar14 = afStack_1a4 + 0xb;
        pfVar15 = afStack_224 + 0x16;
        fVar16 = *(float *)&this_ptr->field_0x828 * (float)_DAT_005f0785;
        uVar13 = 0x3f800000;
        uVar12 = 0x3f666666;
        uVar11 = 0x3f666666;
        uVar10 = 0;
        uVar9 = 0;
        uVar2 = *(uint *)&this_ptr->field_0x828;
        fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.5);
        unkafter_superopt_cpp_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&this_ptr->field_0x828,uVar2,
                   uVar9,fVar16,uVar10,uVar11,uVar12,uVar13,pfVar15,pfVar14);
        afStack_a8[3] = 0.7;
        afStack_a8[2] = 0.0;
        afStack_a8[4] = 0.0;
        core_xform_cpp_FUN_00591530();
        fStack_13c = fStack_148;
        afStack_174[(uint)bVar6 * -2 + 0xf] = afStack_174[(uint)bVar6 * -2 + 0xc];
        this_ptr_00 = this_ptr;
        afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10] =
             afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd];
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10((CDemonActor *)this_ptr_00);
        iStack_2c = 0;
        pfStack_20 = pfStack_30;
        do {
          fStack_38 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_38;
          fStack_44 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fStack_14 = fStack_44;
          fStack_74 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          afStack_84[2] = fStack_38;
          afStack_84[3] = fStack_44;
          fStack_40 = fStack_74;
          fStack_14 = fStack_74;
          core_xform_cpp_FUN_00594380();
          afStack_224[3] = (float)uStack_228;
          afStack_224[(uint)bVar6 * -2 + 4] = afStack_224[(uint)bVar6 * -2];
          afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 5] =
               afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          (afStack_224 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 5)[(uint)bVar6 * -2 + 1] =
               (afStack_224 + (uint)bVar6 * -2 + (uint)bVar6 * -2 + 1)[(uint)bVar6 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10();
          fVar16 = 0.5;
          puVar4 = (uint *)&stack0xfffffd78;
          puVar5 = (uint *)&stack0xfffffd48;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar5 = *puVar4;
            puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
            puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
          }
          afStack_a8[6] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,fVar16);
          afStack_a8[5] = 0.0;
          uStack_8c = 0;
          fStack_3c = afStack_a8[6];
          fStack_14 = afStack_a8[6];
          core_xform_cpp_FUN_00591530();
          fStack_1fc = fStack_160;
          afStack_224[(uint)bVar6 * -2 + 0xb] = afStack_174[(uint)bVar6 * -2 + 6];
          afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xc] =
               afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 7];
          afStack_fc[2] = fStack_1fc + fStack_13c;
          afStack_fc[3] = fStack_1f8 + fStack_138;
          fStack_ec = fStack_1f4 + fStack_134;
          fVar17 = 2.0;
          fStack_154 = fStack_1fc + fStack_13c;
          afStack_174[(uint)bVar6 * -2 + 9] = afStack_fc[(uint)bVar6 * -2 + 3];
          afStack_174[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 10] =
               afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4];
          fVar16 = 1.0;
          fStack_c4 = fStack_154 - fStack_13c;
          fStack_c0 = fStack_150 - fStack_138;
          fStack_bc = fStack_14c - fStack_134;
          fStack_1e4 = fStack_154 - fStack_13c;
          afStack_224[(uint)bVar6 * -2 + 0x11] = afStack_fc[(uint)bVar6 * -2 + 0xf];
          afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x12] =
               afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x10];
          fStack_18 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar16,fVar17);
          fStack_1e4 = fStack_1e4 * fStack_18;
          fStack_1e0 = fStack_1e0 * fStack_18;
          fStack_1dc = fStack_1dc * fStack_18;
          fStack_154 = fStack_154 + *pfStack_20;
          fStack_150 = fStack_150 + pfStack_20[1];
          fStack_14c = fStack_14c + pfStack_20[2];
          pfVar14 = afStack_224 + 0x10;
          pfVar15 = afStack_174 + 8;
          fVar16 = *(float *)&this_ptr->field_0x828 * (float)_DAT_005f078d;
          uVar13 = 0x3f800000;
          uVar12 = 0x3ee66666;
          uVar11 = 0x3ed26e98;
          uVar10 = 0;
          uVar9 = 0;
          uVar2 = *(uint *)&this_ptr->field_0x828;
          fStack_14 = fStack_18;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.2,0.7);
          iVar3 = iStack_2c + 1;
          iStack_2c = iVar3;
          unkafter_superopt_cpp_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&this_ptr->field_0x828,uVar2,
                     uVar9,fVar16,uVar10,uVar11,uVar12,uVar13,pfVar15,pfVar14);
        } while (iVar3 < 5);
      }
    }
    if (0.0 < *(float *)&this_ptr->field_0x840) {
      pfStack_1c = (float *)&this_ptr->field_0x838;
      *(uint *)&this_ptr->field_0x840 = 0;
      pfStack_28 = (float *)&this_ptr->field_0x20;
      iStack_24 = 0;
      do {
        iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar3 != 0) {
          fVar16 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
          fVar8 = (float10)fcos((float10)fVar16);
          fVar7 = (float10)fsin((float10)fVar16);
          fVar8 = fVar8 * (float10)_DAT_005f0795;
          fVar7 = fVar7 * (float10)_DAT_005f0795;
          fVar16 = (float)fVar8;
          fStack_14 = fVar16;
          fStack_34 = (float)fVar7;
          fStack_12c = 0.0;
          afStack_6c[0] = 0.0;
          fStack_130 = fStack_34;
          afStack_6c[1] = (float)(fVar8 * (float10)_DAT_005f079d);
          fStack_70 = (float)(fVar7 * (float10)_DAT_005f079d);
          afStack_120[2] = fStack_70;
          afStack_120[(uint)bVar6 * -2 + 3] = afStack_6c[(uint)bVar6 * -2];
          afStack_120[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 4] =
               afStack_6c[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fStack_128 = fVar16;
          fStack_100 = afStack_120[2] * *pfStack_1c;
          afStack_fc[0] = afStack_120[3] * *pfStack_1c;
          afStack_fc[1] = fStack_110 * *pfStack_1c;
          afStack_d0[0] = afStack_120[2] * *pfStack_1c;
          afStack_fc[(uint)bVar6 * -2 + 0xc] = afStack_fc[(uint)bVar6 * -2];
          afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0xd] =
               afStack_fc[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 1];
          fVar17 = -0.5;
          fVar16 = 0.0;
          fStack_1c0 = _DAT_0265370c;
          afStack_224[(uint)bVar6 * -2 + 0x1a] = *(float *)(&DAT_02653710 + (uint)bVar6 * -8);
          afStack_224[(uint)bVar6 * -2 + (uint)bVar6 * -2 + 0x1b] =
               *(float *)(&DAT_02653714 + (uint)bVar6 * -8 + (uint)bVar6 * -8);
          fStack_1bc = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar16,fVar17);
          fStack_130 = fStack_130 + *pfStack_28;
          fStack_12c = fStack_12c + pfStack_28[1];
          fStack_128 = fStack_128 + pfStack_28[2];
          fStack_14 = fStack_1bc;
          unkafter_superopt_cpp_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,
                     *(float *)&this_ptr->field_0x838 * (float)_DAT_005f07a5,
                     *(uint *)&this_ptr->field_0x838,0,
                     *(float *)&this_ptr->field_0x838 * (float)_DAT_005f0785,0,0x3f4ccccd,0x3f4ccccd
                     ,0x3f800000,afStack_174 + 0x11,afStack_fc + 0xb);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 100);
    }
  }
  return;
}
