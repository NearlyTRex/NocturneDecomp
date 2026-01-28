// Name: core_baron.cpp_CBaron_serialize_FUN_00413a70
// Address: 00413a70
// Address Range: [[00413a70, 00413ac8]]
// Convention: __cdecl
// Signature: void __cdecl core_baron_cpp_CBaron_serialize_FUN_00413a70(CBaron *this_ptr)

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaron_serialize_FUN_00413a70(CBaron *this_ptr)

{
  core_hero_cpp_CHero_serialize_FUN_004f2610(&this_ptr->base);
  if (g_CBaronClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)this_ptr->unk,"summonEvent");
  core_actor_cpp_serializeString_FUN_0040b5c0((char **)(this_ptr->unk + 100),"goAwayEvent")
  ;
  core_actor_cpp_serializeInteger_FUN_0040b7f0((int *)(this_ptr->unk + 0xf8),"summoned");
  return;
}
