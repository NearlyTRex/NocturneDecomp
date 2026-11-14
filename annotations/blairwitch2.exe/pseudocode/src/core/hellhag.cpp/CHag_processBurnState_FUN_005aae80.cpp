// Name: core_hellhag.cpp_CHag_processBurnState_FUN_005aae80
// Address: 005aae80
// Address Range: [[005aae80, 005ab250]]
// Convention: __cdecl
// Signature: void __cdecl core_hellhag_cpp_CHag_processBurnState_FUN_005aae80(CHag *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_hellhag_cpp_CHag_processBurnState_FUN_005aae80(CHag *this_ptr,float delta_time)

{
  int iVar1;
  char *pcVar2;
  float *pfVar3;
  CVector3f *pCVar4;
  byte bVar5;
  float afStackY_10b8 [990];
  uint uVar6;
  float fVar7;
  uint uVar8;
  float max_value;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  float *pfVar13;
  float *pfVar14;
  uint *puVar15;
  uint uVar16;
  SDamageInfo SStack_10c;
  float fStack_d0;
  float afStack_cc [4];
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  CVector3f CStack_a0;
  uint uStack_94;
  float afStack_90 [5];
  float afStack_7c [3];
  float afStack_70 [3];
  float afStack_64 [3];
  uint uStack_58;
  float fStack_4c;
  float fStack_48;
  uint uStack_44;
  CVector3f CStack_40;
  float fStack_34;
  float afStack_30 [3];
  CMatrix3x4f *pCStack_24;
  int iStack_20;
  int iStack_1c;
  CSimpleParticleSystem *pCStack_18;
  float fStack_14;
  
  bVar5 = 0;
  if (0.0 < (this_ptr->base).burn_timer) {
    (this_ptr->base).burn_timer = (this_ptr->base).burn_timer - delta_time;
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_10c);
    SStack_10c.damage_amount = (this_ptr->base).burn_damage_rate * delta_time;
    iStack_20 = 0;
    iStack_1c = 0;
    pCVar4 = &(this_ptr->base).burn_direction;
    pfVar3 = &(this_ptr->base).burn_timer;
    SStack_10c.attacker = *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4);
    pCStack_18 = (this_ptr->base).base.base.base.particle_systems + 4;
    pCStack_24 = (this_ptr->base).base.base.model.bone_transform.bone_model_matrices;
    (this_ptr->base).flinch_active = 0;
    SStack_10c.wielder = SStack_10c.attacker;
    for (; iStack_20 < ((this_ptr->base).skeleton)->bone_count; iStack_20 = iStack_20 + 1) {
      iVar1 = core_bwgrndma_cpp_FUN_005a7ed0();
      if (iVar1 != 0) {
        pcVar2 = strstr
                           (((this_ptr->base).skeleton)->bone_list[0].bone_name + iStack_1c,
                            "Bip01");
        if (pcVar2 != (char *)0x0) {
          core_xform_cpp_FUN_00591530(&DAT_0265370c,pCStack_24);
          afStack_64[0] = (float)uStack_94;
          afStack_90[(uint)bVar5 * -2 + 0xc] = afStack_90[(uint)bVar5 * -2];
          afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0xd] =
               afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          core_actor_cpp_FUN_00408cf0(this_ptr,afStack_90 + 0xb);
          afStack_70[0] = (float)uStack_58;
          afStack_90[(uint)bVar5 * -2 + 9] = afStack_90[(uint)bVar5 * -2 + 0xf];
          afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10] =
               afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x10];
          afStack_cc[2] = pCVar4->x * *pfVar3;
          afStack_cc[3] = (this_ptr->base).burn_direction.y * *pfVar3;
          fStack_bc = (this_ptr->base).burn_direction.z * *pfVar3;
          fStack_b8 = afStack_cc[2];
          afStack_cc[(uint)bVar5 * -2 + 6] = afStack_cc[(uint)bVar5 * -2 + 3];
          afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
          fStack_ac = fStack_b8 * _DAT_005f0c3e;
          fStack_a8 = fStack_b4 * _DAT_005f0c3e;
          fStack_a4 = fStack_b0 * _DAT_005f0c3e;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.8,1.5);
          fStack_4c = fStack_ac;
          afStack_90[(uint)bVar5 * -2 + 0x12] = afStack_cc[(uint)bVar5 * -2 + 9];
          afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 0x13] =
               afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          uVar16 = 2;
          fStack_34 = fStack_4c;
          puVar15 = (uint *)&DAT_0265370c;
          afStack_30[1] = (float)uStack_44;
          pfVar14 = afStack_90 + 5;
          pfVar13 = afStack_90 + 8;
          uVar12 = 0x3f800000;
          uVar11 = 0x3f800000;
          uVar10 = 0x3f800000;
          uVar9 = 0;
          max_value = 1.0;
          afStack_30[0] = fStack_14 + fStack_48;
          fVar7 = 0.5;
          afStack_7c[0] = fStack_4c;
          afStack_90[(uint)bVar5 * -2 + 6] = afStack_30[(uint)bVar5 * -2];
          afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 7] =
               afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          fVar7 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar7,max_value);
          uVar8 = 0;
          uVar6 = 0x3f000000;
          fStack_14 = fVar7;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,1.5);
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_18,fStack_14,uVar6,uVar8,fVar7,uVar9,uVar10,uVar11,uVar12,pfVar13,
                     pfVar14,puVar15,uVar16);
          iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0x32);
          if (iVar1 == 0) {
            fStack_d0 = pCVar4->x * *pfVar3;
            pfVar14 = afStack_90 + 8;
            afStack_cc[0] = (this_ptr->base).burn_direction.y * *pfVar3;
            afStack_cc[1] = (this_ptr->base).burn_direction.z * *pfVar3;
            CStack_a0.x = fStack_d0;
            *(float *)((int)&CStack_a0 + (uint)bVar5 * -8 + 4) = afStack_cc[(uint)bVar5 * -2];
            *(float *)((int)&CStack_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            core_actor_cpp_FUN_00408d70(this_ptr,pfVar14);
            CStack_40.x = afStack_90[2];
            *(float *)((int)&CStack_40 + (uint)bVar5 * -8 + 4) = afStack_90[(uint)bVar5 * -2 + 3];
            *(float *)((int)&CStack_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 afStack_90[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 4];
            core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                      (g_CGorePtr,&CStack_40,&CStack_a0,1,(this_ptr->base).base.base.blood_type);
          }
        }
      }
      pCStack_24 = pCStack_24 + 1;
      iStack_1c = iStack_1c + 0x24;
    }
    return;
  }
  (this_ptr->base).burn_timer = 0.0;
  core_muzzle_cpp_FUN_0059d880(&(this_ptr->base).state_machine,"BurnComplete");
  return;
}
