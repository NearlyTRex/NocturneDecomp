// Name: FUN_0043b310
// Address: 0043b310
// Address Range: [[0043b310, 0043b3a4]]
// Convention: unknown
// Signature: void FUN_0043b310(int param_1)

#include "nocturne.h"

void FUN_0043b310(int param_1)

{
  core_platfrm_cpp_CPlatform_archive_FUN_004f6fa0(param_1);
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x720,"size");
  core_actor_cpp_archiveVector_FUN_0040c450(param_1 + 0x72c,"direction");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x738,"startEvent");
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x79c,"stopEvent");
  core_actor_cpp_archiveInteger_FUN_0040c900(param_1 + 0x800,"state");
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040c6d0(param_1 + 0x804,"actorClass");
  return;
}
