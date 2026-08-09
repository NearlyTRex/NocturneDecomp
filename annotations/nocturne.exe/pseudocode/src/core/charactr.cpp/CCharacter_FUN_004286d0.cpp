// Name: core_charactr.cpp_CCharacter_FUN_004286d0
// Address: 004286d0
// Address Range: [[004286d0, 00428702]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_FUN_004286d0(CCharacter *this_ptr,float param_2)

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_004286d0(CCharacter *this_ptr,float param_2)

{
  this_ptr->stagger_amount = param_2;
  if ((CHero *)this_ptr != g_HeroActors[g_LocalHeroIndex]) {
    return;
  }
  engine_force_cpp_CForceFeedback_processEvent_FUN_004940d0(g_CForceFeedback_PTR_005b9284,param_2);
  return;
}
