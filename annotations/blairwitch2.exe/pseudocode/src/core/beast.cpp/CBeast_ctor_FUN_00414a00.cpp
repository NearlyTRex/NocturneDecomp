// Name: core_beast.cpp_CBeast_ctor_FUN_00414a00
// Address: 00414a00
// Address Range: [[00414a00, 00414a5b]]
// Convention: __cdecl
// Signature: CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00414a00(CBeast *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBeast * __cdecl core_beast_cpp_CBeast_ctor_FUN_00414a00(CBeast *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CEnemy *pCVar3;
  
  pCVar3 = core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CBeastVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,"beast.dfm");
  uVar2 = _DAT_005f336c;
  uVar1 = _DAT_005f3368;
  *(uint *)&pCVar3->field_0x3430 = 0x41200000;
  *(uint *)&pCVar3->field_0x3434 = 0x41200000;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return (CBeast *)pCVar3;
}
