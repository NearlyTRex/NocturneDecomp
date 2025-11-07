// Name: shape_meshlod.cpp_ReallocSomething_FUN_00518790
// Address: 00518790
// Address Range: [[00518790, 00518863]]
// Convention: unknown
// Signature: undefined shape_meshlod.cpp_ReallocSomething_FUN_00518790()
// Cross-references:
//   shape_meshlod.cpp_CLodMesh_FUN_0051b080 (0051b080) at 0051b0c8 [UNCONDITIONAL_CALL]
//   shape_meshlod.cpp_CLodMesh_fixupAfterCram_FUN_0051bac0 (0051bac0) at 0051bcb3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_shape_meshlod_cpp_006378dd
//   TerminatedCString s_shape_meshlod_cpp_006378f2
//   TerminatedCString s_Out_of_memory_00637907
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_stricmp_FUN_005fe7f0
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

int shape_meshlod_cpp_ReallocSomething_FUN_00518790(void)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  int in_stack_00000004;
  char *in_stack_00000008;
  
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x10)) {
    iVar5 = 0;
    do {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0
                        ((char *)(*(int *)(in_stack_00000004 + 0x14) + iVar5 + 8),in_stack_00000008)
      ;
      if (iVar2 == 0) {
        return iVar4;
      }
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 0x48;
    } while (iVar4 < *(int *)(in_stack_00000004 + 0x10));
  }
  pvVar3 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(in_stack_00000004 + 0x14),
                      (*(int *)(in_stack_00000004 + 0x10) + 1) * 0x48,"..\\shape\\meshlod.cpp",
                      0xb6d);
  *(void **)(in_stack_00000004 + 0x14) = pvVar3;
  if (pvVar3 == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xb6e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory.");
  }
  pcVar6 = (char *)(*(int *)(in_stack_00000004 + 0x10) * 0x48 + *(int *)(in_stack_00000004 + 0x14) +
                   8);
  do {
    cVar1 = *in_stack_00000008;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  iVar4 = *(int *)(in_stack_00000004 + 0x10);
  *(int *)(in_stack_00000004 + 0x10) = iVar4 + 1;
  return iVar4;
}


// Assembly code:
// 00518790: PUSH EBX
//   Label: shape_meshlod.cpp_ReallocSomething_FUN_00518790
// 00518791: PUSH ESI
// 00518792: PUSH EDI
// 00518793: PUSH EBP
// 00518794: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00518798: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0051879c: MOV EDX,dword ptr [EBX + 0x10]
// 0051879f: XOR ESI,ESI
// 005187a1: TEST EDX,EDX
// 005187a3: JLE 0x005187cc
//   XREF to: 005187cc (CONDITIONAL_JUMP)
// 005187a5: XOR EDI,EDI
// 005187a7: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_005187a7
// 005187aa: ADD EAX,EDI
// 005187ac: PUSH EBP
// 005187ad: ADD EAX,0x8
// 005187b0: PUSH EAX
// 005187b1: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005187b6: ADD ESP,0x8
// 005187b9: TEST EAX,EAX
// 005187bb: JZ 0x0051885d
//   XREF to: 0051885d (CONDITIONAL_JUMP)
// 005187c1: INC ESI
// 005187c2: MOV ECX,dword ptr [EBX + 0x10]
// 005187c5: ADD EDI,0x48
// 005187c8: CMP ESI,ECX
// 005187ca: JL 0x005187a7
//   XREF to: 005187a7 (CONDITIONAL_JUMP)
// 005187cc: MOV ESI,dword ptr [EBX + 0x10]
//   Label: LAB_005187cc
// 005187cf: INC ESI
// 005187d0: LEA EAX,[ESI*0x8 + 0x0]
// 005187d7: PUSH 0xb6d
// 005187dc: ADD EAX,ESI
// 005187de: PUSH 0x6378dd
//   XREF to: 006378dd (DATA)
// 005187e3: SHL EAX,0x3
// 005187e6: PUSH EAX
// 005187e7: MOV ESI,dword ptr [EBX + 0x14]
// 005187ea: PUSH ESI
// 005187eb: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 005187f0: ADD ESP,0x10
// 005187f3: MOV dword ptr [EBX + 0x14],EAX
// 005187f6: TEST EAX,EAX
// 005187f8: JNZ 0x0051881c
//   XREF to: 0051881c (CONDITIONAL_JUMP)
// 005187fa: MOV EAX,0x6378f2
//   XREF to: 006378f2 (DATA)
// 005187ff: MOV EDX,0xb6e
// 00518804: PUSH 0x637907
//   XREF to: 00637907 (DATA)
// 00518809: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0051880e: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00518814: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00518819: ADD ESP,0x4
// 0051881c: MOV ESI,dword ptr [EBX + 0x10]
//   Label: LAB_0051881c
// 0051881f: LEA EAX,[ESI*0x8 + 0x0]
// 00518826: ADD EAX,ESI
// 00518828: SHL EAX,0x3
// 0051882b: MOV ESI,dword ptr [EBX + 0x14]
// 0051882e: ADD EAX,ESI
// 00518830: LEA EDI,[EAX + 0x8]
// 00518833: MOV ESI,EBP
// 00518835: PUSH EDI
// 00518836: MOV AL,byte ptr [ESI]
//   Label: LAB_00518836
// 00518838: MOV byte ptr [EDI],AL
// 0051883a: CMP AL,0x0
// 0051883c: JZ 0x0051884e
//   XREF to: 0051884e (CONDITIONAL_JUMP)
// 0051883e: MOV AL,byte ptr [ESI + 0x1]
// 00518841: ADD ESI,0x2
// 00518844: MOV byte ptr [EDI + 0x1],AL
// 00518847: ADD EDI,0x2
// 0051884a: CMP AL,0x0
// 0051884c: JNZ 0x00518836
//   XREF to: 00518836 (CONDITIONAL_JUMP)
// 0051884e: POP EDI
//   Label: LAB_0051884e
// 0051884f: MOV EAX,dword ptr [EBX + 0x10]
// 00518852: LEA ESI,[EAX + 0x1]
// 00518855: MOV dword ptr [EBX + 0x10],ESI
// 00518858: POP EBP
// 00518859: POP EDI
// 0051885a: POP ESI
// 0051885b: POP EBX
// 0051885c: RET
// 0051885d: MOV EAX,ESI
//   Label: LAB_0051885d
// 0051885f: POP EBP
// 00518860: POP EDI
// 00518861: POP ESI
// 00518862: POP EBX
// 00518863: RET
