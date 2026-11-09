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
  *(byte ***)&pCVar1->field_0x154 = &g_CBaalSkelVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,0x5b71a6);
  *(uint *)&pCVar1->field_0x2538 = 0x41200000;
  *(uint *)&pCVar1->field_0xce5c = 0x40a00000;
  *(uint *)&pCVar1->field_0xce60 = 0x40a00000;
  *(uint *)&pCVar1->field_0xd074 = 4;
  *(uint *)&pCVar1->field_0xd058 = *(uint *)&pCVar1->field_0x2538;
  return (CBaalSkel *)pCVar1;
}
