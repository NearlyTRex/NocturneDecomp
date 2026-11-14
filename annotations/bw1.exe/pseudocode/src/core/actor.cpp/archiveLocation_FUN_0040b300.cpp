// Name: core_actor.cpp_archiveLocation_FUN_0040b300
// Address: 0040b300
// Address Range: [[0040b300, 0040b39a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocation_FUN_0040b300(CLocation *location_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveLocation_FUN_0040b300(CLocation *location_ptr,char *property_name)

{
  int iVar1;
  
  if (DAT_007c3038 == 1) {
    iVar1 = _fscanf(DAT_007c3034,"%d,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("4D location",property_name);
    }
  }
  else {
    FUN_005c03c0
              (DAT_007c3034,"%s%d,%g,%g,%g",&DAT_006106c0,location_ptr->area_id,
               (double)(location_ptr->position).x,(double)(location_ptr->position).y,
               (double)(location_ptr->position).z);
  }
  core_actor_cpp_archiveDescription_FUN_0040b110("4D location",property_name);
  return;
}
