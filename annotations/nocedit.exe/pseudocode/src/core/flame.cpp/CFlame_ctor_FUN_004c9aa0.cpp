// Name: core_flame.cpp_CFlame_ctor_FUN_004c9aa0
// Address: 004c9aa0
// Address Range: [[004c9aa0, 004c9ae6]]
// Convention: __cdecl
// Signature: CFlame * core_flame.cpp_CFlame_ctor_FUN_004c9aa0(CFlame * this_ptr)
// Cross-references:
//   core_bodypart.cpp_SBodyPartFire_ctor_FUN_0041b620 (0041b620) at 0041b628 [UNCONDITIONAL_CALL]
//   core_crossbow.cpp_FUN_00448c70 (00448c70) at 00448c84 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004c9a60 (004c9a60) at 004c9a7a [UNCONDITIONAL_CALL]
//   core_flamecan.cpp_FUN_004cb160 (004cb160) at 004cb184 [UNCONDITIONAL_CALL]
//   core_vessel.cpp_CCryptVessel_ctor_FUN_005e8e60 (005e8e60) at 005e8e84 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonActor_vtable PTR_core_flame.cpp_FUN_0065e034
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   core_actor.cpp_getRandomFloat_FUN_0040cc10

#include "nocturne.h"

CFlame * __cdecl core_flame_cpp_CFlame_ctor_FUN_004c9aa0(CFlame *this_ptr)

{
  CFlame *pCVar1;
  float fVar2;
  
  pCVar1 = (CFlame *)core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  (pCVar1->base_actor).metadata.vtable = &PTR_core_flame_cpp_FUN_0065e034;
  (pCVar1->flame_size).x = 1.0;
  (pCVar1->flame_size).y = 2.0;
  (pCVar1->flame_size).z = 1.0;
  fVar2 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,8.0);
  pCVar1->which_flame = 0;
  pCVar1->globe_scalar = 1.0;
  pCVar1->field12_0x290[0] = '\x01';
  pCVar1->field12_0x290[1] = '\0';
  pCVar1->field12_0x290[2] = '\0';
  pCVar1->field12_0x290[3] = '\0';
  pCVar1->field5_0x1b0[0] = '\0';
  pCVar1->field5_0x1b0[1] = '\0';
  pCVar1->field5_0x1b0[2] = '\0';
  pCVar1->field5_0x1b0[3] = '\0';
  pCVar1->field7_0x1b8[0] = '\0';
  pCVar1->field7_0x1b8[100] = '\0';
  pCVar1->flame_state = 1;
  (pCVar1->base_actor).is_transparent = 1;
  pCVar1->randomness = 0.05;
  pCVar1->intensity = 0.5;
  pCVar1->field12_0x290[8] = '\x01';
  pCVar1->field12_0x290[9] = '\0';
  pCVar1->field12_0x290[10] = '\0';
  pCVar1->field12_0x290[0xb] = '\0';
  pCVar1->burn_hero = 0;
  pCVar1->burn_enemy = 0;
  pCVar1->field12_0x290[0xc] = '\0';
  pCVar1->field12_0x290[0xd] = '\0';
  pCVar1->field12_0x290[0xe] = '\0';
  pCVar1->field12_0x290[0xf] = '\0';
  pCVar1->field12_0x290[0x10] = '\0';
  pCVar1->field12_0x290[0x11] = '\0';
  pCVar1->field12_0x290[0x12] = '\0';
  pCVar1->field12_0x290[0x13] = '\0';
  *(float *)pCVar1->field2_0x164 = fVar2;
  return pCVar1;
}


// Assembly code:
// 004c9aa0: PUSH EBX
//   Label: core_flame.cpp_CFlame_ctor_FUN_004c9aa0
// 004c9aa1: SUB ESP,0x4
// 004c9aa4: MOV EDX,dword ptr [ESP + 0xc]
// 004c9aa8: PUSH EDX
// 004c9aa9: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 004c9aae: ADD ESP,0x4
// 004c9ab1: MOV dword ptr [EAX + 0x154],0x65e034
//   XREF to: 0065e034 (DATA)
// 004c9abb: MOV EBX,EAX
// 004c9abd: MOV dword ptr [EAX + 0x158],0x3f800000
// 004c9ac7: PUSH 0x41000000
// 004c9acc: MOV dword ptr [EAX + 0x15c],0x40000000
// 004c9ad6: PUSH 0x0
// 004c9ad8: MOV dword ptr [EAX + 0x160],0x3f800000
// 004c9ae2: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
