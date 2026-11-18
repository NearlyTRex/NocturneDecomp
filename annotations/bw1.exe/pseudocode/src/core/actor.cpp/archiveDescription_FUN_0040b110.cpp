// Name: core_actor.cpp_archiveDescription_FUN_0040b110
// Address: 0040b110
// Address Range: [[0040b110, 0040b1be]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveDescription_FUN_0040b110(char *property_description,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveDescription_FUN_0040b110(char *property_description,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    do {
      iVar1 = _fgetc(g_ActorDataFile);
      if (iVar1 < 0) {
        core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                  (property_description,property_name);
      }
    } while (iVar1 != 10);
    if ((g_ActorDataFile->_flag & 0x20) == 0) {
      return;
    }
  }
  else if ((g_IncludeCommentsWhenWriting == 0) && (property_name != (char *)0x0)) {
    _fprintf(g_ActorDataFile,"    // %s\n");
    if ((g_ActorDataFile->_flag & 0x20) == 0) {
      return;
    }
  }
  else {
    _fprintf(g_ActorDataFile,"\n");
    if ((g_ActorDataFile->_flag & 0x20) == 0) {
      return;
    }
  }
  core_actor_cpp_handleActorPropertyParseError_FUN_0040b090(property_description,property_name);
  return;
}
