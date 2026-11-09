// Name: core_dracbrid.cpp_CDraculaBride_ctor_FUN_0047b0b0
// Address: 0047b0b0
// Address Range: [[0047b0b0, 0047b1a1]]
// Convention: __cdecl
// Signature: CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_0047b0b0(CDraculaBride *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDraculaBride * __cdecl core_dracbrid_cpp_CDraculaBride_ctor_FUN_0047b0b0(CDraculaBride *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CDraculaBride *pCVar3;
  CDraculaBride *pCVar4;
  byte *puVar5;
  
  pCVar3 = (CDraculaBride *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CDraculaBrideVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,0x5dac1b);
  *(uint *)&pCVar3->field_0x2fec = 0x3f000000;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3f800000;
  pCVar3->field_0xc28c = 0;
  *(uint *)&pCVar3->field_0x2538 = 0x43070000;
  uVar1 = _DAT_005ff184;
  *(uint *)&pCVar3->field_0xc2f4 = 0;
  uVar2 = _DAT_005ff188;
  *(uint *)&pCVar3->field_0xc2f8 = 0;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  *(uint *)&pCVar3->field_0xc30c = 0;
  *(uint *)&pCVar3->field_0xc308 = *(uint *)&pCVar3->field_0xc30c;
  *(uint *)&pCVar3->field_0xc304 = *(uint *)&pCVar3->field_0xc308;
  *(uint *)&pCVar3->field_0xc310 = 0;
  *(uint *)&pCVar3->field_0xc2f0 = 1;
  pCVar4 = pCVar3;
  do {
    puVar5 = &pCVar4->field_0x4;
    *(uint *)&pCVar4->field_0xc318 = 0;
    pCVar4 = (CDraculaBride *)puVar5;
  } while (puVar5 != &pCVar3->field_0xf0);
  *(uint *)&pCVar3->field_0xc314 = 0;
  *(uint *)&pCVar3->field_0xc40c = 0;
  *(uint *)&pCVar3->field_0xc300 = 0;
  *(uint *)&pCVar3->field_0xc408 = 0;
  return pCVar3;
}
