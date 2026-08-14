// Name: core_mobster.cpp_getObjectGrabPointWorld_FUN_004da070
// Address: 004da070
// Address Range: [[004da070, 004da11a]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_mobster_cpp_getObjectGrabPointWorld_FUN_004da070(CVector3f *out,CDemonActor *actor)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * __cdecl core_mobster_cpp_getObjectGrabPointWorld_FUN_004da070(CVector3f *out,CDemonActor *actor)

{
  CBoundingBox3D CStack_40;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  (*((actor->vtable)._ub)->getBoundingBox)(actor,&CStack_40);
  core_actor_cpp_CVector3f_ctor_FUN_0040e160(&CStack_1c);
  CStack_1c.x = CStack_40.min.x + CStack_40.max.x;
  CStack_1c.y = CStack_40.min.y + CStack_40.max.y;
  CStack_1c.z = CStack_40.min.z + CStack_40.max.z;
  core_actor_cpp_CVector3f_ctor_FUN_0040e160(&CStack_28);
  CStack_28.x = CStack_1c.x * _DAT_0058a171;
  CStack_28.y = CStack_1c.y * _DAT_0058a171;
  CStack_28.z = CStack_40.min.z + (float)_DAT_0058a179;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(actor,out,&CStack_28);
  return out;
}
