// Name: core_actor.cpp_archiveMotionState_FUN_0040bb60
// Address: 0040bb60
// Address Range: [[0040bb60, 0040bc4b]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_archiveMotionState_FUN_0040bb60(CMotionController *motion_controller,char *property_name)

#include "nocturne.h"

void __cdecl core_actor_cpp_archiveMotionState_FUN_0040bb60(CMotionController *motion_controller,char *property_name)

{
  int iVar1;
  
  if (DAT_007bc038 != 1) {
    FUN_005b8010(DAT_007bc034,"%s{ // %s\n",&DAT_00609590,property_name);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(1);
    core_motion_cpp_CMotionController_save_FUN_00504250
              (motion_controller,DAT_007bc034,&DAT_00609590);
    core_actor_cpp_adjustIndentationLevel_FUN_0040b050(-1);
    FUN_005b8010(DAT_007bc034,&DAT_005cab9c,&DAT_00609590);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_007bc034);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040b380
                ("motion state info opening brace",property_name);
    }
  } while (iVar1 != 10);
  core_motion_cpp_CMotionController_load_FUN_005041b0(motion_controller,DAT_007bc034);
  do {
    while( true ) {
      iVar1 = _fgetc(DAT_007bc034);
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
