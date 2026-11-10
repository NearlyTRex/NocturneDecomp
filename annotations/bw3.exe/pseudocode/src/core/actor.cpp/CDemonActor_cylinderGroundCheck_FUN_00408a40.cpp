// Name: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408a40
// Address: 00408a40
// Address Range: [[00408a40, 00408afb]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408a40(CDemonActor *this_ptr,float radius,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408a40(CDemonActor *this_ptr,float radius,CVector3f *out_normal)

{
  CDemonSet *pCVar1;
  float fVar2;
  CPlatform *pCVar3;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_0053e870(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_0053ec10(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_CDemonSet_enableCollision_FUN_0053ec80(g_CDemonSetPtr);
  fVar2 = (float)core_setcolid_cpp_FUN_0053bc80(g_CDemonSetPtr,&this_ptr->location,radius);
  pCVar3 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040c840
                     (g_CDemonSetPtr->collision_actor,g_CPlatformClassInfo.name_hash);
  this_ptr->standing_platform = pCVar3;
  pCVar1 = g_CDemonSetPtr;
  if (out_normal != (CVector3f *)0x0) {
    if (out_normal != &g_CDemonSetPtr->collision_normal) {
      out_normal->x = (g_CDemonSetPtr->collision_normal).x;
      out_normal->y = (pCVar1->collision_normal).y;
      out_normal->z = (pCVar1->collision_normal).z;
    }
  }
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_0053ea20(g_CDemonSetPtr);
  return fVar2;
}
