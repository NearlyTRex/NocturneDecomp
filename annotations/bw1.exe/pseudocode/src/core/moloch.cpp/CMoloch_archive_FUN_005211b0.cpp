// Name: core_moloch.cpp_CMoloch_archive_FUN_005211b0
// Address: 005211b0
// Address Range: [[005211b0, 00521223]]
// Convention: __cdecl
// Signature: void __cdecl core_moloch_cpp_CMoloch_archive_FUN_005211b0(CMoloch *this_ptr)

#include "nocturne.h"

void __cdecl core_moloch_cpp_CMoloch_archive_FUN_005211b0(CMoloch *this_ptr)

{
  core_hero_cpp_CHero_archive_FUN_004eab00(&this_ptr->base);
  core_actor_cpp_archiveString_FUN_0040b440
            (this_ptr->human_to_demon_condition,"humanToDemonCond");
  core_actor_cpp_archiveString_FUN_0040b440
            (this_ptr->demon_to_human_condition,"demonToHumanCond");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->in_human_form,"inHumanForm");
  core_actor_cpp_archiveInteger_FUN_0040b670(&this_ptr->morphing,"morphing");
  core_actor_cpp_archiveFloat_FUN_0040b5f0(&this_ptr->morph_timer,"morphTimer");
  return;
}
