// Name: core_trash.cpp_CTrash_process_FUN_00576ab0
// Address: 00576ab0
// Address Range: [[00576ab0, 00577472]]
// Convention: __cdecl
// Signature: void __cdecl core_trash_cpp_CTrash_process_FUN_00576ab0(CTrash *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_trash_cpp_CTrash_process_FUN_00576ab0(CTrash *this_ptr,float delta_time)

{
  CLocation *pCVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  CDemonSet *pCVar5;
  UOrientationVector *pUVar6;
  int iVar7;
  CVector3f *pCVar8;
  float *pfVar9;
  CMatrix3x4f *pCVar10;
  byte bVar11;
  float afStackY_1188 [958];
  CVector3f *pCVar12;
  CMatrix3x4f CStack_260;
  float afStack_230 [12];
  CMatrix3x4f CStack_200;
  CMatrix3x4f CStack_1d0;
  float fStack_1a0;
  float afStack_19c [4];
  float fStack_18c;
  float afStack_188 [3];
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float afStack_170 [4];
  float afStack_160 [4];
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  float fStack_10c;
  float fStack_108;
  float fStack_104;
  float fStack_100;
  float fStack_fc;
  float fStack_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float afStack_d0 [4];
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_2c;
  UOrientationVector *pUStack_28;
  CVector3f *pCStack_20;
  float fStack_18;
  float fStack_14;
  
  bVar11 = 0;
  pCVar1 = &(this_ptr->base).location;
  iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(&pCVar1->position,100.0);
  if (iVar7 == 0) {
    iVar7 = core_hero_cpp_isAnyHeroWithinRadius_FUN_004ce100(&this_ptr->home_pos,100.0);
    if (iVar7 != 0) {
      return;
    }
    (pCVar1->position).x = (this_ptr->home_pos).x;
    (this_ptr->base).location.position.y = (this_ptr->home_pos).y;
    (this_ptr->base).location.position.z = (this_ptr->home_pos).z;
    return;
  }
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.05,0.05);
  (this_ptr->drift).x = fStack_14 + (this_ptr->drift).x;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.05,0.05);
  pfVar9 = &(this_ptr->drift).y;
  *pfVar9 = fStack_14 + *pfVar9;
  fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-0.05,0.05);
  pfVar9 = &(this_ptr->drift).z;
  *pfVar9 = fStack_14 + *pfVar9;
  pCVar5 = g_CDemonSetPtr;
  afStack_170[0] = 4.0;
  afStack_170[1] = 0.0;
  pCVar8 = &(g_CDemonSetPtr->active_fog).scroll;
  afStack_170[2] = 0.0;
  if (pCVar8 != (CVector3f *)(afStack_19c + 0xb)) {
    pCVar8->x = 4.0;
    (pCVar5->active_fog).scroll.y = 0.0;
    (pCVar5->active_fog).scroll.z = 0.0;
  }
  fVar2 = this_ptr->animation_timer - delta_time;
  this_ptr->animation_timer = fVar2;
  pCVar5 = g_CDemonSetPtr;
  if (fVar2 <= 0.0) {
    pCVar8 = &(g_CDemonSetPtr->active_fog).scroll;
    if (&this_ptr->drift_target != pCVar8) {
      (this_ptr->drift_target).x = pCVar8->x;
      (this_ptr->drift_target).y = (pCVar5->active_fog).scroll.y;
      (this_ptr->drift_target).z = (pCVar5->active_fog).scroll.z;
    }
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-10.0,10.0);
    (this_ptr->drift_target).x = fStack_14 + (this_ptr->drift_target).x;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(15.0,25.0);
    (this_ptr->drift_target).y = fStack_14 + (this_ptr->drift_target).y;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(-10.0,10.0);
    (this_ptr->drift_target).z = fStack_14 + (this_ptr->drift_target).z;
    fStack_14 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(6.0,20.0);
    this_ptr->animation_timer = fStack_14;
  }
  pCVar8 = &this_ptr->drift_target;
  fStack_d4 = (g_CDemonSetPtr->active_fog).scroll.x - pCVar8->x;
  afStack_d0[0] = (g_CDemonSetPtr->active_fog).scroll.y - (this_ptr->drift_target).y;
  afStack_d0[1] = (g_CDemonSetPtr->active_fog).scroll.z - (this_ptr->drift_target).z;
  fStack_140 = fStack_d4;
  afStack_160[(uint)bVar11 * -2 + 9] = afStack_d0[(uint)bVar11 * -2];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  fStack_74 = fStack_140 * _DAT_005ecd2e;
  fStack_70 = fStack_13c * _DAT_005ecd2e;
  fStack_6c = fStack_138 * _DAT_005ecd2e;
  afStack_160[2] = fStack_140 * _DAT_005ecd2e;
  afStack_160[(uint)bVar11 * -2 + 3] = afStack_d0[(uint)bVar11 * -2 + 0x18];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19];
  pCVar12 = &this_ptr->drift;
  pCVar8->x = pCVar8->x + afStack_160[2];
  (this_ptr->drift_target).y = (this_ptr->drift_target).y + afStack_160[3];
  (this_ptr->drift_target).z = (this_ptr->drift_target).z + fStack_150;
  fStack_f8 = pCVar8->x - pCVar12->x;
  fStack_f4 = (this_ptr->drift_target).y - (this_ptr->drift).y;
  fStack_f0 = (this_ptr->drift_target).z - (this_ptr->drift).z;
  fStack_5c = fStack_f8;
  afStack_d0[(uint)bVar11 * -2 + 0x1e] = afStack_160[(uint)bVar11 * -2 + 0x1b];
  afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f] =
       afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
  fStack_8c = fStack_5c * _DAT_005ecd32;
  fStack_88 = fStack_58 * _DAT_005ecd32;
  fStack_84 = fStack_54 * _DAT_005ecd32;
  fStack_bc = fStack_5c * _DAT_005ecd32;
  afStack_d0[(uint)bVar11 * -2 + 6] = afStack_d0[(uint)bVar11 * -2 + 0x12];
  afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13];
  pCVar12->x = pCVar12->x + fStack_bc;
  (this_ptr->drift).y = (this_ptr->drift).y + fStack_b8;
  (this_ptr->drift).z = (this_ptr->drift).z + fStack_b4;
  pfVar9 = (float *)((int)this_ptr + (uint)bVar11 * -8 + 0x24);
  fStack_14c = (this_ptr->base).location.position.x;
  afStack_160[(uint)bVar11 * -2 + 6] = *pfVar9;
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] = pfVar9[(uint)bVar11 * -2 + 1];
  fStack_18 = -this_ptr->gravity;
  fStack_dc = -this_ptr->gravity;
  pCStack_20 = &this_ptr->velocity;
  fStack_e0 = 0.0;
  fStack_d8 = 0.0;
  fStack_ec = pCVar12->x - (this_ptr->velocity).x;
  fStack_e8 = (this_ptr->drift).y - (this_ptr->velocity).y;
  fStack_e4 = (this_ptr->drift).z - (this_ptr->velocity).z;
  fStack_50 = fStack_ec;
  afStack_d0[(uint)bVar11 * -2 + 0x21] = afStack_160[(uint)bVar11 * -2 + 0x1e];
  fVar2 = fStack_18;
  afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x22] =
       afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1f];
  pfVar9 = &this_ptr->damping_factor;
  fStack_80 = fStack_50 * *pfVar9;
  fStack_7c = fStack_4c * *pfVar9;
  fStack_78 = fStack_48 * *pfVar9;
  fStack_104 = fStack_50 * *pfVar9;
  afStack_160[(uint)bVar11 * -2 + 0x18] = afStack_d0[(uint)bVar11 * -2 + 0x15];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x19] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
  fStack_dc = fVar2 + fStack_100;
  fStack_e0 = fStack_104;
  fStack_d8 = fStack_fc;
  core_actor_cpp_FUN_00408d30(this_ptr,pCVar12);
  afStack_170[3] = fStack_38;
  afStack_160[(uint)bVar11 * -2] = afStack_d0[(uint)bVar11 * -2 + 0x27];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x28];
  pCVar8 = &this_ptr->acceleration;
  fStack_98 = afStack_170[3] * _DAT_005ecd36;
  fStack_94 = afStack_160[0] * _DAT_005ecd36;
  fStack_90 = afStack_160[1] * _DAT_005ecd36;
  fStack_44 = afStack_170[3] * _DAT_005ecd36;
  afStack_d0[(uint)bVar11 * -2 + 0x24] = afStack_d0[(uint)bVar11 * -2 + 0xf];
  pCVar12 = pCStack_20;
  afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x25] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10];
  fVar2 = (this_ptr->acceleration).y * _DAT_005ecd3a;
  fVar3 = (this_ptr->acceleration).z * _DAT_005ecd3a;
  fStack_110 = fStack_104 * delta_time;
  fStack_10c = fStack_dc * delta_time;
  fStack_108 = fStack_fc * delta_time;
  pCVar8->x = pCVar8->x * _DAT_005ecd3a;
  (this_ptr->acceleration).y = fVar2;
  (this_ptr->acceleration).z = fVar3;
  pCVar8->x = pCVar8->x + fStack_44;
  (this_ptr->acceleration).y = (this_ptr->acceleration).y + fStack_40;
  (this_ptr->acceleration).z = (this_ptr->acceleration).z + fStack_3c;
  fStack_128 = fStack_104 * delta_time;
  afStack_160[(uint)bVar11 * -2 + 0xf] = afStack_160[(uint)bVar11 * -2 + 0x15];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x10] =
       afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x16];
  pCVar12->x = pCVar12->x + fStack_128;
  pCVar12->y = pCVar12->y + fStack_124;
  pCVar12->z = pCVar12->z + fStack_120;
  fVar2 = (this_ptr->acceleration).y;
  fVar3 = (this_ptr->acceleration).z;
  fVar2 = SQRT(fVar3 * fVar3 + pCVar8->x * pCVar8->x + fVar2 * fVar2) * _DAT_005ecd3e;
  if (1.0 < fVar2) {
    fVar2 = 1.0 / fVar2;
    pCVar8->x = pCVar8->x * fVar2;
    (this_ptr->acceleration).y = (this_ptr->acceleration).y * fVar2;
    (this_ptr->acceleration).z = (this_ptr->acceleration).z * fVar2;
  }
  fStack_1a0 = (this_ptr->velocity).x * delta_time;
  afStack_19c[0] = (this_ptr->velocity).y * delta_time;
  afStack_19c[1] = (this_ptr->velocity).z * delta_time;
  fStack_134 = fStack_1a0;
  afStack_160[(uint)bVar11 * -2 + 0xc] = afStack_19c[(uint)bVar11 * -2];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd] =
       afStack_19c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 1];
  fStack_a4 = (this_ptr->acceleration).x * delta_time;
  fStack_a0 = (this_ptr->acceleration).y * delta_time;
  fStack_9c = (this_ptr->acceleration).z * delta_time;
  afStack_188[0] = fStack_a4;
  afStack_19c[(uint)bVar11 * -2 + 6] = afStack_d0[(uint)bVar11 * -2 + 0xc];
  afStack_19c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 7] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0xd];
  fStack_14 = (float)core_setcolid_cpp_FUN_00537030
                               (g_CDemonSetPtr,(this_ptr->base).location.position.x,
                                (this_ptr->base).location.position.z,fStack_134,fStack_12c,
                                this_ptr->collision_radius,this_ptr->collision_bottom_y,
                                this_ptr->collision_top_y);
  bVar4 = false;
  if ((0.0 <= fStack_14) && (fStack_14 < 1.0)) {
    fStack_134 = fStack_134 * fStack_14;
    fStack_130 = fStack_130 * fStack_14;
    fStack_12c = fStack_12c * fStack_14;
    bVar4 = true;
  }
  pCVar1 = &(this_ptr->base).location;
  fVar2 = (this_ptr->base).location.position.y;
  fVar3 = (this_ptr->base).location.position.z;
  (pCVar1->position).x = (pCVar1->position).x + fStack_134;
  (this_ptr->base).location.position.y = fVar2 + fStack_130;
  (this_ptr->base).location.position.z = fVar3 + fStack_12c;
  fStack_14 = (float)core_setcolid_cpp_FUN_00534ea0
                               (g_CDemonSetPtr,pCVar1,
                                this_ptr->collision_radius * (float)_DAT_005ecd46);
  fStack_2c = fStack_14;
  if (fStack_14 <= (this_ptr->base).location.position.y) {
    if (!bVar4) goto LAB_005772a7;
  }
  else {
    fVar2 = this_ptr->collision_radius;
    fVar3 = (float)_DAT_005ecd4e;
    (this_ptr->base).location.position.y = fStack_14;
    if (fVar2 * fVar3 + fStack_148 < (this_ptr->base).location.position.y) {
      (pCVar1->position).x = fStack_14c;
      (this_ptr->base).location.position.y = fStack_148;
      (this_ptr->base).location.position.z = fStack_144;
    }
  }
  fVar2 = (this_ptr->acceleration).y * (float)"?333?CTrigger"._1_4_;
  fVar3 = (this_ptr->acceleration).z * (float)"?333?CTrigger"._1_4_;
  (this_ptr->acceleration).x = (this_ptr->acceleration).x * (float)"?333?CTrigger"._1_4_;
  (this_ptr->acceleration).y = fVar2;
  (this_ptr->acceleration).z = fVar3;
