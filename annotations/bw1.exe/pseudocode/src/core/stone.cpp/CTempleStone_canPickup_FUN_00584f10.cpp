// Name: core_stone.cpp_CTempleStone_canPickup_FUN_00584f10
// Address: 00584f10
// Address Range: [[00584f10, 00584f68]]
// Convention: __cdecl
// Signature: int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00584f10(CTempleStone *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00584f10(CTempleStone *this_ptr,CDemonActor *picker)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                     (this_ptr->dest_actor,g_CActorDestinationClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[1].location.area_id != 0)) {
    return 0;
  }
  if ((this_ptr->base).pickup_type != BOX_PICKUP_CARRY) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c550(picker,"CHero");
    if (iVar2 == 0) {
      return 0;
    }
  }
  return (this_ptr->base).pickup_type;
}
