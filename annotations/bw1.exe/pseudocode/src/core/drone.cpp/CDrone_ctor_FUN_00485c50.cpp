// Name: core_drone.cpp_CDrone_ctor_FUN_00485c50
// Address: 00485c50
// Address Range: [[00485c50, 00485cbf]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_00485c50(CDrone *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_00485c50(CDrone *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CDrone *pCVar3;
  
  pCVar3 = (CDrone *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.base.vtable._ub = &g_CDroneVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).base.model,"drone.dfm");
  *(uint *)&(pCVar3->base).base.field_0x2fec = 0x3f400000;
  uVar1 = _DAT_005ff48c;
  *(uint *)&(pCVar3->base).base.field_0x2ff0 = 0x3fc00000;
  uVar2 = _DAT_005ff490;
  *(uint *)&(pCVar3->base).base.field_0x27a0 = 1;
  (pCVar3->base).base.hit_points = 75.0;
  *(uint *)&(pCVar3->base).base.field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).base.field_0x2ff8 = uVar2;
  return pCVar3;
}
