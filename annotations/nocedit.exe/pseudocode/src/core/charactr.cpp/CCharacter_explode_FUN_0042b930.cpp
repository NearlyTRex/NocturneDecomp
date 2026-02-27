// Name: core_charactr.cpp_CCharacter_explode_FUN_0042b930
// Address: 0042b930
// Address Range: [[0042b930, 0042b9d7]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_explode_FUN_0042b930(CCharacter *this_ptr,CVector3f *impact_point,float impact_force)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_explode_FUN_0042b930(CCharacter *this_ptr,CVector3f *impact_point,float impact_force)

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
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(&this_ptr->base,&CStack_1c,&CStack_28);
  core_fire_cpp_CFireEffect_createExplosion_FUN_004c8c10(g_CFireEffectPtr,&CStack_1c,2.0,0x44bb8000)
  ;
  core_charactr_cpp_CCharacter_dismember_FUN_0042b9e0(this_ptr,impact_point,impact_force);
  return;
}
