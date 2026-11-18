// Name: core_fire.cpp_CRing_process_FUN_0049fdf0
// Address: 0049fdf0
// Address Range: [[0049fdf0, 004a0468]]
// Convention: __cdecl
// Signature: int * __cdecl core_fire_cpp_CRing_process_FUN_0049fdf0(CRing *this_ptr)

#include "nocturne.h"

int * __cdecl core_fire_cpp_CRing_process_FUN_0049fdf0(CRing *this_ptr)

{
  CVector3f *pCVar1;
  CCharacter *pCVar2;
  EDeathState EVar3;
  CRing *pCVar4;
  CDemonActor *pCVar5;
  CVector3f *pCVar6;
  CLocation *pCVar7;
  CVector3f *pCVar8;
  byte bVar9;
  double dVar10;
  float afStackY_10d8 [991];
  CVector3f *this_ptr_00;
  CVector3f *start_position;
  CVector3f *end_position;
  int iVar11;
  float fVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  int iVar16;
  SDamageInfo local_138;
  CVector3f local_fc;
  float local_f0;
  float local_ec [4];
  float local_dc;
  float local_d8 [2];
  float local_d0;
  CVector3f local_cc;
  CVector3f local_c0;
  float local_b4 [3];
  float local_a8;
  float local_a4 [2];
  CVector3f local_9c;
  CVector3f local_90;
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
  
  bVar9 = 0;
  core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(&local_138);
  fVar15 = this_ptr->lifetime;
  pCVar4 = (CRing *)CONCAT22((short)((uint)this_ptr >> 0x10),
                             (ushort)(0.0 < fVar15) << 8 | (ushort)NAN(fVar15) << 10 |
                             (ushort)(fVar15 == 0.0) << 0xe);
  if (0.0 < fVar15) {
    fVar15 = g_CGamePtr->delta_time_float;
    local_44 = fVar15;
    local_2c = fVar15;
    fVar12 = this_ptr->lifetime - fVar15;
    this_ptr->lifetime = fVar12;
    fVar13 = 10.0f;
    pCVar4 = this_ptr;
    if (fVar12 < 0.0) {
      this_ptr->lifetime = 0.0;
    }
    else if (ABS(this_ptr->lifetime) != 0.0) {
      pCVar1 = this_ptr->points;
      pCVar6 = this_ptr->directions;
      do {
        local_ec[2] = pCVar6->x * fVar13;
        local_ec[3] = pCVar6->y * fVar13;
        local_dc = pCVar6->z * fVar13;
        local_80[2] = local_ec[2];
        local_80[(uint)bVar9 * -2 + 3] = local_ec[(uint)bVar9 * -2 + 3];
        local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4] =
             local_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
        pCVar8 = pCVar1 + 1;
        local_84 = local_80[2] * fVar15;
        local_80[0] = local_80[3] * fVar15;
        local_80[1] = local_70 * fVar15;
        local_f0 = local_80[2] * fVar15;
        local_ec[(uint)bVar9 * -2] = local_80[(uint)bVar9 * -2];
        local_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
             local_80[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
        pCVar6 = pCVar6 + 1;
        pCVar1->x = pCVar1->x + local_f0;
        pCVar1->y = pCVar1->y + local_ec[0];
        pCVar1->z = pCVar1->z + local_ec[1];
        pCVar1 = pCVar8;
      } while (pCVar6 != (CVector3f *)&this_ptr->segment_timer);
      fVar15 = this_ptr->directions[0].y;
      fVar12 = this_ptr->directions[0].x;
      fVar13 = this_ptr->directions[0].z;
      fVar15 = SQRT(fVar13 * fVar13 + fVar12 * fVar12 + fVar15 * fVar15) * 10.0f;
      this_ptr->segment_timer = this_ptr->segment_timer - local_2c;
      this_ptr->radius = fVar15 * local_2c + this_ptr->radius;
      fVar15 = this_ptr->segment_timer;
      pCVar4 = (CRing *)CONCAT22((short)((uint)pCVar8 >> 0x10),
                                 (ushort)(0.0 < fVar15) << 8 | (ushort)NAN(fVar15) << 10 |
                                 (ushort)(fVar15 == 0.0) << 0xe);
      if (0.0 >= fVar15) {
        pCVar1 = this_ptr->points;
        local_28 = 0;
        pCVar6 = this_ptr->points;
        pCVar8 = pCVar1;
        do {
          pCVar6 = pCVar6 + 1;
          if (&local_c0 != pCVar8) {
            local_c0.x = pCVar8->x;
            local_c0.y = pCVar8->y;
            local_c0.z = pCVar8->z;
          }
          if (local_28 == 0xf) {
            if (&local_90 != pCVar1) {
              local_90.x = pCVar1->x;
              local_90.y = this_ptr->points[0].y;
              local_90.z = this_ptr->points[0].z;
            }
          }
          else if (&local_90 != pCVar6) {
            local_90.x = pCVar6->x;
            local_90.y = pCVar6->y;
            local_90.z = pCVar6->z;
          }
          if (this_ptr->ring_type == 0) {
            iVar16 = 0x49ffac;
            dVar10 = round
                               ((double)(this_ptr->lifetime * (float)0.5 *
                                        (float)65535));
            fVar15 = (float)(int)ROUND(dVar10);
            iVar14 = 0x3d4ccccd;
            fVar13 = 2.8026e-45;
            fVar12 = 3.0;
            iVar11 = 0x40400000;
            start_position = &local_90;
            end_position = (CVector3f *)0x0;
            this_ptr_00 = &local_c0;
            local_40 = fVar15;
          }
          else {
            iVar16 = 0xffff;
            fVar15 = 0.05;
            iVar14 = 5;
            fVar13 = 2.0;
            fVar12 = 2.0;
            iVar11 = 0;
            end_position = &local_90;
            start_position = &local_c0;
            this_ptr_00 = (CVector3f *)g_CFireEffect_PTR_005fc5a0;
          }
          core_fire_cpp_CFireEffect_createLightningBoltDirectional_FUN_004a3c50
                    ((CFireEffect *)this_ptr_00,start_position,end_position,iVar11,fVar12,fVar13,
                     iVar14,fVar15,iVar16);
          local_28 = local_28 + 1;
          pCVar8 = pCVar8 + 1;
        } while (local_28 < 0x10);
        local_38 = 0;
        local_34 = &this_ptr->center;
        local_30 = 0;
        do {
          if (g_CDemonSetPtr->actor_count <= local_38) {
            this_ptr->segment_timer = 0.05;
            return &this_ptr->ring_type;
          }
          pCVar2 = (CCharacter *)
                   core_actor_cpp_castToClassHash_FUN_0040c840
                             (*(CDemonActor **)((int)g_CDemonSetPtr->actors + local_30),
                              g_CCharacterClassInfo.name_hash);
          local_24 = pCVar2;
          if (((pCVar2 != (CCharacter *)0x0) &&
              (EVar3 = (*(((pCVar2->base).vtable._uc)->_uc).getDeathState)(pCVar2),
              EVar3 == DEATH_STATE_ALIVE)) && (pCVar2 != this_ptr->owner)) {
            local_60 = local_34->x - (pCVar2->base).location.position.x;
            local_5c[0] = local_34->y - (pCVar2->base).location.position.y;
            local_5c[1] = local_34->z - (pCVar2->base).location.position.z;
            local_d8[0] = local_60;
            local_ec[(uint)bVar9 * -2 + 6] = local_5c[(uint)bVar9 * -2];
            pCVar2 = local_24;
            local_ec[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 7] =
                 local_5c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
            if (local_b4 != local_ec + 5) {
              local_b4[0] = local_d8[0];
              local_b4[2] = local_d0;
            }
            fVar15 = SQRT(local_b4[2] * local_b4[2] + local_b4[0] * local_b4[0]);
            iVar11 = 0;
            local_b4[1] = 0.0;
            local_4c = (double)this_ptr->radius;
            local_54 = (double)fVar15;
            if ((this_ptr->radius + (float)-1 < fVar15) &&
               (local_54 < local_4c + 1.0)) {
              pCVar4 = this_ptr;
              if (0 < this_ptr->hit_count) {
                do {
                  if (local_24 == pCVar4->hit_actors[0]) goto LAB_004a0042;
                  iVar11 = iVar11 + 1;
                  pCVar4 = (CRing *)&pCVar4->center;
                } while (iVar11 < this_ptr->hit_count);
              }
              if (this_ptr->hit_count < 10) {
                if (this_ptr->ring_type == 0) {
                  local_138.damage_type = DAMAGE_TYPE_ATTACK_FIRE;
                  local_138.damage_amount =
                       this_ptr->lifetime * 15.0f * (float)0.5 +
                       (float)5;
                  (*(((local_24->base).vtable._uc)->_uc).processDamage)(local_24,&local_138);
                  if (pCVar2->gun_flame_ignitable != 0) {
                    fVar12 = 5.0;
                    iVar16 = 1;
                    local_a8 = (pCVar2->base).location.position.x;
                    fVar15 = 1.0;
                    iVar14 = 0;
                    iVar11 = 0;
                    local_a4[1] = (pCVar2->base).location.position.z;
                    pCVar1 = &local_9c;
                    local_a4[0] = (pCVar2->base).location.position.y + 2.0f;
                    local_9c.x = local_a8;
                    *(float *)((int)&local_9c + (uint)bVar9 * -8 + 4) = local_a4[(uint)bVar9 * -2];
                    *(float *)((int)&local_9c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8) =
                         local_a4[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
                    core_charactr_cpp_CCharacter_igniteBone_FUN_0042fbd0
                              (pCVar2,pCVar1,iVar11,iVar14,fVar15,iVar16,fVar12);
                  }
                }
                else if ((this_ptr->ring_type == 1) &&
                        (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                            (&local_24->base,g_CHeroClassInfo.name_hash),
                        pCVar5 == (CDemonActor *)0x0)) {
                  pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                     (&pCVar2->base,g_CHinoClassInfo.name_hash);
                  if (((pCVar5 == (CDemonActor *)0x0) &&
                      (((pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                            (&pCVar2->base,g_CKedwardClassInfo.name_hash),
                        pCVar5 == (CDemonActor *)0x0 &&
                        (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                            (&pCVar2->base,g_CStylerDemonClassInfo.name_hash),
                        pCVar5 == (CDemonActor *)0x0)) &&
                       (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                           (&pCVar2->base,g_CMattanntoteClassInfo.name_hash),
                       pCVar5 == (CDemonActor *)0x0)))) &&
                     (pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c840
                                         (&pCVar2->base,g_CBaalClassInfo.name_hash),
                     pCVar5 == (CDemonActor *)0x0)) {
                    pCVar2->bind_time = 10.0;
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
                  pCVar7 = &(local_24->base).location;
                  if ((CLocation *)&local_6c != pCVar7) {
                    local_6c.x = (pCVar7->position).x;
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
                              (g_CFireEffect_PTR_005fc5a0,&local_6c,&local_fc,0x20000,0x10000,4,
                               0xffff);
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
  return &pCVar4->ring_type;
}
