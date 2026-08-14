// Name: core_boneguy.cpp_getWorldBoundingBoxCenter_FUN_0041b770
// Address: 0041b770
// Address Range: [[0041b770, 0041b81a]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_boneguy_cpp_getWorldBoundingBoxCenter_FUN_0041b770(CVector3f *out,CDemonActor *actor)

#include "nocturne.h"

CVector3f * __cdecl core_boneguy_cpp_getWorldBoundingBoxCenter_FUN_0041b770(CVector3f *out,CDemonActor *actor)

{
  CBoundingBox3D CStack_40;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_40);
  core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_1c);
  CStack_1c.x = CStack_40.min.x + CStack_40.max.x;
  CStack_1c.y = CStack_40.min.y + CStack_40.max.y;
  CStack_1c.z = CStack_40.min.z + CStack_40.max.z;
  core_actor_cpp_CVector3f_ctor_FUN_00410340(&CStack_28);
  CStack_28.x = CStack_1c.x * 0.5f;
  CStack_28.y = CStack_1c.y * 0.5f;
  CStack_28.z = CStack_40.min.z + (float)0.40000000000000002;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(actor,out,&CStack_28);
  return out;
}
