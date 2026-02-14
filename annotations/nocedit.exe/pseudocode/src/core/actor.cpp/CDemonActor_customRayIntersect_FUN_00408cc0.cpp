// Name: core_actor.cpp_CDemonActor_customRayIntersect_FUN_00408cc0
// Address: 00408cc0
// Address Range: [[00408cc0, 00408d05]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_actor_cpp_CDemonActor_customRayIntersect_FUN_00408cc0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x292);
  g_CurrentLineNumber = 0x293;
  g_CurrentFilename = "..\\core\\actor.cpp";
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonActor::customRayIntersect should not be called for this base class");
  return 2.0;
}
