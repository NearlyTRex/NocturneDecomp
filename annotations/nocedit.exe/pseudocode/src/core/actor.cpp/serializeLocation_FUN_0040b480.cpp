// Name: core_actor.cpp_serializeLocation_FUN_0040b480
// Address: 0040b480
// Address Range: [[0040b480, 0040b51a]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeLocation_FUN_0040b480(CLocation * location_ptr, char * property_name)

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeLocation_FUN_0040b480(CLocation *location_ptr,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%d,%f,%f,%f");
    if (iVar1 != 4) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("4D location",property_name);
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%d,%g,%g,%g",g_PropertyNamePrefix,location_ptr->area_id,
               (double)(location_ptr->position).x,(double)(location_ptr->position).y,
               (double)(location_ptr->position).z);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290("4D location",property_name);
  return;
}
