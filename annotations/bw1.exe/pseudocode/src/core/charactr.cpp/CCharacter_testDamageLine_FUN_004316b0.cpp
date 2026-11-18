// Name: core_charactr.cpp_CCharacter_testDamageLine_FUN_004316b0
// Address: 004316b0
// Address Range: [[004316b0, 004319df]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_004316b0(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_004316b0(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

{
  float fVar1;
  int iVar2;
  byte bVar3;
  double dVar4;
  float afStackY_10dc [1011];
  CVector3f *pCVar5;
  CVector3f *out_intersection_point;
  float fStack_f0;
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
  float afStack_b4 [3];
  byte auStack_a8 [12];
  float afStack_9c [4];
  float fStack_8c;
  CVector3f CStack_84;
  byte auStack_78 [12];
  CVector3f CStack_6c;
  CVector3f CStack_60;
  CVector3f CStack_54;
  float afStack_48 [2];
  CVector3f CStack_40;
  CVector3f CStack_34;
  int iStack_28;
  int iStack_20;
  float fStack_1c;
  
  bVar3 = 0;
  if (this_ptr->is_invulnerable != 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0
            (&this_ptr->base,start,(CVector3f *)auStack_78);
  CStack_c0.x = (float)auStack_78._0_4_;
  afStack_b4[(uint)bVar3 * -2 + -2] = *(float *)(auStack_78 + (uint)bVar3 * -8 + 4);
  afStack_b4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -1] =
       *(float *)(auStack_78 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408bb0(&this_ptr->base,end,&CStack_84);
  out_intersection_point = &CStack_6c;
  pCVar5 = (CVector3f *)auStack_a8;
  auStack_a8._0_4_ = CStack_84.x;
  *(uint *)(auStack_a8 + (uint)bVar3 * -8 + 4) =
       *(uint *)(auStack_78 + (uint)bVar3 * -8 + -8);
  *(uint *)(auStack_a8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       *(uint *)(auStack_78 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + -4);
  iVar2 = (*((this_ptr->base).vtable._ub)->testLineIntersection)
                    (&this_ptr->base,&CStack_c0,pCVar5,out_intersection_point);
  if (iVar2 != 0) {
    if (out_hit != (CVector3f *)0x0) {
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                (&this_ptr->base,&CStack_6c,&CStack_60);
      CStack_54.x = CStack_60.x;
      afStack_48[(uint)bVar3 * -2 + -2] = *(float *)((int)&CStack_60 + (uint)bVar3 * -8 + 4);
      afStack_48[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -1] =
           *(float *)((int)&CStack_60 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
      if (&CStack_54 != out_hit) {
        out_hit->x = CStack_54.x;
        out_hit->y = CStack_54.y;
        out_hit->z = CStack_54.z;
      }
    }
    if (0.0 < (double)damage_info->damage_amount) {
      dVar4 = round((double)damage_info->damage_amount * 0.40000000000000002);
      iStack_28 = (int)ROUND(dVar4);
      iStack_20 = (int)ROUND(dVar4) + 1;
      CStack_c0.z = end->x - start->x;
      afStack_b4[0] = end->y - start->y;
      afStack_b4[1] = end->z - start->z;
      fStack_dc = CStack_c0.z;
      *(float *)((int)&stack0xffffff28 + (uint)bVar3 * -8) = afStack_b4[(uint)bVar3 * -2];
      *(float *)((int)&stack0xffffff2c + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
           afStack_b4[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      fStack_1c = SQRT(fStack_d4 * fStack_d4 + fStack_dc * fStack_dc + fStack_d8 * fStack_d8);
      if (fStack_1c <= 0.0) {
        fStack_d8 = 0.0;
        fStack_dc = 0.0;
        fStack_d4 = 0.0;
      }
      else {
        fVar1 = 1.0 / fStack_1c;
        fStack_dc = fStack_dc * fVar1;
        fStack_d8 = fStack_d8 * fVar1;
        fStack_d4 = fStack_d4 * fVar1;
      }
      pCVar5 = (CVector3f *)(auStack_78 + 8);
      fStack_f0 = fStack_d8 * 10.0f;
      fStack_ec = fStack_d4 * 10.0f;
      CStack_34.x = fStack_dc * 10.0f;
      *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + 4) =
           *(uint *)((int)&stack0xffffff10 + (uint)bVar3 * -8);
      *(uint *)((int)&CStack_34 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           *(uint *)((int)&stack0xffffff14 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
                (&this_ptr->base,pCVar5,(CVector3f *)(auStack_a8 + 8));
      CStack_40.x = (float)auStack_a8._8_4_;
      *(float *)((int)&CStack_40 + (uint)bVar3 * -8 + 4) = afStack_9c[(uint)bVar3 * -2];
      *(float *)((int)&CStack_40 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
           afStack_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004e6060
                (g_CGorePtr,&CStack_40,&CStack_34,iStack_20,this_ptr->blood_type);
    }
    fStack_d0 = fStack_c4 + afStack_b4[2];
    fStack_cc = CStack_c0.x + (float)auStack_a8._0_4_;
    fStack_c8 = CStack_c0.y + (float)auStack_a8._4_4_;
    CStack_54.z = fStack_c4 + afStack_b4[2];
    afStack_48[(uint)bVar3 * -2] = *(float *)((int)&stack0xffffff34 + (uint)bVar3 * -8);
    afStack_48[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
         *(float *)((int)&stack0xffffff38 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    fStack_e8 = CStack_54.z * 0.5f;
    fStack_e4 = afStack_48[0] * 0.5f;
    fStack_e0 = afStack_48[1] * 0.5f;
    afStack_9c[2] = CStack_54.z * 0.5f;
    afStack_9c[(uint)bVar3 * -2 + 3] = *(float *)((int)&stack0xffffff1c + (uint)bVar3 * -8);
    afStack_9c[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
         *(float *)((int)&stack0xffffff20 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
    if (&damage_info->impact_direction != (CVector3f *)(afStack_9c + 2)) {
      (damage_info->impact_direction).x = afStack_9c[2];
      (damage_info->impact_direction).y = afStack_9c[3];
      (damage_info->impact_direction).z = fStack_8c;
    }
    (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,damage_info);
    return 1;
  }
  damage_info->damage_amount = 0.0;
  return 0;
}
