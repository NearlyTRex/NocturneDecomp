// Name: core_msnedit.cpp_FUN_0053ea30
// Address: 0053ea30
// Address Range: [[0053ea30, 0053eb30]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_FUN_0053ea30()
// Cross-references:
//   core_script.cpp_FUN_00567630 (00567630) at 005676a7 [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_0053e9dc = 0053eaa9
//   CScript* g_CScriptPtr = 0310f858
//   CScript g_CScriptInstance
// Function calls:
//   core_actor.cpp_CActorProperty_FUN_0040ea50
//   core_actor.cpp_FUN_0040e130
//   core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   core_script.cpp_FUN_00567010
//   core_script.cpp_FUN_005671a0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_FUN_0053ea30(undefined4 param_1) */

void core_msnedit_cpp_FUN_0053ea30(void)

{
  int iVar1;
  undefined4 *puVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  int in_stack_00000004;
  int iStack_2624;
  undefined4 auStack_2620 [2431];
  undefined4 uStack_24;
  int local_20;
  int iStack_1c;
  
  for (iVar1 = *(int *)(in_stack_00000004 + 0x548); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x14c)) {
    local_20 = iVar1;
    core_actor_cpp_FUN_0040e130();
    (**(code **)(*(int *)(iVar1 + 0x154) + 0xd4))();
    iVar3 = 0;
    if (0 < iStack_2624) {
      puVar2 = auStack_2620;
      do {
        core_actor_cpp_CActorProperty_FUN_0040ea50();
        iStack_1c = iVar3;
        switch(*puVar2) {
        case 5:
          if (*(int *)puVar2[0x1a] != 0) {
            uStack_24 = 7;
            core_script_cpp_CScript_ReallocSomething_FUN_00567510();
          }
          break;
        case 0xb:
          core_script_cpp_FUN_005671a0();
          break;
        case 0xc:
          core_script_cpp_FUN_00567010();
        }
        iVar3 = iVar3 + 1;
        puVar2 = puVar2 + 0x3b;
      } while (iVar3 < iStack_2624);
    }
  }
  return;
}


