// Name: core_mission.cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0
// Address: 004d9df0
// Address Range: [[004d9df0, 004d9e48]]
// Convention: __cdecl
// Signature: int __cdecl core_mission_cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0(CDemonMission *this_ptr)

#include "nocturne.h"

int __cdecl core_mission_cpp_CDemonMission_countDamageableEnemies_FUN_004d9df0(CDemonMission *this_ptr)

{
  CCharacter *this_ptr_00;
  int iVar1;
  CDemonActor *actor_ptr;
  int iVar2;
  
  actor_ptr = *(CDemonActor **)(this_ptr->set_names[3] + 0xcc);
  iVar2 = 0;
  do {
    if (actor_ptr == (CDemonActor *)0x0) {
      return iVar2;
    }
    while ((this_ptr_00 = (CCharacter *)
                          core_actor_cpp_castToClassHash_FUN_0040d890
                                    (actor_ptr,g_CEnemyActorType_01bcdebc.name_hash),
           this_ptr_00 != (CCharacter *)0x0 &&
           (iVar1 = (*(((this_ptr_00->base).vtable._uc)->_uc).releaseFromGrab)(this_ptr_00),
           iVar1 != 0))) {
      iVar2 = iVar2 + 1;
      actor_ptr = actor_ptr->next_actor;
      if (actor_ptr == (CDemonActor *)0x0) {
        return iVar2;
      }
    }
    actor_ptr = actor_ptr->next_actor;
  } while( true );
}
