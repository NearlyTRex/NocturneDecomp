// Name: core_actor.cpp_archiveDescription_FUN_0040c3a0
// Address: 0040c3a0
// Address Range: [[0040c3a0, 0040c44e]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveDescription_FUN_0040c3a0(char *property_description,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveDescription_FUN_0040c3a0(char *property_description,char *property_name)

{
  int iVar1;
  
  if (g_INT_00763e88 == 1) {
    do {
      iVar1 = _fgetc(g_FILE_PTR_00763e84);
      if (iVar1 < 0) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                  (property_description,property_name);
      }
    } while (iVar1 != 10);
    if ((g_FILE_PTR_00763e84->_flag & 0x20) == 0) {
      return;
    }
  }
  else if ((g_INT_00763e90 == 0) && (property_name != (char *)0x0)) {
    _fprintf(g_FILE_PTR_00763e84,"    // %s\n",property_name);
    if ((g_FILE_PTR_00763e84->_flag & 0x20) == 0) {
      return;
    }
  }
  else {
    _fprintf(g_FILE_PTR_00763e84,"\n");
    if ((g_FILE_PTR_00763e84->_flag & 0x20) == 0) {
      return;
    }
  }
  core_actor_cpp_handleActorPropertyParseError_FUN_0040c320(property_description,property_name);
  return;
}
