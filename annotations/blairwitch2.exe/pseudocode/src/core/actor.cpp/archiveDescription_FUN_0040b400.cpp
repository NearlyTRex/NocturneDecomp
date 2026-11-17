// Name: core_actor.cpp_archiveDescription_FUN_0040b400
// Address: 0040b400
// Address Range: [[0040b400, 0040b4ae]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveDescription_FUN_0040b400(char *property_description,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveDescription_FUN_0040b400(char *property_description,char *property_name)

{
  int iVar1;
  
  if (g_INT_007bc038 == 1) {
    do {
      iVar1 = _fgetc(g_FILE_PTR_007bc034);
      if (iVar1 < 0) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                  (property_description,property_name);
      }
    } while (iVar1 != 10);
    if ((g_FILE_PTR_007bc034->_flag & 0x20) == 0) {
      return;
    }
  }
  else if ((g_INT_007bc040 == 0) && (property_name != (char *)0x0)) {
    _fprintf(g_FILE_PTR_007bc034,"    // %s\n");
    if ((g_FILE_PTR_007bc034->_flag & 0x20) == 0) {
      return;
    }
  }
  else {
    _fprintf(g_FILE_PTR_007bc034,"\n");
    if ((g_FILE_PTR_007bc034->_flag & 0x20) == 0) {
      return;
    }
  }
  core_actor_cpp_handleActorPropertyParseError_FUN_0040b380(property_description,property_name);
  return;
}
