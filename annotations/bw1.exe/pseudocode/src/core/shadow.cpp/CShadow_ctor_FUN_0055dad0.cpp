// Name: core_shadow.cpp_CShadow_ctor_FUN_0055dad0
// Address: 0055dad0
// Address Range: [[0055dad0, 0055dbe1]]
// Convention: unknown
// Signature: CShadow * core_shadow_cpp_CShadow_ctor_FUN_0055dad0(CShadow *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CShadow * core_shadow_cpp_CShadow_ctor_FUN_0055dad0(CShadow *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CShadow *pCVar4;
  
  pCVar4 = (CShadow *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar4->field_0x154 = &g_CShadowVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar4->field_0x158,"shadowbeast.dfm");
  *(uint *)&pCVar4->field_0x2fec = 0x3f800000;
  *(uint *)&pCVar4->field_0x2ff0 = 0x40000000;
  *(uint *)&pCVar4->field_0xc30c = 1;
  *(uint *)&pCVar4->field_0xc268 = 0;
  *(uint *)&pCVar4->field_0xc290 = 1;
  *(uint *)&pCVar4->field_0xc2b8 = 0;
  *(uint *)&pCVar4->field_0xc2bc = 0x40a00000;
  *(uint *)&pCVar4->field_0xc2c0 = 0;
  *(uint *)&pCVar4->field_0xc2c4 = 0;
  *(uint *)&pCVar4->field_0xc2cc = 0;
  *(uint *)&pCVar4->field_0xc300 = 0x3f800000;
  *(uint *)&pCVar4->field_0xc2c8 = 0;
  *(uint *)&pCVar4->field_0xc2f0 = 0;
  *(uint *)&pCVar4->field_0xc2e8 = 0;
  *(uint *)&pCVar4->field_0xc2ec = 0;
  uVar1 = _DAT_00605194;
  *(uint *)&pCVar4->field_0xc2f8 = 0;
  uVar2 = _DAT_00605198;
  *(uint *)&pCVar4->field_0xc2f4 = 0x41200000;
  uVar3 = _DAT_0060519c;
  *(uint *)&pCVar4->field_0xc304 = 0;
  *(uint *)&pCVar4->field_0xc308 = 0;
  *(uint *)&pCVar4->field_0x2ff4 = uVar1;
  *(uint *)&pCVar4->field_0x2ff8 = uVar2;
  *(uint *)&pCVar4->field_0xc2d0 = uVar3;
  return pCVar4;
}
