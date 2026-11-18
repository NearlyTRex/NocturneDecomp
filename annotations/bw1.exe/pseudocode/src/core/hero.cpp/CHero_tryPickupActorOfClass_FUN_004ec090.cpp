// Name: core_hero.cpp_CHero_tryPickupActorOfClass_FUN_004ec090
// Address: 004ec090
// Address Range: [[004ec090, 004ec1ac]]
// Convention: __cdecl
// Signature: bool __cdecl core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004ec090(CHero *this_ptr,char *class_name)

#include "nocturne.h"

bool __cdecl core_hero_cpp_CHero_tryPickupActorOfClass_FUN_004ec090(CHero *this_ptr,char *class_name)

{
  CHero *this_ptr_00;
  CDemonActor *pCVar1;
  int iVar2;
  int iVar3;
  float local_20;
  int local_1c;
  int local_18;
  
  local_20 = 1e+30;
  local_1c = 0;
  for (local_18 = 0; local_18 < g_CDemonSetPtr->actor_count; local_18 = local_18 + 1) {
    this_ptr_00 = *(CHero **)((int)g_CDemonSetPtr->actors + local_1c);
    if ((((ABS((this_ptr_00->base).base.location.position.x -
               (this_ptr->base).base.location.position.x) <= (float)10) &&
         (ABS((this_ptr_00->base).base.location.position.y -
              (this_ptr->base).base.location.position.y) <= (float)10)) &&
        (ABS((this_ptr_00->base).base.location.position.z -
             (this_ptr->base).base.location.position.z) <= (float)10)) &&
       (this_ptr_00 != this_ptr)) {
      pCVar1 = (*((this_ptr_00->base).base.vtable._ub)->getCarrier)((CDemonActor *)this_ptr_00);
      if (pCVar1 == (CDemonActor *)0x0) {
        iVar2 = (*((this_ptr_00->base).base.vtable._ub)->canPickup)
                          ((CDemonActor *)this_ptr_00,(CDemonActor *)this_ptr);
        if (iVar2 != 0) {
          iVar3 = core_actor_cpp_isOfClass_FUN_0040c550((CDemonActor *)this_ptr_00,class_name);
          if (iVar3 != 0) {
            iVar2 = (*(((this_ptr->base).base.vtable._uh)->_uh).canReachPickup)
                              (this_ptr,(CDemonActor *)this_ptr_00,iVar2,&local_20);
            if (iVar2 != 0) {
              this_ptr->hero_action = 4;
              this_ptr->hero_action_actor = (CDemonActor *)this_ptr_00;
              this_ptr->hero_action_target = (CDemonActor *)this_ptr_00;
            }
          }
        }
      }
    }
    local_1c = local_1c + 4;
  }
  return this_ptr->hero_action == 4;
}
