// Name: core_stone.cpp_CTempleStone_canPickup_FUN_00534d60
// Address: 00534d60
// Address Range: [[00534d60, 00534db8]]
// Convention: __cdecl
// Signature: int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00534d60(CTempleStone *this_ptr,CDemonActor *picker)

#include "nocturne.h"

int __cdecl core_stone_cpp_CTempleStone_canPickup_FUN_00534d60(CTempleStone *this_ptr,CDemonActor *picker)

{
  CDemonActor *pCVar1;
  int iVar2;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040d890
                     (this_ptr->dest_actor,g_CActorDestinationActorType_014b8a1c.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (pCVar1[1].location.area_id != 0)) {
    return 0;
  }
  if ((this_ptr->base).pickup_type != 3) {
    iVar2 = core_actor_cpp_isOfClass_FUN_0040d7e0(picker,"CHero");
    if (iVar2 == 0) {
      return 0;
    }
  }
  return (this_ptr->base).pickup_type;
}
