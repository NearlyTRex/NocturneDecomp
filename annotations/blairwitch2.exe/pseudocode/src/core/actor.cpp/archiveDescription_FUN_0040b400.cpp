// Name: core_actor.cpp_archiveDescription_FUN_0040b400
// Address: 0040b400
// Address Range: [[0040b400, 0040b4ae]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveDescription_FUN_0040b400(char *property_description,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveDescription_FUN_0040b400(char *property_description,char *property_name)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    do {
      iVar1 = _fgetc(DAT_007bc034);
      if (iVar1 < 0) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                  (property_description,property_name);
      }
    } while (iVar1 != 10);
    if ((DAT_007bc034->_flag & 0x20) == 0) {
      return;
    }
  }
  else if ((DAT_007bc040 == 0) && (property_name != (char *)0x0)) {
    FUN_005b8010(DAT_007bc034,"    // %s\n",property_name);
    if ((DAT_007bc034->_flag & 0x20) == 0) {
      return;
    }
  }
  else {
    FUN_005b8010(DAT_007bc034,&DAT_005caac7);
    if ((DAT_007bc034->_flag & 0x20) == 0) {
      return;
    }
  }
  core_actor_cpp_handleActorPropertyParseError_FUN_0040b380(property_description,property_name);
  return;
}