LAB_005772a7:
  fStack_b0 = (this_ptr->base).location.position.x - fStack_14c;
  fStack_ac = (this_ptr->base).location.position.y - fStack_148;
  fStack_a8 = (this_ptr->base).location.position.z - fStack_144;
  afStack_19c[2] = fStack_b0;
  afStack_19c[(uint)bVar11 * -2 + 3] = afStack_d0[(uint)bVar11 * -2 + 9];
  afStack_19c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  fVar2 = 1.0 / delta_time;
  fStack_17c = afStack_19c[2] * fVar2;
  fStack_178 = afStack_19c[3] * fVar2;
  fStack_174 = fStack_18c * fVar2;
  afStack_d0[2] = afStack_19c[2] * fVar2;
  afStack_d0[(uint)bVar11 * -2 + 3] = afStack_19c[(uint)bVar11 * -2 + 9];
  afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 4] =
       afStack_19c[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 10];
  if (&this_ptr->velocity != (CVector3f *)(afStack_d0 + 2)) {
    (this_ptr->velocity).x = afStack_d0[2];
    (this_ptr->velocity).y = afStack_d0[3];
    (this_ptr->velocity).z = fStack_c0;
  }
  pUStack_28 = &(this_ptr->base).orient;
  core_xform_cpp_FUN_00591c10(&CStack_260,&DAT_0265370c,pUStack_28);
  core_xform_cpp_FUN_00591c10(&CStack_200,&DAT_0265370c,afStack_19c + 5);
  core_xform_cpp_multiplyMatrix3x4_FUN_005916b0(&CStack_200,&CStack_260,&CStack_1d0);
  pCVar10 = &CStack_1d0;
  pfVar9 = afStack_230;
  for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
    *pfVar9 = pCVar10->m[0].w;
    pCVar10 = (CMatrix3x4f *)((int)pCVar10 + ((uint)bVar11 * -2 + 1) * 4);
    pfVar9 = pfVar9 + (uint)bVar11 * -2 + 1;
  }
  core_xform_cpp_matrixToEulerAngles_FUN_00591de0(afStack_230);
  pUVar6 = pUStack_28;
  fStack_11c = fStack_68;
  afStack_160[(uint)bVar11 * -2 + 0x12] = afStack_d0[(uint)bVar11 * -2 + 0x1b];
  afStack_160[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x13] =
       afStack_d0[(uint)bVar11 * -2 + (uint)bVar11 * -2 + 0x1c];
  if ((UOrientationVector *)(afStack_160 + 0x11) != pUVar6) {
    (pUVar6->vec).x = fStack_11c;
    (pUVar6->vec).y = fStack_118;
    (pUVar6->vec).z = fStack_114;
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(&this_ptr->base);
  return;
}
