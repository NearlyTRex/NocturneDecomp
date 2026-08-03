// Name: core_charactr.cpp_CCharacter_testDamageLine_FUN_004282d0
// Address: 004282d0
// Address Range: [[004282d0, 0042850a]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_004282d0(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_004282d0(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  double dVar4;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  byte auStack_6c [12];
  CVector3f local_60;
  CVector3f local_54;
  byte local_48 [12];
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  int iStack_1c;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
            (&this_ptr->base,(CVector3f *)local_48,start);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290(&this_ptr->base,&local_54,end);
  iVar2 = (*((this_ptr->base).vtable._ub)->testLineIntersection)
                    (&this_ptr->base,(CVector3f *)local_48,&local_54,&local_60);
  if (iVar2 != 0) {
    if (out_hit != (CVector3f *)0x0) {
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                         (&this_ptr->base,(CVector3f *)auStack_6c,&local_60);
      if (out_hit != pCVar3) {
        out_hit->x = pCVar3->x;
        out_hit->y = pCVar3->y;
        out_hit->z = pCVar3->z;
      }
    }
    if (0.0 < (double)damage_info->damage_amount) {
      fStack_78 = end->x - start->x;
      fStack_74 = end->y - start->y;
      fVar1 = end->z - start->z;
      fVar1 = SQRT(fVar1 * fVar1 + fStack_78 * fStack_78 + fStack_74 * fStack_74);
      dVar4 = round((double)damage_info->damage_amount * 0.40000000000000002);
      iStack_1c = (int)ROUND(dVar4);
      iVar2 = iStack_1c + 1;
      if (fVar1 <= 0.0) {
        fStack_78 = 0.0;
        fStack_7c = 0.0;
        fStack_74 = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        fStack_7c = fStack_7c * fVar1;
        fStack_78 = fStack_78 * fVar1;
        fStack_74 = fStack_74 * fVar1;
      }
      local_48._8_4_ = fStack_7c * 10.0f;
      fStack_3c = fStack_78 * 10.0f;
      fStack_38 = fStack_74 * 10.0f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                (&this_ptr->base,&CStack_28,(CVector3f *)(auStack_6c + 8));
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004b0200
                (g_CGore_PTR_005b96c4,&CStack_28,(CVector3f *)(local_48 + 8),iVar2,
                 this_ptr->blood_type);
    }
    fStack_34 = (local_54.z + local_60.z) * 0.5f;
    fStack_30 = ((float)local_48._0_4_ + local_54.x) * 0.5f;
    fStack_2c = ((float)local_48._4_4_ + local_54.y) * 0.5f;
    if (&damage_info->impact_direction != (CVector3f *)&fStack_34) {
      (damage_info->impact_direction).x = fStack_34;
      (damage_info->impact_direction).y = fStack_30;
      (damage_info->impact_direction).z = fStack_2c;
    }
    (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,damage_info);
    return 1;
  }
  damage_info->damage_amount = 0.0;
  return 0;
}
