// Name: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0
// Address: 00408db0
// Address Range: [[00408db0, 00408e7e]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0(CDemonActor *this_ptr,float radius,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_00408db0(CDemonActor *this_ptr,float radius,CVector3f *out_normal)

{
  CDemonSet *pCVar1;
  float fVar2;
  CPlatform *pCVar3;
  
  core_actor_cpp_CDemonActor_doCheckForInvalidPointers_FUN_0040ac80
            (this_ptr,"..\\core\\actor.cpp",0x2b6);
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_00573e10(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,this_ptr);
  core_setcolid_cpp_CDemonSet_FUN_00574220(g_CDemonSetPtr);
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (g_CDemonSetPtr,&(this_ptr->location).position,radius);
  pCVar3 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040c790
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
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00573fc0(g_CDemonSetPtr);
  return fVar2;
}
