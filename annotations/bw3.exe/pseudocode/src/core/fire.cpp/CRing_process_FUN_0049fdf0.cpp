// Name: core_fire.cpp_CRing_process_FUN_0049fdf0
// Address: 0049fdf0
// Address Range: [[0049fdf0, 004a0468]]
// Convention: __cdecl
// Signature: int * __cdecl core_fire_cpp_CRing_process_FUN_0049fdf0(CRing *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * __cdecl core_fire_cpp_CRing_process_FUN_0049fdf0(CRing *this_ptr)

{
  float fVar1;
  float fVar2;
  CVector3f *pCVar3;
  CCharacter *pCVar4;
  EDeathState EVar5;
  CRing *pCVar6;
  CDemonActor *pCVar7;
  CVector3f *pCVar8;
  uint extraout_EDX;
  CLocation *pCVar9;
  CVector3f *pCVar10;
  int iVar11;
  byte bVar12;
  float10 fVar13;
  float afStackY_10d8 [991];
  float *pfVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  float fVar19;
  uint uVar20;
  SDamageInfo local_138;
  CVector3f local_fc;
  float local_f0;
  float local_ec [4];
  float local_dc;
  float local_d8 [2];
  float local_d0;
  CVector3f local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4 [3];
  float local_a8;
  float local_a4 [5];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80 [4];
  float local_70;
  CVector3f local_6c;
  float local_60;
  float local_5c [2];
  double local_54;
  double local_4c;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  CVector3f *local_34;
  int local_30;
  float local_2c;
  int local_28;
  CCharacter *local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  bVar12 = 0;
  core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&local_138);
  fVar19 = this_ptr->lifetime;
  pCVar6 = (CRing *)CONCAT22((short)((uint)this_ptr >> 0x10),
                             (ushort)(0.0 < fVar19) << 8 | (ushort)NAN(fVar19) << 10 |
                             (ushort)(fVar19 == 0.0) << 0xe);
  if (0.0 < fVar19) {
    fVar19 = g_CGamePtr->delta_time_float;
    local_44 = fVar19;
    local_2c = fVar19;
    fVar1 = this_ptr->lifetime - fVar19;
    this_ptr->lifetime = fVar1;
    fVar2 = _DAT_005c0908;
    pCVar6 = this_ptr;
    if (fVar1 < 0.0) {
      this_ptr->lifetime = 0.0;
    }
    else if (ABS(this_ptr->lifetime) != 0.0) {
      pCVar3 = this_ptr->points;
      pCVar8 = this_ptr->directions;
      do {
        local_ec[2] = pCVar8->x * fVar2;
        local_ec[3] = pCVar8->y * fVar2;
        local_dc = pCVar8->z * fVar2;
        local_80[2] = local_ec[2];
        local_80[(uint)bVar12 * -2 + 3] = local_ec[(uint)bVar12 * -2 + 3];
        local_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
             local_ec[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4];
        pCVar10 = pCVar3 + 1;
        local_84 = local_80[2] * fVar19;
        local_80[0] = local_80[3] * fVar19;
        local_80[1] = local_70 * fVar19;
        local_f0 = local_80[2] * fVar19;
        local_ec[(uint)bVar12 * -2] = local_80[(uint)bVar12 * -2];
        local_ec[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1] =
             local_80[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
        pCVar8 = pCVar8 + 1;
        pCVar3->x = pCVar3->x + local_f0;
        pCVar3->y = pCVar3->y + local_ec[0];
        pCVar3->z = pCVar3->z + local_ec[1];
        pCVar3 = pCVar10;
      } while (pCVar8 != (CVector3f *)&this_ptr->segment_timer);
      fVar19 = this_ptr->directions[0].y;
      fVar1 = this_ptr->directions[0].x;
      fVar2 = this_ptr->directions[0].z;
      fVar19 = SQRT(fVar2 * fVar2 + fVar1 * fVar1 + fVar19 * fVar19) * _DAT_005c0908;
      this_ptr->segment_timer = this_ptr->segment_timer - local_2c;
      this_ptr->radius = fVar19 * local_2c + this_ptr->radius;
      fVar19 = this_ptr->segment_timer;
      pCVar6 = (CRing *)CONCAT22((short)((uint)pCVar10 >> 0x10),
                                 (ushort)(0.0 < fVar19) << 8 | (ushort)NAN(fVar19) << 10 |
                                 (ushort)(fVar19 == 0.0) << 0xe);
      if (0.0 >= fVar19) {
        pCVar3 = this_ptr->points;
        local_28 = 0;
        pCVar8 = this_ptr->points;
        pCVar10 = pCVar3;
        do {
          pCVar8 = pCVar8 + 1;
          if ((CVector3f *)&local_c0 != pCVar10) {
            local_c0 = pCVar10->x;
            local_bc = pCVar10->y;
            local_b8 = pCVar10->z;
          }
          if (local_28 == 0xf) {
            if ((CVector3f *)(local_a4 + 5) != pCVar3) {
              local_90 = pCVar3->x;
              local_8c = this_ptr->points[0].y;
              local_88 = this_ptr->points[0].z;
            }
          }
          else if ((CVector3f *)(local_a4 + 5) != pCVar8) {
            local_90 = pCVar8->x;
            local_8c = pCVar8->y;
            local_88 = pCVar8->z;
          }
          if (this_ptr->ring_type == 0) {
            fVar13 = (float10)this_ptr->lifetime * (float10)_DAT_005c0910 * (float10)_DAT_005c0918;
            round();
            fVar19 = (float)(int)ROUND(fVar13);
            uVar18 = 2;
            uVar17 = 0x40400000;
            uVar15 = 0x40400000;
            uVar16 = extraout_EDX;
            local_40 = fVar19;
          }
          else {
            fVar19 = 9.18341e-41;
            uVar18 = 5;
            uVar17 = 0x40000000;
            uVar15 = 0x40000000;
            uVar16 = 0;
          }
          core_fire_cpp_FUN_004a3c50
                    (0x01C73654,&local_c0,local_a4 + 5,uVar16,uVar15,uVar17,uVar18,0x3d4ccccd,
                     fVar19);
          local_28 = local_28 + 1;
          pCVar10 = pCVar10 + 1;
        } while (local_28 < 0x10);
        local_38 = 0;
        local_34 = &this_ptr->center;
        local_30 = 0;
        do {
          if (g_CDemonSetPtr->actor_count <= local_38) {
            this_ptr->segment_timer = 0.05;
            return &this_ptr->ring_type;
          }
          pCVar4 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_30),
                              g_CCharacterClassInfo.name_hash);
          local_24 = pCVar4;
          if (((pCVar4 != (CCharacter *)0x0) &&
              (EVar5 = (*(((pCVar4->base).vtable._uc)->_uc).getDeathState)(pCVar4),
              EVar5 == DEATH_STATE_ALIVE)) && (pCVar4 != this_ptr->owner)) {
            local_60 = local_34->x - (pCVar4->base).location.position.x;
            local_5c[0] = local_34->y - (pCVar4->base).location.position.y;
            local_5c[1] = local_34->z - (pCVar4->base).location.position.z;
            local_d8[0] = local_60;
            local_ec[(uint)bVar12 * -2 + 6] = local_5c[(uint)bVar12 * -2];
            pCVar4 = local_24;
            local_ec[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 7] =
                 local_5c[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
            if (local_b4 != local_ec + 5) {
              local_b4[0] = local_d8[0];
              local_b4[2] = local_d0;
            }
            fVar19 = SQRT(local_b4[2] * local_b4[2] + local_b4[0] * local_b4[0]);
            iVar11 = 0;
            local_b4[1] = 0.0;
            local_4c = (double)this_ptr->radius;
            local_54 = (double)fVar19;
            if ((this_ptr->radius + (float)_DAT_005c0928 < fVar19) && (local_54 < local_4c + 1.0)) {
              pCVar6 = this_ptr;
              if (0 < this_ptr->hit_count) {
                do {
                  if (local_24 == pCVar6->hit_actors[0]) goto LAB_004a0042;
                  iVar11 = iVar11 + 1;
                  pCVar6 = (CRing *)&pCVar6->center;
                } while (iVar11 < this_ptr->hit_count);
              }
              if (this_ptr->hit_count < 10) {
                if (this_ptr->ring_type == 0) {
                  local_138.damage_type = DAMAGE_TYPE_ATTACK_FIRE;
                  local_138.damage_amount =
                       this_ptr->lifetime * _DAT_005c0920 * (float)_DAT_005c0910 +
                       (float)_DAT_005c0930;
                  (*(((local_24->base).vtable._uc)->_uc).processDamage)(local_24,&local_138);
                  if (pCVar4->gun_flame_ignitable != 0) {
                    uVar20 = 0x40a00000;
                    uVar18 = 1;
                    local_a8 = (pCVar4->base).location.position.x;
                    uVar17 = 0x3f800000;
                    uVar15 = 0;
                    uVar16 = 0;
                    local_a4[1] = (pCVar4->base).location.position.z;
                    pfVar14 = local_a4 + 2;
                    local_a4[0] = (pCVar4->base).location.position.y + _DAT_005c0938;
                    local_a4[2] = local_a8;
                    local_a4[(uint)bVar12 * -2 + 3] = local_a4[(uint)bVar12 * -2];
                    local_a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 4] =
                         local_a4[(uint)bVar12 * -2 + (uint)bVar12 * -2 + 1];
                    core_charactr_cpp_FUN_0042fbd0
                              (pCVar4,pfVar14,uVar16,uVar15,uVar17,uVar18,uVar20);
                  }
                }
                else if ((this_ptr->ring_type == 1) &&
                        (pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                            (&local_24->base,g_CHeroClassInfo.name_hash),
                        pCVar7 == (CDemonActor *)0x0)) {
                  pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                     (&pCVar4->base,g_CHinoClassInfo.name_hash);
                  if (((pCVar7 == (CDemonActor *)0x0) &&
                      (((pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                            (&pCVar4->base,g_CKedwardClassInfo.name_hash),
                        pCVar7 == (CDemonActor *)0x0 &&
                        (pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                            (&pCVar4->base,g_CStylerDemonClassInfo.name_hash),
                        pCVar7 == (CDemonActor *)0x0)) &&
                       (pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                           (&pCVar4->base,g_CMattanntoteClassInfo.name_hash),
                       pCVar7 == (CDemonActor *)0x0)))) &&
                     (pCVar7 = core_actor_cpp_castToClassHash_FUN_0040c840
                                         (&pCVar4->base,g_CBaalClassInfo.name_hash),
                     pCVar7 == (CDemonActor *)0x0)) {
                    pCVar4->bind_time = 10.0;
                    local_24->bind_type = 0;
                  }
                  else {
                    local_24->bind_time = 5.0;
                    local_24->bind_type = 0;
                  }
                }
                this_ptr->hit_actors[this_ptr->hit_count] = local_24;
                this_ptr->hit_count = this_ptr->hit_count + 1;
                if (this_ptr->ring_type == 0) {
                  pCVar9 = &(local_24->base).location;
                  if ((CLocation *)&local_6c != pCVar9) {
                    local_6c.x = (pCVar9->position).x;
                    local_6c.z = (local_24->base).location.position.z;
                  }
                  local_6c.y = (this_ptr->center).y;
                  iVar11 = 0;
                  do {
                    local_40 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-7.5,7.5);
                    local_3c = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(10.0,15.0);
                    local_cc.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(-7.5,7.5);
                    local_20 = local_3c;
                    local_1c = local_40;
                    local_cc.y = local_3c;
                    local_cc.z = local_40;
                    if (&local_fc != (CVector3f *)(local_ec + 8)) {
                      local_fc.y = local_3c;
                      local_fc.z = local_40;
                      local_fc.x = local_cc.x;
                    }
                    iVar11 = iVar11 + 1;
                    local_18 = local_cc.x;
                    local_14 = local_cc.x;
                    core_fire_cpp_CFireEffect_createSpark_FUN_004a23c0
                              (0x01C73654,&local_6c,&local_fc,0x20000,0x10000,4,0xffff);
                  } while (iVar11 < 0x20);
                }
              }
            }
          }
LAB_004a0042:
          local_38 = local_38 + 1;
          local_30 = local_30 + 4;
        } while( true );
      }
    }
  }
  return &pCVar6->ring_type;
}
