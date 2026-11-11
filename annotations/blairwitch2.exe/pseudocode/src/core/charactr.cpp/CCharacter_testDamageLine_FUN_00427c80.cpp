// Name: core_charactr.cpp_CCharacter_testDamageLine_FUN_00427c80
// Address: 00427c80
// Address Range: [[00427c80, 00427faf]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_00427c80(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_00427c80(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float afStackY_10d8 [1011];
  CVector3f *pCVar5;
  CVector3f *out_intersection_point;
  float fStack_ec;
  float fStack_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float fStack_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [2];
  CVector3f CStack_a8;
  float fStack_9c;
  float afStack_98 [4];
  float fStack_88;
  float fStack_84;
  float fStack_78;
  CVector3f CStack_6c;
  float fStack_60;
  float afStack_5c [2];
  CVector3f CStack_54;
  float fStack_48;
  float afStack_44 [2];
  CVector3f CStack_3c;
  CVector3f CStack_30;
  int iStack_24;
  int iStack_1c;
  float fStack_18;
  
  bVar3 = 0;
  if (this_ptr->is_invulnerable != 0) {
    return 0;
  }
  core_actor_cpp_FUN_00408de0(this_ptr,start);
  CStack_c0.x = fStack_78;
  *(float *)((int)&CStack_c0 + (uint)bVar3 * -8 + 4) = afStack_98[(uint)bVar3 * -2 + 9];
  *(float *)((int)&CStack_c0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 10];
  core_actor_cpp_FUN_00408de0(this_ptr,end);
  out_intersection_point = &CStack_6c;
  pCVar5 = &CStack_a8;
  CStack_a8.x = fStack_84;
  *(float *)((int)&CStack_a8 + (uint)bVar3 * -8 + 4) = afStack_98[(uint)bVar3 * -2 + 6];
  *(float *)((int)&CStack_a8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
  iVar2 = (*((this_ptr->base).vtable._ub)->testLineIntersection)
                    (&this_ptr->base,&CStack_c0,pCVar5,out_intersection_point);
  if (iVar2 != 0) {
    if (out_hit != (CVector3f *)0x0) {
      core_actor_cpp_FUN_00408d70(this_ptr,&CStack_6c);
      CStack_54.x = fStack_60;
      *(float *)((int)&CStack_54 + (uint)bVar3 * -8 + 4) = afStack_5c[(uint)bVar3 * -2];
      *(float *)((int)&CStack_54 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_5c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      if (&CStack_54 != out_hit) {
        out_hit->x = CStack_54.x;
        out_hit->y = CStack_54.y;
        out_hit->z = CStack_54.z;
      }
    }
    if (0.0 < damage_info->damage_amount) {
      fVar4 = (float10)damage_info->damage_amount * (float10)_DAT_005ccdde;
      round();
      iStack_24 = (int)ROUND(fVar4);
      iStack_1c = (int)ROUND(fVar4) + 1;
      fStack_b4 = end->x - start->x;
      afStack_b0[0] = end->y - start->y;
      afStack_b0[1] = end->z - start->z;
      fStack_d8 = fStack_b4;
      *(float *)((int)&stack0xffffff2c + (uint)bVar3 * -8) = afStack_b0[(uint)bVar3 * -2];
      *(float *)((int)&stack0xffffff30 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           afStack_b0[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      fStack_18 = SQRT(fStack_d0 * fStack_d0 + fStack_d8 * fStack_d8 + fStack_d4 * fStack_d4);
      if (fStack_18 <= 0.0) {
        fStack_d4 = 0.0;
        fStack_d8 = 0.0;
        fStack_d0 = 0.0;
      }
      else {
        fVar1 = 1.0 / fStack_18;
        fStack_d8 = fStack_d8 * fVar1;
        fStack_d4 = fStack_d4 * fVar1;
        fStack_d0 = fStack_d0 * fVar1;
      }
      pCVar5 = &CStack_6c;
      fStack_ec = fStack_d4 * _DAT_005ccde6;
      fStack_e8 = fStack_d0 * _DAT_005ccde6;
      CStack_30.x = fStack_d8 * _DAT_005ccde6;
      *(uint *)((int)&CStack_30 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&stack0xffffff14 + (uint)bVar3 * -8);
      *(uint *)((int)&CStack_30 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&stack0xffffff18 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      core_actor_cpp_FUN_00408d70(this_ptr,pCVar5);
      CStack_3c.x = fStack_9c;
      *(float *)((int)&CStack_3c + (uint)bVar3 * -8 + 4) = afStack_98[(uint)bVar3 * -2];
      *(float *)((int)&CStack_3c + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004c9850
                (g_CGorePtr,&CStack_3c,&CStack_30,iStack_1c,this_ptr->blood_type);
    }
    fStack_cc = CStack_c0.x + CStack_a8.x;
    fStack_c8 = CStack_c0.y + CStack_a8.y;
    fStack_c4 = CStack_c0.z + CStack_a8.z;
    fStack_48 = CStack_c0.x + CStack_a8.x;
    afStack_44[(uint)bVar3 * -2] = *(float *)((int)&stack0xffffff38 + (uint)bVar3 * -8);
    afStack_44[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&stack0xffffff3c + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_e4 = fStack_48 * _DAT_005ccdea;
    fStack_e0 = afStack_44[0] * _DAT_005ccdea;
    fStack_dc = afStack_44[1] * _DAT_005ccdea;
    afStack_98[2] = fStack_48 * _DAT_005ccdea;
    afStack_98[(uint)bVar3 * -2 + 3] = *(float *)((int)&stack0xffffff20 + (uint)bVar3 * -8);
    afStack_98[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         *(float *)((int)&stack0xffffff24 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&damage_info->impact_direction != (CVector3f *)(afStack_98 + 2)) {
      (damage_info->impact_direction).x = afStack_98[2];
      (damage_info->impact_direction).y = afStack_98[3];
      (damage_info->impact_direction).z = fStack_88;
    }
    (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,damage_info);
    return 1;
  }
  damage_info->damage_amount = 0.0;
  return 0;
}
