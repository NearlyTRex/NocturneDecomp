// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004efa10
// Address: 004efa10
// Address Range: [[004efa10, 004efa6b]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004efa10(CHotDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004efa10(CHotDemon *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CHotDemon *pCVar3;
  
  pCVar3 = (CHotDemon *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CHotDemonVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,"hotdemon.dfm");
  uVar2 = _DAT_00602304;
  uVar1 = _DAT_00602300;
  *(uint *)&pCVar3->field_0x2fec = 0x3f19999a;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3f666666;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
