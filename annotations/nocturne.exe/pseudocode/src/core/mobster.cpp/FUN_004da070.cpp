// Name: core_mobster.cpp_FUN_004da070
// Address: 004da070
// Address Range: [[004da070, 004da11a]]
// Convention: unknown
// Signature: CVector3f * core_mobster_cpp_FUN_004da070(CVector3f *param_1,CDemonActor *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CVector3f * core_mobster_cpp_FUN_004da070(CVector3f *param_1,CDemonActor *param_2)

{
  CBoundingBox3D CStack_40;
  CVector3f CStack_28;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  (*((param_2->vtable)._ub)->getBoundingBox)(param_2,&CStack_40);
  core_actor_cpp_CVector_ctor_FUN_0040e160(&fStack_1c);
  fStack_1c = CStack_40.min.x + CStack_40.max.x;
  fStack_18 = CStack_40.min.y + CStack_40.max.y;
  fStack_14 = CStack_40.min.z + CStack_40.max.z;
  core_actor_cpp_CVector_ctor_FUN_0040e160(&CStack_28);
  CStack_28.x = fStack_1c * _DAT_0058a171;
  CStack_28.y = fStack_18 * _DAT_0058a171;
  CStack_28.z = CStack_40.min.z + (float)_DAT_0058a179;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_2,param_1,&CStack_28);
  return param_1;
}
