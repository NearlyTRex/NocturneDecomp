// Name: core_actor.cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10
// Address: 00408d10
// Address Range: [[00408d10, 00408d4c]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10(CDemonActor *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_actor_cpp_CDemonActor_customIntersectCylinderXZ_FUN_00408d10(CDemonActor *this_ptr,SIntersectXZCylinder *cylinder)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",664);
  g_CurrentLineNumber = 665;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::customIntersectCylinderXZ should not be called for this base class");
  return;
}
