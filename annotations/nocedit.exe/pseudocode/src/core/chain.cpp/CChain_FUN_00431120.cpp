// Name: core_chain.cpp_CChain_FUN_00431120
// Address: 00431120
// Address Range: [[00431120, 0043124d]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_FUN_00431120(CChain *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_FUN_00431120(CChain *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Vertex count",&this_ptr->vertex_count,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Chain length",&this_ptr->chain_length,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Actor to chain",this_ptr->unk1 + 4,1,"CCharacter",
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Bone to lock on",&this_ptr->target_bone,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Weight",&this_ptr->weight,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Dampen",&this_ptr->dampen,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Friction",&this_ptr->friction,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Gravity",&this_ptr->gravity,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Texture",this_ptr->unk2 + 8,0x14,
             (CDemonActor_CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Pull sound",this_ptr->unk2 + 0x48);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Move sound",this_ptr->unk2 + 0xb0);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Collide with ground",&this_ptr->ground_collide_flag);
  return;
}
