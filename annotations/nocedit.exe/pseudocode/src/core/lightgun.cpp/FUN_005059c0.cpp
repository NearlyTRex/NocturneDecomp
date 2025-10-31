// Name: core_lightgun.cpp_FUN_005059c0
// Address: 005059c0
// Address Range: [[005059c0, 00505a15]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_005059c0()
// Globals:
//   TerminatedCString s_CDraculaBride_0063145d
//   TerminatedCString s_CBatman_0063146b
//   TerminatedCString s_CBatCreature_00631473
//   TerminatedCString s_CBride_00631480
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

undefined4 core_lightgun_cpp_FUN_005059c0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CDraculaBride");
  if (iVar1 == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CBatman");
    if (iVar1 == 0) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CBatCreature");
      if (iVar1 == 0) {
        iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(in_stack_00000004,"CBride");
        if (iVar1 == 0) {
          return 0;
        }
      }
    }
  }
  return 1;
}


// Assembly code:
// 005059c0: PUSH EBX
//   Label: core_lightgun.cpp_FUN_005059c0
// 005059c1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005059c5: PUSH 0x63145d
//   XREF to: 0063145d (DATA)
// 005059ca: PUSH EBX
// 005059cb: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005059d0: ADD ESP,0x8
// 005059d3: TEST EAX,EAX
// 005059d5: JZ 0x005059de
//   XREF to: 005059de (CONDITIONAL_JUMP)
// 005059d7: MOV EAX,0x1
//   Label: LAB_005059d7
// 005059dc: POP EBX
// 005059dd: RET
// 005059de: PUSH 0x63146b
//   Label: LAB_005059de
//   XREF to: 0063146b (DATA)
// 005059e3: PUSH EBX
// 005059e4: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005059e9: ADD ESP,0x8
// 005059ec: TEST EAX,EAX
// 005059ee: JNZ 0x005059d7
//   XREF to: 005059d7 (CONDITIONAL_JUMP)
// 005059f0: PUSH 0x631473
//   XREF to: 00631473 (DATA)
// 005059f5: PUSH EBX
// 005059f6: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 005059fb: ADD ESP,0x8
// 005059fe: TEST EAX,EAX
// 00505a00: JNZ 0x005059d7
//   XREF to: 005059d7 (CONDITIONAL_JUMP)
// 00505a02: PUSH 0x631480
//   XREF to: 00631480 (DATA)
// 00505a07: PUSH EBX
// 00505a08: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 00505a0d: ADD ESP,0x8
// 00505a10: TEST EAX,EAX
// 00505a12: JNZ 0x005059d7
//   XREF to: 005059d7 (CONDITIONAL_JUMP)
// 00505a14: POP EBX
// 00505a15: RET
