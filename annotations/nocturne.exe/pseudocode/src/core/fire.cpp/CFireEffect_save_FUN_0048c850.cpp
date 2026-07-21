// Name: core_fire.cpp_CFireEffect_save_FUN_0048c850
// Address: 0048c850
// Address Range: [[0048c850, 0048c892]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CFireEffect_save_FUN_0048c850(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_save_FUN_0048c850(uint param_1,uint param_2)

{
  byte *puVar1;
  
  _fprintf(param_2,"Fire state\n");
  puVar1 = (byte *)0x1c625f8;
  _fprintf(param_2,&DAT_0058153c);
  do {
    core_fire_cpp_CCrater_save_FUN_00487e90(puVar1,param_2);
    puVar1 = puVar1 + 0x70;
  } while (puVar1 != &DAT_01c62eb8);
  return;
}
