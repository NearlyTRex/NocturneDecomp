// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_005af2d0
// Address: 005af2d0
// Address Range: [[005af2d0, 005af37d]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005af2d0(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_005af2d0(CWerewolf *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CWerewolf *pCVar4;
  
  pCVar4 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar4->field_0x154 = &g_CWerewolfVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar4->field_0x158,0x5f99d4);
  *(uint *)&pCVar4->field_0x2fec = 0x3f800000;
  *(uint *)&pCVar4->field_0x2ff0 = 0x40000000;
  *(uint *)&pCVar4->field_0xc268 = 0;
  *(uint *)&pCVar4->field_0xc280 = 1;
  *(uint *)&pCVar4->field_0xc294 = 0;
  uVar1 = _DAT_00607fd0;
  *(uint *)&pCVar4->field_0xc298 = 0x40a00000;
  uVar2 = _DAT_00607fd4;
  *(uint *)&pCVar4->field_0xc29c = 0;
  uVar3 = 0x41200000;
  *(uint *)&pCVar4->field_0xc2a0 = 0;
  *(uint *)&pCVar4->field_0xc2a4 = 0;
  *(uint *)&pCVar4->field_0x2ff4 = uVar1;
  *(uint *)&pCVar4->field_0x2ff8 = uVar2;
  *(uint *)&pCVar4->field_0xc2a8 = uVar3;
  return pCVar4;
}
