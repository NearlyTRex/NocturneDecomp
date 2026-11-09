// Name: core_smiley.cpp_CSmiley_ctor_FUN_0056be50
// Address: 0056be50
// Address Range: [[0056be50, 0056bee7]]
// Convention: __cdecl
// Signature: CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_0056be50(CSmiley *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CSmiley * __cdecl core_smiley_cpp_CSmiley_ctor_FUN_0056be50(CSmiley *this_ptr)

{
  uint uVar1;
  uint uVar2;
  CSmiley *pCVar3;
  
  pCVar3 = (CSmiley *)core_enemy_cpp_CEnemy_ctor_FUN_004a0410((CEnemy *)this_ptr);
  *(byte ***)&pCVar3->field_0x154 = &g_CSmileyVTable;
  core_skeleton_cpp_FUN_00569f50(&pCVar3->field_0x158,0x5f2857);
  *(uint *)&pCVar3->field_0xc268 = 0;
  *(uint *)&pCVar3->field_0xc26c = 0x42c80000;
  *(uint *)&pCVar3->field_0x2fec = 0x3f19999a;
  *(uint *)&pCVar3->field_0x2ff0 = 0x3f666666;
  *(uint *)&pCVar3->field_0xc29c = 0;
  uVar1 = _DAT_0060594c;
  *(uint *)&pCVar3->field_0xc2a0 = 0;
  uVar2 = _DAT_00605950;
  *(uint *)&pCVar3->field_0xc2a4 = 0;
  *(uint *)&pCVar3->field_0xc2a8 = 1;
  *(uint *)&pCVar3->field_0x2ff4 = uVar1;
  *(uint *)&pCVar3->field_0x2ff8 = uVar2;
  return pCVar3;
}
