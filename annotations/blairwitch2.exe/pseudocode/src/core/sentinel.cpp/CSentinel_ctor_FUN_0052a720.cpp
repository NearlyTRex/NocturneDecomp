// Name: core_sentinel.cpp_CSentinel_ctor_FUN_0052a720
// Address: 0052a720
// Address Range: [[0052a720, 0052a785]]
// Convention: __cdecl
// Signature: CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_0052a720(CSentinel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSentinel * __cdecl core_sentinel_cpp_CSentinel_ctor_FUN_0052a720(CSentinel *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CSentinel *pCVar3;
  
  pCVar3 = (CSentinel *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CSentinelVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,"sentinel.dfm");
  uVar1 = _DAT_005fb04c;
  *(uint *)&pCVar3->field_0x3430 = 0x3f19999a;
  uVar2 = _DAT_005fb050;
  *(uint *)&pCVar3->field_0x3434 = 0x40000000;
  *(uint *)&pCVar3->field_0x10afc = 0;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
