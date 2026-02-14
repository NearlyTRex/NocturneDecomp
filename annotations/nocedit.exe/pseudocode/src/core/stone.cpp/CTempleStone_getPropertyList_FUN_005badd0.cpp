// Name: core_stone.cpp_CTempleStone_getPropertyList_FUN_005badd0
// Address: 005badd0
// Address Range: [[005badd0, 005bae09]]
// Convention: __cdecl
// Signature: void __cdecl core_stone_cpp_CTempleStone_getPropertyList_FUN_005badd0(CTempleStone *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_stone_cpp_CTempleStone_getPropertyList_FUN_005badd0(CTempleStone *this_ptr,CActorPropertyList *property_list)

{
  core_boxactor_cpp_CBoxActor_getPropertyList_FUN_004226e0(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Our destination",&this_ptr->dest_actor,1,
             "CActorDestination",(CActorPropertyValidatorFunc *)0x0);
  return;
}
