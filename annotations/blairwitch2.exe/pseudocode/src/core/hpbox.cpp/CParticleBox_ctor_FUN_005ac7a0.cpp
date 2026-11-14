// Name: core_hpbox.cpp_CParticleBox_ctor_FUN_005ac7a0
// Address: 005ac7a0
// Address Range: [[005ac7a0, 005ac7e1]]
// Convention: __cdecl
// Signature: CParticleBox * __cdecl core_hpbox_cpp_CParticleBox_ctor_FUN_005ac7a0(CParticleBox *this_ptr)

#include "nocturne.h"

CParticleBox * __cdecl core_hpbox_cpp_CParticleBox_ctor_FUN_005ac7a0(CParticleBox *this_ptr)

{
  CParticleBox *pCVar1;
  
  pCVar1 = (CParticleBox *)core_boxactor_cpp_CBoxActor_ctor_FUN_0041bd30(&this_ptr->base);
  (pCVar1->base).base.vtable._ub = &g_CParticleBoxVTable;
  (pCVar1->base).base.is_transparent = 1;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_0044fd70
            (&(pCVar1->base).model,(char *)0x5f0e98);
  (pCVar1->base).collision_flag = 0;
  return pCVar1;
}
