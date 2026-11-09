// Name: core_flame.cpp_CFlame_ctor_FUN_004a59b0
// Address: 004a59b0
// Address Range: [[004a59b0, 004a5a9e]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004a59b0(CFlame *this_ptr)

#include "nocturne.h"

CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004a59b0(CFlame *this_ptr)

{
  CFlame *pCVar1;
  uint uVar2;
  
  pCVar1 = (CFlame *)core_actor_cpp_CDemonActor_ctor_FUN_00408600((CDemonActor *)this_ptr);
  *(byte **)&pCVar1->field_0x154 = &g_CFlameVTable;
  *(uint *)&pCVar1->field_0x158 = 0x3f800000;
  *(uint *)&pCVar1->field_0x15c = 0x40000000;
  *(uint *)&pCVar1->field_0x160 = 0x3f800000;
  uVar2 = core_actor_cpp_FUN_0040ce40(0,0x41000000);
  *(uint *)&pCVar1->field_0x1a8 = 0;
  *(uint *)&pCVar1->field_0x1ac = 0x3f800000;
  *(uint *)&pCVar1->field_0x290 = 1;
  *(uint *)&pCVar1->field_0x1b0 = 0;
  pCVar1->field_0x1b8 = 0;
  pCVar1->field_0x21c = 0;
  *(uint *)&pCVar1->field_0x1b4 = 1;
  *(uint *)&pCVar1->field_0xfc = 1;
  *(uint *)&pCVar1->field_0x284 = 0x3d4ccccd;
  *(uint *)&pCVar1->field_0x280 = 0x3f000000;
  *(uint *)&pCVar1->field_0x298 = 1;
  *(uint *)&pCVar1->field_0x288 = 0;
  *(uint *)&pCVar1->field_0x28c = 0;
  *(uint *)&pCVar1->field_0x29c = 0;
  *(uint *)&pCVar1->field_0x2a0 = 0;
  *(uint *)&pCVar1->field_0x164 = uVar2;
  return pCVar1;
}
