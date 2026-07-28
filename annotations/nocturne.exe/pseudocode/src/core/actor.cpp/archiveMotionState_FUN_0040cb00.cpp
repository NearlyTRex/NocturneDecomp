// Name: core_actor.cpp_archiveMotionState_FUN_0040cb00
// Address: 0040cb00
// Address Range: [[0040cb00, 0040cbeb]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveMotionState_FUN_0040cb00(CMotionController *motion_controller,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveMotionState_FUN_0040cb00(CMotionController *motion_controller,char *property_name)

{
  int iVar1;
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
    core_motion_cpp_CMotionController_save_FUN_004e2220
              (motion_controller,DAT_00763e84,&DAT_005acc90);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(-1);
    _fprintf(DAT_00763e84,"%s}\n",&DAT_005acc90);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_00763e84);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("motion state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_motion_cpp_CMotionController_load_FUN_004e2180(motion_controller,DAT_00763e84);
  do {
    while( true ) {
      iVar1 = _fgetc(DAT_00763e84);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("motion state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
