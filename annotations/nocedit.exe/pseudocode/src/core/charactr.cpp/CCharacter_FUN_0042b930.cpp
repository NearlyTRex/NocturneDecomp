// Name: core_charactr.cpp_CCharacter_FUN_0042b930
// Address: 0042b930
// Address Range: [[0042b930, 0042b9d7]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042b930(CCharacter * this_ptr)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042b930(CCharacter *this_ptr)

{
  CBoundingBox3D *pCVar1;
  BADSPACEBASE *in_ESP;
  float fStack00000008;
  float fStack0000000c;
  float fStack_40;
  CVector3f CStack_14;
  
  pCVar1 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                     (&this_ptr->base_actor,(CBoundingBox3D *)&fStack_40);
  fStack00000008 = (pCVar1->min).y + (pCVar1->max).y;
  CStack_14.x = ((pCVar1->min).x + (pCVar1->max).x) * 0.5f;
  CStack_14.y = fStack00000008 * 0.5f;
  fStack0000000c = (pCVar1->min).z + (pCVar1->max).z;
  CStack_14.z = fStack0000000c * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base_actor,(CVector3f *)&stack0xfffffff8,&CStack_14);
  fStack_40 = 6.127772e-39;
  core_fire_cpp_CFireEffect_FUN_004c8c10(g_CFireEffectPtr);
  core_charactr_cpp_CCharacter_FUN_0042b9e0(this_ptr);
  return;
}
