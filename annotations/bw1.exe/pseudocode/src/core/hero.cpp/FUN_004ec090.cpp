// Name: core_hero.cpp_FUN_004ec090
// Address: 004ec090
// Address Range: [[004ec090, 004ec1ac]]
// Convention: unknown
// Signature: bool core_hero_cpp_FUN_004ec090(CDemonActor *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool core_hero_cpp_FUN_004ec090(CDemonActor *param_1,char *param_2)

{
  CDemonActor *this_ptr;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  float local_20;
  int local_1c;
  int local_18;
  
  local_20 = 1e+30;
  local_1c = 0;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
    this_ptr = *(CDemonActor **)((int)g_CDemonSetPtr->actors + local_1c);
    if ((((ABS((this_ptr->location).position.x - (param_1->location).position.x) <=
           (float)_DAT_005e492d) &&
         (ABS((this_ptr->location).position.y - (param_1->location).position.y) <=
          (float)_DAT_005e492d)) &&
        (ABS((this_ptr->location).position.z - (param_1->location).position.z) <=
         (float)_DAT_005e492d)) && (this_ptr != param_1)) {
      pCVar1 = (*((this_ptr->vtable)._ub)->getCarrier)(this_ptr);
      if (pCVar1 == (CDemonActor *)0x0) {
        iVar2 = (*((this_ptr->vtable)._ub)->canPickup)(this_ptr,param_1);
        if (iVar2 != 0) {
          iVar3 = core_actor_cpp_isOfClass_FUN_0040c550(this_ptr,param_2);
          if (iVar3 != 0) {
            iVar2 = (*(((param_1->vtable)._uh)->_uh).canReachPickup)
                              ((CHero *)param_1,this_ptr,iVar2,&local_20);
            if (iVar2 != 0) {
              param_1[0x17c].create_event[0x48] = '\x04';
              param_1[0x17c].create_event[0x49] = '\0';
              param_1[0x17c].create_event[0x4a] = '\0';
              param_1[0x17c].create_event[0x4b] = '\0';
              *(CDemonActor **)(param_1[0x17c].create_event + 0x4c) = this_ptr;
              *(CDemonActor **)(param_1[0x17c].create_event + 0x50) = this_ptr;
            }
          }
        }
      }
    }
    local_1c = local_1c + 4;
  }
  return *(int *)(param_1[0x17c].create_event + 0x48) == 4;
}
