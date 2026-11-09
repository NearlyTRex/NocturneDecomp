// Name: core_scat.cpp_FUN_0051ec20
// Address: 0051ec20
// Address Range: [[0051ec20, 0051ec86]]
// Convention: __cdecl
// Signature: void __cdecl core_scat_cpp_FUN_0051ec20(CScat *this_ptr)

#include "nocturne.h"

void __cdecl core_scat_cpp_FUN_0051ec20(CScat *this_ptr)

{
  char cVar1;
  char *pcVar2;
  byte *this_ptr_00;
  char *pcVar3;
  char *pcVar4;
  
  this_ptr_00 = &this_ptr->field_0x2437c;
  core_inv_cpp_CInventory_initialize_FUN_004da900((CInventory *)this_ptr_00);
  pcVar3 = "BaronProxy";
  pcVar2 = (char *)core_actor_cpp_createActorByName_FUN_0040c5a0("CBaronWeapon");
  pcVar4 = pcVar2;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004dadb0(this_ptr_00,pcVar2,1,0);
  core_inv_cpp_FUN_004db9d0(this_ptr_00,0,5,1);
  return;
}
