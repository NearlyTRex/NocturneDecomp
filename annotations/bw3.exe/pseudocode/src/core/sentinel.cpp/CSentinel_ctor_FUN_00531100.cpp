// Name: core_sentinel.cpp_CSentinel_ctor_FUN_00531100
// Address: 00531100
// Address Range: [[00531100, 00531165]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00531100(CSentinel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_00531100(CSentinel *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CSentinel *pCVar3;
  
  pCVar3 = (CSentinel *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CSentinelVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_0054eae0
            (&(pCVar3->base).base.model,"sentinel.dfm");
  uVar1 = _DAT_005e3a0c;
  *(uint *)&(pCVar3->base).base.field_0x326c = 0x3f19999a;
  uVar2 = _DAT_005e3a10;
  *(uint *)&(pCVar3->base).base.field_0x3270 = 0x40000000;
  pCVar3->hover_timer = 0.0;
  *(uint *)&(pCVar3->base).base.field_0x3274 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x3278 = uVar2;
  return pCVar3;
}
