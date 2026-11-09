// Name: core_hecaitmx.cpp_CHecaitomix_ctor_FUN_00597df0
// Address: 00597df0
// Address Range: [[00597df0, 00597e4b]]
// Convention: unknown
// Signature: CHecaitomix * core_hecaitmx_cpp_CHecaitomix_ctor_FUN_00597df0(CHecaitomix *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CHecaitomix * core_hecaitmx_cpp_CHecaitomix_ctor_FUN_00597df0(CHecaitomix *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CHecaitomix *pCVar3;
  
  pCVar3 = (CHecaitomix *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CHecaitomixVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar3->field_0x158,"shadowscorp.dfm");
  uVar2 = _DAT_005e7864;
  uVar1 = _DAT_005e7860;
  *(uint *)&pCVar3->field_0x326c = 0x3fe00000;
  *(uint *)&pCVar3->field_0x3270 = 0x40600000;
  *(uint *)&pCVar3->field_0x3274 = uVar1;
  *(uint *)&pCVar3->field_0x3278 = uVar2;
  return pCVar3;
}
