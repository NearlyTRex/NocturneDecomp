// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004d5430
// Address: 004d5430
// Address Range: [[004d5430, 004d548b]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430(CHotDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004d5430(CHotDemon *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CHotDemon *pCVar3;
  
  pCVar3 = (CHotDemon *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CHotDemonVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,"hotdemon.dfm");
  uVar2 = _DAT_005e1904;
  uVar1 = _DAT_005e1900;
  *(uint *)&pCVar3->field_0x326c = 0x3f19999a;
  *(uint *)&pCVar3->field_0x3270 = 0x3f666666;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  return pCVar3;
}
