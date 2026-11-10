// Name: core_beast.cpp_CBeast_ctor_FUN_004146f0
// Address: 004146f0
// Address Range: [[004146f0, 0041474b]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_004146f0(CBeast *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_004146f0(CBeast *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_004a0410(&this_ptr->base);
  (pCVar3->base).base.vtable._ub = &g_CBeastVTable._ub;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_00569f50
            (&(pCVar3->base).model,"beast.dfm");
  uVar2 = _DAT_005fc42c;
  uVar1 = _DAT_005fc428;
  *(uint *)&(pCVar3->base).field_0x2fec = 0x41200000;
  *(uint *)&(pCVar3->base).field_0x2ff0 = 0x41200000;
  *(uint *)&(pCVar3->base).field_0x2ff4 = uVar1;
  *(uint *)&(pCVar3->base).field_0x2ff8 = uVar2;
  return (CBeast *)pCVar3;
}
