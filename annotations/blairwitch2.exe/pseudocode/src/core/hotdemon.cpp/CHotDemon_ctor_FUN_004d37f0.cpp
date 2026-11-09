// Name: core_hotdemon.cpp_CHotDemon_ctor_FUN_004d37f0
// Address: 004d37f0
// Address Range: [[004d37f0, 004d384b]]
// Convention: __cdecl
// Signature: CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004d37f0(CHotDemon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CHotDemon * __cdecl core_hotdemon_cpp_CHotDemon_ctor_FUN_004d37f0(CHotDemon *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CHotDemon *pCVar3;
  
  pCVar3 = (CHotDemon *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CHotDemonVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,"hotdemon.dfm");
  uVar2 = _DAT_005f8864;
  uVar1 = _DAT_005f8860;
  *(uint *)&pCVar3->field_0x3430 = 0x3f19999a;
  *(uint *)&pCVar3->field_0x3434 = 0x3f666666;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
