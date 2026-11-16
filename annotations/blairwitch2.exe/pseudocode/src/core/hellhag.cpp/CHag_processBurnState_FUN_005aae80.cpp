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
  float fVar6;
  float alpha_end;
  float fVar7;
  float size_end;
  float red;
  float green;
  float blue;
  CVector3f *position_offset;
  CVector3f *pCVar8;
  CVector3f *acceleration;
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
  CVector3f CStack_94;
  CVector3f CStack_88;
  CVector3f CStack_7c;
  CVector3f CStack_70;
  CVector3f CStack_64;
  CVector3f CStack_58;
  float fStack_4c;
  float afStack_48 [2];
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
          core_xform_cpp_transformVector3x4_FUN_00591530
                    ((CVector3f *)&DAT_0265370c,pCStack_24,&CStack_94);
          CStack_64.x = CStack_94.x;
          *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + 4) =
               *(uint *)((int)&CStack_94 + (uint)bVar5 * -8 + 4);
          *(uint *)((int)&CStack_64 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               *(uint *)((int)&CStack_94 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
          core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                    ((CDemonActor *)this_ptr,&CStack_64,&CStack_58);
          CStack_70.x = CStack_58.x;
          *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + 4) =
               *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + 4);
          *(uint *)((int)&CStack_70 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               *(uint *)((int)&CStack_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
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
          afStack_48[(uint)bVar5 * -2] = afStack_cc[(uint)bVar5 * -2 + 9];
          afStack_48[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1] =
               afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 10];
          iVar1 = 2;
          fStack_34 = fStack_4c;
          acceleration = (CVector3f *)&DAT_0265370c;
          afStack_30[1] = afStack_48[1];
          pCVar8 = &CStack_7c;
          position_offset = &CStack_70;
          blue = 1.0;
          green = 1.0;
          red = 1.0;
          size_end = 0.0;
          fVar7 = 1.0;
          afStack_30[0] = fStack_14 + afStack_48[0];
          fVar6 = 0.5;
          CStack_7c.x = fStack_4c;
          *(float *)((int)&CStack_7c + (uint)bVar5 * -8 + 4) = afStack_30[(uint)bVar5 * -2];
          *(float *)((int)&CStack_7c + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
               afStack_30[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
          fVar6 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar6,fVar7);
          alpha_end = 0.0;
          fVar7 = 0.5;
          fStack_14 = fVar6;
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(1.0,1.5);
          core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                    (pCStack_18,fStack_14,fVar7,alpha_end,fVar6,size_end,red,green,blue,
                     position_offset,pCVar8,acceleration,iVar1);
          iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0x32);
          if (iVar1 == 0) {
            fStack_d0 = pCVar4->x * *pfVar3;
            pCVar8 = &CStack_70;
            afStack_cc[0] = (this_ptr->base).burn_direction.y * *pfVar3;
            afStack_cc[1] = (this_ptr->base).burn_direction.z * *pfVar3;
            CStack_a0.x = fStack_d0;
            *(float *)((int)&CStack_a0 + (uint)bVar5 * -8 + 4) = afStack_cc[(uint)bVar5 * -2];
            *(float *)((int)&CStack_a0 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 afStack_cc[(uint)bVar5 * -2 + (uint)bVar5 * -2 + 1];
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      ((CDemonActor *)this_ptr,pCVar8,&CStack_88);
            CStack_40.x = CStack_88.x;
            *(uint *)((int)&CStack_40 + (uint)bVar5 * -8 + 4) =
                 *(uint *)((int)&CStack_88 + (uint)bVar5 * -8 + 4);
            *(uint *)((int)&CStack_40 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8) =
                 *(uint *)((int)&CStack_88 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
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
