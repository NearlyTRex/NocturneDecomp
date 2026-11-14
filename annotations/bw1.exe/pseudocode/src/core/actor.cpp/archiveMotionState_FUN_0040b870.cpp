// Name: core_actor.cpp_archiveMotionState_FUN_0040b870
// Address: 0040b870
// Address Range: [[0040b870, 0040b95b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveMotionState_FUN_0040b870(CMotionController *motion_controller,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveMotionState_FUN_0040b870(CMotionController *motion_controller,char *property_name)

{
  int iVar1;
  
  if (DAT_007c3038 != 1) {
    FUN_005c03c0(DAT_007c3034,"%s{ // %s\n",&DAT_006106c0,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(1);
    core_motion_cpp_CMotionController_save_FUN_00525420
              (motion_controller,DAT_007c3034,&DAT_006106c0);
    core_actor_cpp_adjustIndentationLevel_FUN_0040ad60(-1);
    FUN_005c03c0(DAT_007c3034,&DAT_005d2aff,&DAT_006106c0);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007c3034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("motion state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_motion_cpp_CMotionController_load_FUN_00525380(motion_controller,DAT_007c3034);
  do {
    while( true ) {
      iVar1 = _fgetc(DAT_007c3034);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b090
                ("motion state info closing brace",property_name);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
