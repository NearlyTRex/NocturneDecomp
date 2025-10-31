// Name: core_script.cpp_CScript_ReallocSomething_FUN_00567510
// Address: 00567510
// Address Range: [[00567510, 00567595]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_ReallocSomething_FUN_00567510()
// Cross-references:
//   core_msnedit.cpp_FUN_0053ea30 (0053ea30) at 0053eaf1 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00564090 (00564090) at 00564131 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_00567080 (00567080) at 00567188 [UNCONDITIONAL_CALL]
//   core_script.cpp_FUN_005671a0 (005671a0) at 005672fe [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_script_cpp_00644057
//   TerminatedCString s_core_script_cpp_0064406a
//   TerminatedCString s_Out_of_memory_0064407d
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_ReallocSomething(CScript* param_1, undefined4
   param_2) */

void core_script_cpp_CScript_ReallocSomething_FUN_00567510(void)

{
  void *pvVar1;
  int iVar2;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  undefined4 *in_stack_00000010;
  
  bVar4 = 0;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(in_stack_00000004 + 0x2c),
                      (*(int *)(in_stack_00000004 + 0x28) + 1) * 0x114,"..\\core\\script.cpp",
                      0x1d37);
  *(void **)(in_stack_00000004 + 0x2c) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1d38;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  puVar3 = (undefined4 *)
           (*(int *)(in_stack_00000004 + 0x2c) + *(int *)(in_stack_00000004 + 0x28) * 0x114);
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *in_stack_00000010;
    in_stack_00000010 = in_stack_00000010 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  *(int *)(in_stack_00000004 + 0x28) = *(int *)(in_stack_00000004 + 0x28) + 1;
  return;
}


// Assembly code:
// 00567510: PUSH EBX
//   Label: core_script.cpp_CScript_ReallocSomething_FUN_00567510
// 00567511: PUSH ESI
// 00567512: PUSH EDI
// 00567513: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00567517: MOV EDX,dword ptr [EBX + 0x28]
// 0056751a: INC EDX
// 0056751b: MOV EAX,EDX
// 0056751d: SHL EAX,0x4
// 00567520: ADD EAX,EDX
// 00567522: SHL EAX,0x2
// 00567525: PUSH 0x1d37
// 0056752a: ADD EAX,EDX
// 0056752c: PUSH 0x644057
//   XREF to: 00644057 (DATA)
// 00567531: SHL EAX,0x2
// 00567534: PUSH EAX
// 00567535: MOV EDX,dword ptr [EBX + 0x2c]
// 00567538: PUSH EDX
// 00567539: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0056753e: ADD ESP,0x10
// 00567541: MOV dword ptr [EBX + 0x2c],EAX
// 00567544: TEST EAX,EAX
// 00567546: JZ 0x00567571
//   XREF to: 00567571 (CONDITIONAL_JUMP)
// 00567548: MOV EDX,dword ptr [EBX + 0x28]
//   Label: LAB_00567548
// 0056754b: MOV EAX,EDX
// 0056754d: SHL EAX,0x4
// 00567550: ADD EAX,EDX
// 00567552: SHL EAX,0x2
// 00567555: MOV ECX,0x45
// 0056755a: ADD EAX,EDX
// 0056755c: MOV EDI,dword ptr [EBX + 0x2c]
// 0056755f: SHL EAX,0x2
// 00567562: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00567566: ADD EDI,EAX
// 00567568: MOVSD.REP ES:EDI,ESI
// 0056756a: INC dword ptr [EBX + 0x28]
// 0056756d: POP EDI
// 0056756e: POP ESI
// 0056756f: POP EBX
// 00567570: RET
// 00567571: MOV ESI,0x64406a
//   Label: LAB_00567571
//   XREF to: 0064406a (DATA)
// 00567576: MOV EDI,0x1d38
// 0056757b: PUSH 0x64407d
//   XREF to: 0064407d (DATA)
// 00567580: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00567586: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0056758c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00567591: ADD ESP,0x4
// 00567594: JMP 0x00567548
//   XREF to: 00567548 (UNCONDITIONAL_JUMP)
