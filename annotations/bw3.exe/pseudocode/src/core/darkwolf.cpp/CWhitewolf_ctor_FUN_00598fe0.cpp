// Name: core_darkwolf.cpp_CWhitewolf_ctor_FUN_00598fe0
// Address: 00598fe0
// Address Range: [[00598fe0, 0059902b]]
// Convention: __cdecl
// Signature: CWhitewolf * __cdecl core_darkwolf_cpp_CWhitewolf_ctor_FUN_00598fe0(CWhitewolf *this_ptr)

#include "nocturne.h"

CWhitewolf * __cdecl core_darkwolf_cpp_CWhitewolf_ctor_FUN_00598fe0(CWhitewolf *this_ptr)

{
  CDarkwolf *pCVar1;
  
  pCVar1 = core_darkwolf_cpp_CDarkwolf_ctor_FUN_00598780(&this_ptr->base);
  (pCVar1->base).base.base.vtable._ub = &g_CWhitewolfVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar1->base).base.model,(char *)0x5d98bf);
  (pCVar1->base).base.hit_points = 30.0;
  (pCVar1->base).attack_damage = 10.0;
  (pCVar1->base).pain_threshold = 10.0;
  return (CWhitewolf *)pCVar1;
}
