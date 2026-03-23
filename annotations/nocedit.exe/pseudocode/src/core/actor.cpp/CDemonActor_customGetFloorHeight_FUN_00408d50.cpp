// Name: core_actor.cpp_CDemonActor_customGetFloorHeight_FUN_00408d50
// Address: 00408d50
// Address Range: [[00408d50, 00408d8e]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50(CDemonActor *this_ptr,CVector3f *position,float search_radius,float *out_floor_height )

#include "nocturne.h"

int __cdecl core_actor_cpp_CDemonActor_customGetFloorHeight_FUN_00408d50(CDemonActor *this_ptr,CVector3f *position,float search_radius,float *out_floor_height )

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x29d);
  g_CurrentLineNumber = 0x29e;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::customGetFloorHeight should not be called for this base class");
  return 0;
}
