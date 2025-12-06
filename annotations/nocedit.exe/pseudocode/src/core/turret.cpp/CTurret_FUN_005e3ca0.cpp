// Name: core_turret.cpp_CTurret_FUN_005e3ca0
// Address: 005e3ca0
// Address Range: [[005e3ca0, 005e3dcc]]
// Convention: __cdecl
// Signature: void core_turret.cpp_CTurret_FUN_005e3ca0(CTurret * this_ptr)

#include "nocturne.h"

void __cdecl core_turret_cpp_CTurret_FUN_005e3ca0(CTurret *this_ptr)

{
  CActorPropertyList *in_stack_00000008;
  char *pcStack0000000c;
  char *pcStack00000010;
  char *pcStack00000018;
  int *piStack0000001c;
  
  core_weapon_cpp_CWeapon_FUN_005ee9f0(&this_ptr->base_weapon);
  core_actor_cpp_CActorPropertyList_FUN_0040e640(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e460(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  pcStack0000000c = (char *)0x0;
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  pcStack00000010 = (char *)0x0;
  pcStack0000000c = (char *)0x47c34f80;
  core_actor_cpp_CActorPropertyList_FUN_0040e1a0(in_stack_00000008);
  pcStack00000010 = "CTrigger";
  pcStack0000000c = (char *)0x1;
  core_actor_cpp_CActorPropertyList_FUN_0040e350(in_stack_00000008);
  pcStack00000018 = (char *)0x0;
  pcStack00000010 = this_ptr->field10_0x780 + 4;
  pcStack0000000c = "Allowed victim types";
  core_actor_cpp_CActorPropertyList_FUN_0040e290(in_stack_00000008);
  piStack0000001c = &this_ptr->can_manual_aim;
  pcStack00000018 = "canManualAim";
  pcStack00000010 = (char *)0x5e3dc7;
  core_actor_cpp_CActorPropertyList_FUN_0040e330(in_stack_00000008);
  return;
}
