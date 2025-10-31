// Name: core_msnedit.cpp_FUN_00538ea0
// Address: 00538ea0
// Address Range: [[00538ea0, 00538f3a]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_00538ea0()
// Cross-references:
//   core_msnedit.cpp_FUN_00538df0 (00538df0) at 00538e29 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_FUN_0053d8b0 (0053d8b0) at 0053dbb8 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_ReallyDeleteActorQuestion_FUN_0053bc80 (0053bc80) at 0053bca5 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_UserInputTempMission_FUN_0053ccf0 (0053ccf0) at 0053cec8 [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_FUN_0040e130

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_00538ea0(undefined4 param_1, undefined4 param_2) */

void core_msnedit_cpp_FUN_00538ea0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  int in_stack_00000008;
  int iStack_250c;
  int aiStack_2508 [26];
  undefined4 auStack_24a0 [2341];
  
  for (iVar1 = *(int *)(in_stack_00000004 + 0x548); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    if (iVar1 != in_stack_00000008) {
      (**(code **)(*(int *)(iVar1 + 0x154) + 0xcc))();
      core_actor_cpp_FUN_0040e130();
      (**(code **)(*(int *)(iVar1 + 0x154) + 0xd4))();
      iVar3 = 0;
      if (0 < iStack_250c) {
        iVar2 = 0;
        do {
          if ((*(int *)((int)aiStack_2508 + iVar2) == 5) &&
             (in_stack_00000008 == **(int **)((int)auStack_24a0 + iVar2))) {
            **(int **)((int)auStack_24a0 + iVar2) = 0;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 0xec;
        } while (iVar3 < iStack_250c);
      }
    }
  }
  return;
}


// Assembly code:
// 00538ea0: PUSH EBX
//   Label: core_msnedit.cpp_FUN_00538ea0
// 00538ea1: PUSH ESI
// 00538ea2: PUSH EDI
// 00538ea3: SUB ESP,0x2504
// 00538ea9: MOV EBX,dword ptr [ESP + 0x2518]
//   XREF to: Stack[0x8] (READ)
// 00538eb0: MOV ESI,dword ptr [ESP + 0x2514]
//   XREF to: Stack[0x4] (READ)
// 00538eb7: MOV ESI,dword ptr [ESI + 0x548]
// 00538ebd: TEST ESI,ESI
// 00538ebf: JZ 0x00538ecf
//   XREF to: 00538ecf (CONDITIONAL_JUMP)
// 00538ec1: CMP ESI,EBX
//   Label: LAB_00538ec1
// 00538ec3: JNZ 0x00538ed9
//   XREF to: 00538ed9 (CONDITIONAL_JUMP)
// 00538ec5: MOV ESI,dword ptr [ESI + 0x14c]
//   Label: LAB_00538ec5
// 00538ecb: TEST ESI,ESI
// 00538ecd: JNZ 0x00538ec1
//   XREF to: 00538ec1 (CONDITIONAL_JUMP)
// 00538ecf: ADD ESP,0x2504
//   Label: LAB_00538ecf
// 00538ed5: POP EDI
// 00538ed6: POP ESI
// 00538ed7: POP EBX
// 00538ed8: RET
// 00538ed9: PUSH EBX
//   Label: LAB_00538ed9
// 00538eda: MOV EAX,dword ptr [ESI + 0x154]
// 00538ee0: PUSH ESI
// 00538ee1: CALL dword ptr [EAX + 0xcc]
// 00538ee7: ADD ESP,0x8
// 00538eea: MOV EAX,ESP
// 00538eec: PUSH EAX
// 00538eed: CALL core_actor.cpp_FUN_0040e130
//   XREF to: 0040e130 (UNCONDITIONAL_CALL)
// 00538ef2: ADD ESP,0x4
// 00538ef5: MOV EAX,ESP
// 00538ef7: PUSH EAX
// 00538ef8: MOV EDX,dword ptr [ESI + 0x154]
// 00538efe: PUSH ESI
// 00538eff: CALL dword ptr [EDX + 0xd4]
// 00538f05: ADD ESP,0x8
// 00538f08: MOV ECX,dword ptr [ESP + 0x4]
// 00538f0c: XOR EDX,EDX
// 00538f0e: TEST ECX,ECX
// 00538f10: JLE 0x00538ec5
//   XREF to: 00538ec5 (CONDITIONAL_JUMP)
// 00538f12: XOR EAX,EAX
// 00538f14: CMP dword ptr [ESP + EAX*0x1 + 0x8],0x5
//   Label: LAB_00538f14
// 00538f19: JZ 0x00538f2b
//   XREF to: 00538f2b (CONDITIONAL_JUMP)
// 00538f1b: MOV EDI,dword ptr [ESP + 0x4]
//   Label: LAB_00538f1b
// 00538f1f: INC EDX
// 00538f20: ADD EAX,0xec
// 00538f25: CMP EDX,EDI
// 00538f27: JGE 0x00538ec5
//   XREF to: 00538ec5 (CONDITIONAL_JUMP)
// 00538f29: JMP 0x00538f14
//   XREF to: 00538f14 (UNCONDITIONAL_JUMP)
// 00538f2b: MOV ECX,dword ptr [ESP + EAX*0x1 + 0x70]
//   Label: LAB_00538f2b
// 00538f2f: CMP EBX,dword ptr [ECX]
// 00538f31: JNZ 0x00538f1b
//   XREF to: 00538f1b (CONDITIONAL_JUMP)
// 00538f33: MOV dword ptr [ECX],0x0
// 00538f39: JMP 0x00538f1b
//   XREF to: 00538f1b (UNCONDITIONAL_JUMP)
