// Name: core_netgame.cpp_allocSimFrame_FUN_0053f5a0
// Address: 0053f5a0
// Address Range: [[0053f5a0, 0053f64b]]
// Convention: unknown
// Signature: undefined core_netgame.cpp_allocSimFrame_FUN_0053f5a0()
// Globals:
//   TerminatedCString s_core_netgame_cpp_0063d277
//   TerminatedCString s_allocSimFrame_sim_histor_0063d28b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_SimFrameCount
//   undefined4 g_SimFrameHistory
//   undefined4 DAT_02f9c128
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

undefined4 * core_netgame_cpp_allocSimFrame_FUN_0053f5a0(void)

{
  int iVar1;
  int iVar2;
  undefined4 *dest;
  int in_stack_00000004;
  undefined4 in_stack_0000000c;
  
  iVar2 = 0;
  if (0 < g_SimFrameCount) {
    iVar1 = 0;
    do {
      if (in_stack_00000004 == *(int *)((int)&g_SimFrameHistory + iVar1)) {
        if (-1 < iVar2) {
          return (undefined4 *)((int)&g_SimFrameHistory + iVar1);
        }
        break;
      }
      iVar1 = iVar1 + 100;
      iVar2 = iVar2 + 1;
    } while (iVar1 < g_SimFrameCount * 100);
  }
  if (0x1ff < g_SimFrameCount) {
    g_CurrentFilename = "..\\core\\netgame.cpp";
    g_CurrentLineNumber = 299;
    core_main_c_displayErrorAndQuit_FUN_00506f10("allocSimFrame - sim history list full");
  }
  dest = &g_SimFrameHistory + g_SimFrameCount * 0x19;
  g_SimFrameCount = g_SimFrameCount + 1;
  crt_memory_c_memset_FUN_005fde40(dest,0,100);
  *dest = in_stack_0000000c;
  return dest;
}


// Assembly code:
// 0053f5a0: PUSH EBX
//   Label: core_netgame.cpp_allocSimFrame_FUN_0053f5a0
// 0053f5a1: PUSH EBP
// 0053f5a2: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0053f5a6: MOV ECX,dword ptr [0x02f9c0c0]
//   XREF to: 02f9c0c0 (READ)
// 0053f5ac: XOR EDX,EDX
// 0053f5ae: TEST ECX,ECX
// 0053f5b0: JLE 0x0053f5e1
//   XREF to: 0053f5e1 (CONDITIONAL_JUMP)
// 0053f5b2: PUSH ESI
// 0053f5b3: MOV ESI,ECX
// 0053f5b5: SHL ECX,0x2
// 0053f5b8: SUB ECX,ESI
// 0053f5ba: SHL ECX,0x3
// 0053f5bd: ADD ECX,ESI
// 0053f5bf: XOR EAX,EAX
// 0053f5c1: SHL ECX,0x2
// 0053f5c4: POP ESI
// 0053f5c5: CMP EBX,dword ptr [EAX + 0x2f9c0c4]
//   Label: LAB_0053f5c5
//   XREF to: 02f9c0c4 (READ)
//   XREF to: 02f9c128 (READ)
// 0053f5cb: JNZ 0x0053f5d9
//   XREF to: 0053f5d9 (CONDITIONAL_JUMP)
// 0053f5cd: TEST EDX,EDX
// 0053f5cf: JL 0x0053f5e1
//   XREF to: 0053f5e1 (CONDITIONAL_JUMP)
// 0053f5d1: ADD EAX,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
//   XREF to: 02f9c128 (DATA)
// 0053f5d6: POP EBP
// 0053f5d7: POP EBX
// 0053f5d8: RET
// 0053f5d9: ADD EAX,0x64
//   Label: LAB_0053f5d9
// 0053f5dc: INC EDX
// 0053f5dd: CMP EAX,ECX
// 0053f5df: JL 0x0053f5c5
//   XREF to: 0053f5c5 (CONDITIONAL_JUMP)
// 0053f5e1: CMP dword ptr [0x02f9c0c0],0x200
//   Label: LAB_0053f5e1
//   XREF to: 02f9c0c0 (READ)
// 0053f5eb: JL 0x0053f60f
//   XREF to: 0053f60f (CONDITIONAL_JUMP)
// 0053f5ed: MOV EBP,0x63d277
//   XREF to: 0063d277 (DATA)
// 0053f5f2: MOV EAX,0x12b
// 0053f5f7: PUSH 0x63d28b
//   XREF to: 0063d28b (DATA)
// 0053f5fc: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0053f602: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0053f607: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053f60c: ADD ESP,0x4
// 0053f60f: MOV EDX,dword ptr [0x02f9c0c0]
//   Label: LAB_0053f60f
//   XREF to: 02f9c0c0 (READ)
// 0053f615: LEA EAX,[EDX*0x4 + 0x0]
// 0053f61c: SUB EAX,EDX
// 0053f61e: SHL EAX,0x3
// 0053f621: MOV EBX,0x2f9c0c4
//   XREF to: 02f9c0c4 (DATA)
// 0053f626: ADD EAX,EDX
// 0053f628: PUSH 0x64
// 0053f62a: SHL EAX,0x2
// 0053f62d: PUSH 0x0
// 0053f62f: ADD EBX,EAX
// 0053f631: INC EDX
// 0053f632: PUSH EBX
// 0053f633: MOV dword ptr [0x02f9c0c0],EDX
//   XREF to: 02f9c0c0 (WRITE)
// 0053f639: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0053f63e: ADD ESP,0xc
// 0053f641: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0053f645: MOV dword ptr [EBX],EAX
//   XREF to: 02f9c0c4 (DATA)
// 0053f647: MOV EAX,EBX
// 0053f649: POP EBP
// 0053f64a: POP EBX
// 0053f64b: RET
