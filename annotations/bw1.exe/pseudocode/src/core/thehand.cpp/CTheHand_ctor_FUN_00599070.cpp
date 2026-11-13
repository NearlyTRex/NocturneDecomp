// Name: core_thehand.cpp_CTheHand_ctor_FUN_00599070
// Address: 00599070
// Address Range: [[00599070, 005990c5]]
// Convention: __cdecl
// Signature: CTheHand * __cdecl core_thehand_cpp_CTheHand_ctor_FUN_00599070(CTheHand *this_ptr)

#include "nocturne.h"

CTheHand * __cdecl core_thehand_cpp_CTheHand_ctor_FUN_00599070(CTheHand *this_ptr)

{
  CTheHand *pCVar1;
  
  pCVar1 = (CTheHand *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CTheHandVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar1->base).base.model,"thehand.dfm");
  (pCVar1->base).base.ai_detection_range_min = 50.0;
  (pCVar1->base).base.ai_detection_range_max = 100.0;
  pCVar1->wait_timer = 0.0;
  pCVar1->chase_timer = 0.0;
  return pCVar1;
}
