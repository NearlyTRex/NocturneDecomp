// Name: core_toxhand.cpp_CTheHand_ctor_FUN_0056c060
// Address: 0056c060
// Address Range: [[0056c060, 0056c0b5]]
// Convention: unknown
// Signature: CTheHand * core_toxhand_cpp_CTheHand_ctor_FUN_0056c060(CTheHand *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CTheHand * core_toxhand_cpp_CTheHand_ctor_FUN_0056c060(CTheHand *this_ptr)

{
  CTheHand *pCVar1;
  
  pCVar1 = (CTheHand *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CTheHandVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,"thehand.dfm");
  (pCVar1->base).base.ai_detection_range_min = 50.0;
  (pCVar1->base).base.ai_detection_range_max = 100.0;
  pCVar1->wait_timer = 0.0;
  pCVar1->chase_timer = 0.0;
  return pCVar1;
}
