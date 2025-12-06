// Name: core_actor.cpp_serializeSimBox_FUN_0040bd70
// Address: 0040bd70
// Address Range: [[0040bd70, 0040be5b]]
// Convention: __cdecl
// Signature: void core_actor.cpp_serializeSimBox_FUN_0040bd70(CSimBox * simbox_ptr, char * property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_serializeSimBox_FUN_0040bd70(CSimBox *simbox_ptr,char *property_name)

{
  int iVar1;
  CBox *in_stack_0000000c;
  
  if (g_ActorReadingMode != 1) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (g_ActorDataFile,"%s{ // %s\n",g_PropertyNamePrefix,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(1);
    core_box_cpp_CBox_saveToFile_FUN_00420020(in_stack_0000000c,g_ActorDataFile);
    core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(-1);
    crt_stdio_c_fprintf_FUN_005fe6d0(g_ActorDataFile,"%s}\n",g_PropertyNamePrefix);
    return;
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("sim box state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_box_cpp_CBox_loadFromFile_FUN_0041fe90((CBox *)simbox_ptr,g_ActorDataFile);
  do {
    while( true ) {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(g_ActorDataFile);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b210
                ("sim box state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
