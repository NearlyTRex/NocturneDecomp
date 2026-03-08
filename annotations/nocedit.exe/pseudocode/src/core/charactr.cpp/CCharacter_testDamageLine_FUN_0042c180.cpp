// Name: core_charactr.cpp_CCharacter_testDamageLine_FUN_0042c180
// Address: 0042c180
// Address Range: [[0042c180, 0042c3ba]]
// Convention: __cdecl
// Signature: int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

int __cdecl core_charactr_cpp_CCharacter_testDamageLine_FUN_0042c180(CCharacter *this_ptr,CVector3f *start,CVector3f *end,SDamageInfo *damage_info,CVector3f *out_hit)

{
  float fVar1;
  int iVar2;
  CVector3f *pCVar3;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  CVector3f CStack_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  int iStack_18;
  
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&this_ptr->base,&local_48,start);
  core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(&this_ptr->base,&local_54,end);
  iVar2 = (*((this_ptr->base).vtable._ub)->testLineIntersection)
                    (&this_ptr->base,&local_48,&local_54,&local_60);
  if (iVar2 != 0) {
    if (out_hit != (CVector3f *)0x0) {
      pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                         (&this_ptr->base,&CStack_6c,&local_60);
      if (out_hit != pCVar3) {
        out_hit->x = pCVar3->x;
        out_hit->y = pCVar3->y;
        out_hit->z = pCVar3->z;
      }
    }
    if (0.0 < (double)damage_info->damage_amount) {
      fStack_78 = end->x - start->x;
      fStack_74 = end->y - start->y;
      fStack_70 = end->z - start->z;
      fVar1 = SQRT(fStack_70 * fStack_70 + fStack_78 * fStack_78 + fStack_74 * fStack_74);
      iStack_18 = (int)ROUND(ROUND((double)damage_info->damage_amount * 0.40000000000000002));
      iVar2 = iStack_18 + 1;
      if (fVar1 <= 0.0) {
        fStack_74 = 0.0;
        fStack_78 = 0.0;
        fStack_70 = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        fStack_78 = fStack_78 * fVar1;
        fStack_74 = fStack_74 * fVar1;
        fStack_70 = fStack_70 * fVar1;
      }
      CStack_3c.x = fStack_78 * 10.0f;
      CStack_3c.y = fStack_74 * 10.0f;
      CStack_3c.z = fStack_70 * 10.0f;
      core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                (&this_ptr->base,&CStack_24,&local_60);
      core_gore_cpp_CGore_spawnBloodBurst_FUN_004edbb0
                (g_CGorePtr,&CStack_24,&CStack_3c,iVar2,this_ptr->blood_type);
    }
    fStack_30 = (local_48.x + local_54.x) * 0.5f;
    fStack_2c = (local_48.y + local_54.y) * 0.5f;
    fStack_28 = (local_48.z + local_54.z) * 0.5f;
    if (&damage_info->impact_direction != (CVector3f *)&fStack_30) {
      (damage_info->impact_direction).x = fStack_30;
      (damage_info->impact_direction).y = fStack_2c;
      (damage_info->impact_direction).z = fStack_28;
    }
    (*(((this_ptr->base).vtable._uc)->_uc).processDamage)(this_ptr,damage_info);
    return 1;
  }
  damage_info->damage_amount = 0.0;
  return 0;
}
