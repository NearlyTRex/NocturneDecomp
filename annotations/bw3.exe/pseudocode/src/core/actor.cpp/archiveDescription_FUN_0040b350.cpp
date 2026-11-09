// Name: core_actor.cpp_archiveDescription_FUN_0040b350
// Address: 0040b350
// Address Range: [[0040b350, 0040b3fe]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveDescription_FUN_0040b350(char *property_description,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveDescription_FUN_0040b350(char *property_description,char *property_name)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    do {
      iVar1 = _fgetc(DAT_007df9b4);
      if (iVar1 < 0) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                  (property_description,property_name);
      }
    } while (iVar1 != 10);
    if ((*(byte *)(DAT_007df9b4 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else if ((DAT_007df9c0 == 0) && (property_name != (char *)0x0)) {
    FUN_005a3140(DAT_007df9b4,"    // %s\n",property_name);
    if ((*(byte *)(DAT_007df9b4 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  else {
    FUN_005a3140(DAT_007df9b4,&DAT_005b5a76);
    if ((*(byte *)(DAT_007df9b4 + 0xc) & 0x20) == 0) {
      return;
    }
  }
  core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0(property_description,property_name);
  return;
}
