// Name: core_actor.cpp_FUN_0040cb00
// Address: 0040cb00
// Address Range: [[0040cb00, 0040cbeb]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040cb00(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void core_actor_cpp_FUN_0040cb00(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_00763e88 != 1) {
    _fprintf(DAT_00763e84,"%s{ // %s\n",&DAT_005acc90,param_2);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(1);
    core_motion_cpp_CMotionController_save_FUN_004e2220(param_1,DAT_00763e84,&DAT_005acc90);
    core_actor_cpp_adjustIndentationLevel_FUN_0040bff0(0xffffffff);
    _fprintf(DAT_00763e84,"%s}\n",&DAT_005acc90);
    return;
  }
  do {
    iVar1 = _fgetc(DAT_00763e84);
    if (iVar1 < 0) {
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("motion state info opening brace",param_2);
    }
  } while (iVar1 != 10);
  core_motion_cpp_CMotionController_load_FUN_004e2180(param_1,DAT_00763e84);
  do {
    while( true ) {
      iVar1 = _fgetc(DAT_00763e84);
      if (-1 < iVar1) break;
      core_actor_cpp_handleActorPropertyParseError_FUN_0040c320
                ("motion state info closing brace",param_2);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
