// Name: core_charactr.cpp_CCharacter_FUN_0042b930
// Address: 0042b930
// Address Range: [[0042b930, 0042b9d7]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b930(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b930(CCharacter *this_ptr)

{
  CBoundingBox3D *pCVar1;
  CVector3f CStack_20;
  CVector3f CStack_14;
  float fStack_8;
  
  pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)
                     (&this_ptr->base,(CBoundingBox3D *)&stack0xffffffc0);
  fStack_8 = (pCVar1->min).x + (pCVar1->max).x;
  CStack_20.x = fStack_8 * 0.5f;
  CStack_20.y = ((pCVar1->min).y + (pCVar1->max).y) * 0.5f;
  CStack_20.z = ((pCVar1->min).z + (pCVar1->max).z) * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_14,&CStack_20);
  core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
  core_charactr_cpp_CCharacter_FUN_0042b9e0(this_ptr);
  return;
}
