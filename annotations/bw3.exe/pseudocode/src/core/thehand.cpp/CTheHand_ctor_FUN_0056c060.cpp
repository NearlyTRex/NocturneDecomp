// Name: core_thehand.cpp_CTheHand_ctor_FUN_0056c060
// Address: 0056c060
// Address Range: [[0056c060, 0056c0b5]]
// Convention: unknown
// Signature: CTheHand * core_thehand_cpp_CTheHand_ctor_FUN_0056c060(CTheHand *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CTheHand * core_thehand_cpp_CTheHand_ctor_FUN_0056c060(CTheHand *this_ptr)

{
  CTheHand *pCVar1;
  
  pCVar1 = (CTheHand *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar1->field_0x154 = &g_CTheHandVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar1->field_0x158,"thehand.dfm");
  *(uint *)&pCVar1->field_0x3274 = 0x42480000;
  *(uint *)&pCVar1->field_0x3278 = 0x42c80000;
  *(uint *)&pCVar1->field_0xd054 = 0;
  *(uint *)&pCVar1->field_0xd058 = 0;
  return pCVar1;
}
