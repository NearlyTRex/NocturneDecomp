// Name: core_hero.cpp_CHero_FUN_004f2f50
// Address: 004f2f50
// Address Range: [[004f2f50, 004f30eb]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f2f50(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2f50(CHero *this_ptr)

{
  CLever *this_ptr_00;
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  CVector3f local_3c;
  CVector3f local_30;
  CLocation *local_1c;
  float local_18;
  float local_14;
  
  local_1c = &(this_ptr->base).base.location;
  iVar3 = 0;
  local_18 = 1e+30;
  this_ptr->lever_to_pull = (CDemonActor *)0x0;
  for (iVar4 = 0; iVar4 < g_CDemonSetPtr->actor_count; iVar4 = iVar4 + 1) {
    this_ptr_00 = (CLever *)
                  core_actor_cpp_castToClassHash_FUN_0040c790
                            (*(CDemonActor **)((int)g_CDemonSetPtr->actors + iVar3),
                             g_CLeverClassInfo.name_hash);
    if (this_ptr_00 != (CLever *)0x0) {
      core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                ((CDemonActor *)this_ptr,&local_3c,&(this_ptr_00->base).location.position);
      if ((((ABS(local_3c.y) <= (float)5) && (0.0 <= (double)local_3c.z)) &&
          ((double)local_3c.z <= 3)) && (ABS(local_3c.x) <= (float)3)) {
        pCVar1 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                           (&local_30,&local_3c);
        if (ABS(pCVar1->y) <= (float)1.04719755116667) {
          iVar2 = core_lever_cpp_CLever_FUN_00505080(this_ptr_00);
          if (iVar2 != 0) {
            local_14 = SQRT((local_3c.z + -2.0f) * (local_3c.z + -2.0f) +
                            (local_3c.x + -0.5f) * (local_3c.x + -0.5f));
            if (local_14 <= local_18) {
              this_ptr->lever_to_pull = (CDemonActor *)this_ptr_00;
              local_18 = local_14;
            }
          }
        }
      }
    }
    iVar3 = iVar3 + 4;
  }
  if (this_ptr->lever_to_pull != (CDemonActor *)0x0) {
    iVar3 = core_event_cpp_CRuleList_evaluateAndRun_FUN_004b18e0
                      ((CRuleList *)(this_ptr->lever_to_pull[3].actor_name + 0x18));
    if (iVar3 == 0) {
      (this_ptr->player_control).action_states[3] = 0;
      return 1;
    }
  }
  return 0;
}
