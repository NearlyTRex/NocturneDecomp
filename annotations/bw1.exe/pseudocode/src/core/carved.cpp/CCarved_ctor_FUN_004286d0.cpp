// Name: core_carved.cpp_CCarved_ctor_FUN_004286d0
// Address: 004286d0
// Address Range: [[004286d0, 004287d4]]
// Convention: unknown
// Signature: CCarved * core_carved_cpp_CCarved_ctor_FUN_004286d0(CCarved *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CCarved * core_carved_cpp_CCarved_ctor_FUN_004286d0(CCarved *this_ptr)

{
  uint uVar1;
  CCarved *pCVar2;
  uint uVar3;
  int iVar4;
  
  pCVar2 = (CCarved *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar2->field_0x154 = &g_CCarvedVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar2->field_0x158,"@carvedman1.dfm" + 1);
  *(uint *)&pCVar2->field_0x2fec = 0x3f000000;
  uVar3 = _DAT_005fd470;
  *(uint *)&pCVar2->field_0x2ff0 = 0x3f800000;
  *(uint *)&pCVar2->field_0xc278 = 0;
  uVar1 = _DAT_005fd474;
  *(uint *)&pCVar2->field_0xc274 = 0;
  *(uint *)&pCVar2->field_0x2ff4 = uVar3;
  *(uint *)&pCVar2->field_0x2ff8 = uVar1;
  uVar3 = core_actor_cpp_FUN_0040cc00(0x3e99999a,0x3f800000);
  *(uint *)&pCVar2->field_0xc268 = uVar3;
  iVar4 = core_actor_cpp_FUN_0040cc60(0,0xff);
  *(uint *)&pCVar2->field_0xc270 = 0;
  *(uint *)&pCVar2->field_0xc280 = 0;
  *(uint *)&pCVar2->field_0xc2d4 = 0;
  *(uint *)&pCVar2->field_0xc284 = 0;
  *(uint *)&pCVar2->field_0xc2e4 = 0;
  *(uint *)&pCVar2->field_0xc2e8 = 0;
  *(uint *)&pCVar2->field_0xc2ec = 0;
  *(uint *)&pCVar2->field_0xc264 = 0;
  *(uint *)&pCVar2->field_0x252c = 0x40490fdb;
  *(int *)&pCVar2->field_0xc26c = iVar4;
  return pCVar2;
}
