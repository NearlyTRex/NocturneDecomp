// Name: core_gabriela.cpp_CGabriella_tryFireWeapon_FUN_004c9e40
// Address: 004c9e40
// Address Range: [[004c9e40, 004c9eaa]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_004c9e40(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_tryFireWeapon_FUN_004c9e40(CGabriella *this_ptr)

{
  int iVar1;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_00559250(g_CDemonSetPtr,(CDemonActor *)this_ptr);
  iVar1 = (**(code **)(*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x154) + 0xe4))
                    (*(int *)&this_ptr->field_0x1fe20);
  if ((iVar1 != 0) && (*(int *)(*(int *)&this_ptr->field_0x1fe20 + 0x2dc) == 1)) {
    this_ptr->fire_cooldown_timer = 1.0;
  }
  core_setcolid_cpp_CDemonSet_init_FUN_00559220(g_CDemonSetPtr);
  this_ptr->fire_state = 0;
  return;
}
