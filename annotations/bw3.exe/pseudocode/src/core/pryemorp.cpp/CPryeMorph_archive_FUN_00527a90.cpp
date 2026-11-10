// Name: core_pryemorp.cpp_CPryeMorph_archive_FUN_00527a90
// Address: 00527a90
// Address Range: [[00527a90, 00527ba3]]
// Convention: __cdecl
// Signature: void __cdecl core_pryemorp_cpp_CPryeMorph_archive_FUN_00527a90(CPryeMorph *this_ptr)

#include "nocturne.h"

void __cdecl core_pryemorp_cpp_CPryeMorph_archive_FUN_00527a90(CPryeMorph *this_ptr)

{
  core_npc_cpp_CNPC_archive_FUN_00509800((CNPC *)this_ptr);
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x206c8,"transformEvent");
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2072c,"targetModelName");
  core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x21440,"morphTime");
  if ((1 < g_CPryeMorphClassVersion) && (g_CPryeMorphClassVersion < 5)) {
    core_actor_cpp_archiveDeformableModelInstance_FUN_0040ba30
              ((CDeformableModelInstance *)&this_ptr->field_0x158,"modelName");
    core_actor_cpp_archiveMotionState_FUN_0040bab0
              ((CMotionController *)&this_ptr->field_0x158,"motion state");
  }
  if (2 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveFloat_FUN_0040b830(&this_ptr->field_0x21444,"morphSize");
  }
  if (3 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2074c,"nameOfTarget");
  }
  if (5 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x207ac,"transformWav");
  }
  if (6 < g_CPryeMorphClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2076c,"targetClass");
  }
  if (g_CPryeMorphClassVersion < 8) {
    return;
  }
  core_actor_cpp_archiveString_FUN_0040b680(&this_ptr->field_0x2078c,"targetState");
  return;
}
