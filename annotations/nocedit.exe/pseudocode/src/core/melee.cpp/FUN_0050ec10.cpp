// Name: core_melee.cpp_FUN_0050ec10
// Address: 0050ec10
// Address Range: [[0050ec10, 0050ecc2]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050ec10()
// Globals:
//   double DOUBLE_00635ce5 = 1.15000000000000
//   CGore* g_CGorePtr = 02d83364
//   CGore g_CGoreInstance
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_gore.cpp_FUN_004edaa0
//   core_weapon.cpp_CWeapon_process_FUN_005ee110

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_FUN_0050ec10(undefined4 param_1, undefined4
   param_2) */

void core_melee_cpp_FUN_0050ec10(void)

{
  CDemonActor_vtable *pCVar1;
  float fVar2;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  CWeapon *in_stack_00000004;
  float in_stack_0000000c;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000004);
  if ((0 < *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18)) &&
     (in_stack_0000000c =
           *(float *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) - in_stack_0000000c,
     *(float *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) = in_stack_0000000c,
     in_stack_0000000c <= 0.0)) {
    fVar2 = in_stack_00000004[1].base_actor.location.position.x * (float)DOUBLE_00635ce5;
    pCVar1 = (in_stack_00000004->base_actor).vtable;
    *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) =
         *(int *)(in_stack_00000004[1].base_actor.actor_name + 0x18) + -1;
    in_stack_00000004[1].base_actor.location.position.x = fVar2;
    *(float *)(in_stack_00000004[1].base_actor.actor_name + 0x1c) = fVar2;
    input_local_point = (CVector3f *)(*pCVar1[1].renderOpaque)(&in_stack_00000004->base_actor);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (&in_stack_00000004->base_actor,(CVector3f *)&stack0xfffffff8,input_local_point);
    core_gore_cpp_FUN_004edaa0();
    return;
  }
  return;
}


// Assembly code:
// 0050ec10: PUSH EBX
//   Label: core_melee.cpp_FUN_0050ec10
// 0050ec11: SUB ESP,0x20
// 0050ec14: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 0050ec18: PUSH dword ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0050ec1c: PUSH EBX
// 0050ec1d: CALL core_weapon.cpp_CWeapon_process_FUN_005ee110
//   XREF to: 005ee110 (UNCONDITIONAL_CALL)
// 0050ec22: MOV EDX,dword ptr [EBX + 0x590]
// 0050ec28: ADD ESP,0x8
// 0050ec2b: TEST EDX,EDX
// 0050ec2d: JLE 0x0050ec48
//   XREF to: 0050ec48 (CONDITIONAL_JUMP)
// 0050ec2f: FLD float ptr [EBX + 0x594]
// 0050ec35: FSUB float ptr [ESP + 0x2c]
//   XREF to: Stack[0x8] (READ)
// 0050ec39: FST float ptr [EBX + 0x594]
// 0050ec3f: FLDZ
// 0050ec41: FCOMPP
// 0050ec43: FNSTSW AX
// 0050ec45: SAHF
// 0050ec46: JNC 0x0050ec4d
//   XREF to: 0050ec4d (CONDITIONAL_JUMP)
// 0050ec48: ADD ESP,0x20
//   Label: LAB_0050ec48
// 0050ec4b: POP EBX
// 0050ec4c: RET
// 0050ec4d: PUSH EDI
//   Label: LAB_0050ec4d
// 0050ec4e: PUSH ESI
// 0050ec4f: FLD float ptr [EBX + 0x598]
// 0050ec55: FLD ST0
// 0050ec57: FMUL double ptr [0x00635ce5]
//   XREF to: 00635ce5 (READ)
// 0050ec5d: LEA EDX,[ESP + 0x8]
//   XREF to: Stack[-0x24] (DATA)
// 0050ec61: MOV ECX,dword ptr [EBX + 0x590]
// 0050ec67: PUSH EDX
// 0050ec68: MOV EAX,dword ptr [EBX + 0x154]
// 0050ec6e: DEC ECX
// 0050ec6f: PUSH EBX
// 0050ec70: MOV dword ptr [EBX + 0x590],ECX
// 0050ec76: FSTP ST1
// 0050ec78: FST float ptr [EBX + 0x598]
// 0050ec7e: FSTP float ptr [EBX + 0x594]
// 0050ec84: CALL dword ptr [EAX + 0xf4]
// 0050ec8a: ADD ESP,0x8
// 0050ec8d: PUSH EAX
// 0050ec8e: LEA EAX,[ESP + 0x18]
// 0050ec92: PUSH EAX
// 0050ec93: PUSH EBX
// 0050ec94: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0050ec99: ADD ESP,0xc
// 0050ec9c: MOV ESI,dword ptr [EBX + 0x58c]
// 0050eca2: PUSH ESI
// 0050eca3: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0050eca8: LEA EAX,[ESP + 0x1c]
// 0050ecac: PUSH EAX
// 0050ecad: MOV EDI,dword ptr [0x0067b9a0]
//   XREF to: 0067b9a0 (READ)
// 0050ecb3: PUSH EDI
//   XREF to: 02d83364 (DATA)
// 0050ecb4: CALL core_gore.cpp_FUN_004edaa0
//   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
// 0050ecb9: ADD ESP,0x10
// 0050ecbc: POP ESI
// 0050ecbd: POP EDI
// 0050ecbe: ADD ESP,0x20
// 0050ecc1: POP EBX
// 0050ecc2: RET
