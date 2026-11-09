// Name: core_filmreel.cpp_FUN_00492b30
// Address: 00492b30
// Address Range: [[00492b30, 00492b74]]
// Convention: unknown
// Signature: void core_filmreel_cpp_FUN_00492b30(CDemonActor *param_1)

#include "nocturne.h"

void core_filmreel_cpp_FUN_00492b30(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c330(param_1);
  core_actor_cpp_archiveKeyframedModelInstance_FUN_0040ba60(param_1 + 1,"modelName");
  if (g_CFilmReelClassVersion < 2) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b730(&param_1[1].field_0x180,"movieName");
  return;
}
