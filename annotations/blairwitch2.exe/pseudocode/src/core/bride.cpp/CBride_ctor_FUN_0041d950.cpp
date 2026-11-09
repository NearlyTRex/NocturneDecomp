// Name: core_bride.cpp_CBride_ctor_FUN_0041d950
// Address: 0041d950
// Address Range: [[0041d950, 0041d9bf]]
// Convention: unknown
// Signature: CBride * core_bride_cpp_CBride_ctor_FUN_0041d950(CBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CBride * core_bride_cpp_CBride_ctor_FUN_0041d950(CBride *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CBride *pCVar3;
  
  pCVar3 = (CBride *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x2b0 = &g_CBrideVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,"bride.dfm");
  *(uint *)&pCVar3->field_0x3430 = 0x3f400000;
  uVar1 = _DAT_005f3c80;
  *(uint *)&pCVar3->field_0x3434 = 0x3fc00000;
  uVar2 = _DAT_005f3c84;
  *(uint *)&pCVar3->field_0x10b1c = 0;
  *(uint *)&pCVar3->field_0x259c = 0x3fc90fdb;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
