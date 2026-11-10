// Name: unkafter_boneguy.cpp_CBaalSkel_ctor_FUN_00419ac0
// Address: 00419ac0
// Address Range: [[00419ac0, 00419b21]]
// Convention: unknown
// Signature: CBaalSkel * unkafter_boneguy_cpp_CBaalSkel_ctor_FUN_00419ac0(CBaalSkel *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBaalSkel * unkafter_boneguy_cpp_CBaalSkel_ctor_FUN_00419ac0(CBaalSkel *this_ptr)

{
  CBoneGuy *pCVar1;
  
  pCVar1 = core_boneguy_cpp_CBoneGuy_ctor_FUN_00417400((CBoneGuy *)this_ptr);
  (pCVar1->base).base.base.vtable._ub = &g_CBaalSkelVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5b71a6);
  (pCVar1->base).base.hit_points = 10.0;
  *(uint *)&(pCVar1->base).field_0xce5c = 0x40a00000;
  *(uint *)&(pCVar1->base).field_0xce60 = 0x40a00000;
  *(uint *)&pCVar1->field_0xd074 = 4;
  *(float *)&pCVar1->field_0xd058 = (pCVar1->base).base.hit_points;
  return (CBaalSkel *)pCVar1;
}
