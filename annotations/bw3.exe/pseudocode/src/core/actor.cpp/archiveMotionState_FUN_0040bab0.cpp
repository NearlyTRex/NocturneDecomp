// Name: core_actor.cpp_archiveMotionState_FUN_0040bab0
// Address: 0040bab0
// Address Range: [[0040bab0, 0040bb9b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveMotionState_FUN_0040bab0(CMotionController *motion_controller,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveMotionState_FUN_0040bab0(CMotionController *motion_controller,char *property_name)

{
  int iVar1;
  
  if (g_ActorReadingMode != 1) {
    _fprintf(g_ActorDataFile,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(1);
    core_motion_cpp_CMotionController_save_FUN_004fcd30
              (motion_controller,g_ActorDataFile,g_PropertyNamePrefix);
    core_actor_cpp_adjustIndentationLevel_FUN_0040afa0(-1);
    _fprintf(g_ActorDataFile,"%s}\n");
    return;
  }
  do {
    iVar1 = _fgetc(g_ActorDataFile);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("motion state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_motion_cpp_CMotionController_load_FUN_004fcc90(motion_controller,g_ActorDataFile);
  do {
    while( true ) {
      iVar1 = _fgetc(g_ActorDataFile);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b2d0
                ("motion state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
