// Name: core_actor.cpp_archiveMotionState_FUN_0040bb60
// Address: 0040bb60
// Address Range: [[0040bb60, 0040bc4b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveMotionState_FUN_0040bb60(CMotionController *motion_controller,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveMotionState_FUN_0040bb60(CMotionController *motion_controller,char *property_name)

{
  int iVar1;
  
  if (g_INT_007bc038 != 1) {
    _fprintf(g_FILE_PTR_007bc034,"%s{ // %s\n");
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    core_motion_cpp_CMotionController_save_FUN_00504250
              (motion_controller,g_FILE_PTR_007bc034,g_CHAR_ARRAY_00609590);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    _fprintf(g_FILE_PTR_007bc034,"%s}\n");
    return;
  }
  do {
    iVar1 = _fgetc(g_FILE_PTR_007bc034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("motion state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_motion_cpp_CMotionController_load_FUN_005041b0(motion_controller,g_FILE_PTR_007bc034);
  do {
    while( true ) {
      iVar1 = _fgetc(g_FILE_PTR_007bc034);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("motion state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