// Assembly code:
// 0053ea30: PUSH EBX
//   Label: core_msnedit.cpp_FUN_0053ea30
// 0053ea31: PUSH ESI
// 0053ea32: PUSH EDI
// 0053ea33: PUSH EBP
// 0053ea34: SUB ESP,0x2618
// 0053ea3a: MOV EDI,dword ptr [ESP + 0x262c]
//   XREF to: Stack[0x4] (READ)
// 0053ea41: MOV EDI,dword ptr [EDI + 0x548]
// 0053ea47: TEST EDI,EDI
// 0053ea49: JZ 0x0053eac2
//   XREF to: 0053eac2 (CONDITIONAL_JUMP)
// 0053ea4f: MOV EAX,ESP
//   Label: LAB_0053ea4f
// 0053ea51: PUSH EAX
// 0053ea52: MOV dword ptr [ESP + 0x260c],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0053ea59: CALL core_actor.cpp_FUN_0040e130
//   XREF to: 0040e130 (UNCONDITIONAL_CALL)
// 0053ea5e: ADD ESP,0x4
// 0053ea61: MOV EAX,ESP
// 0053ea63: PUSH EAX
// 0053ea64: MOV EBX,dword ptr [EDI + 0x154]
// 0053ea6a: PUSH EDI
// 0053ea6b: CALL dword ptr [EBX + 0xd4]
// 0053ea71: ADD ESP,0x8
// 0053ea74: MOV EDX,dword ptr [ESP + 0x4]
// 0053ea78: XOR ESI,ESI
// 0053ea7a: TEST EDX,EDX
// 0053ea7c: JLE 0x0053eab8
//   XREF to: 0053eab8 (CONDITIONAL_JUMP)
// 0053ea7e: LEA EBX,[ESP + 0x8]
// 0053ea82: LEA EAX,[ESP + 0x2504]
//   Label: LAB_0053ea82
// 0053ea89: PUSH EAX
// 0053ea8a: PUSH EDI
// 0053ea8b: PUSH EBX
// 0053ea8c: CALL core_actor.cpp_CActorProperty_FUN_0040ea50
//   XREF to: 0040ea50 (UNCONDITIONAL_CALL)
// 0053ea91: ADD ESP,0xc
// 0053ea94: MOV dword ptr [ESP + 0x260c],ESI
// 0053ea9b: MOV EAX,dword ptr [EBX]
// 0053ea9d: CMP EAX,0x11
// 0053eaa0: JA 0x0053eaa9
//   XREF to: 0053eaa9 (CONDITIONAL_JUMP)
// 0053eaa2: JMP dword ptr [EAX*0x4 + 0x53e9dc]
//   Label: switchD
//   XREF to: 0053eaa9 (COMPUTED_JUMP)
//   XREF to: 0053eacd (COMPUTED_JUMP)
//   XREF to: 0053eafb (COMPUTED_JUMP)
//   XREF to: 0053eb14 (COMPUTED_JUMP)
//   XREF to: 0053e9dc (DATA)
// 0053eaa9: MOV ECX,dword ptr [ESP + 0x4]
//   Label: caseD_11
// 0053eaad: INC ESI
// 0053eaae: ADD EBX,0xec
// 0053eab4: CMP ESI,ECX
// 0053eab6: JL 0x0053ea82
//   XREF to: 0053ea82 (CONDITIONAL_JUMP)
// 0053eab8: MOV EDI,dword ptr [EDI + 0x14c]
//   Label: LAB_0053eab8
// 0053eabe: TEST EDI,EDI
// 0053eac0: JNZ 0x0053ea4f
//   XREF to: 0053ea4f (CONDITIONAL_JUMP)
// 0053eac2: ADD ESP,0x2618
//   Label: LAB_0053eac2
// 0053eac8: POP EBP
// 0053eac9: POP EDI
// 0053eaca: POP ESI
// 0053eacb: POP EBX
// 0053eacc: RET
// 0053eacd: MOV EAX,dword ptr [EBX + 0x68]
//   Label: caseD_5
// 0053ead0: MOV EAX,dword ptr [EAX]
// 0053ead2: TEST EAX,EAX
// 0053ead4: JZ 0x0053eaa9
//   XREF to: 0053eaa9 (CONDITIONAL_JUMP)
// 0053ead6: LEA EAX,[ESP + 0x2504]
// 0053eadd: PUSH EAX
// 0053eade: MOV ECX,dword ptr [0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053eae4: MOV EDX,0x7
// 0053eae9: PUSH ECX
//   XREF to: 0310f858 (DATA)
// 0053eaea: MOV dword ptr [ESP + 0x260c],EDX
// 0053eaf1: CALL core_script.cpp_CScript_ReallocSomething_FUN_00567510
//   XREF to: 00567510 (UNCONDITIONAL_CALL)
// 0053eaf6: ADD ESP,0x8
// 0053eaf9: JMP 0x0053eaa9
//   XREF to: 0053eaa9 (UNCONDITIONAL_JUMP)
// 0053eafb: LEA EAX,[ESP + 0x2504]
//   Label: caseD_b
// 0053eb02: PUSH EAX
// 0053eb03: PUSH EAX
// 0053eb04: MOV EAX,[0x00680d50]
//   XREF to: 0310f858 (PARAM)
//   XREF to: 00680d50 (READ)
// 0053eb09: PUSH EAX
//   XREF to: 0310f858 (DATA)
// 0053eb0a: CALL core_script.cpp_FUN_005671a0
//   XREF to: 005671a0 (UNCONDITIONAL_CALL)
// 0053eb0f: ADD ESP,0xc
// 0053eb12: JMP 0x0053eaa9
//   XREF to: 0053eaa9 (UNCONDITIONAL_JUMP)
// 0053eb14: LEA EAX,[ESP + 0x2504]
//   Label: caseD_c
// 0053eb1b: PUSH EAX
// 0053eb1c: PUSH EAX
// 0053eb1d: MOV EBP,dword ptr [0x00680d50]
//   XREF to: 00680d50 (READ)
// 0053eb23: PUSH EBP
//   XREF to: 0310f858 (DATA)
// 0053eb24: CALL core_script.cpp_FUN_00567010
//   XREF to: 00567010 (UNCONDITIONAL_CALL)
// 0053eb29: ADD ESP,0xc
// 0053eb2c: JMP 0x0053eaa9
//   XREF to: 0053eaa9 (UNCONDITIONAL_JUMP)
