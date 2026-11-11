// Name: core_stone.cpp_CTempleStone_canPickup_FUN_00562490
// Address: 00562490
// Address Range: [[00562490, 005624e8]]
// Convention: __cdecl
// Signature: int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00562490(CTempleStone *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00562490(CTempleStone *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (this_ptr->dest_actor,g_CActorDestinationClassInfo.name_hash);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x2e0) != 0)) {
    return 0;
  }
  if ((this_ptr->base).pickup_type != BOX_PICKUP_CARRY) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c840(picker,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return (this_ptr->base).pickup_type;
}
