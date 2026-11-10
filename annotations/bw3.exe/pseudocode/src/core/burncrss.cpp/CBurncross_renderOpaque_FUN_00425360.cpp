// Name: core_burncrss.cpp_CBurncross_renderOpaque_FUN_00425360
// Address: 00425360
// Address Range: [[00425360, 004253c7]]
// Convention: __cdecl
// Signature: int __cdecl core_burncrss_cpp_CBurncross_renderOpaque_FUN_00425360(CBurncross *this_ptr)

#include "nocturne.h"

int __cdecl core_burncrss_cpp_CBurncross_renderOpaque_FUN_00425360(CBurncross *this_ptr)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  
  iVar1 = core_weapon_cpp_CWeapon_renderOpaque_FUN_0057af80((CWeapon *)this_ptr);
  if (*(int *)&this_ptr->field_0x2d4 != 2) {
    iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                      (*(uint *)&this_ptr->field_0x304,g_CEnemyClassInfo.name_hash);
    if (iVar2 == 0) {
      return iVar1;
    }
  }
  puVar3 = &this_ptr->field_0x5a8;
  do {
    (**(code **)(*(int *)(puVar3 + 0x154) + 0x14))(puVar3);
    puVar3 = puVar3 + 0x2a4;
  } while (puVar3 != &this_ptr->field_0x1ac8);
  return iVar1;
}
