// Name: core_flame.cpp_CFlame_ctor_FUN_0049f180
// Address: 0049f180
// Address Range: [[0049f180, 0049f26e]]
// Convention: __cdecl
// Signature: CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_0049f180(CFlame *this_ptr)

#include "nocturne.h"

CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_0049f180(CFlame *this_ptr)

{
  CFlame *pCVar1;
  uint uVar2;
  
  pCVar1 = (CFlame *)core_actor_cpp_CDemonActor_ctor_FUN_00408790((CDemonActor *)this_ptr);
  *(byte **)&pCVar1->field_0x2b0 = &g_CFlameVTable;
  *(uint *)&pCVar1->field_0x2b4 = 0x3f800000;
  *(uint *)&pCVar1->field_0x2b8 = 0x40000000;
  *(uint *)&pCVar1->field_0x2bc = 0x3f800000;
  uVar2 = core_actor_cpp_FUN_0040cf60(0,0x41000000);
  *(uint *)&pCVar1->field_0x304 = 0;
  *(uint *)&pCVar1->field_0x308 = 0x3f800000;
  *(uint *)&pCVar1->field_0x3ec = 1;
  *(uint *)&pCVar1->field_0x30c = 0;
  pCVar1->field_0x314 = 0;
  pCVar1->field_0x378 = 0;
  *(uint *)&pCVar1->field_0x310 = 1;
  *(uint *)&pCVar1->field_0xfc = 1;
  *(uint *)&pCVar1->field_0x3e0 = 0x3d4ccccd;
  *(uint *)&pCVar1->field_0x3dc = 0x3f000000;
  *(uint *)&pCVar1->field_0x3f4 = 1;
  *(uint *)&pCVar1->field_0x3e4 = 0;
  *(uint *)&pCVar1->field_0x3e8 = 0;
  *(uint *)&pCVar1->field_0x3f8 = 0;
  *(uint *)&pCVar1->field_0x3fc = 0;
  *(uint *)&pCVar1->field_0x2c0 = uVar2;
  return pCVar1;
}
