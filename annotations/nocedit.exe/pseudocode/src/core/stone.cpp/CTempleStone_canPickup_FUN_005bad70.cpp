// Name: core_stone.cpp_CTempleStone_canPickup_FUN_005bad70
// Address: 005bad70
// Address Range: [[005bad70, 005badc8]]
// Convention: __cdecl
// Signature: int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_005bad70(CTempleStone *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_005bad70(CTempleStone *this_ptr,CDemonActor *picker)

{
  CActorDestination *pCVar1;
  int iVar1;
  
  pCVar1 = (CActorDestination *)
           core_actor_cpp_castToClassHash_FUN_0040c790
                     (this_ptr->dest_actor,g_CActorDestinationClassInfo.name_hash);
  if ((pCVar1 != (CActorDestination *)0x0) && (pCVar1->triggered != 0)) {
    return 0;
  }
  if ((this_ptr->base).pickup_type != 3) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(picker,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return (this_ptr->base).pickup_type;
}
