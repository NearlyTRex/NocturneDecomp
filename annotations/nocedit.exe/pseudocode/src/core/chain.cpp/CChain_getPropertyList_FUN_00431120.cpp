// Name: core_chain.cpp_CChain_getPropertyList_FUN_00431120
// Address: 00431120
// Address Range: [[00431120, 0043124d]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_getPropertyList_FUN_00431120 (CChain *this_ptr,CActorPropertyList *property_list)

#include "nocturne.h"

void __cdecl
core_chain_cpp_CChain_getPropertyList_FUN_00431120
          (CChain *this_ptr,CActorPropertyList *property_list)

{
  core_actor_cpp_CDemonActor_getPropertyList_FUN_0040d290(&this_ptr->base,property_list);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Vertex count",&this_ptr->vertex_count,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Chain length",&this_ptr->chain_length,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addChoice_FUN_0040e350
            (property_list,"Actor to chain",&this_ptr->target,1,"CCharacter",
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addInt_FUN_0040e1e0
            (property_list,"Bone to lock on",&this_ptr->target_bone,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Weight",&this_ptr->weight,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Dampen",&this_ptr->dampen,(CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Friction",&this_ptr->friction,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addFloat_FUN_0040e160
            (property_list,"Gravity",&this_ptr->gravity,(CActorPropertyValidatorFunc *)0x0)
  ;
  core_actor_cpp_CActorPropertyList_addString_FUN_0040e290
            (property_list,"Texture",this_ptr->texture_name,0x14,
             (CActorPropertyValidatorFunc *)0x0);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Pull sound",this_ptr->pull_wav_name);
  core_actor_cpp_CActorPropertyList_addSound_FUN_0040e2d0
            (property_list,"Move sound",this_ptr->move_wav_name);
  core_actor_cpp_CActorPropertyList_addBool_FUN_0040e330
            (property_list,"Collide with ground",&this_ptr->ground_collide_flag);
  return;
}
