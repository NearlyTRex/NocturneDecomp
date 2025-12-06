// Name: core_actor.cpp_CDemonActor_processActionButton_FUN_00409f60
// Address: 00409f60
// Address Range: [[00409f60, 00409fa1]]
// Convention: __cdecl
// Signature: int core_actor.cpp_CDemonActor_processActionButton_FUN_00409f60(CDemonActor * this_ptr)

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_processActionButton_FUN_00409f60(CDemonActor *this_ptr)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x559);
  g_CurrentLineNumber = 0x560;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::processActionButton - should never be called for this base class!");
  return 1;
}
