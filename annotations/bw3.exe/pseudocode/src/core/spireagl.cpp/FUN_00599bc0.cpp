// Name: core_spireagl.cpp_FUN_00599bc0
// Address: 00599bc0
// Address Range: [[00599bc0, 00599c77]]
// Convention: unknown
// Signature: void core_spireagl_cpp_FUN_00599bc0(CDemonActor *param_1)

#include "nocturne.h"

void core_spireagl_cpp_FUN_00599bc0(CDemonActor *param_1)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c280(param_1);
  core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 1),"?modelName" + 1);
  core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 1),"motion state");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x1b].field_0xf0,"hitPoints");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x183].field_0x5c,"shootMe");
  core_actor_cpp_archiveInteger_FUN_0040b8b0((int *)&param_1[0x183].field_0x60,"poolMe");
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x183].field_0x64,"speed");
  if (g_CSpiritEagleClassVersion < 2) {
    core_charactr_cpp_FUN_0042b450(param_1);
    return;
  }
  core_actor_cpp_archiveFloat_FUN_0040b830(&param_1[0x18c].field_0x80,"morphTime");
  core_charactr_cpp_FUN_0042b450(param_1);
  return;
}
