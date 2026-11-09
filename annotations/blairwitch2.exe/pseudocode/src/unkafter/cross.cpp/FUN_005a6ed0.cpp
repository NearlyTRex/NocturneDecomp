// Name: unkafter_cross.cpp_FUN_005a6ed0
// Address: 005a6ed0
// Address Range: [[005a6ed0, 005a794e]]
// Convention: unknown
// Signature: void unkafter_cross_cpp_FUN_005a6ed0(CDemonActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkafter_cross_cpp_FUN_005a6ed0(CDemonActor *param_1,float param_2)

{
  float fVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  uint *puVar5;
  uint *puVar6;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStackY_1a04 [1478];
  byte *puVar10;
  CDemonActor *this_ptr;
  uint uVar11;
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
  float afStack_1b4 [4];
  float afStack_1a4 [5];
  float fStack_190;
  float afStack_184 [4];
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
  float afStack_10c [4];
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
  float afStack_b8 [4];
  float afStack_a8 [7];
  uint uStack_8c;
  float fStack_88;
  float afStack_84 [4];
  uint uStack_74;
  float fStack_70;
  float afStack_6c [6];
  float afStack_54 [4];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  float fStack_34;
  float *pfStack_30;
  int iStack_2c;
  float *pfStack_28;
  int iStack_24;
  float *pfStack_20;
  float *pfStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar7 = 0;
  uVar2 = (**(code **)(*(int *)&param_1->field_0x2b0 + 0x9c))
                    (param_1,g_CCharacterClassInfo.name_hash);
  iVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0(uVar2);
  if (iVar3 != 0) {
    iVar3 = (**(code **)(*(int *)(iVar3 + 0x2b0) + 0x114))(iVar3);
    if (iVar3 == 0) {
      fVar4 = *(float *)&param_1[3].field_0x10 + param_2;
      goto LAB_005a6f19;
    }
  }
  fVar4 = *(float *)&param_1[3].field_0x10 - param_2;
LAB_005a6f19:
  *(float *)&param_1[3].field_0x10 = fVar4;
  if (_DAT_005ffe6c < *(float *)&param_1[3].field_0x10) {
    *(float *)&param_1[3].field_0x10 = _DAT_005ffe6c;
  }
  if (*(float *)&param_1[3].field_0x10 < 0.0) {
    *(uint *)&param_1[3].field_0x10 = 0;
  }
  fVar4 = *(float *)&param_1[3].field_0x10 / _DAT_005ffe6c;
  fVar1 = *(float *)&param_1[3].field_0x18 + param_2;
  *(float *)&param_1[3].field_0x18 = fVar1;
  *(float *)&param_1[3].field_0xc = fVar4;
  if (_DAT_005ffe70 <= fVar1) {
    *(uint *)&param_1[3].field_0x18 = 0;
  }
  fVar8 = (float10)fsin(((float10)*(float *)&param_1[3].field_0x18 / (float10)_DAT_005ffe70) *
                        (float10)_DAT_005f0765 * (float10)_DAT_005f0769);
  *(float *)&param_1[3].field_0x14 =
       (float)((float10)*(float *)&param_1[3].field_0xc * (float10)_DAT_005f076d * fVar8 +
              (float10)_DAT_005f0775);
  core_melee_cpp_FUN_004eacf0(param_1,param_2);
  (**(code **)(*(int *)&param_1->field_0x2b0 + 4))(param_1,param_2);
  if (*(int *)&param_1[1].field_0x17c != 1) {
    fVar4 = *(float *)&param_1[3].field_0xc;
    *(float *)&param_1->field_0x2a8 = *(float *)&param_1->field_0x2a8 - param_2;
    if ((0.0 < fVar4) && (*(float *)&param_1->field_0x2a8 <= 0.0)) {
      *(uint *)&param_1->field_0x2a8 = 0x3e19999a;
      iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
      if (iVar3 != 0) {
        core_actor_cpp_CDemonActor_setupRenderState_FUN_004089d0(param_1);
        core_xform_cpp_FUN_00591c10(auStack_258,&DAT_0265370c,&param_1->field_0x30);
        afStack_1b4[0] = 0.0;
        afStack_1b4[1] = 1.3;
        afStack_1b4[2] = 0.0;
        core_xform_cpp_FUN_00591530(afStack_224 + 0x1c,auStack_258);
        puVar10 = auStack_258;
        afStack_6c[2] = 0.5;
        fStack_88 = afStack_1a4[2];
        afStack_84[(uint)bVar7 * -2] = afStack_1a4[(uint)bVar7 * -2 + 3];
        afStack_84[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_1a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
        afStack_6c[3] = 0.7;
        afStack_6c[4] = 0.0;
        core_xform_cpp_FUN_00591530(afStack_6c + 2,puVar10);
        puVar10 = auStack_258;
        afStack_184[2] = 0.0;
        fStack_124 = fStack_190;
        afStack_120[(uint)bVar7 * -2] = afStack_1a4[(uint)bVar7 * -2 + 6];
        afStack_120[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_1a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        afStack_184[1] = 0.7;
        afStack_184[0] = -0.5;
        core_xform_cpp_FUN_00591530(afStack_1a4 + 8,puVar10);
        puVar10 = auStack_258;
        fStack_1cc = fStack_208;
        afStack_224[(uint)bVar7 * -2 + 0x17] = afStack_224[(uint)bVar7 * -2 + 8];
        afStack_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x18] =
             afStack_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 9];
        afStack_10c[0] = 0.0;
        afStack_10c[2] = 0.0;
        afStack_174[2] = _DAT_0265370c;
        afStack_174[(uint)bVar7 * -2 + 3] = *(float *)(&DAT_02653710 + (uint)bVar7 * -8);
        afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
             *(float *)(&DAT_02653714 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
        afStack_10c[1] = 1.0;
        core_xform_cpp_FUN_00591530(afStack_120 + 5,puVar10);
        afStack_1b4[3] = afStack_6c[5];
        afStack_1a4[(uint)bVar7 * -2] = afStack_54[(uint)bVar7 * -2];
        afStack_1a4[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_54[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
        puVar10 = auStack_258;
        afStack_b8[1] = 0.0;
        afStack_b8[2] = 0.0;
        afStack_b8[0] = 0.5;
        fStack_1d8 = afStack_1b4[3] * _DAT_005f077d;
        fStack_1d4 = afStack_1a4[0] * _DAT_005f077d;
        fStack_1d0 = afStack_1a4[1] * _DAT_005f077d;
        afStack_dc[0] = afStack_1b4[3] * _DAT_005f077d;
        afStack_fc[(uint)bVar7 * -2 + 9] = afStack_224[(uint)bVar7 * -2 + 0x14];
        afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
             afStack_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x15];
        core_xform_cpp_FUN_00591530(afStack_fc + 0x11,puVar10);
        afStack_b8[3] = fStack_1f0;
        afStack_a8[(uint)bVar7 * -2] = afStack_224[(uint)bVar7 * -2 + 0xe];
        afStack_a8[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xf];
        puVar10 = &param_1->field_0x20;
        pfStack_30 = (float *)puVar10;
        fStack_e8 = afStack_b8[3] * _DAT_005f077d;
        fStack_e4 = afStack_a8[0] * _DAT_005f077d;
        fStack_e0 = afStack_a8[1] * _DAT_005f077d;
        afStack_184[3] = afStack_b8[3] * _DAT_005f077d;
        afStack_174[(uint)bVar7 * -2] = afStack_fc[(uint)bVar7 * -2 + 6];
        afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] =
             afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
        fStack_88 = fStack_88 + *(float *)puVar10;
        afStack_84[0] = afStack_84[0] + *(float *)&param_1->field_0x24;
        afStack_84[1] = afStack_84[1] + *(float *)&param_1->field_0x28;
        afStack_174[2] = afStack_174[2] + *(float *)puVar10;
        afStack_174[3] = afStack_174[3] + *(float *)&param_1->field_0x24;
        fStack_164 = fStack_164 + *(float *)&param_1->field_0x28;
        fStack_124 = fStack_124 + *(float *)puVar10;
        afStack_120[0] = afStack_120[0] + *(float *)&param_1->field_0x24;
        afStack_120[1] = afStack_120[1] + *(float *)&param_1->field_0x28;
        fStack_1cc = fStack_1cc + *(float *)puVar10;
        fStack_1c8 = fStack_1c8 + *(float *)&param_1->field_0x24;
        fStack_1c4 = fStack_1c4 + *(float *)&param_1->field_0x28;
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60
                                     (0x3f000000,0x3fc00000,*(uint *)&param_1[3].field_0xc,0,
                                      *(float *)&param_1[3].field_0xc * (float)_DAT_005f0785,0,
                                      0x3f666666,0x3f666666,0x3f800000,&fStack_88,afStack_224 + 0x1f
                                      ,0,0);
        unkafter_superopt_cpp_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&param_1[3].field_0xc);
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60
                                     (0x3f000000,0x3fc00000,*(uint *)&param_1[3].field_0xc,0,
                                      *(float *)&param_1[3].field_0xc * (float)_DAT_005f0785,0,
                                      0x3f666666,0x3f666666,0x3f800000,afStack_174 + 2,
                                      afStack_fc + 8,0,0);
        unkafter_superopt_cpp_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&param_1[3].field_0xc);
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60
                                     (0x3f000000,0x3fc00000,*(uint *)&param_1[3].field_0xc,0,
                                      *(float *)&param_1[3].field_0xc * (float)_DAT_005f0785,0,
                                      0x3f666666,0x3f666666,0x3f800000,&fStack_124,afStack_fc + 0x14
                                      ,0,0);
        unkafter_superopt_cpp_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&param_1[3].field_0xc);
        fStack_14 = (float)core_actor_cpp_FUN_0040cf60
                                     (0x3f000000,0x3fc00000,*(uint *)&param_1[3].field_0xc,0,
                                      *(float *)&param_1[3].field_0xc * (float)_DAT_005f0785,0,
                                      0x3f666666,0x3f666666,0x3f800000,afStack_224 + 0x16,
                                      afStack_1a4 + 0xb,0,0);
        unkafter_superopt_cpp_FUN_005a8300
                  (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&param_1[3].field_0xc);
        afStack_a8[3] = 0.7;
        afStack_a8[2] = 0.0;
        afStack_a8[4] = 0.0;
        core_xform_cpp_FUN_00591530(afStack_a8 + 2,auStack_258);
        fStack_13c = fStack_148;
        afStack_174[(uint)bVar7 * -2 + 0xf] = afStack_174[(uint)bVar7 * -2 + 0xc];
        this_ptr = param_1;
        afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10] =
             afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd];
        core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408a10(this_ptr);
        iStack_2c = 0;
        pfStack_20 = pfStack_30;
        do {
          uStack_38 = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
          fStack_14 = (float)uStack_38;
          uStack_44 = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
          fStack_14 = (float)uStack_44;
          uStack_74 = core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
          afStack_84[2] = (float)uStack_38;
          afStack_84[3] = (float)uStack_44;
          uStack_40 = uStack_74;
          fStack_14 = (float)uStack_74;
          core_xform_cpp_FUN_00594380(afStack_84 + 2);
          afStack_224[3] = (float)uStack_228;
          afStack_224[(uint)bVar7 * -2 + 4] = afStack_224[(uint)bVar7 * -2];
          afStack_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 5] =
               afStack_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          (afStack_224 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 5)[(uint)bVar7 * -2 + 1] =
               (afStack_224 + (uint)bVar7 * -2 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1];
          core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(afStack_224 + 3);
          puVar5 = (uint *)&stack0xfffffd78;
          puVar6 = (uint *)&stack0xfffffd48;
          for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
            *puVar6 = *puVar5;
            puVar5 = puVar5 + (uint)bVar7 * -2 + 1;
            puVar6 = puVar6 + (uint)bVar7 * -2 + 1;
          }
          afStack_a8[6] = (float)core_actor_cpp_FUN_0040cf60(0x3e4ccccd,0x3f000000,&stack0xfffffd48)
          ;
          afStack_a8[5] = 0.0;
          uStack_8c = 0;
          uStack_3c = afStack_a8[6];
          fStack_14 = afStack_a8[6];
          core_xform_cpp_FUN_00591530(afStack_a8 + 5);
          fStack_1fc = fStack_160;
          afStack_224[(uint)bVar7 * -2 + 0xb] = afStack_174[(uint)bVar7 * -2 + 6];
          afStack_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xc] =
               afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 7];
          afStack_fc[2] = fStack_1fc + fStack_13c;
          afStack_fc[3] = fStack_1f8 + fStack_138;
          fStack_ec = fStack_1f4 + fStack_134;
          uVar11 = 0x40000000;
          fStack_154 = fStack_1fc + fStack_13c;
          afStack_174[(uint)bVar7 * -2 + 9] = afStack_fc[(uint)bVar7 * -2 + 3];
          afStack_174[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 10] =
               afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4];
          uVar2 = 0x3f800000;
          fStack_c4 = fStack_154 - fStack_13c;
          fStack_c0 = fStack_150 - fStack_138;
          fStack_bc = fStack_14c - fStack_134;
          fStack_1e4 = fStack_154 - fStack_13c;
          afStack_224[(uint)bVar7 * -2 + 0x11] = afStack_fc[(uint)bVar7 * -2 + 0xf];
          afStack_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x12] =
               afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x10];
          fStack_18 = (float)core_actor_cpp_FUN_0040cf60(uVar2,uVar11);
          fStack_1e4 = fStack_1e4 * fStack_18;
          fStack_1e0 = fStack_1e0 * fStack_18;
          fStack_1dc = fStack_1dc * fStack_18;
          fStack_154 = fStack_154 + *pfStack_20;
          fStack_150 = fStack_150 + pfStack_20[1];
          fStack_14c = fStack_14c + pfStack_20[2];
          fStack_14 = fStack_18;
          fStack_14 = (float)core_actor_cpp_FUN_0040cf60
                                       (0x3e4ccccd,0x3f333333,*(uint *)&param_1[3].field_0xc,0
                                        ,*(float *)&param_1[3].field_0xc * (float)_DAT_005f078d,0,
                                        0x3ed26e98,0x3ee66666,0x3f800000,afStack_174 + 8,
                                        afStack_224 + 0x10,0,0);
          iVar3 = iStack_2c + 1;
          iStack_2c = iVar3;
          unkafter_superopt_cpp_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,fStack_14 * *(float *)&param_1[3].field_0xc);
        } while (iVar3 < 5);
      }
    }
    if (0.0 < *(float *)&param_1[3].field_0x24) {
      pfStack_1c = (float *)&param_1[3].field_0x1c;
      *(uint *)&param_1[3].field_0x24 = 0;
      pfStack_28 = (float *)&param_1->field_0x20;
      iStack_24 = 0;
      do {
        iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar3 != 0) {
          fVar4 = (float)core_actor_cpp_FUN_0040cf60(0,0x40c90fdb);
          fVar9 = (float10)fcos((float10)fVar4);
          fVar8 = (float10)fsin((float10)fVar4);
          fVar9 = fVar9 * (float10)_DAT_005f0795;
          fVar8 = fVar8 * (float10)_DAT_005f0795;
          fVar4 = (float)fVar9;
          fStack_14 = fVar4;
          fStack_34 = (float)fVar8;
          fStack_12c = 0.0;
          afStack_6c[0] = 0.0;
          fStack_130 = fStack_34;
          afStack_6c[1] = (float)(fVar9 * (float10)_DAT_005f079d);
          fStack_70 = (float)(fVar8 * (float10)_DAT_005f079d);
          afStack_120[2] = fStack_70;
          afStack_120[(uint)bVar7 * -2 + 3] = afStack_6c[(uint)bVar7 * -2];
          afStack_120[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 4] =
               afStack_6c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          fStack_128 = fVar4;
          afStack_10c[3] = afStack_120[2] * *pfStack_1c;
          afStack_fc[0] = afStack_120[3] * *pfStack_1c;
          afStack_fc[1] = fStack_110 * *pfStack_1c;
          afStack_d0[0] = afStack_120[2] * *pfStack_1c;
          afStack_fc[(uint)bVar7 * -2 + 0xc] = afStack_fc[(uint)bVar7 * -2];
          afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0xd] =
               afStack_fc[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1];
          uVar11 = 0xbf000000;
          uVar2 = 0;
          fStack_1c0 = _DAT_0265370c;
          afStack_224[(uint)bVar7 * -2 + 0x1a] = *(float *)(&DAT_02653710 + (uint)bVar7 * -8);
          afStack_224[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x1b] =
               *(float *)(&DAT_02653714 + (uint)bVar7 * -8 + (uint)bVar7 * -8);
          fStack_1bc = (float)core_actor_cpp_FUN_0040cf60(uVar2,uVar11);
          fStack_130 = fStack_130 + *pfStack_28;
          fStack_12c = fStack_12c + pfStack_28[1];
          fStack_128 = fStack_128 + pfStack_28[2];
          fStack_14 = fStack_1bc;
          unkafter_superopt_cpp_FUN_005a8300
                    (g_CSimpleParticleSystemPtr,
                     *(float *)&param_1[3].field_0x1c * (float)_DAT_005f07a5,
                     *(uint *)&param_1[3].field_0x1c,0,
                     *(float *)&param_1[3].field_0x1c * (float)_DAT_005f0785,0,0x3f4ccccd,0x3f4ccccd
                     ,0x3f800000,afStack_174 + 0x11,afStack_fc + 0xb,afStack_224 + 0x19,0);
        }
        iStack_24 = iStack_24 + 1;
      } while (iStack_24 < 100);
    }
  }
  return;
}
