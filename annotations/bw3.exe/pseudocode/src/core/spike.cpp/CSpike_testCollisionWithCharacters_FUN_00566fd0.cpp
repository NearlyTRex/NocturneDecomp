// Name: core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00566fd0
// Address: 00566fd0
// Address Range: [[00566fd0, 005675da]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00566fd0(CSpike *this_ptr)

#include "nocturne.h"

void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00566fd0(CSpike *this_ptr)

{
  CLocation *input_world_point;
  CCharacter *this_ptr_00;
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  float *pfVar7;
  byte bVar8;
  float afStackY_10e8 [933];
  CBoundingBox3D *in_stack_fffffdb8;
  SDamageInfo *this_ptr_01;
  CVector3f aCStack_230 [8];
  byte auStack_1c8 [56];
  CSpike *pCStack_190;
  SCollisionInfo SStack_18c;
  byte auStack_164 [24];
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float afStack_138 [6];
  byte auStack_120 [32];
  float fStack_100;
  CVector3f CStack_fc;
  CVector3f CStack_f0;
  CVector3f CStack_dc;
  float fStack_d0;
  float afStack_cc [2];
  CVector3f CStack_c4;
  float fStack_b8;
  float afStack_b4 [2];
  CVector3f CStack_ac;
  byte auStack_a0 [8];
  float afStack_98 [4];
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [2];
  byte auStack_70 [8];
  float afStack_68 [4];
  byte auStack_58 [8];
  float afStack_50 [2];
  CVector3f aCStack_48 [2];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CLocation *pCStack_1c;
  ECollisionType EStack_18;
  int iStack_14;
  uint corner_index;
  
  bVar8 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffdb8);
  pfVar6 = afStack_138;
  pfVar7 = (float *)(auStack_164 + 0xc);
  for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
    *pfVar7 = *pfVar6;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
    pfVar7 = pfVar7 + (uint)bVar8 * -2 + 1;
  }
  auStack_164._20_4_ = (float)auStack_164._20_4_ + -0.1f;
  fStack_14c = fStack_14c + -0.1f;
  fStack_144 = fStack_144 + 0.1f;
  fStack_140 = fStack_140 + 0.1f;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041e8b0((CBoundingBox3D *)auStack_120);
  __arrinit(aCStack_230,8,&g_CVectorTypeInfo);
  pCVar5 = aCStack_230;
  corner_index = 0;
  do {
    core_box_cpp_CBoundingBox3D_getCorner_FUN_0041d8b0
              ((CBoundingBox3D *)(auStack_164 + 0x14),corner_index,(CVector3f *)(auStack_a0 + 4));
    aCStack_48[0].x = (float)auStack_a0._4_4_;
    *(float *)((int)aCStack_48 + (uint)bVar8 * -8 + 4) = afStack_98[(uint)bVar8 * -2];
    *(float *)((int)aCStack_48 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_98[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
              (&this_ptr->base,aCStack_48,(CVector3f *)(auStack_58 + 4));
    auStack_70._4_4_ = auStack_58._4_4_;
    afStack_68[(uint)bVar8 * -2] = afStack_50[(uint)bVar8 * -2];
    afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
    if (pCVar5 != (CVector3f *)(auStack_70 + 4)) {
      pCVar5->x = (float)auStack_70._4_4_;
      pCVar5->y = afStack_68[0];
      pCVar5->z = afStack_68[1];
    }
    core_box_cpp_CBoundingBox3D_expand_FUN_0041d840((CBoundingBox3D *)auStack_120,pCVar5);
    corner_index = corner_index + 1;
    pCVar5 = pCVar5 + 1;
  } while ((int)corner_index < 8);
  fStack_30 = SQRT(fStack_148 * fStack_148 +
                   (float)auStack_164._20_4_ * (float)auStack_164._20_4_ + fStack_14c * fStack_14c);
  fStack_2c = SQRT(fStack_13c * fStack_13c + fStack_140 * fStack_140 + fStack_144 * fStack_144);
  fStack_28 = fStack_30;
  if (fStack_30 < fStack_2c) {
    fStack_28 = fStack_2c;
  }
  fStack_28 = fStack_28 * 2.0f + 10.0f;
  fStack_24 = fStack_28 * fStack_28;
  CStack_fc.z = fStack_13c - fStack_148;
  CStack_fc.x = 0.0;
  CStack_fc.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408b00(&this_ptr->base,&CStack_fc,&CStack_f0);
  CStack_ac.y = CStack_f0.x;
  *(uint *)(auStack_a0 + (uint)bVar8 * -8 + -4) =
       *(uint *)((int)&CStack_f0 + (uint)bVar8 * -8 + 4);
  *(uint *)(auStack_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       *(uint *)((int)&CStack_f0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
  pCStack_1c = &(this_ptr->base).location;
  iStack_14 = 0;
  EStack_18 = COLLISION_TYPE_NONE;
  while( true ) {
    if (g_CDemonSetPtr->character_count <= iStack_14) break;
    this_ptr_00 = *(CCharacter **)((int)g_CDemonSetPtr->characters + EStack_18);
    input_world_point = &(this_ptr_00->base).location;
    fVar1 = (pCStack_1c->position).x - (input_world_point->position).x;
    fVar3 = (pCStack_1c->position).y - (this_ptr_00->base).location.position.y;
    fVar2 = (pCStack_1c->position).z - (this_ptr_00->base).location.position.z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= fStack_24) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)(auStack_1c8 + 0x34));
      auStack_1c8._52_4_ = (CSpike *)0x0;
      EStack_18 = (*((this_ptr_00->base).vtable._ub)->getCollisionType)
                            (&this_ptr_00->base,(SCollisionInfo *)(auStack_1c8 + 0x34));
      if (EStack_18 != COLLISION_TYPE_NONE) {
        SStack_18c.cylinder_bottom_y = 0.0;
        core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                  (&this_ptr->base,&input_world_point->position,(CVector3f *)auStack_58);
        CStack_dc.x = (float)auStack_58._0_4_;
        *(float *)((int)&CStack_dc + (uint)bVar8 * -8 + 4) = afStack_50[(uint)bVar8 * -2 + -1];
        *(float *)((int)&CStack_dc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_50[(uint)bVar8 * -2 + (uint)bVar8 * -2];
        if (CStack_dc.x < fStack_148) {
          CStack_dc.x = fStack_148;
        }
        if (fStack_13c < CStack_dc.x) {
          CStack_dc.x = fStack_13c;
        }
        if (CStack_dc.y < fStack_144) {
          CStack_dc.y = fStack_144;
        }
        if (afStack_138[0] < CStack_dc.y) {
          CStack_dc.y = afStack_138[0];
        }
        CStack_dc.z = 0.0;
        core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b80
                  (&this_ptr->base,&CStack_dc,(CVector3f *)auStack_70);
        CStack_88.x = (float)auStack_70._0_4_;
        *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + 4) =
             *(uint *)(auStack_70 + (uint)bVar8 * -8 + 4);
        *(float *)((int)&CStack_88 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             afStack_68[(uint)bVar8 * -2 + (uint)bVar8 * -2];
        aCStack_230[0].x =
             core_actor_cpp_CDemonActor_rayIntersect_FUN_004091b0
                       (&this_ptr_00->base,&CStack_88,(CVector3f *)auStack_a0,
                        (SActorRayHit *)auStack_164,&SStack_18c,EStack_18,
                        (CBoundingBox3D *)(auStack_120 + 8));
        fVar3 = CStack_88.z;
        fVar2 = CStack_88.y;
        fVar1 = CStack_88.x;
        if ((0.0 <= aCStack_230[0].x) && (aCStack_230[0].x <= 1.0)) {
          pCVar5 = &CStack_c4;
          fStack_d0 = (float)auStack_a0._0_4_ * aCStack_230[0].x;
          afStack_cc[0] = (float)auStack_a0._4_4_ * aCStack_230[0].x;
          afStack_cc[1] = afStack_98[0] * aCStack_230[0].x;
          fStack_b8 = (float)auStack_a0._0_4_ * aCStack_230[0].x;
          afStack_b4[(uint)bVar8 * -2] = afStack_cc[(uint)bVar8 * -2];
          afStack_b4[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_cc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          fStack_7c = fVar1 + fStack_b8;
          afStack_78[0] = fVar2 + afStack_b4[0];
          afStack_78[1] = fVar3 + afStack_b4[1];
          CStack_c4.x = fVar1 + fStack_b8;
          *(float *)((int)&CStack_c4 + (uint)bVar8 * -8 + 4) = afStack_78[(uint)bVar8 * -2];
          *(float *)((int)&CStack_c4 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
               afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bf0
                    (&this_ptr_00->base,pCVar5,&CStack_ac);
          this_ptr_01 = (SDamageInfo *)auStack_1c8;
          fStack_100 = CStack_ac.x;
          *(uint *)((int)&CStack_fc + (uint)bVar8 * -8) =
               *(uint *)(auStack_a0 + (uint)bVar8 * -8 + -8);
          *(uint *)((int)&CStack_fc + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4) =
               *(uint *)(auStack_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + -4);
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(this_ptr_01);
          auStack_1c8._4_4_ = this_ptr->damage_strength;
          auStack_1c8._48_4_ = DAMAGE_TYPE_ATTACK_BLADE;
          if ((float *)(auStack_1c8 + 0x1c) != &fStack_100) {
            auStack_1c8._28_4_ = fStack_100;
            auStack_1c8._32_4_ = CStack_fc.x;
            auStack_1c8._36_4_ = CStack_fc.y;
          }
          auStack_1c8._52_4_ = this_ptr;
          pCStack_190 = this_ptr;
          (*(((this_ptr_00->base).vtable._uc)->_uc).processDamage)
                    (this_ptr_00,(SDamageInfo *)auStack_1c8);
        }
      }
    }
    iStack_14 = iStack_14 + 1;
    EStack_18 = EStack_18 + 4;
  }
  return;
}
