// Name: core_melee.cpp_FUN_0050eaf0
// Address: 0050eaf0
// Address Range: [[0050eaf0, 0050eb43]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050eaf0()
// Function calls:
//   core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_FUN_0050eaf0(undefined4 param_1, undefined4
   param_2, undefined4 param_3, undefined4 param_4) */

void core_melee_cpp_FUN_0050eaf0(void)

{
  CBoundingBox3D *pCVar1;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  SDamageInfo *in_stack_0000000c;
  CDemonActor *in_stack_00000010;
  CBoundingBox3D *in_stack_00000018;
  
  core_actor_cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
            (in_stack_00000004,in_stack_00000008,in_stack_0000000c,in_stack_00000010);
  pCVar1 = (*in_stack_00000004->vtable[1].getBoundingBox)(in_stack_00000004,in_stack_00000018);
  in_stack_0000000c->damage_amount = (float)pCVar1;
  in_stack_0000000c->weapon_damage_modifier = in_stack_00000004[4].location.position.y;
  in_stack_0000000c->ammo_type = (int)in_stack_00000004[4].orient_matrix.m[0].x;
  return;
}


// Assembly code:
// 0050eaf0: PUSH EBX
//   Label: core_melee.cpp_FUN_0050eaf0
// 0050eaf1: PUSH ESI
// 0050eaf2: SUB ESP,0x4
// 0050eaf5: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 0050eaf9: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 0050eafd: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0050eb01: PUSH EDX
// 0050eb02: PUSH ESI
// 0050eb03: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0050eb07: PUSH ECX
// 0050eb08: PUSH EBX
// 0050eb09: CALL core_actor.cpp_CDemonActor_fillAttackDamageInfo_FUN_0040abc0
//   XREF to: 0040abc0 (UNCONDITIONAL_CALL)
// 0050eb0e: ADD ESP,0x10
// 0050eb11: MOV EAX,dword ptr [EBX + 0x154]
// 0050eb17: PUSH EBX
// 0050eb18: CALL dword ptr [EAX + 0x100]
// 0050eb1e: MOV dword ptr [ESP + 0x4],EAX
// 0050eb22: MOV EAX,dword ptr [ESP + 0x4]
// 0050eb26: MOV dword ptr [ESI + 0x4],EAX
// 0050eb29: MOV EAX,dword ptr [EBX + 0x584]
// 0050eb2f: MOV dword ptr [ESI + 0x2c],EAX
// 0050eb32: MOV EBX,dword ptr [EBX + 0x59c]
// 0050eb38: ADD ESP,0x4
// 0050eb3b: MOV dword ptr [ESI + 0x28],EBX
// 0050eb3e: ADD ESP,0x4
// 0050eb41: POP ESI
// 0050eb42: POP EBX
// 0050eb43: RET
