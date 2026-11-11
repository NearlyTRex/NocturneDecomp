// Name: core_spike.cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0
// Address: 00560cb0
// Address Range: [[00560cb0, 005612ba]]
// Convention: __cdecl
// Signature: void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0(CSpike *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_spike_cpp_CSpike_testCollisionWithCharacters_FUN_00560cb0(CSpike *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  CVector3f *point;
  uint *puVar6;
  uint *puVar7;
  byte bVar8;
  float afStackY_10f0 [933];
  CBoundingBox3D *in_stack_fffffdb8;
  float *pfVar9;
  SDamageInfo *this_ptr_00;
  CVector3f aCStack_230 [8];
  SDamageInfo SStack_1d0;
  SCollisionInfo SStack_194;
  byte auStack_16c [20];
  uint auStack_158 [2];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  uint auStack_138 [6];
  CBoundingBox3D CStack_120;
  float fStack_108;
  float afStack_104 [5];
  float fStack_f0;
  float afStack_ec [4];
  uint uStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float afStack_cc [3];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  uint uStack_9c;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [5];
  float afStack_48 [6];
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  int iStack_20;
  CLocation *pCStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar8 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_fffffdb8);
  puVar6 = auStack_138;
  puVar7 = auStack_158;
  for (iVar5 = 6; iVar5 != 0; iVar5 = iVar5 + -1) {
    *puVar7 = *puVar6;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
    puVar7 = puVar7 + (uint)bVar8 * -2 + 1;
  }
  fStack_150 = fStack_150 + _DAT_005eb0c8;
  fStack_14c = fStack_14c + _DAT_005eb0c8;
  fStack_144 = fStack_144 + _DAT_005eb0cc;
  fStack_140 = fStack_140 + _DAT_005eb0cc;
  core_box_cpp_CBoundingBox3D_reset_FUN_0041b600(&CStack_120);
  __arrinit(aCStack_230,8,&g_CVectorTypeInfo);
  point = aCStack_230;
  iVar5 = 0;
  do {
    core_box_cpp_FUN_0041a600(&fStack_150,iVar5);
    afStack_48[0] = (float)uStack_9c;
    afStack_5c[(uint)bVar8 * -2 + 6] = afStack_ec[(uint)bVar8 * -2 + 0x15];
    afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7] =
         afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x16];
    core_actor_cpp_FUN_00408d70(this_ptr,afStack_5c + 5);
    CStack_6c.x = afStack_5c[2];
    *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + 4) = afStack_5c[(uint)bVar8 * -2 + 3];
    *(float *)((int)&CStack_6c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8) =
         afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4];
    if (point != &CStack_6c) {
      point->x = CStack_6c.x;
      point->y = CStack_6c.y;
      point->z = CStack_6c.z;
    }
    core_box_cpp_CBoundingBox3D_expand_FUN_0041a590(&CStack_120,point);
    iVar5 = iVar5 + 1;
    point = point + 1;
  } while (iVar5 < 8);
  fStack_30 = SQRT(fStack_148 * fStack_148 + fStack_150 * fStack_150 + fStack_14c * fStack_14c);
  fStack_2c = SQRT(fStack_13c * fStack_13c + fStack_140 * fStack_140 + fStack_144 * fStack_144);
  fStack_28 = fStack_30;
  if (fStack_30 < fStack_2c) {
    fStack_28 = fStack_2c;
  }
  fStack_28 = fStack_28 * _DAT_005eb0d0 + _DAT_005eb0d4;
  fStack_24 = fStack_28 * fStack_28;
  afStack_104[4] = fStack_13c - fStack_148;
  afStack_104[2] = 0.0;
  afStack_104[3] = 0.0;
  core_actor_cpp_FUN_00408cf0(this_ptr,afStack_104 + 2);
  fStack_a8 = fStack_f0;
  afStack_ec[(uint)bVar8 * -2 + 0x12] = afStack_ec[(uint)bVar8 * -2];
  afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x13] =
       afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
  pCStack_1c = &(this_ptr->base).location;
  iStack_18 = 0;
  for (iStack_14 = 0; iStack_14 < g_CDemonSetPtr->character_count; iStack_14 = iStack_14 + 1) {
    iVar5 = *(int *)((int)g_CDemonSetPtr->characters + iStack_18);
    fVar1 = (pCStack_1c->position).x - *(float *)(iVar5 + 0x20);
    fVar3 = (pCStack_1c->position).y - *(float *)(iVar5 + 0x24);
    fVar2 = (pCStack_1c->position).z - *(float *)(iVar5 + 0x28);
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 <= fStack_24) {
      core_setcolid_cpp_SCollisionInfo_ctor_FUN_00537fa0(&SStack_194);
      SStack_194.ray_query.ray_type = 0;
      iStack_20 = (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x44))(iVar5,&SStack_194);
      if (iStack_20 != 0) {
        SStack_194.cylinder_bottom_y = 0.0;
        core_actor_cpp_FUN_00408de0(this_ptr,(float *)(iVar5 + 0x20));
        afStack_ec[2] = fStack_60;
        afStack_ec[(uint)bVar8 * -2 + 3] = afStack_5c[(uint)bVar8 * -2];
        afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 4] =
             afStack_5c[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1];
        if (afStack_ec[2] < fStack_150) {
          afStack_ec[2] = fStack_150;
        }
        if (fStack_144 < afStack_ec[2]) {
          afStack_ec[2] = fStack_144;
        }
        if (afStack_ec[3] < fStack_14c) {
          afStack_ec[3] = fStack_14c;
        }
        if (fStack_140 < afStack_ec[3]) {
          afStack_ec[3] = fStack_140;
        }
        uStack_dc = 0;
        core_actor_cpp_FUN_00408d70(this_ptr,afStack_ec + 2);
        fStack_90 = fStack_78;
        afStack_ec[(uint)bVar8 * -2 + 0x18] = afStack_ec[(uint)bVar8 * -2 + 0x1e];
        afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x19] =
             afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1f];
        fVar4 = (float)core_actor_cpp_FUN_004093a0
                                 (iVar5,afStack_ec + 0x17,afStack_ec + 0x11,auStack_16c,&SStack_194,
                                  iStack_20,&CStack_120);
        fVar3 = fStack_88;
        fVar2 = fStack_8c;
        fVar1 = fStack_90;
        if ((0.0 <= fVar4) && (fVar4 <= 1.0)) {
          pfVar9 = afStack_ec + 8;
          fStack_d8 = fStack_a8 * fVar4;
          fStack_d4 = fStack_a4 * fVar4;
          fStack_d0 = fStack_a0 * fVar4;
          fStack_c0 = fStack_a8 * fVar4;
          afStack_ec[(uint)bVar8 * -2 + 0xc] = afStack_ec[(uint)bVar8 * -2 + 6];
          afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0xd] =
               afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 7];
          fStack_84 = fVar1 + fStack_c0;
          fStack_80 = fVar2 + fStack_bc;
          fStack_7c = fVar3 + fStack_b8;
          afStack_cc[0] = fVar1 + fStack_c0;
          afStack_ec[(uint)bVar8 * -2 + 9] = afStack_ec[(uint)bVar8 * -2 + 0x1b];
          afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 10] =
               afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x1c];
          core_actor_cpp_FUN_00408de0(iVar5,pfVar9);
          this_ptr_00 = &SStack_1d0;
          fStack_108 = fStack_b4;
          afStack_104[(uint)bVar8 * -2] = afStack_ec[(uint)bVar8 * -2 + 0xf];
          afStack_104[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
               afStack_ec[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 0x10];
          core_charactr_cpp_SDamageInfo_ctor_FUN_004222d0(this_ptr_00);
          SStack_1d0.damage_amount = this_ptr->damage_strength;
          SStack_1d0.damage_type = DAMAGE_TYPE_ATTACK_BLADE;
          if (&SStack_1d0.impact_direction != (CVector3f *)&fStack_108) {
            SStack_1d0.impact_direction.x = fStack_108;
            SStack_1d0.impact_direction.y = afStack_104[0];
            SStack_1d0.impact_direction.z = afStack_104[1];
          }
          SStack_1d0.attacker = &this_ptr->base;
          SStack_1d0.wielder = &this_ptr->base;
          (**(code **)(*(int *)(iVar5 + 0x2b0) + 0x110))(iVar5,&SStack_1d0);
        }
      }
    }
    iStack_18 = iStack_18 + 4;
  }
  return;
}
