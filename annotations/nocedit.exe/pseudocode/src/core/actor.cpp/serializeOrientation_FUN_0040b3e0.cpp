// Name: core_actor.cpp_serializeOrientation_FUN_0040b3e0
// Address: 0040b3e0
// Address Range: [[0040b3e0, 0040b470]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeOrientation_FUN_0040b3e0(COrientation * orient_ptr, char * property_name)

#include "nocturne.h"

void __cdecl
core_actor_cpp_serializeOrientation_FUN_0040b3e0(COrientation *orient_ptr,char *property_name)

{
  int iVar1;
  char *in_stack_0000000c;
  
  if (g_ActorReadingMode == 1) {
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(g_ActorDataFile,"%f,%f,%f");
    if (iVar1 != 3) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("Euler PBH orientation",property_name);
    }
  }
  else {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s%g,%g,%g",g_PropertyNamePrefix,(double)orient_ptr->pitch,
               (double)orient_ptr->heading,(double)orient_ptr->bank);
  }
  core_actor_cpp_serializeDescription_FUN_0040b290
            ("Euler PBH orientation",in_stack_0000000c);
  return;
}
