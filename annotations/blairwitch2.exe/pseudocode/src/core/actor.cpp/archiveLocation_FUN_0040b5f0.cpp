// Name: core_actor.cpp_archiveLocation_FUN_0040b5f0
// Address: 0040b5f0
// Address Range: [[0040b5f0, 0040b68a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocation_FUN_0040b5f0(CLocation *location_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveLocation_FUN_0040b5f0(CLocation *location_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007bc038 == 1) {
    iVar1 = _fscanf(DAT_007bc034,"%d,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("4D location",property_name);
    }
  }
  else {
    FUN_005b8010
              (DAT_007bc034,"%s%d,%g,%g,%g",&DAT_00609590,location_ptr->area_id,
               (double)(location_ptr->position).x,(double)(location_ptr->position).y,
               (double)(location_ptr->position).z);
  }
  core_actor_cpp_archiveDescription_FUN_0040b400("4D location",property_name);
  return;
}
