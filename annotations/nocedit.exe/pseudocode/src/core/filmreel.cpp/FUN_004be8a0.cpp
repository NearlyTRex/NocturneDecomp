// Name: core_filmreel.cpp_FUN_004be8a0
// Address: 004be8a0
// Address Range: [[004be8a0, 004be8e4]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_FUN_004be8a0(void)

#include "nocturne.h"

/* Signature: byte actors_other_filmreel.cpp_FUN_004be8a0(CFilmReel* pFilmReel) */

void __cdecl core_filmreel_cpp_FUN_004be8a0(void)

{
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_serialize_FUN_0040c1c0(in_stack_00000004);
  core_actor_cpp_serializeKeyframedModelInstance_FUN_0040b8f0
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),"modelName");
  if (g_CFilmReelClassVersion < 2) {
    return;
  }
  core_actor_cpp_serializeString_FUN_0040b5c0
            ((char **)&in_stack_00000004[2].location.position.z,"movieName");
  return;
}
