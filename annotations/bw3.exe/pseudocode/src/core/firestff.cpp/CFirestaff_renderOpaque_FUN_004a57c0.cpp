// Name: core_firestff.cpp_CFirestaff_renderOpaque_FUN_004a57c0
// Address: 004a57c0
// Address Range: [[004a57c0, 004a5865]]
// Convention: __cdecl
// Signature: int __cdecl core_firestff_cpp_CFirestaff_renderOpaque_FUN_004a57c0(CFirestaff *this_ptr)

#include "nocturne.h"

int __cdecl core_firestff_cpp_CFirestaff_renderOpaque_FUN_004a57c0(CFirestaff *this_ptr)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  
  iVar1 = core_weapon_cpp_CWeapon_renderOpaque_FUN_0057af80((CWeapon *)this_ptr);
  iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                    (*(uint *)&this_ptr->field_0x304,g_CHeroClassInfo.name_hash);
  if ((((iVar2 == 0) || (*(int *)&this_ptr->field_0x58c <= *(int *)(iVar2 + 0x20b80))) &&
      (iVar1 != 0)) && (*(int *)&this_ptr->field_0x588 == 0x10000)) {
    if ((*(int *)&this_ptr->field_0x2d4 != 2) &&
       (iVar2 = core_actor_cpp_castToClassHash_FUN_0040c840
                          (*(uint *)&this_ptr->field_0x304,g_CEnemyClassInfo.name_hash),
       iVar2 == 0)) {
      return iVar1;
    }
    puVar3 = &this_ptr->field_0x614;
    do {
      (**(code **)(*(int *)(puVar3 + 0x154) + 0x14))(puVar3);
      puVar3 = puVar3 + 0x2a4;
    } while (puVar3 != &this_ptr->field_0x25c4);
  }
  return iVar1;
}
