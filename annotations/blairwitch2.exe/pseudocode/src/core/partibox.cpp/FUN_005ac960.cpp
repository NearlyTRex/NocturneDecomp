// Name: core_partibox.cpp_FUN_005ac960
// Address: 005ac960
// Address Range: [[005ac960, 005ad2f3]]
// Convention: unknown
// Signature: void core_partibox_cpp_FUN_005ac960(CBoxActor *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_partibox_cpp_FUN_005ac960(CBoxActor *param_1,float param_2)

{
  byte *puVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float afStackY_1158 [1001];
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  float *pfVar15;
  uint uStack_17c;
  uint uStack_178;
  uint uStack_174;
  uint uStack_170;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  uint uStack_158;
  float fStack_154;
  uint uStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  uint uStack_13c;
  uint uStack_138;
  uint uStack_134;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint uStack_100;
  float fStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  uint uStack_ec;
  uint uStack_e8;
  float fStack_e4;
  float fStack_e0;
  uint uStack_dc;
  float fStack_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b0;
  uint uStack_a4;
  uint uStack_a0;
  float fStack_9c;
  uint uStack_98;
  float fStack_94;
  uint uStack_90;
  uint uStack_8c;
  uint uStack_88;
  float fStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  float fStack_3c;
  uint uStack_38;
  uint uStack_34;
  float fStack_30;
  byte *puStack_2c;
  byte *puStack_28;
  byte *puStack_24;
  uint uStack_20;
  byte *puStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar5 = 0;
  core_boxactor_cpp_FUN_0041c090(param_1,param_2);
  unkafter_superopt_cpp_FUN_005a8180();
  unkafter_superopt_cpp_FUN_005a8180();
  unkafter_superopt_cpp_FUN_005a8180();
  unkafter_superopt_cpp_FUN_005a8180();
  fVar4 = *(float *)&param_1->field_0x2a8 - param_2;
  *(float *)&param_1->field_0x2a8 = fVar4;
  if (fVar4 <= 0.0) {
    *(uint *)&param_1->field_0x2a8 = 0x3d4ccccd;
    iVar3 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130
                      ((CComplexPolygon *)&param_1->field_0x154);
    if (iVar3 != 0) {
      iVar3 = 0;
      do {
        fVar4 = (float)core_actor_cpp_FUN_0040cf60();
        iVar2 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar2 != 0) {
          fVar6 = (float10)fcos((float10)fVar4);
          fVar7 = (float10)fsin((float10)fVar4);
          uStack_dc = 0;
          fStack_d8 = (float)(fVar6 * (float10)_DAT_005f0ea3);
          fStack_e0 = (float)(fVar7 * (float10)_DAT_005f0ea3);
          fStack_3c = fStack_d8;
          fVar4 = (float)core_actor_cpp_FUN_0040cf60();
          if (fVar4 <= (float)_DAT_005f0ec3) {
            if (&stack0x00000000 != (byte *)0x2653870) {
              uStack_164 = _DAT_0265370c;
              uStack_160 = _DAT_02653710;
              uStack_15c = _DAT_02653714;
            }
          }
          else {
            uStack_124 = 0x3f000000;
            uStack_120 = 0;
            uStack_128 = 0;
            if (&stack0xfffffe9c != &stack0xfffffed8) {
              uStack_15c = 0;
              uStack_164 = 0;
              uStack_160 = 0x3f000000;
            }
          }
          uStack_10c = 0x3fc00000;
          uStack_110 = 0;
          uStack_108 = 0;
          unkafter_superopt_cpp_FUN_005a8300
                    (&param_1->field_0x154,0x3f800000,0x3f800000,0,0x3f000000,0,0x3f07ae14,
                     0x3f800000,0x3eeb851f,&stack0xffffff20,&stack0xfffffe9c);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x14);
    }
    iVar3 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130
                      ((CComplexPolygon *)&param_1->field_0x198);
    if (iVar3 != 0) {
      iVar3 = 0;
      puStack_28 = &param_1->field_0x198;
      do {
        iVar2 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar2 != 0) {
          fStack_84 = (float)core_actor_cpp_FUN_0040cf60();
          fStack_84 = fStack_84 * _DAT_005f0eab;
          uStack_8c = 0;
          uStack_88 = 0;
          fStack_3c = fStack_84;
          core_actor_cpp_FUN_00408cf0();
          uStack_170 = uStack_b0;
          *(uint *)((int)&stack0xfffffe94 + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffff48 + ((uint)bVar5 * -2 + 3) * 4);
          *(uint *)(&stack0xfffffe98 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
               *(uint *)
                ((int)&stack0xffffff48 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 4) * 4);
          fVar4 = (float)core_actor_cpp_FUN_0040cf60();
          if (fVar4 <= (float)_DAT_005f0ec3) {
            if (&stack0x00000000 != (byte *)0x26537e0) {
              uStack_d4 = _DAT_0265370c;
              uStack_d0 = _DAT_02653710;
              uStack_cc = _DAT_02653714;
            }
          }
          else {
            uStack_c0 = 0;
            uStack_c8 = 0;
            uStack_c4 = 0x3f800000;
            if (&stack0xffffff2c != &stack0xffffff38) {
              uStack_d0 = 0x3f800000;
              uStack_cc = 0;
              uStack_d4 = 0;
            }
          }
          uStack_f8 = 0;
          uStack_f4 = 0x3fc00000;
          uStack_f0 = 0;
          unkafter_superopt_cpp_FUN_005a8300
                    (puStack_28,0x40400000,0x3f800000,0,0x3f000000,0,0x3f07ae14,0x3f800000,
                     0x3eeb851f,&stack0xfffffe90,&stack0xffffff2c);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 7);
    }
    iVar3 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130
                      ((CComplexPolygon *)&param_1->field_0x1dc);
    if (iVar3 != 0) {
      iStack_18 = 0;
      puStack_24 = &param_1->field_0x1dc;
      do {
        iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_54 = (float)core_actor_cpp_FUN_0040cf60();
          fStack_3c = fStack_54 * _DAT_005f0eaf;
          uStack_20 = core_actor_cpp_FUN_0040cf60();
          uStack_a4 = core_actor_cpp_FUN_0040cf60();
          uStack_50 = uStack_20;
          uStack_a0 = uStack_20;
          fStack_9c = fStack_3c;
          uStack_48 = uStack_a4;
          core_actor_cpp_FUN_00408cf0();
          fVar4 = fStack_54 * (float)_DAT_005f0eb3;
          uStack_134 = uStack_bc;
          *(uint *)((int)&stack0xfffffed0 + (uint)bVar5 * 0xfffffffe * 4) =
               *(uint *)((int)&stack0xffffff48 + (uint)bVar5 * 0xfffffffe * 4);
          *(uint *)((int)&stack0xfffffed0 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4) =
               *(uint *)
                ((int)&stack0xffffff48 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
          fStack_3c = fVar4;
          uStack_104 = core_actor_cpp_FUN_0040cf60();
          uStack_100 = 0;
          fStack_fc = fStack_3c;
          uStack_178 = core_actor_cpp_FUN_0040cf60();
          uStack_17c = 0;
          uStack_174 = 0;
          uStack_4c = uStack_178;
          unkafter_superopt_cpp_FUN_005a8300
                    (puStack_24,0x40200000,0x3f800000,0,0x3e99999a,0,0x3f000000,0x3f000000,
                     0x3f0ccccd,&stack0xfffffecc,&stack0xfffffefc);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 0x11);
    }
  }
  fVar4 = *(float *)(param_1 + 1);
  *(float *)(param_1 + 1) = fVar4 - param_2;
  if (fVar4 - param_2 <= 0.0) {
    puStack_2c = &param_1->field_0x220;
    iVar3 = shape_superopt_cpp_CComplexPolygon_getMaterialId_FUN_005a8130
                      ((CComplexPolygon *)puStack_2c);
    if (iVar3 != 0) {
      *(uint *)(param_1 + 1) = 0x3d4ccccd;
      core_actor_cpp_FUN_0040cf60();
      uStack_20 = core_actor_cpp_FUN_0040cf60();
      uStack_7c = core_actor_cpp_FUN_0040cf60();
      uStack_40 = uStack_20;
      uStack_80 = 0;
      uStack_78 = uStack_20;
      uStack_44 = uStack_7c;
      core_actor_cpp_FUN_00408cf0();
      pfVar15 = &stack0xfffffeb4;
      puVar14 = &stack0xffffff68;
      uVar13 = 0x3f28f5c3;
      uVar12 = 0x3f19999a;
      uVar11 = 0x3f19999a;
      uVar10 = 0;
      uVar9 = 0x3f000000;
      uVar8 = 0;
      uStack_98 = uStack_11c;
      (&stack0xffffff6c)[(uint)bVar5 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffee8 + (uint)bVar5 * 0xfffffffe * 4);
      puVar1 = puStack_2c;
      (&stack0xffffff6c)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
           (float)*(uint *)
                   ((int)&stack0xfffffee8 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
      fStack_14c = 0.0;
      fStack_148 = -0.1;
      fStack_144 = 0.0;
      unkafter_superopt_cpp_FUN_005a8300
                (puStack_2c,0x3f800000,0x3f000000,uVar8,uVar9,uVar10,uVar11,uVar12,uVar13,puVar14,
                 pfVar15);
      iStack_14 = 0;
      puStack_1c = puVar1;
      do {
        iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_3c = (float)core_actor_cpp_FUN_0040cf60();
          uStack_20 = core_actor_cpp_FUN_0040cf60();
          uStack_ec = core_actor_cpp_FUN_0040cf60();
          uStack_34 = uStack_20;
          fStack_30 = fStack_3c;
          uStack_e8 = uStack_20;
          fStack_e4 = fStack_3c;
          uStack_38 = uStack_ec;
          core_actor_cpp_FUN_00408cf0();
          uStack_158 = uStack_74;
          (&stack0xfffffeac)[(uint)bVar5 * 0xfffffffe] =
               (float)*(uint *)((int)&stack0xffffff90 + (uint)bVar5 * 0xfffffffe * 4);
          (&stack0xfffffeac)[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               (float)*(uint *)
                       ((int)&stack0xffffff90 + ((uint)bVar5 * -2 + (uint)bVar5 * -2 + 1) * 4);
          if (&stack0xffffff68 != &stack0xfffffea8) {
            uStack_98 = uStack_158;
            fStack_94 = fStack_154;
            uStack_90 = uStack_150;
          }
          uStack_13c = 0x40000000;
          uStack_138 = 0;
          fStack_140 = 0.0;
          if (&stack0xfffffeb4 != &stack0xfffffec0) {
            fStack_148 = 2.0;
            fStack_144 = 0.0;
            fStack_14c = 0.0;
          }
          uStack_68 = 0;
          uStack_64 = 0xc0a00000;
          uStack_60 = 0;
          uVar8 = core_actor_cpp_FUN_0040cf60
                            (0x40000000,0x40800000,0,0x3f19999a,0x3f19999a,0x3f28f5c3,
                             &stack0xffffff68,&stack0xfffffeb4);
          uVar8 = core_actor_cpp_FUN_0040cf60(0x3f000000,0x3f800000,0x3f000000,0,uVar8);
          unkafter_superopt_cpp_FUN_005a8300(puStack_1c,uVar8);
          fStack_14c = fStack_14c * _DAT_005f0ebb;
          fStack_148 = fStack_148 * _DAT_005f0ebb;
          fStack_144 = fStack_144 * _DAT_005f0ebb;
          fVar4 = (float)core_actor_cpp_FUN_0040cf60();
          if ((float)_DAT_005f0ecb < fVar4) {
            unkafter_superopt_cpp_FUN_005a8300
                      (puStack_1c,0x3f000000,0x3f000000,0,0x3e4ccccd,0,0x3f19999a,0x3f19999a,
                       0x3f28f5c3,&stack0xffffff68,&stack0xfffffeb4);
          }
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < 10);
    }
  }
  return;
}
