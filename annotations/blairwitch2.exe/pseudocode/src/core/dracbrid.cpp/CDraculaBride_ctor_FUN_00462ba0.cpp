// Name: core_dracbrid.cpp_CDraculaBride_ctor_FUN_00462ba0
// Address: 00462ba0
// Address Range: [[00462ba0, 00462c8e]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00462ba0(CDraculaBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_00462ba0(CDraculaBride *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CDraculaBride *pCVar3;
  CDraculaBride *pCVar4;
  byte *puVar5;
  
  pCVar3 = (CDraculaBride *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CDraculaBrideVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,(char *)0x5d0e22);
  *(uint *)&pCVar3->field_0x3430 = 0x3f000000;
  *(uint *)&pCVar3->field_0x3434 = 0x3f800000;
  pCVar3->field_0x10b1c = 0;
  *(uint *)&pCVar3->field_0x25a8 = 0x43070000;
  uVar1 = _DAT_005f5644;
  *(uint *)&pCVar3->field_0x10b84 = 0;
  uVar2 = _DAT_005f5648;
  *(uint *)&pCVar3->field_0x10b88 = 0;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  *(uint *)&pCVar3->field_0x10b9c = 0;
  *(uint *)&pCVar3->field_0x10b98 = *(uint *)&pCVar3->field_0x10b9c;
  *(uint *)&pCVar3->field_0x10b94 = *(uint *)&pCVar3->field_0x10b98;
  *(uint *)&pCVar3->field_0x10ba0 = 0;
  *(uint *)&pCVar3->field_0x10b80 = 1;
  pCVar4 = pCVar3;
  do {
    puVar5 = &pCVar4->field_0x4;
    *(uint *)&pCVar4->field_0x10ba8 = 0;
    pCVar4 = (CDraculaBride *)puVar5;
  } while (puVar5 != &pCVar3->field_0x78);
  *(uint *)&pCVar3->field_0x10ba4 = 0;
  *(uint *)&pCVar3->field_0x10c24 = 0;
  *(uint *)&pCVar3->field_0x10b90 = 0;
  *(uint *)&pCVar3->field_0x10c20 = 0;
  return pCVar3;
}
