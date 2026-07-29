// Name: core_actor.cpp_archiveOrientation_FUN_0040c4f0
// Address: 0040c4f0
// Address Range: [[0040c4f0, 0040c580]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveOrientation_FUN_0040c4f0(COrientation *orient_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveOrientation_FUN_0040c4f0(COrientation *orient_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_00763e88 == 1) {
    iVar1 = _fscanf(DAT_00763e84,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("Euler PBH orientation",property_name);
    }
  }
  else {
    _fprintf(DAT_00763e84,"%s%g,%g,%g",&DAT_005acc90,(double)orient_ptr->pitch,
               (double)orient_ptr->heading,(double)orient_ptr->bank);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("Euler PBH orientation",property_name);
  return;
}
