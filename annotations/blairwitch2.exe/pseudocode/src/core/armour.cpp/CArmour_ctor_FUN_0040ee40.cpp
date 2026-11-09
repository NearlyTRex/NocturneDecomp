// Name: core_armour.cpp_CArmour_ctor_FUN_0040ee40
// Address: 0040ee40
// Address Range: [[0040ee40, 0040eedc]]
// Convention: unknown
// Signature: CArmour * core_armour_cpp_CArmour_ctor_FUN_0040ee40(CArmour *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CArmour * core_armour_cpp_CArmour_ctor_FUN_0040ee40(CArmour *this_ptr)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  CArmour *pCVar4;
  char *pcVar5;
  char *pcVar6;
  
  pCVar4 = (CArmour *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  pcVar5 = (char *)0x5cb369;
  *(byte **)&pCVar4->field_0x2b0 = &g_CArmourVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar4->field_0x2b4,(char *)0x5cb35e);
  uVar3 = _DAT_005f267c;
  uVar2 = _DAT_005f2678;
  *(uint *)&pCVar4->field_0x3430 = 0x3f19999a;
  *(uint *)&pCVar4->field_0x3434 = 0x40000000;
  pcVar6 = &pCVar4->field_0x10af8;
  *(uint *)&pCVar4->field_0x3438 = uVar2;
  *(uint *)&pCVar4->field_0x343c = uVar3;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  *(uint *)&pCVar4->field_0x280c = 2;
  *(uint *)&pCVar4->field_0x259c = 0x40490fdb;
  return pCVar4;
}
