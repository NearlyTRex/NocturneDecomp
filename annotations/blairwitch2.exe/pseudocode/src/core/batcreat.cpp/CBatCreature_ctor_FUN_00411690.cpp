// Name: core_batcreat.cpp_CBatCreature_ctor_FUN_00411690
// Address: 00411690
// Address Range: [[00411690, 004116eb]]
// Convention: __cdecl
// Signature: CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_00411690(CBatCreature *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CBatCreature * __cdecl core_batcreat_cpp_CBatCreature_ctor_FUN_00411690(CBatCreature *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CBatCreature *pCVar3;
  
  pCVar3 = (CBatCreature *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CBatCreatureVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,"batcreat.dfm");
  uVar2 = _DAT_005f2ee4;
  uVar1 = _DAT_005f2ee0;
  *(uint *)&pCVar3->field_0x3430 = 0x3f19999a;
  *(uint *)&pCVar3->field_0x3434 = 0x3fc00000;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
