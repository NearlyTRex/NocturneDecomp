// Name: core_melee.cpp_FUN_0050eb50
// Address: 0050eb50
// Address Range: [[0050eb50, 0050ebd5]]
// Convention: unknown
// Signature: undefined core_melee.cpp_FUN_0050eb50()
// Globals:
//   undefined4 g_CCharacterClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_melee.cpp_FUN_0050ebe0

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_melee.cpp_FUN_0050eb50(undefined4 param_1, undefined4
   param_2, undefined1 param_3, undefined4 param_4) */

void core_melee_cpp_FUN_0050eb50(void)

{
  CDemonActor *pCVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  CDemonActor *in_stack_00000010;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (in_stack_00000010,g_CCharacterClassInfo.name_hash);
  if (pCVar1 != (CDemonActor *)0x0) {
    core_melee_cpp_FUN_0050ebe0();
    if (in_stack_00000008 == 1) {
      (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
      return;
    }
    (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
    return;
  }
  if (in_stack_00000010 == (CDemonActor *)0x0) {
    return;
  }
  (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
  return;
}


// Assembly code:
// 0050eb50: PUSH EBX
//   Label: core_melee.cpp_FUN_0050eb50
// 0050eb51: PUSH EDI
// 0050eb52: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0050eb56: MOV EDX,dword ptr [0x00823c4c]
//   XREF to: 00823c4c (READ)
// 0050eb5c: PUSH EDX
// 0050eb5d: MOV ECX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x10] (READ)
// 0050eb61: PUSH ECX
// 0050eb62: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 0050eb67: ADD ESP,0x8
// 0050eb6a: TEST EAX,EAX
// 0050eb6c: JNZ 0x0050eb78
//   XREF to: 0050eb78 (CONDITIONAL_JUMP)
// 0050eb6e: CMP dword ptr [ESP + 0x18],0x0
//   XREF to: Stack[0x10] (READ)
// 0050eb73: JNZ 0x0050ebbf
//   XREF to: 0050ebbf (CONDITIONAL_JUMP)
// 0050eb75: POP EDI
// 0050eb76: POP EBX
// 0050eb77: RET
// 0050eb78: MOV EDI,dword ptr [EAX + 0x2610]
//   Label: LAB_0050eb78
// 0050eb7e: PUSH EDI
// 0050eb7f: PUSH 0x14
// 0050eb81: PUSH EBX
// 0050eb82: CALL core_melee.cpp_FUN_0050ebe0
//   XREF to: 0050ebe0 (UNCONDITIONAL_CALL)
// 0050eb87: ADD ESP,0xc
// 0050eb8a: CMP dword ptr [ESP + 0x10],0x1
//   XREF to: Stack[0x8] (READ)
// 0050eb8f: JNZ 0x0050eba8
//   XREF to: 0050eba8 (CONDITIONAL_JUMP)
// 0050eb91: LEA EAX,[EBX + 0x5a0]
// 0050eb97: PUSH EAX
// 0050eb98: MOV EDX,dword ptr [EBX + 0x154]
// 0050eb9e: PUSH EBX
// 0050eb9f: CALL dword ptr [EDX + 0x24]
// 0050eba2: ADD ESP,0x8
// 0050eba5: POP EDI
// 0050eba6: POP EBX
// 0050eba7: RET
// 0050eba8: LEA EDX,[EBX + 0x604]
//   Label: LAB_0050eba8
// 0050ebae: PUSH EDX
// 0050ebaf: MOV EAX,dword ptr [EBX + 0x154]
// 0050ebb5: PUSH EBX
// 0050ebb6: CALL dword ptr [EAX + 0x24]
// 0050ebb9: ADD ESP,0x8
// 0050ebbc: POP EDI
// 0050ebbd: POP EBX
// 0050ebbe: RET
// 0050ebbf: LEA EDX,[EBX + 0x668]
//   Label: LAB_0050ebbf
// 0050ebc5: PUSH EDX
// 0050ebc6: MOV EAX,dword ptr [EBX + 0x154]
// 0050ebcc: PUSH EBX
// 0050ebcd: CALL dword ptr [EAX + 0x24]
// 0050ebd0: ADD ESP,0x8
// 0050ebd3: POP EDI
// 0050ebd4: POP EBX
// 0050ebd5: RET
