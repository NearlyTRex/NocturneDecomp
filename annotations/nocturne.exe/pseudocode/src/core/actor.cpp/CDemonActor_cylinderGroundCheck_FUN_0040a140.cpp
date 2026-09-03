// Name: core_actor.cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140
// Address: 0040a140
// Address Range: [[0040a140, 0040a1fb]]
// Convention: __cdecl
// Signature: float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140(CDemonActor *this_ptr,float radius,CVector3f *out_normal)

#include "nocturne.h"

float __cdecl core_actor_cpp_CDemonActor_cylinderGroundCheck_FUN_0040a140(CDemonActor *this_ptr,float radius,CVector3f *out_normal)

{
  CDemonSet *pCVar1;
  float fVar2;
  CPlatform *pCVar3;
  
  core_setcolid_cpp_CDemonSet_pushRaytraceState_FUN_005113e0(g_CDemonSet_PTR_005be368);
  core_setcolid_cpp_CDemonSet_ignore_FUN_00511780(g_CDemonSet_PTR_005be368,this_ptr);
  core_setcolid_cpp_CDemonSet_enableCollision_FUN_005117f0(g_CDemonSet_PTR_005be368);
  fVar2 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_0050ec80
                    (g_CDemonSet_PTR_005be368,&(this_ptr->location).position,radius);
  pCVar3 = (CPlatform *)
           core_actor_cpp_castToClassHash_FUN_0040d890
                     (g_CDemonSet_PTR_005be368->collision_actor,
                      g_CPlatformActorType_01e42894.name_hash);
  this_ptr->standing_platform = pCVar3;
  pCVar1 = g_CDemonSet_PTR_005be368;
  if (out_normal != (CVector3f *)0x0) {
    if (out_normal != &g_CDemonSet_PTR_005be368->collision_normal) {
      out_normal->x = (g_CDemonSet_PTR_005be368->collision_normal).x;
      out_normal->y = (pCVar1->collision_normal).y;
      out_normal->z = (pCVar1->collision_normal).z;
    }
  }
  core_setcolid_cpp_CDemonSet_popRaytraceState_FUN_00511590(g_CDemonSet_PTR_005be368);
  return fVar2;
}
