// Name: core_charactr.cpp_CCharacter_testDamageLine_FUN_0042c180
// Address: 0042c180
// Address Range: [[0042c180, 0042c3ba]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180 (CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info, CVector3f *out_hit)

#include "nocturne.h"

int __cdecl
core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180
          (CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,
          CVector3f *out_hit)

{
  int iVar1;
  CVector3f *pCVar2;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&this_ptr->base,&local_48,start);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&this_ptr->base,&local_54,end);
  iVar1 = (*((this_ptr->base).vtable._ub)->testLineIntersection)
                    (&this_ptr->base,&local_48,&local_54,&local_60);
  if (iVar1 != 0) {
    if ((out_hit != (CVector3f *)0x0) &&
       (pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           (&this_ptr->base,(CVector3f *)&local_60.y,(CVector3f *)&local_54.y),
       out_hit != pCVar2)) {
      out_hit->x = pCVar2->x;
      out_hit->y = pCVar2->y;
      out_hit->z = pCVar2->z;
    }
    if (0.0 < (double)damage_info->damage_amount) {
      local_60.x = end->z - start->z;
      round((double)damage_info->damage_amount * 0.40000000000000002);
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,(CVector3f *)&stack0xffffffe8,&local_54);
      core_gore_cpp_CGore_FUN_004edbb0(g_CGorePtr);
    }
    fStack_24 = (fStack_3c + local_48.x) * 0.5f;
    fStack_20 = (fStack_38 + local_48.y) * 0.5f;
    fStack_1c = (fStack_34 + local_48.z) * 0.5f;
    if (&damage_info->impact_direction != (CVector3f *)&fStack_24) {
      (damage_info->impact_direction).x = fStack_24;
      (damage_info->impact_direction).y = fStack_20;
      (damage_info->impact_direction).z = fStack_1c;
    }
    (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,damage_info);
    return 1;
  }
  damage_info->damage_amount = 0.0;
  return 0;
}
