// Name: core_actor.cpp_CDemonActor_customRayIntersect_FUN_004089a0
// Address: 004089a0
// Address Range: [[004089a0, 004089cc]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_customRayIntersect_FUN_004089a0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_actor_cpp_CDemonActor_customRayIntersect_FUN_004089a0(CDemonActor *this_ptr,CVector3f *ray_origin,CVector3f *ray_direction,CVector3f *out_normal)

{
  g_CHAR_PTR_01d71de0 = "..\\core\\actor.cpp";
  g_INT_01d71de4 = 0x2dc;
  core_main_c_displayErrorAndQuit_FUN_004e4330("CDemonActor::customRayIntersect should not be called for this base class");
  return 2.0;
}
