// Name: core_charactr.cpp_CCharacter_explode_FUN_00427ab0
// Address: 00427ab0
// Address Range: [[00427ab0, 00427b57]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_explode_FUN_00427ab0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_explode_FUN_00427ab0(CCharacter *this_ptr,CVector3f *impact_point,float impact_force)

{
  CBoundingBox3D *pCVar1;
  CBoundingBox3D CStack_40;
  CVector3f CStack_28;
  CVector3f CStack_1c;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  pCVar1 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_40);
  fStack_10 = (pCVar1->min).x + (pCVar1->max).x;
  fStack_c = (pCVar1->min).y + (pCVar1->max).y;
  CStack_28.x = fStack_10 * 0.5f;
  CStack_28.y = fStack_c * 0.5f;
  fStack_8 = (pCVar1->min).z + (pCVar1->max).z;
  CStack_28.z = fStack_8 * 0.5f;
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(&this_ptr->base,&CStack_1c,&CStack_28);
  core_fire_cpp_CFireEffect_FUN_0048c0d0(g_CFireEffect_PTR_005b80f0,&CStack_1c,2.0,1500.0,4.0);
  core_charactr_cpp_CCharacter_dismember_FUN_00427b60(this_ptr,impact_point,impact_force,0);
  return;
}
