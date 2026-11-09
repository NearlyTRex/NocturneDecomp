// Name: core_filmreel.cpp_FUN_00492ff0
// Address: 00492ff0
// Address Range: [[00492ff0, 00493034]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00492ff0(CActorDestination *param_1)

#include "nocturne.h"

void core_filmreel_cpp_FUN_00492ff0(CActorDestination *param_1)

{
  core_dest_cpp_FUN_00447450(param_1);
  if (0x00000002 < 2) {
    return;
  }
  core_actor_cpp_archiveActor_FUN_0040b9e0(&param_1[1].field_0x17c,"I@keyReel" + 2);
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x180,"keyEvent");
  return;
}
