// Name: core_larva.cpp_CLarva_ctor_FUN_004e0580
// Address: 004e0580
// Address Range: [[004e0580, 004e060d]]
// Convention: unknown
// Signature: CLarva * core_larva_cpp_CLarva_ctor_FUN_004e0580(CLarva *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLarva * core_larva_cpp_CLarva_ctor_FUN_004e0580(CLarva *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CLarva *pCVar3;
  
  pCVar3 = (CLarva *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CLarvaVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,(char *)0x5dbda5);
  *(uint *)&pCVar3->field_0x3430 = 0x3e800000;
  *(uint *)&pCVar3->field_0x3434 = 0x3f000000;
  *(uint *)&pCVar3->field_0x280c = 1;
  *(uint *)&pCVar3->field_0x25a8 = 0x41700000;
  uVar1 = _DAT_005f92c0;
  *(uint *)&pCVar3->field_0x10afc = 0;
  uVar2 = _DAT_005f92c4;
  *(uint *)&pCVar3->field_0x10b00 = 0;
  *(uint *)&pCVar3->field_0x259c = 0x3f490fdb;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
