// Name: core_actor.cpp_archiveLocation_FUN_0040b540
// Address: 0040b540
// Address Range: [[0040b540, 0040b5da]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocation_FUN_0040b540(CLocation *location_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveLocation_FUN_0040b540(CLocation *location_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007df9b8 == 1) {
    iVar1 = _fscanf(DAT_007df9b4,"%d,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("4D location",property_name);
    }
  }
  else {
    FUN_005a3140
              (DAT_007df9b4,"%s%d,%g,%g,%g",&DAT_005f0990,location_ptr->area_id,
               (double)(location_ptr->position).x,(double)(location_ptr->position).y,
               (double)(location_ptr->position).z);
  }
  core_actor_cpp_archiveDescription_FUN_0040b350("4D location",property_name);
  return;
}
