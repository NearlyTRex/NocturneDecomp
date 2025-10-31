// Name: core_script.cpp_CScript_FreeSomething2_FUN_005598f0
// Address: 005598f0
// Address Range: [[005598f0, 0055995b]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_FreeSomething2_FUN_005598f0()
// Cross-references:
//   core_script.cpp_CScript_FreeSomething1_FUN_00559870 (00559870) at 00559883 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370 (0055a370) at 0055a37c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_006416fa
//   TerminatedCString s_core_script_cpp_0064170d
// Function calls:
//   shape_memdbg.cpp_debugFree_FUN_0050f460

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_FreeSomething2(CScript* param_1) */

void core_script_cpp_CScript_FreeSomething2_FUN_005598f0(void)

{
  void *ptr;
  int iVar1;
  int iVar2;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x34) != 0) {
    iVar2 = 0;
    if (0 < *(int *)(in_stack_00000004 + 0x30)) {
      iVar1 = 0;
      do {
        ptr = *(void **)(*(int *)(in_stack_00000004 + 0x34) + iVar1 + 4);
        if (ptr != (void *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\script.cpp",0x1ce);
        }
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 8;
      } while (iVar2 < *(int *)(in_stack_00000004 + 0x30));
    }
    shape_memdbg_cpp_debugFree_FUN_0050f460
              (*(void **)(in_stack_00000004 + 0x34),"..\\core\\script.cpp",0x1d0);
    *(undefined4 *)(in_stack_00000004 + 0x34) = 0;
  }
  *(undefined4 *)(in_stack_00000004 + 0x30) = 0;
  return;
}


// Assembly code:
// 005598f0: PUSH EDI
//   Label: core_script.cpp_CScript_FreeSomething2_FUN_005598f0
// 005598f1: PUSH EBP
// 005598f2: MOV EDI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005598f6: CMP dword ptr [EDI + 0x34],0x0
// 005598fa: JZ 0x00559952
//   XREF to: 00559952 (CONDITIONAL_JUMP)
// 005598fc: PUSH ESI
// 005598fd: PUSH EBX
// 005598fe: MOV ECX,dword ptr [EDI + 0x30]
// 00559901: XOR ESI,ESI
// 00559903: TEST ECX,ECX
// 00559905: JLE 0x00559933
//   XREF to: 00559933 (CONDITIONAL_JUMP)
// 00559907: XOR EBX,EBX
// 00559909: MOV EAX,dword ptr [EDI + 0x34]
//   Label: LAB_00559909
// 0055990c: ADD EAX,EBX
// 0055990e: MOV EDX,dword ptr [EAX + 0x4]
// 00559911: TEST EDX,EDX
// 00559913: JZ 0x00559928
//   XREF to: 00559928 (CONDITIONAL_JUMP)
// 00559915: PUSH 0x1ce
// 0055991a: PUSH 0x6416fa
//   XREF to: 006416fa (DATA)
// 0055991f: PUSH EDX
// 00559920: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00559925: ADD ESP,0xc
// 00559928: INC ESI
//   Label: LAB_00559928
// 00559929: MOV EBP,dword ptr [EDI + 0x30]
// 0055992c: ADD EBX,0x8
// 0055992f: CMP ESI,EBP
// 00559931: JL 0x00559909
//   XREF to: 00559909 (CONDITIONAL_JUMP)
// 00559933: PUSH 0x1d0
//   Label: LAB_00559933
// 00559938: PUSH 0x64170d
//   XREF to: 0064170d (DATA)
// 0055993d: MOV EAX,dword ptr [EDI + 0x34]
// 00559940: PUSH EAX
// 00559941: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 00559946: ADD ESP,0xc
// 00559949: MOV dword ptr [EDI + 0x34],0x0
// 00559950: POP EBX
// 00559951: POP ESI
// 00559952: MOV dword ptr [EDI + 0x30],0x0
//   Label: LAB_00559952
// 00559959: POP EBP
// 0055995a: POP EDI
// 0055995b: RET
