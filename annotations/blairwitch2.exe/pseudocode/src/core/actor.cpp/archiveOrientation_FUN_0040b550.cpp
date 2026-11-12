// Name: core_actor.cpp_archiveOrientation_FUN_0040b550
// Address: 0040b550
// Address Range: [[0040b550, 0040b5e0]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b550(COrientation *orient_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveOrientation_FUN_0040b550(COrientation *orient_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = _fscanf(DAT_007bc034,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("Euler PBH orientation",property_name);
    }
  }
  else {
    FUN_005b8010
              (DAT_007bc034,"%s%g,%g,%g",&DAT_00609590,(double)orient_ptr->pitch,
               (double)orient_ptr->heading,(double)orient_ptr->bank);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("Euler PBH orientation",property_name);
  return;
}
