// Name: core_armour.cpp_CArmour_ctor_FUN_0040e9e0
// Address: 0040e9e0
// Address Range: [[0040e9e0, 0040ea7c]]
// Convention: unknown
// Signature: CArmour * core_armour_cpp_CArmour_ctor_FUN_0040e9e0(CArmour *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CArmour * core_armour_cpp_CArmour_ctor_FUN_0040e9e0(CArmour *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CArmour *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar4 = (CArmour *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  pcVar5 = (char *)0x5d32d4;
  *(byte ***)&pCVar4->field_0x154 = &g_CArmourVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar4->field_0x158,0x5d32c9);
  uVar3 = _DAT_005fb7cc;
  uVar2 = _DAT_005fb7c8;
  *(uint *)&pCVar4->field_0x2fec = 0x3f19999a;
  *(uint *)&pCVar4->field_0x2ff0 = 0x40000000;
  pcVar6 = &pCVar4->field_0xc268;
  *(uint *)&pCVar4->field_0x2ff4 = uVar2;
  *(uint *)&pCVar4->field_0x2ff8 = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar4->field_0x27a0 = 2;
  *(uint *)&pCVar4->field_0x252c = 0x40490fdb;
  return pCVar4;
}
