// Name: core_smiley.cpp_CSmiley_ctor_FUN_005497d0
// Address: 005497d0
// Address Range: [[005497d0, 00549867]]
// Convention: __cdecl
// Signature: CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005497d0(CSmiley *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_005497d0(CSmiley *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CSmiley *pCVar3;
  
  pCVar3 = (CSmiley *)core_enemy_cpp_CEnemy_ctor_FUN_00487db0((CEnemy *)this_ptr);
  *(byte **)&pCVar3->field_0x2b0 = &g_CSmileyVTable;
  core_skeleton_cpp_CDeformableModelInstance_init_FUN_005478b0
            ((CDeformableModelInstance *)&pCVar3->field_0x2b4,(char *)0x5e765d);
  *(uint *)&pCVar3->field_0x10af8 = 0;
  *(uint *)&pCVar3->field_0x10afc = 0x42c80000;
  *(uint *)&pCVar3->field_0x3430 = 0x3f19999a;
  *(uint *)&pCVar3->field_0x3434 = 0x3f666666;
  *(uint *)&pCVar3->field_0x10b2c = 0;
  uVar1 = _DAT_005fba5c;
  *(uint *)&pCVar3->field_0x10b30 = 0;
  uVar2 = _DAT_005fba60;
  *(uint *)&pCVar3->field_0x10b34 = 0;
  *(uint *)&pCVar3->field_0x10b38 = 1;
  *(uint *)&pCVar3->field_0x3438 = uVar1;
  *(uint *)&pCVar3->field_0x343c = uVar2;
  return pCVar3;
}
