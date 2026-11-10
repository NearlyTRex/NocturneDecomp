// Name: core_stone.cpp_CTempleStone_canPickup_FUN_00584f10
// Address: 00584f10
// Address Range: [[00584f10, 00584f68]]
// Convention: __cdecl
// Signature: int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00584f10(CTempleStone *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00584f10(CTempleStone *this_ptr,CDemonActor *picker)

{
  int iVar1;
  
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600
                    (*(uint *)&this_ptr->field_0x678,g_CActorDestinationClassInfo.name_hash);
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x184) != 0)) {
    return 0;
  }
  if ((this_ptr->base).pickup_type != BOX_PICKUP_CARRY) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c550(picker,"CHero");
    if (iVar1 == 0) {
      return 0;
    }
  }
  return (this_ptr->base).pickup_type;
}
