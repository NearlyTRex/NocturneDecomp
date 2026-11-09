// Name: core_drone.cpp_CDrone_ctor_FUN_0046d750
// Address: 0046d750
// Address Range: [[0046d750, 0046d7bf]]
// Convention: __cdecl
// Signature: CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_0046d750(CDrone *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDrone * __cdecl core_drone_cpp_CDrone_ctor_FUN_0046d750(CDrone *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CDrone *pCVar3;
  
  pCVar3 = (CDrone *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CDroneVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,"drone.dfm");
  *(uint *)&pCVar3->field_0x3430 = 0x3f400000;
  uVar1 = _DAT_005f596c;
  *(uint *)&pCVar3->field_0x3434 = 0x3fc00000;
  uVar2 = _DAT_005f5970;
  *(uint *)&pCVar3->field_0x280c = 1;
  *(uint *)&pCVar3->field_0x25a8 = 0x42960000;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
