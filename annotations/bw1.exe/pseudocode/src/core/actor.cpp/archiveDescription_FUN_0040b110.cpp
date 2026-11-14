// Name: core_actor.cpp_archiveDescription_FUN_0040b110
// Address: 0040b110
// Address Range: [[0040b110, 0040b1be]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveDescription_FUN_0040b110(char *property_description,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveDescription_FUN_0040b110(char *property_description,char *property_name)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    do {
      iVar1 = _fgetc(DAT_007c3034);
      if (iVar1 < 0) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                  (property_description,property_name);
      }
    } while (iVar1 != 10);
    if ((DAT_007c3034->_flag & 0x20) == 0) {
      return;
    }
  }
  else if ((DAT_007c3040 == 0) && (property_name != (char *)0x0)) {
    FUN_005c03c0(DAT_007c3034,"    // %s\n",property_name);
    if ((DAT_007c3034->_flag & 0x20) == 0) {
      return;
    }
  }
  else {
    FUN_005c03c0(DAT_007c3034,&DAT_005d2a2a);
    if ((DAT_007c3034->_flag & 0x20) == 0) {
      return;
    }
  }
  core_actor_cpp_handleActorPropertyParseError_FUN_0040b090(property_description,property_name);
  return;
}
