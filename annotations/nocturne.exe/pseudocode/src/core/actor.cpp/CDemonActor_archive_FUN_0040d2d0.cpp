// Name: core_actor.cpp_CDemonActor_archive_FUN_0040d2d0
// Address: 0040d2d0
// Address Range: [[0040d2d0, 0040d36a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(int param_1)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_archive_FUN_0040d2d0(int param_1)

{
  byte local_8 [4];
  
  core_actor_cpp_archiveLocation_FUN_0040c590(param_1 + 0x20,"location");
  core_actor_cpp_archiveOrientation_FUN_0040c4f0(param_1 + 0x30,"orient");
  if (INT_005acc88 < 7) {
    core_actor_cpp_archiveFloat_FUN_0040c880(local_8,&FLOAT_00577f15);
    if (INT_005acc88 < 6) {
      return;
    }
  }
  else if (INT_005acc88 < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x70,"wasCreated");
  core_actor_cpp_archiveFloat_FUN_0040c880(param_1 + 0x74,"createProb");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x78,"createEvent");
  return;
}
