// Name: core_hero.cpp_CHero_FUN_004f2c40
// Address: 004f2c40
// Address Range: [[004f2c40, 004f2d66]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_CHero_FUN_004f2c40(CHero *this_ptr)

#include "nocturne.h"

int __cdecl core_hero_cpp_CHero_FUN_004f2c40(CHero *this_ptr)

{
  CHero *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  CVector3f local_50;
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  int local_14;
  
  iVar3 = 0;
  local_50.x = 0.0;
  local_50.y = 0.0;
  local_50.z = 1.5;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            ((CDemonActor *)this_ptr,&local_38,&local_50);
  local_14 = 0;
  do {
    if (g_CDemonSetPtr->character_count <= iVar3) {
      return 0;
    }
    pCVar1 = *(CHero **)((int)g_CDemonSetPtr->characters + local_14);
    if (((pCVar1->base).talk_to_me_event[0] != '\0') && (pCVar1 != this_ptr)) {
      local_20.x = (pCVar1->base).base.location.position.x -
                   (this_ptr->base).base.location.position.x;
      local_20.z = (pCVar1->base).base.location.position.z -
                   (this_ptr->base).base.location.position.z;
      if (ABS((pCVar1->base).base.location.position.y - (this_ptr->base).base.location.position.y)
          <= (float)4) {
        local_20.y = 0.0;
        if (SQRT(local_20.z * local_20.z + local_20.x * local_20.x) <= (float)5) {
          pCVar2 = core_actor_cpp_CDemonActor_inverseTransformVector_FUN_00408ea0
                             ((CDemonActor *)this_ptr,&local_2c,&local_20);
          pCVar2 = core_vecdir_cpp_convertDirectionVectorToEulerAngles_FUN_005e7830
                             (&local_44,pCVar2);
          if (ABS(pCVar2->y) <= (float)0.34906585038888899) {
            core_event_cpp_CEventList_executeCommands_FUN_004aabe0
                      (g_CEventListPtr,(pCVar1->base).talk_to_me_event);
            return 1;
          }
        }
      }
    }
    local_14 = local_14 + 4;
    iVar3 = iVar3 + 1;
  } while( true );
}
