// Name: core_sentinel.cpp_CSentinel_ctor_FUN_0054ba10
// Address: 0054ba10
// Address Range: [[0054ba10, 0054ba75]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_0054ba10(CSentinel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_0054ba10(CSentinel *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CSentinel *pCVar3;
  
  pCVar3 = (CSentinel *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CSentinelVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"sentinel.dfm");
  uVar1 = _DAT_00604e4c;
  *(uint *)&(pCVar3->base).base.field_0x2fec = 0x3f19999a;
  uVar2 = _DAT_00604e50;
  *(uint *)&(pCVar3->base).base.field_0x2ff0 = 0x40000000;
  pCVar3->hover_timer = 0.0;
  *(uint *)&(pCVar3->base).base.field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x2ff8 = uVar2;
  return pCVar3;
}
