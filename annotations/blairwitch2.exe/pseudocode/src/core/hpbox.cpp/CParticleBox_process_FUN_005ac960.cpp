// Name: core_hpbox.cpp_CParticleBox_process_FUN_005ac960
// Address: 005ac960
// Address Range: [[005ac960, 005ad2f3]]
// Convention: __cdecl
// Signature: void __cdecl core_hpbox_cpp_CParticleBox_process_FUN_005ac960(CParticleBox *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_hpbox_cpp_CParticleBox_process_FUN_005ac960(CParticleBox *this_ptr,float delta_time)

{
  CSimpleParticleSystem *pCVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  float10 fVar5;
  float10 fVar6;
  float afStackY_1158 [1001];
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float green;
  float fVar12;
  float blue;
  CVector3f *pCVar13;
  CVector3f *pCVar14;
  CVector3f *pCVar15;
  float fStack_180;
  CVector3f CStack_17c;
  CVector3f CStack_170;
  CVector3f CStack_164;
  CVector3f CStack_158;
  CVector3f CStack_14c;
  CVector3f CStack_140;
  CVector3f CStack_134;
  CVector3f CStack_128;
  CVector3f CStack_11c;
  CVector3f CStack_110;
  CVector3f CStack_104;
  CVector3f CStack_f8;
  CVector3f CStack_ec;
  CVector3f CStack_e0;
  CVector3f CStack_d4;
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
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
  
  bVar4 = 0;
  core_boxactor_cpp_CBoxActor_process_FUN_0041c090(&this_ptr->base,delta_time);
  pCVar1 = (this_ptr->base).base.particle_systems;
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180(pCVar1,delta_time);
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.particle_systems + 1,delta_time);
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.particle_systems + 2,delta_time);
  core_bwspart_cpp_CSimpleParticleSystem_process_FUN_005a8180
            ((this_ptr->base).base.particle_systems + 3,delta_time);
  fVar7 = *(float *)&(this_ptr->base).base.field_0x2a8 - delta_time;
  *(float *)&(this_ptr->base).base.field_0x2a8 = fVar7;
  if (fVar7 <= 0.0) {
    *(uint *)&(this_ptr->base).base.field_0x2a8 = 0x3d4ccccd;
    iVar3 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCVar1);
    if (iVar3 != 0) {
      iVar3 = 0;
      do {
        fStack_180 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
        iVar2 = core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0();
        if (iVar2 != 0) {
          fVar5 = (float10)fcos((float10)fStack_180);
          fVar6 = (float10)fsin((float10)fStack_180);
          CStack_e0.y = 0.0;
          CStack_e0.z = (float)(fVar5 * (float10)10);
          CStack_e0.x = (float)(fVar6 * (float10)10);
          fStack_3c = CStack_e0.z;
          fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
          if (fVar7 <= (float)0.5) {
            if ((int *)&stack0x00000000 != g_VisibleWaterTilesX + 0x2c) {
              CStack_164.x = g_ZeroVector.x;
              CStack_164.y = g_ZeroVector.y;
              CStack_164.z = g_ZeroVector.z;
            }
          }
          else {
            CStack_128.y = 0.5;
            CStack_128.z = 0.0;
            CStack_128.x = 0.0;
            if (&CStack_164 != &CStack_128) {
              CStack_164.z = 0.0;
              CStack_164.x = 0.0;
              CStack_164.y = 0.5;
            }
          }
          CStack_110.y = 1.5;
          CStack_110.x = 0.0;
          CStack_110.z = 0.0;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCVar1,1.0,1.0,0.0,0.5,0.0,0.53,1.0,0.46,&CStack_e0,&CStack_164,&CStack_110,0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x14);
    }
    pCVar1 = (this_ptr->base).base.particle_systems + 1;
    iVar3 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCVar1);
    if (iVar3 != 0) {
      iVar3 = 0;
      pCStack_28 = pCVar1;
      do {
        iVar2 = core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0();
        if (iVar2 != 0) {
          CStack_8c.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-1.0,1.0);
          CStack_8c.z = CStack_8c.z * 5.0f;
          CStack_8c.x = 0.0;
          CStack_8c.y = 0.0;
          fStack_3c = CStack_8c.z;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                    ((CDemonActor *)this_ptr,&CStack_8c,&CStack_b0);
          fVar8 = 1.0;
          fVar7 = 0.0;
          CStack_170.x = CStack_b0.x;
          *(uint *)((int)&CStack_170 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&CStack_170 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar7,fVar8);
          if (fVar7 <= (float)0.5) {
            if ((int *)&stack0x00000000 != g_VisibleWaterTilesX + 8) {
              CStack_d4.x = g_ZeroVector.x;
              CStack_d4.y = g_ZeroVector.y;
              CStack_d4.z = g_ZeroVector.z;
            }
          }
          else {
            CStack_c8.z = 0.0;
            CStack_c8.x = 0.0;
            CStack_c8.y = 1.0;
            if (&CStack_d4 != &CStack_c8) {
              CStack_d4.y = 1.0;
              CStack_d4.z = 0.0;
              CStack_d4.x = 0.0;
            }
          }
          CStack_f8.x = 0.0;
          CStack_f8.y = 1.5;
          CStack_f8.z = 0.0;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_28,3.0,1.0,0.0,0.5,0.0,0.53,1.0,0.46,&CStack_170,&CStack_d4,&CStack_f8,
                     0);
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 7);
    }
    pCVar1 = (this_ptr->base).base.particle_systems + 2;
    iVar3 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCVar1);
    if (iVar3 != 0) {
      iStack_18 = 0;
      pCStack_24 = pCVar1;
      do {
        iVar3 = core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_54 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-1.0,1.0);
          fStack_3c = fStack_54 * 4.75f;
          fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
          CStack_a4.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,0.2);
          fStack_50 = fStack_20;
          CStack_a4.y = fStack_20;
          CStack_a4.z = fStack_3c;
          fStack_48 = CStack_a4.x;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                    ((CDemonActor *)this_ptr,&CStack_a4,&CStack_bc);
          fVar7 = fStack_54 * (float)0.40000000000000002;
          fVar9 = -0.5;
          fVar8 = 0.3;
          CStack_134.x = CStack_bc.x;
          *(uint *)((int)&CStack_134 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&CStack_bc + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&CStack_134 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&CStack_bc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          fStack_3c = fVar7;
          CStack_104.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar8,fVar9);
          CStack_104.y = 0.0;
          CStack_104.z = fStack_3c;
          CStack_17c.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-4.0,-4.5);
          CStack_17c.x = 0.0;
          CStack_17c.z = 0.0;
          fStack_4c = CStack_17c.y;
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_24,2.5,1.0,0.0,0.3,0.0,0.5,0.5,0.55,&CStack_134,&CStack_104,&CStack_17c
                     ,0);
        }
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < 0x11);
    }
  }
  fVar7 = this_ptr->emit_timer - delta_time;
  this_ptr->emit_timer = fVar7;
  if (fVar7 <= 0.0) {
    pCStack_2c = (this_ptr->base).base.particle_systems + 3;
    iVar3 = core_bwspart_cpp_CSimpleParticleSystem_isActive_FUN_005a8130(pCStack_2c);
    if (iVar3 != 0) {
      this_ptr->emit_timer = 0.05;
      core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-1.0,1.0);
      fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-4.5,4.5);
      CStack_80.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,-10.0);
      fStack_40 = fStack_20;
      CStack_80.x = 0.0;
      CStack_80.z = fStack_20;
      fStack_44 = CStack_80.y;
      core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                ((CDemonActor *)this_ptr,&CStack_80,&CStack_11c);
      iVar3 = 0;
      pCVar15 = (CVector3f *)0x0;
      pCVar14 = &CStack_14c;
      pCVar13 = &CStack_98;
      fVar12 = 0.66;
      fVar11 = 0.6;
      fVar10 = 0.6;
      fVar9 = 0.0;
      fVar8 = 0.5;
      fVar7 = 0.0;
      CStack_98.x = CStack_11c.x;
      *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) =
           *(uint *)((int)&CStack_11c + (uint)bVar4 * -8 + 4);
      pCVar1 = pCStack_2c;
      *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
           *(uint *)((int)&CStack_11c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
      CStack_14c.x = 0.0;
      CStack_14c.y = -0.1;
      CStack_14c.z = 0.0;
      core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                (pCStack_2c,1.0,0.5,fVar7,fVar8,fVar9,fVar10,fVar11,fVar12,pCVar13,pCVar14,pCVar15,
                 iVar3);
      iStack_14 = 0;
      pCStack_1c = pCVar1;
      do {
        iVar3 = core_bwgrndma_cpp_shouldSpawnParticle_FUN_005a7ed0();
        if (iVar3 != 0) {
          fStack_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-4.0,4.0);
          fStack_20 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-5.8,-6.2);
          CStack_ec.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.6,0.8);
          fStack_34 = fStack_20;
          fStack_30 = fStack_3c;
          CStack_ec.y = fStack_20;
          CStack_ec.z = fStack_3c;
          fStack_38 = CStack_ec.x;
          core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                    ((CDemonActor *)this_ptr,&CStack_ec,&CStack_74);
          CStack_158.x = CStack_74.x;
          *(uint *)((int)&CStack_158 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&CStack_158 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          if (&CStack_98 != &CStack_158) {
            CStack_98.x = CStack_158.x;
            CStack_98.y = CStack_158.y;
            CStack_98.z = CStack_158.z;
          }
          CStack_140.y = 2.0;
          CStack_140.z = 0.0;
          CStack_140.x = 0.0;
          if (&CStack_14c != &CStack_140) {
            CStack_14c.y = 2.0;
            CStack_14c.z = 0.0;
            CStack_14c.x = 0.0;
          }
          iVar3 = 2;
          pCVar13 = &CStack_68;
          pCVar14 = &CStack_14c;
          pCVar15 = &CStack_98;
          blue = 0.66;
          green = 0.6;
          fVar12 = 0.6;
          fVar11 = 0.0;
          CStack_68.x = 0.0;
          CStack_68.y = -5.0;
          CStack_68.z = 0.0;
          fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(2.0,4.0);
          fVar10 = 0.0;
          fVar9 = 0.5;
          fVar8 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.5,1.0);
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_1c,fVar8,fVar9,fVar10,fVar7,fVar11,fVar12,green,blue,pCVar15,pCVar14,
                     pCVar13,iVar3);
          CStack_14c.x = CStack_14c.x * 2.0f;
          CStack_14c.y = CStack_14c.y * 2.0f;
          CStack_14c.z = CStack_14c.z * 2.0f;
          fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
          if ((float)0.59999999999999998 < fVar7) {
            core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                      (pCStack_1c,0.5,0.5,0.0,0.2,0.0,0.6,0.6,0.66,&CStack_98,&CStack_14c,&CStack_68
                       ,0);
          }
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < 10);
    }
  }
  return;
}
