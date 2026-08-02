// Name: core_boneguy.cpp_FUN_004181f0
// Address: 004181f0
// Address Range: [[004181f0, 0041829a]]
// Convention: unknown
// Signature: CVector3f * core_boneguy_cpp_FUN_004181f0(CVector3f *param_1,CDemonActor *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * core_boneguy_cpp_FUN_004181f0(CVector3f *param_1,CDemonActor *param_2)

{
  CBoundingBox3D CStack_40;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,&CStack_40);
  core_actor_cpp_CVector_ctor_FUN_0040e160(&CStack_1c);
  CStack_1c.x = CStack_40.min.x + CStack_40.max.x;
  CStack_1c.y = CStack_40.min.y + CStack_40.max.y;
  CStack_1c.z = CStack_40.min.z + CStack_40.max.z;
  core_actor_cpp_CVector_ctor_FUN_0040e160(&CStack_28);
  CStack_28.x = CStack_1c.x * _DAT_0057913e;
  CStack_28.y = CStack_1c.y * _DAT_0057913e;
  CStack_28.z = CStack_40.min.z + (float)_DAT_00579146;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,param_1,&CStack_28);
  return param_1;
}
