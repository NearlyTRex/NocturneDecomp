// Name: core_larva.cpp_CLarva_ctor_FUN_004fd950
// Address: 004fd950
// Address Range: [[004fd950, 004fd9dd]]
// Convention: unknown
// Signature: CLarva * core_larva_cpp_CLarva_ctor_FUN_004fd950(CLarva *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CLarva * core_larva_cpp_CLarva_ctor_FUN_004fd950(CLarva *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CLarva *pCVar3;
  
  pCVar3 = (CLarva *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CLarvaVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,"worm.dfm");
  *(uint *)&pCVar3->field_0x2fec = 0x3e800000;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3f000000;
  *(uint *)&pCVar3->field_0x27a0 = 1;
  *(uint *)&pCVar3->field_0x2538 = 0x41700000;
  uVar1 = _DAT_00602d20;
  *(uint *)&pCVar3->field_0xc26c = 0;
  uVar2 = _DAT_00602d24;
  *(uint *)&pCVar3->field_0xc270 = 0;
  *(uint *)&pCVar3->field_0x252c = 0x3f490fdb;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
