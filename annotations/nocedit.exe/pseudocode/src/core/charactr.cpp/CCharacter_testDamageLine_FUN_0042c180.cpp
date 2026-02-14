// Name: core_charactr.cpp_CCharacter_testDamageLine_FUN_0042c180
// Address: 0042c180
// Address Range: [[0042c180, 0042c3ba]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CVector3f *pCVar5;
  double dVar6;
  float fStack_7c;
  byte auStack_6c [12];
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  int iStack_1c;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&this_ptr->base,&local_48,start);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&this_ptr->base,&local_54,end);
  iVar4 = (*((this_ptr->base).vtable._ub)->testLineIntersection)
                    (&this_ptr->base,&local_48,&local_54,&local_60);
  if (iVar4 != 0) {
    if (out_hit != (CVector3f *)0x0) {
      pCVar5 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,(CVector3f *)auStack_6c,&local_60);
      if (out_hit != pCVar5) {
        out_hit->x = pCVar5->x;
        out_hit->y = pCVar5->y;
        out_hit->z = pCVar5->z;
      }
    }
    if (0.0 < (double)damage_info->damage_amount) {
      fVar1 = end->x - start->x;
      fVar2 = end->y - start->y;
      fVar3 = end->z - start->z;
      fVar1 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
      dVar6 = round((double)damage_info->damage_amount * 0.40000000000000002);
      iStack_1c = (int)ROUND(dVar6);
      if (fVar1 <= 0.0) {
        fStack_7c = 0.0;
      }
      else {
        fStack_7c = fStack_7c * (1.0 / fVar1);
      }
      local_48.z = fStack_7c * 10.0f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,&CStack_28,(CVector3f *)(auStack_6c + 8));
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
    }
    fStack_34 = (local_54.z + local_60.z) * 0.5f;
    fStack_30 = (local_48.x + local_54.x) * 0.5f;
    fStack_2c = (local_48.y + local_54.y) * 0.5f;
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
