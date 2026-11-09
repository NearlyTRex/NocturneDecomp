// Name: core_pryemorp.cpp_FUN_00527a90
// Address: 00527a90
// Address Range: [[00527a90, 00527ba3]]
// Convention: unknown
// Signature: void core_pryemorp_cpp_FUN_00527a90(int param_1)

#include "nocturne.h"

void core_pryemorp_cpp_FUN_00527a90(int param_1)

{
  core_npc_cpp_FUN_00509800(param_1);
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x206c8),"transformEvent");
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x2072c),"targetModelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x21440,"morphTime");
  if ((1 < g_CPryeMorphClassVersion) && (g_CPryeMorphClassVersion < 5)) {
    core_actor_cpp_FUN_0040ba30((CDeformableModelInstance *)(param_1 + 0x158),"modelName");
    core_actor_cpp_FUN_0040bab0((CMotionController *)(param_1 + 0x158),"motion state");
  }
  if (2 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(param_1 + 0x21444,"morphSize");
  }
  if (3 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x2074c),"nameOfTarget");
  }
  if (5 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x207ac),"transformWav");
  }
  if (6 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x2076c),"targetClass");
  }
  if (g_CPryeMorphClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680((char *)(param_1 + 0x2078c),"targetState");
  return;
}
