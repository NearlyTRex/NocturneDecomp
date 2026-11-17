// Name: core_actor.cpp_archiveLocation_FUN_0040c590
// Address: 0040c590
// Address Range: [[0040c590, 0040c62a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocation_FUN_0040c590(CLocation *location_ptr,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveLocation_FUN_0040c590(CLocation *location_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%d,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("4D location",property_name);
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%d,%g,%g,%g",g_PropertyNamePrefix,location_ptr->area_id,
               (double)(location_ptr->position).x,(double)(location_ptr->position).y,
               (double)(location_ptr->position).z);
  }
  core_actor_cpp_archiveDescription_FUN_0040c3a0("4D location",property_name);
  return;
}
