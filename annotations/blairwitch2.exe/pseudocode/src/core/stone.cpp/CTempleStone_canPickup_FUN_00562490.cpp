// Name: core_stone.cpp_CTempleStone_canPickup_FUN_00562490
// Address: 00562490
// Address Range: [[00562490, 005624e8]]
// Convention: __cdecl
// Signature: int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00562490(CTempleStone *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00562490(CTempleStone *this_ptr,CDemonActor *picker)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                     (this_ptr->dest_actor,g_CActorDestinationClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[1].location.area_id != 0)) {
    return 0;
  }
  if ((this_ptr->base).pickup_type != BOX_PICKUP_CARRY) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040c840(picker,"CHero");
    if (iVar2 == 0) {
      return 0;
    }
  }
  return (this_ptr->base).pickup_type;
}
