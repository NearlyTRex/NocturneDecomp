// Name: core_actor.cpp_archiveLocalizedString_FUN_0040b6e0
// Address: 0040b6e0
// MANUAL RECONSTRUCTION
// Address Range: [[0040b6e0, 0040b765]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040b6e0(char *string_buffer,char *localization_key)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveLocalizedString_FUN_0040b6e0(char *string_buffer,char *localization_key)

{
  char local_134 [300];

  memcpy(local_134,g_LocalizationTemplate,300);
  if (localization_key != (char *)0x0) {
    strcpy(local_134,localization_key);
  }
  strcat(local_134," !LOCALIZE!");
  core_actor_cpp_archiveString_FUN_0040b5c0(string_buffer,local_134);
  return;
}
