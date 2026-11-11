// Name: core_partibox.cpp_CParticleBox_process_FUN_005ac960
// Address: 005ac960
// Address Range: [[005ac960, 005ad2f3]]
// Convention: __cdecl
// Signature: void __cdecl core_partibox_cpp_CParticleBox_process_FUN_005ac960(CParticleBox *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_partibox_cpp_CParticleBox_process_FUN_005ac960(CParticleBox *this_ptr,float delta_time)

{
  CSimpleParticleSystem *pCVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  byte bVar6;
  float10 fVar7;
  float10 fVar8;
  float afStackY_1158 [1001];
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  float *pfVar15;
  float *pfVar16;
  uint *puVar17;
  float max_value;
  uint uVar18;
  float fStack_180;
  uint uStack_17c;
  float fStack_178;
  uint uStack_174;
  float fStack_170;
  uint uStack_164;
  uint uStack_160;
  uint uStack_15c;
  float fStack_158;
  float fStack_154;
  uint uStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  uint uStack_13c;
  uint uStack_138;
  float fStack_134;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  float fStack_11c;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  float afStack_104 [3];
  uint uStack_f8;
  uint uStack_f4;
  uint uStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float afStack_e0 [3];
  uint uStack_d4;
  uint uStack_d0;
  uint uStack_cc;
  uint uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  float fStack_bc;
  float afStack_b8 [5];
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float afStack_94 [5];
  uint uStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  uint auStack_70 [2];
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  CSimpleParticleSystem *pCStack_2c;
  CSimpleParticleSystem *pCStack_28;
  CSimpleParticleSystem *pCStack_24;
  float fStack_20;
  CSimpleParticleSystem *pCStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar6 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_0041c090(&this_ptr->base,delta_time);
  pCVar1 = (this_ptr->base).base.particle_systems;
  unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCVar1,delta_time);
  unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.particle_systems + 1,delta_time);
  unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.particle_systems + 2,delta_time);
  unkafter_superopt_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.particle_systems + 3,delta_time);
  fVar4 = *(float *)&(this_ptr->base).base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.field_0x2a8 = fVar4;
  if (fVar4 <= 0.0) {
    *(uint *)&(this_ptr->base).base.field_0x2a8 = 0x3d4ccccd;
    iVar3 = unkafter_superopt_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCVar1);
    if (iVar3 != 0) {
      iVar3 = 0;
      do {
        fStack_180 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        iVar2 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar2 != 0) {
          fVar7 = (float10)fcos((float10)fStack_180);
          fVar8 = (float10)fsin((float10)fStack_180);
          afStack_e0[1] = 0.0;
          afStack_e0[2] = (float)(fVar7 * (float10)_DAT_005f0ea3);
          afStack_e0[0] = (float)(fVar8 * (float10)_DAT_005f0ea3);
          fStack_3c = afStack_e0[2];
          fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
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
          unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCVar1,0x3f800000,0x3f800000,0,0x3f000000,0,0x3f07ae14,0x3f800000,0x3eeb851f,
                     afStack_e0,&stack0xfffffe9c,&uStack_110,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x14);
    }
    pCVar1 = (this_ptr->base).base.particle_systems + 1;
    iVar3 = unkafter_superopt_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCVar1);
    if (iVar3 != 0) {
      iVar3 = 0;
      pCStack_28 = pCVar1;
      do {
        iVar2 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar2 != 0) {
          afStack_94[4] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-1.0,1.0);
          afStack_94[4] = afStack_94[4] * _DAT_005f0eab;
          afStack_94[2] = 0.0;
          afStack_94[3] = 0.0;
          fStack_3c = afStack_94[4];
          core_actor_cpp_FUN_00408cf0();
          fVar5 = 1.0;
          fVar4 = 0.0;
          fStack_170 = afStack_b8[2];
          *(float *)(&stack0xfffffe94 + (uint)bVar6 * -8) = afStack_b8[(uint)bVar6 * 0xfffffffe + 3]
          ;
          *(float *)(&stack0xfffffe98 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               afStack_b8[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 4];
          fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar4,fVar5);
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
            if (&uStack_d4 != &uStack_c8) {
              uStack_d0 = 0x3f800000;
              uStack_cc = 0;
              uStack_d4 = 0;
            }
          }
          uStack_f8 = 0;
          uStack_f4 = 0x3fc00000;
          uStack_f0 = 0;
          unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_28,0x40400000,0x3f800000,0,0x3f000000,0,0x3f07ae14,0x3f800000,
                     0x3eeb851f,&stack0xfffffe90,&uStack_d4,&uStack_f8,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 7);
    }
    pCVar1 = (this_ptr->base).base.particle_systems + 2;
    iVar3 = unkafter_superopt_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCVar1);
    if (iVar3 != 0) {
      iStack_18 = 0;
      pCStack_24 = pCVar1;
      do {
        iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_54 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-1.0,1.0);
          fStack_3c = fStack_54 * _DAT_005f0eaf;
          fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
          fStack_a4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
          fStack_50 = fStack_20;
          fStack_a0 = fStack_20;
          fStack_9c = fStack_3c;
          fStack_48 = fStack_a4;
          core_actor_cpp_FUN_00408cf0();
          fVar4 = fStack_54 * (float)_DAT_005f0eb3;
          max_value = -0.5;
          fVar5 = 0.3;
          fStack_134 = fStack_bc;
          *(float *)((int)&stack0xfffffed0 + (uint)bVar6 * 0xfffffffe * 4) =
               afStack_b8[(uint)bVar6 * 0xfffffffe];
          *(float *)(&stack0xfffffed4 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               afStack_b8[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
          fStack_3c = fVar4;
          afStack_104[0] = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar5,max_value);
          afStack_104[1] = 0.0;
          afStack_104[2] = fStack_3c;
          fStack_178 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-4.0,-4.5);
          uStack_17c = 0;
          uStack_174 = 0;
          fStack_4c = fStack_178;
          unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_24,0x40200000,0x3f800000,0,0x3e99999a,0,0x3f000000,0x3f000000,
                     0x3f0ccccd,&stack0xfffffecc,afStack_104,&stack0xfffffe84,0);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 0x11);
    }
  }
  fVar4 = this_ptr->emit_timer - delta_time;
  this_ptr->emit_timer = fVar4;
  if (fVar4 <= 0.0) {
    pCStack_2c = (this_ptr->base).base.particle_systems + 3;
    iVar3 = unkafter_superopt_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCStack_2c);
    if (iVar3 != 0) {
      this_ptr->emit_timer = 0.05;
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-1.0,1.0);
      fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-4.5,4.5);
      fStack_7c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,-10.0);
      fStack_40 = fStack_20;
      uStack_80 = 0;
      fStack_78 = fStack_20;
      fStack_44 = fStack_7c;
      core_actor_cpp_FUN_00408cf0();
      uVar18 = 0;
      puVar17 = (uint *)0x0;
      pfVar16 = &stack0xfffffeb4;
      pfVar15 = &fStack_98;
      uVar14 = 0x3f28f5c3;
      uVar13 = 0x3f19999a;
      uVar12 = 0x3f19999a;
      uVar11 = 0;
      uVar10 = 0x3f000000;
      uVar9 = 0;
      fStack_98 = fStack_11c;
      afStack_94[(uint)bVar6 * 0xfffffffe] =
           (float)*(uint *)((int)&stack0xfffffee8 + (uint)bVar6 * 0xfffffffe * 4);
      pCVar1 = pCStack_2c;
      afStack_94[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1] =
           (float)*(uint *)(&stack0xfffffeec + (uint)bVar6 * -8 + (uint)bVar6 * -8);
      fStack_14c = 0.0;
      fStack_148 = -0.1;
      fStack_144 = 0.0;
      unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                (pCStack_2c,0x3f800000,0x3f000000,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,pfVar15,
                 pfVar16,puVar17,uVar18);
      iStack_14 = 0;
      pCStack_1c = pCVar1;
      do {
        iVar3 = unkaddr_005a7eb0_cpp_FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-4.0,4.0);
          fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.8,-6.2);
          fStack_ec = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.6,0.8);
          fStack_34 = fStack_20;
          fStack_30 = fStack_3c;
          fStack_e8 = fStack_20;
          fStack_e4 = fStack_3c;
          fStack_38 = fStack_ec;
          core_actor_cpp_FUN_00408cf0();
          fStack_158 = fStack_74;
          (&stack0xfffffeac)[(uint)bVar6 * 0xfffffffe] = (float)auStack_70[(uint)bVar6 * 0xfffffffe]
          ;
          *(uint *)((int)&stack0xfffffeb0 + (uint)bVar6 * -8 + (uint)bVar6 * -8) =
               auStack_70[(uint)bVar6 * 0xfffffffe + (uint)bVar6 * 0xfffffffe + 1];
          if (&fStack_98 != &stack0xfffffea8) {
            fStack_98 = fStack_158;
            afStack_94[0] = fStack_154;
            afStack_94[1] = (float)uStack_150;
          }
          uStack_13c = 0x40000000;
          uStack_138 = 0;
          fStack_140 = 0.0;
          if (&stack0xfffffeb4 != &stack0xfffffec0) {
            fStack_148 = 2.0;
            fStack_144 = 0.0;
            fStack_14c = 0.0;
          }
          uVar18 = 2;
          puVar17 = &uStack_68;
          pfVar16 = &stack0xfffffeb4;
          pfVar15 = &fStack_98;
          uVar14 = 0x3f28f5c3;
          uVar13 = 0x3f19999a;
          uVar12 = 0x3f19999a;
          uVar11 = 0;
          uStack_68 = 0;
          uStack_64 = 0xc0a00000;
          uStack_60 = 0;
          fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,4.0);
          uVar10 = 0;
          uVar9 = 0x3f000000;
          fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.0);
          unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_1c,fVar5,uVar9,uVar10,fVar4,uVar11,uVar12,uVar13,uVar14,pfVar15,pfVar16
                     ,puVar17,uVar18);
          fStack_14c = fStack_14c * _DAT_005f0ebb;
          fStack_148 = fStack_148 * _DAT_005f0ebb;
          fStack_144 = fStack_144 * _DAT_005f0ebb;
          fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
          if ((float)_DAT_005f0ecb < fVar4) {
            unkafter_superopt_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                      (pCStack_1c,0x3f000000,0x3f000000,0,0x3e4ccccd,0,0x3f19999a,0x3f19999a,
                       0x3f28f5c3,&fStack_98,&stack0xfffffeb4,&uStack_68,0);
          }
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < 10);
    }
  }
  return;
}
