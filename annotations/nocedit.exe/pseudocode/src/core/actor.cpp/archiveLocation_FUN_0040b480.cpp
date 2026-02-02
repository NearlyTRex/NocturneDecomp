// Name: core_actor.cpp_archiveLocation_FUN_0040b480
// Address: 0040b480
// Address Range: [[0040b480, 0040b51a]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveLocation_FUN_0040b480(CLocation *location_ptr,char *property_name)

#include "nocturne.h"

void __cdecl
core_actor_cpp_archiveLocation_FUN_0040b480(CLocation *location_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = _fscanf(g_ActorDataFile,"%d,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("4D location",property_name);
    }
  }
  else {
    _fprintf(g_ActorDataFile,"%s%d,%g,%g,%g",g_PropertyNamePrefix,location_ptr->area_id,
               (double)(location_ptr->position).x,(double)(location_ptr->position).y,
               (double)(location_ptr->position).z);
  }
  core_actor_cpp_archiveDescription_FUN_0040b290("4D location",property_name);
  return;
}
