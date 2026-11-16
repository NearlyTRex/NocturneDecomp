// Name: core_basicene.cpp_CBasicEnemy_processBurnState_FUN_005a0380
// Address: 005a0380
// Address Range: [[005a0380, 005a0772]]
// Convention: __cdecl
// Signature: void __cdecl core_basicene_cpp_CBasicEnemy_processBurnState_FUN_005a0380(CBasicEnemy *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_basicene_cpp_CBasicEnemy_processBurnState_FUN_005a0380(CBasicEnemy *this_ptr,float delta_time)

{
  int iVar1;
  char *pcVar2;
  float *pfVar3;
  byte bVar4;
  float afStackY_10bc [990];
  float fVar5;
  float alpha_end;
  float fVar6;
  float size_end;
  float red;
  float green;
  float blue;
  CVector3f *position_offset;
  CVector3f *pCVar7;
  CVector3f *acceleration;
  SDamageInfo SStack_110;
  CVector3f CStack_d4;
  float fStack_c8;
  float afStack_c4 [4];
  uint uStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  CVector3f CStack_a4;
  CVector3f CStack_98;
  float fStack_8c;
  float afStack_88 [2];
  CVector3f CStack_80;
  CVector3f CStack_74;
  float fStack_68;
  float afStack_64 [2];
  CVector3f CStack_5c;
  float fStack_50;
  float afStack_4c [2];
  CVector3f CStack_44;
  CVector3f CStack_38;
  CSimpleParticleSystem *pCStack_28;
  int iStack_24;
  int iStack_20;
  CMatrix3x4f *pCStack_1c;
  CVector3f *pCStack_18;
  float fStack_14;
  
  bVar4 = 0;
  if (0.0 < this_ptr->burn_timer) {
    this_ptr->burn_timer = this_ptr->burn_timer - delta_time;
    core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(&SStack_110);
    SStack_110.damage_amount = this_ptr->burn_damage_rate * delta_time;
    SStack_110.attacker = *(CDemonActor **)(_DAT_01cedef4 * 4 + 0x1cedee4);
    SStack_110.wielder = SStack_110.attacker;
    (*(((this_ptr->base).base.base.vtable._uc)->_uc).processDamage)
              ((CCharacter *)this_ptr,&SStack_110);
    iStack_20 = 0;
    iStack_24 = 0;
    pCStack_1c = (this_ptr->base).base.model.bone_transform.bone_model_matrices;
    pCStack_18 = &this_ptr->burn_direction;
    pCStack_28 = (this_ptr->base).base.base.particle_systems + 4;
    this_ptr->flinch_active = 0;
    pfVar3 = &this_ptr->burn_timer;
    for (; iStack_20 < this_ptr->skeleton->bone_count; iStack_20 = iStack_20 + 1) {
      iVar1 = core_bwgrndma_cpp_FUN_005a7ed0();
      if (iVar1 != 0) {
        pcVar2 = strstr
                           (this_ptr->skeleton->bone_list[0].bone_name + iStack_24,"Bip01")
        ;
        if (pcVar2 != (char *)0x0) {
          fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
          if ((float)_DAT_005efb87 < fStack_14) {
            core_xform_cpp_transformVector3x4_FUN_00591530
                      ((CVector3f *)&DAT_0265370c,pCStack_1c,&CStack_5c);
            CStack_74.x = CStack_5c.x;
            *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + 4) =
                 *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + 4);
            *(uint *)((int)&CStack_74 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 *(uint *)((int)&CStack_5c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
                      ((CDemonActor *)this_ptr,&CStack_74,&CStack_44);
            pCVar7 = pCStack_18;
            CStack_80.x = CStack_44.x;
            *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + 4) =
                 *(uint *)((int)&CStack_44 + (uint)bVar4 * -8 + 4);
            *(uint *)((int)&CStack_80 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 *(uint *)((int)&CStack_44 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            fStack_50 = pCVar7->x * *pfVar3;
            afStack_4c[0] = pCVar7->y * *pfVar3;
            afStack_4c[1] = pCVar7->z * *pfVar3;
            fStack_c8 = fStack_50;
            afStack_c4[(uint)bVar4 * -2] = afStack_4c[(uint)bVar4 * -2];
            afStack_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
                 afStack_4c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            fStack_b0 = fStack_c8 * _DAT_005efb7f;
            fStack_ac = afStack_c4[0] * _DAT_005efb7f;
            fStack_a8 = afStack_c4[1] * _DAT_005efb7f;
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.8,1.5);
            afStack_c4[2] = fStack_b0;
            afStack_c4[(uint)bVar4 * -2 + 3] = afStack_c4[(uint)bVar4 * -2 + 6];
            afStack_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
                 afStack_c4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
            iVar1 = 2;
            fStack_68 = afStack_c4[2];
            acceleration = (CVector3f *)&DAT_0265370c;
            afStack_64[1] = (float)uStack_b4;
            pCVar7 = &CStack_a4;
            position_offset = &CStack_80;
            blue = 1.0;
            green = 1.0;
            red = 1.0;
            size_end = 0.0;
            fVar6 = 1.0;
            afStack_64[0] = fStack_14 + afStack_c4[3];
            fVar5 = 0.5;
            CStack_a4.x = afStack_c4[2];
            *(float *)((int)&CStack_a4 + (uint)bVar4 * -8 + 4) = afStack_64[(uint)bVar4 * -2];
            *(float *)((int)&CStack_a4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                 afStack_64[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
            fVar5 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(fVar5,fVar6);
            alpha_end = 0.0;
            fVar6 = 0.5;
            fStack_14 = fVar5;
            fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.8,1.0);
            core_bwspart_cpp_CSimpleParticleSystem_emit_FUN_005a8300
                      (pCStack_28,fStack_14,fVar6,alpha_end,fVar5,size_end,red,green,blue,
                       position_offset,pCVar7,acceleration,iVar1);
            iVar1 = core_actor_cpp_getRandomInt_FUN_0040cfc0(0,0x32);
            if (iVar1 == 0) {
              fStack_8c = pCStack_18->x * *pfVar3;
              pCVar7 = &CStack_80;
              afStack_88[0] = pCStack_18->y * *pfVar3;
              afStack_88[1] = pCStack_18->z * *pfVar3;
              CStack_d4.x = fStack_8c;
              *(float *)((int)&CStack_d4 + (uint)bVar4 * -8 + 4) = afStack_88[(uint)bVar4 * -2];
              *(float *)((int)&CStack_d4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                   afStack_88[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        ((CDemonActor *)this_ptr,pCVar7,&CStack_38);
              CStack_98.x = CStack_38.x;
              *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + 4) =
                   *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + 4);
              *(uint *)((int)&CStack_98 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
                   *(uint *)((int)&CStack_38 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
              core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                        (g_CGorePtr,&CStack_98,&CStack_d4,1,(this_ptr->base).base.blood_type);
            }
          }
        }
      }
      pCStack_1c = pCStack_1c + 1;
      iStack_24 = iStack_24 + 0x24;
    }
    return;
  }
  this_ptr->burn_timer = 0.0;
  core_muzzle_cpp_FUN_0059d880(&this_ptr->state_machine,"BurnComplete");
  return;
}
