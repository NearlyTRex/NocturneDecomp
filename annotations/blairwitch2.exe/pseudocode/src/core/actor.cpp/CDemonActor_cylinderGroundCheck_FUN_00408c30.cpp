// Name: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408c30
// Address: 00408c30
// Address Range: [[00408c30, 00408ceb]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408c30(CDemonActor *this_ptr,float radius,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408c30(CDemonActor *this_ptr,float radius,CVector3f *out_normal)

{
  CDemonSet *pCVar1;
  float fVar2;
  uint uVar3;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00537a90(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00537e30(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_CDemonSet_enableCollision_FUN_00537ea0(g_CDemonSetPtr);
  fVar2 = (float)core_setcolid_cpp_FUN_00534ea0(g_CDemonSetPtr,&this_ptr->field_0x20,radius);
  uVar3 = core_actor_cpp_castToClassHash_FUN_0040c8f0
                    (g_CDemonSetPtr->collision_actor,g_CPlatformClassInfo.name_hash);
  *(uint *)&this_ptr->field_0xdc = uVar3;
  pCVar1 = g_CDemonSetPtr;
  if (out_normal != (CVector3f *)0x0) {
    if (out_normal != &g_CDemonSetPtr->collision_normal) {
      out_normal->x = (g_CDemonSetPtr->collision_normal).x;
      out_normal->y = (pCVar1->collision_normal).y;
      out_normal->z = (pCVar1->collision_normal).z;
    }
  }
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00537c40(g_CDemonSetPtr);
  return fVar2;
}
