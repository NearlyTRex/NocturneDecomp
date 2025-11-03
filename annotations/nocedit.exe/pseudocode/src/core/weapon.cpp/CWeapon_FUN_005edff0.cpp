// Name: core_weapon.cpp_CWeapon_FUN_005edff0
// Address: 005edff0
// Address Range: [[005edff0, 005edffa]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005edff0(CWeapon * this_ptr)
// Cross-references:
//   core_baron.cpp_CBaronWeapon_FUN_00413da0 (00413da0) at 00413da5 [UNCONDITIONAL_CALL]
//   core_turret.cpp_CTurret_FUN_005e2240 (005e2240) at 005e225b [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_CDemonActor_setup_FUN_00408bb0

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005edff0(CWeapon *this_ptr)

{
  core_actor_cpp_CDemonActor_setup_FUN_00408bb0(&this_ptr->base_actor);
  core_dmodel_cpp_CKeyFramedModelInstance_preCache_FUN_00478d60(&this_ptr->model);
  core_weapon_cpp_FUN_005ee740();
  this_ptr->field13_0x574 = 0;
  return;
}


// Assembly code:
// 005edff0: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_FUN_005edff0
// 005edff1: MOV EBX,dword ptr [ESP + 0x8]
// 005edff5: PUSH EBX
// 005edff6: CALL core_actor.cpp_CDemonActor_setup_FUN_00408bb0
//   XREF to: 00408bb0 (UNCONDITIONAL_CALL)
