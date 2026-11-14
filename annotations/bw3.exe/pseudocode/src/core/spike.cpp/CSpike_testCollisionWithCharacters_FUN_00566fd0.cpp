// Name: core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00566fd0
// Address: 00566fd0
// Address Range: [[00566fd0, 005675da]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00566fd0(CSpike *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00566fd0(CSpike *this_ptr)

{
  CLocation *pCVar1;
  CCharacter *this_ptr_00;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CVector3f *point;
  float *pfVar6;
  int *piVar7;
  byte bVar8;
  float afStackY_10e8 [933];
  CBoundingBox3D *in_stack_fffffdb8;
  SDamageInfo *this_ptr_01;
  CVector3f aCStack_230 [8];
  byte auStack_1c8 [56];
  CSpike *pCStack_190;
  SCollisionInfo SStack_18c;
  SActorRayHit SStack_164;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float afStack_138 [6];
  byte auStack_120 [32];
  float fStack_100;
  float afStack_fc [8];
  float fStack_dc;
  float afStack_d8 [4];
  float fStack_c8;
  float afStack_c4 [3];
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  uint uStack_a8;
  CVector3f CStack_a0;
  float afStack_94 [3];
  CVector3f CStack_88;
  float fStack_7c;
  float afStack_78 [3];
  CVector3f CStack_6c;
  float fStack_58;
  float afStack_54 [9];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CLocation *pCStack_1c;
  ECollisionType EStack_18;
  int iStack_14;
  
  bVar8 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffdb8);
  pfVar6 = afStack_138;
  piVar7 = &SStack_164.part_index;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *piVar7 = (int)*pfVar6;
    pfVar6 = pfVar6 + (uint)bVar8 * -2 + 1;
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  SStack_164.triangle_index = (int)((float)SStack_164.triangle_index + _DAT_005d5be6);
  SStack_164.bone_index = (int)((float)SStack_164.bone_index + _DAT_005d5be6);
  fStack_144 = fStack_144 + _DAT_005d5bea;
  fStack_140 = fStack_140 + _DAT_005d5bea;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041e8b0((CBoundingBox3D *)auStack_120);
  __arrinit(aCStack_230,8,&g_CVectorTypeInfo);
  point = aCStack_230;
  iVar5 = 0;
  do {
    core_box_cpp_FUN_0041d8b0(&SStack_164.triangle_index,iVar5);
    afStack_54[3] = CStack_a0.y;
    afStack_54[(uint)bVar8 * -2 + 4] = afStack_94[(uint)bVar8 * -2 + -1];
    afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5] =
         afStack_94[(uint)bVar8 * -2 + (uint)bVar8 * -2];
    core_actor_cpp_FUN_00408b80(this_ptr,afStack_54 + 3);
    CStack_6c.x = afStack_54[0];
    *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + 4) = afStack_54[(uint)bVar8 * -2 + 1];
    *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 2];
    if (point != &CStack_6c) {
      point->x = CStack_6c.x;
      point->y = CStack_6c.y;
      point->z = CStack_6c.z;
    }
    core_box_cpp_CBoundingBox3D_expand_FUN_0041d840((CBoundingBox3D *)auStack_120,point);
    iVar5 = iVar5 + 1;
    point = point + 1;
  } while (iVar5 < 8);
  fStack_30 = SQRT(fStack_148 * fStack_148 +
                   (float)SStack_164.triangle_index * (float)SStack_164.triangle_index +
                   (float)SStack_164.bone_index * (float)SStack_164.bone_index);
  fStack_2c = SQRT(fStack_13c * fStack_13c + fStack_140 * fStack_140 + fStack_144 * fStack_144);
  fStack_28 = fStack_30;
  if (fStack_30 < fStack_2c) {
    fStack_28 = fStack_2c;
  }
  fStack_28 = fStack_28 * _DAT_005d5bee + _DAT_005d5bf2;
  fStack_24 = fStack_28 * fStack_28;
  afStack_fc[2] = fStack_13c - fStack_148;
  afStack_fc[0] = 0.0;
  afStack_fc[1] = 0.0;
  core_actor_cpp_FUN_00408b00(this_ptr,afStack_fc);
  uStack_a8 = afStack_fc[3];
  afStack_d8[(uint)bVar8 * -2 + 0xd] = afStack_fc[(uint)bVar8 * -2 + 4];
  *(float *)((int)&CStack_a0 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
       afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 5];
  pCStack_1c = &(this_ptr->base).location;
  iStack_14 = 0;
  EStack_18 = COLLISION_TYPE_NONE;
  while( true ) {
    if (g_CDemonSetPtr->character_count <= iStack_14) break;
    this_ptr_00 = *(CCharacter **)((int)g_CDemonSetPtr->characters + EStack_18);
    pCVar1 = &(this_ptr_00->base).location;
    fVar2 = (pCStack_1c->position).x - (pCVar1->position).x;
    fVar4 = (pCStack_1c->position).y - (this_ptr_00->base).location.position.y;
    fVar3 = (pCStack_1c->position).z - (this_ptr_00->base).location.position.z;
    if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 <= fStack_24) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_0053ed80((SCollisionInfo *)(auStack_1c8 + 0x34));
      auStack_1c8._52_4_ = (CSpike *)0x0;
      EStack_18 = (*((this_ptr_00->base).vtable._ub)->getCollisionType)
                            (&this_ptr_00->base,(SCollisionInfo *)(auStack_1c8 + 0x34));
      if (EStack_18 != COLLISION_TYPE_NONE) {
        SStack_18c.cylinder_bottom_y = 0.0;
        core_actor_cpp_FUN_00408bf0(this_ptr,pCVar1);
        fStack_dc = fStack_58;
        afStack_d8[(uint)bVar8 * -2] = afStack_54[(uint)bVar8 * -2];
        afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
             afStack_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (fStack_dc < fStack_148) {
          fStack_dc = fStack_148;
        }
        if (fStack_13c < fStack_dc) {
          fStack_dc = fStack_13c;
        }
        if (afStack_d8[0] < fStack_144) {
          afStack_d8[0] = fStack_144;
        }
        if (afStack_138[0] < afStack_d8[0]) {
          afStack_d8[0] = afStack_138[0];
        }
        afStack_d8[1] = 0.0;
        core_actor_cpp_FUN_00408b80(this_ptr,afStack_fc + 8);
        CStack_88.x = afStack_78[2];
        *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + 4) =
             *(uint *)((int)&CStack_6c + (uint)bVar8 * -8);
        *(uint *)((int)&CStack_88 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
             *(uint *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 4);
        aCStack_230[0].x =
             core_actor_cpp_CDemonActor_rayIntersect_FUN_004091b0
                       (&this_ptr_00->base,&CStack_88,&CStack_a0,&SStack_164,&SStack_18c,EStack_18,
                        (CBoundingBox3D *)(auStack_120 + 8));
        fVar4 = CStack_88.z;
        fVar3 = CStack_88.y;
        fVar2 = CStack_88.x;
        if ((0.0 <= aCStack_230[0].x) && (aCStack_230[0].x <= 1.0)) {
          pfVar6 = afStack_d8 + 5;
          afStack_d8[2] = CStack_a0.x * aCStack_230[0].x;
          afStack_d8[3] = CStack_a0.y * aCStack_230[0].x;
          fStack_c8 = CStack_a0.z * aCStack_230[0].x;
          fStack_b8 = CStack_a0.x * aCStack_230[0].x;
          afStack_d8[(uint)bVar8 * -2 + 9] = afStack_d8[(uint)bVar8 * -2 + 3];
          afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
               afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
          fStack_7c = fVar2 + fStack_b8;
          afStack_78[0] = fVar3 + fStack_b4;
          afStack_78[1] = fVar4 + fStack_b0;
          afStack_c4[0] = fVar2 + fStack_b8;
          afStack_d8[(uint)bVar8 * -2 + 6] = afStack_78[(uint)bVar8 * -2];
          afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
               afStack_78[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
          core_actor_cpp_FUN_00408bf0(this_ptr_00,pfVar6);
          this_ptr_01 = (SDamageInfo *)auStack_1c8;
          fStack_100 = fStack_ac;
          afStack_fc[(uint)bVar8 * -2] = afStack_d8[(uint)bVar8 * -2 + 0xc];
          afStack_fc[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_d8[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd];
          core_charactr_cpp_SDamageInfo_ctor_FUN_0042abb0(this_ptr_01);
          auStack_1c8._4_4_ = this_ptr->damage_strength;
          auStack_1c8._48_4_ = DAMAGE_TYPE_ATTACK_BLADE;
          if ((float *)(auStack_1c8 + 0x1c) != &fStack_100) {
            auStack_1c8._28_4_ = fStack_100;
            auStack_1c8._32_4_ = afStack_fc[0];
            auStack_1c8._36_4_ = afStack_fc[1];
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
