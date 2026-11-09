// Name: core_glass.cpp_CGlass_archive_FUN_004e21f0
// Address: 004e21f0
// Address Range: [[004e21f0, 004e22ed]]
// Convention: __cdecl
// Signature: void __cdecl core_glass_cpp_CGlass_archive_FUN_004e21f0(CGlass *this_ptr)

#include "nocturne.h"

void __cdecl core_glass_cpp_CGlass_archive_FUN_004e21f0(CGlass *this_ptr)

{
  core_actor_cpp_CDemonActor_archive_FUN_0040c040((CDemonActor *)this_ptr);
  core_actor_cpp_archiveVector_FUN_0040b1c0(&this_ptr->field_0x158,"?glassSize" + 1);
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x16c,"glassTexture");
  if (1 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x17c,"opacity");
  }
  if (2 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x180,"shattered");
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x184,"breakEvent");
  }
  if (3 < g_CGlassClassVersion) {
    core_actor_cpp_archiveInteger_FUN_0040b670((int *)&this_ptr->field_0x1e8,"mirrorFlag");
  }
  if (4 < g_CGlassClassVersion) {
    core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x30c,"breakableCondition");
  }
  if (g_CGlassClassVersion < 6) {
    return;
  }
  core_actor_cpp_archiveInteger_FUN_0040b670
            ((int *)&this_ptr->field_0x370,"backgroundFlag");
  core_actor_cpp_archiveString_FUN_0040b440(&this_ptr->field_0x37c,"brokenTexture");
  return;
}
