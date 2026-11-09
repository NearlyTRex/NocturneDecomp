// Name: core_werewolf.cpp_CWerewolf_ctor_FUN_0058b780
// Address: 0058b780
// Address Range: [[0058b780, 0058b82d]]
// Convention: __cdecl
// Signature: CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_0058b780(CWerewolf *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CWerewolf * __cdecl core_werewolf_cpp_CWerewolf_ctor_FUN_0058b780(CWerewolf *this_ptr)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  CWerewolf *pCVar4;
  
  pCVar4 = (CWerewolf *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar4->field_0x2b0 = &g_CWerewolfVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar4->field_0x2b4,(char *)0x5ee5fc);
  *(uint *)&pCVar4->field_0x3430 = 0x3f800000;
  *(uint *)&pCVar4->field_0x3434 = 0x40000000;
  *(uint *)&pCVar4->field_0x10af8 = 0;
  *(uint *)&pCVar4->field_0x10b10 = 1;
  *(uint *)&pCVar4->field_0x10b24 = 0;
  uVar1 = _DAT_005fe0d0;
  *(uint *)&pCVar4->field_0x10b28 = 0x40a00000;
  uVar2 = _DAT_005fe0d4;
  *(uint *)&pCVar4->field_0x10b2c = 0;
  uVar3 = 0x41200000;
  *(uint *)&pCVar4->field_0x10b30 = 0;
  *(uint *)&pCVar4->field_0x10b34 = 0;
  *(uint *)&pCVar4->field_0x3438 = uVar1;
  *(uint *)&pCVar4->field_0x343c = uVar2;
  *(uint *)&pCVar4->field_0x10b38 = uVar3;
  return pCVar4;
}
