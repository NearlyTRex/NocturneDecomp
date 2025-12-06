// Name: core_mission.cpp_CDemonMission_FUN_00524e00
// Address: 00524e00
// Address Range: [[00524e00, 00524e58]]
// Convention: __cdecl
// Signature: int core_mission.cpp_CDemonMission_FUN_00524e00(CDemonMission * this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_FUN_00524e00(CDemonMission *this_ptr)

{
  CDemonActor *this_ptr_00;
  int iVar1;
  SCollisionInfo *unaff_EBX;
  CDemonActor *actor_ptr;
  int iVar2;
  
  actor_ptr = this_ptr->first_actor;
  iVar2 = 0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
      return iVar2;
    }
    while ((this_ptr_00 = core_actor_cpp_castToClassHash_FUN_0040c790
                                    (actor_ptr,g_CEnemyClassInfo.name_hash),
           this_ptr_00 != (CDemonActor *)0x0 &&
           (iVar1 = (*this_ptr_00->vtable[1].hasCollision)(this_ptr_00,unaff_EBX), iVar1 != 0))) {
      iVar2 = iVar2 + 1;
      actor_ptr = actor_ptr->next_actor;
      if (actor_ptr == (CDemonActor *)0x0) {
        return iVar2;
      }
    }
    actor_ptr = actor_ptr->next_actor;
  } while( true );
}
