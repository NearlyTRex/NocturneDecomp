// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_0057d550
// Address: 0057d550
// Address Range: [[0057d550, 0057d5fd]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_0057d550(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_0057d550(CWerewolf *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CWerewolf *pCVar4;
  
  pCVar4 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_00488fd0((CEnemy *)this_ptr);
  *(byte ***)&pCVar4->field_0x154 = &g_CWerewolfVTable;
  core_skeleton_cpp_FUN_0054eae0(&pCVar4->field_0x158,0x5d79f5);
  *(uint *)&pCVar4->field_0x326c = 0x3f800000;
  *(uint *)&pCVar4->field_0x3270 = 0x40000000;
  *(uint *)&pCVar4->field_0xd054 = 0;
  *(uint *)&pCVar4->field_0xd06c = 1;
  *(uint *)&pCVar4->field_0xd080 = 0;
  uVar1 = _DAT_005e63a0;
  *(uint *)&pCVar4->field_0xd084 = 0x40a00000;
  uVar2 = _DAT_005e63a4;
  *(uint *)&pCVar4->field_0xd088 = 0;
  uVar3 = 0x41200000;
  *(uint *)&pCVar4->field_0xd08c = 0;
  *(uint *)&pCVar4->field_0xd090 = 0;
  *(uint *)&pCVar4->field_0x3274 = uVar1;
  *(uint *)&pCVar4->field_0x3278 = uVar2;
  *(uint *)&pCVar4->field_0xd094 = uVar3;
  return pCVar4;
}
