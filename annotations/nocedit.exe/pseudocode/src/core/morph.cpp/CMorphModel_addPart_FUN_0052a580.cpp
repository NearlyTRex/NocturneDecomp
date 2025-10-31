// Name: core_morph.cpp_CMorphModel_addPart_FUN_0052a580
// Address: 0052a580
// Address Range: [[0052a580, 0052a704]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CMorphModel_addPart_FUN_0052a580()
// Cross-references:
//   core_morph.cpp_CMorphModel_CallMorphModel_addPart1_FUN_0052a8d0 (0052a8d0) at 0052a90e [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b370 (0052b370) at 0052b3b9 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b3d0 (0052b3d0) at 0052b419 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b4b0 (0052b4b0) at 0052b4f0 [UNCONDITIONAL_CALL]
//   core_morph.cpp_FUN_0052b500 (0052b500) at 0052b540 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_morph_cpp_0063a103
//   TerminatedCString s_CMorphModel_addPart_too__0063a115
//   TerminatedCString s_core_morph_cpp_0063a13c
//   TerminatedCString s_core_morph_cpp_0063a14e
//   TerminatedCString s_core_morph_cpp_0063a160
//   TerminatedCString s_CMorphModel_setup_out_of_0063a172
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_morph.cpp_CMorphModel_animate_FUN_0052a920
//   core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CMorphModel_addPart(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7, undefined4 param_8) */

void core_morph_cpp_CMorphModel_addPart_FUN_0052a580
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int *param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9,
               undefined4 param_10,int param_11)

{
  int *piVar1;
  int iVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  
  if (4 < *param_5) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x77;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::addPart - too many parts!");
  }
  iVar4 = 0;
  iVar2 = param_9;
  iVar5 = param_9;
  if (0 < param_9) {
    do {
      piVar1 = (int *)(iVar5 + 4);
      iVar2 = iVar2 + -1;
      iVar5 = iVar5 + param_11;
      iVar4 = iVar4 + *piVar1 + -2;
    } while (0 < iVar2);
  }
  param_5[*param_5 * 4 + 3] = param_5[0x15];
  param_5[*param_5 * 4 + 1] = param_7;
  param_5[*param_5 * 4 + 4] = param_5[0x17];
  param_5[*param_5 * 4 + 2] = iVar4;
  param_5[0x15] = param_5[0x15] + param_5[*param_5 * 4 + 1];
  param_5[0x17] = param_5[0x17] + param_5[*param_5 * 4 + 2];
  pvVar3 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     ((void *)param_5[0x16],param_5[0x15] << 4,"..\\core\\morph.cpp",0x89);
  param_5[0x16] = (int)pvVar3;
  pvVar3 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     ((void *)param_5[0x18],param_5[0x17] * 0x3c,"..\\core\\morph.cpp",0x8a);
  param_5[0x18] = (int)pvVar3;
  *param_5 = *param_5 + 1;
  if ((param_5[0x16] == 0) || (param_5[0x18] == 0)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0x90;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setup - out of memory!",unaff_EBX);
  }
  if (param_11 != 0) {
    core_morph_cpp_CMorphModel_animate_FUN_0052a920();
  }
  if (param_9 != 0) {
    core_morph_cpp_CMorphModel_setFaceList_FUN_0052aac0();
    return;
  }
  return;
}


// Assembly code:
// 0052a580: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_addPart_FUN_0052a580
// 0052a581: PUSH ESI
// 0052a582: PUSH EDI
// 0052a583: PUSH EBP
// 0052a584: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052a588: MOV EBP,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0052a58c: CMP dword ptr [ESI],0x5
// 0052a58f: JGE 0x0052a6ac
//   XREF to: 0052a6ac (CONDITIONAL_JUMP)
// 0052a595: MOV EDI,dword ptr [ESP + 0x28]
//   Label: LAB_0052a595
//   XREF to: Stack[0x18] (READ)
// 0052a599: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0052a59d: MOV EDX,EBP
// 0052a59f: XOR ECX,ECX
// 0052a5a1: TEST EAX,EAX
// 0052a5a3: JLE 0x0052a5c0
//   XREF to: 0052a5c0 (CONDITIONAL_JUMP)
// 0052a5a5: MOV EBX,dword ptr [EDX + 0x4]
//   Label: LAB_0052a5a5
// 0052a5a8: DEC EAX
// 0052a5a9: SUB EBX,0x2
// 0052a5ac: ADD EDX,EDI
// 0052a5ae: ADD ECX,EBX
// 0052a5b0: TEST EAX,EAX
// 0052a5b2: JG 0x0052a5a5
//   XREF to: 0052a5a5 (CONDITIONAL_JUMP)
// 0052a5b4: LEA EAX,[EAX]
// 0052a5ba: LEA EDX,[EDX]
// 0052a5c0: MOV EAX,dword ptr [ESI]
//   Label: LAB_0052a5c0
// 0052a5c2: SHL EAX,0x4
// 0052a5c5: LEA EDX,[ESI + EAX*0x1]
// 0052a5c8: MOV EAX,dword ptr [ESI + 0x54]
// 0052a5cb: MOV dword ptr [EDX + 0xc],EAX
// 0052a5ce: MOV EAX,dword ptr [ESI]
// 0052a5d0: SHL EAX,0x4
// 0052a5d3: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052a5d7: MOV dword ptr [ESI + EAX*0x1 + 0x4],EDX
// 0052a5db: MOV EAX,dword ptr [ESI]
// 0052a5dd: SHL EAX,0x4
// 0052a5e0: MOV EDX,dword ptr [ESI + 0x5c]
// 0052a5e3: MOV dword ptr [ESI + EAX*0x1 + 0x10],EDX
// 0052a5e7: MOV EAX,dword ptr [ESI]
// 0052a5e9: SHL EAX,0x4
// 0052a5ec: MOV dword ptr [ESI + EAX*0x1 + 0x8],ECX
// 0052a5f0: MOV EAX,dword ptr [ESI]
// 0052a5f2: SHL EAX,0x4
// 0052a5f5: MOV EDI,dword ptr [ESI + 0x54]
// 0052a5f8: ADD EDI,dword ptr [ESI + EAX*0x1 + 0x4]
// 0052a5fc: MOV EAX,dword ptr [ESI]
// 0052a5fe: MOV dword ptr [ESI + 0x54],EDI
// 0052a601: SHL EAX,0x4
// 0052a604: MOV EDX,dword ptr [ESI + 0x5c]
// 0052a607: MOV EAX,dword ptr [ESI + EAX*0x1 + 0x8]
// 0052a60b: PUSH 0x89
// 0052a610: ADD EDX,EAX
// 0052a612: MOV EAX,dword ptr [ESI + 0x54]
// 0052a615: PUSH 0x63a13c
//   XREF to: 0063a13c (DATA)
// 0052a61a: SHL EAX,0x4
// 0052a61d: PUSH EAX
// 0052a61e: MOV ECX,dword ptr [ESI + 0x58]
// 0052a621: PUSH ECX
// 0052a622: MOV dword ptr [ESI + 0x5c],EDX
// 0052a625: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0052a62a: MOV dword ptr [ESI + 0x58],EAX
// 0052a62d: MOV EAX,dword ptr [ESI + 0x5c]
// 0052a630: ADD ESP,0x10
// 0052a633: SHL EAX,0x2
// 0052a636: PUSH 0x8a
// 0052a63b: MOV EDX,EAX
// 0052a63d: SHL EAX,0x4
// 0052a640: PUSH 0x63a14e
//   XREF to: 0063a14e (DATA)
// 0052a645: SUB EAX,EDX
// 0052a647: PUSH EAX
// 0052a648: MOV EBX,dword ptr [ESI + 0x60]
// 0052a64b: PUSH EBX
// 0052a64c: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0052a651: ADD ESP,0x10
// 0052a654: MOV EDI,dword ptr [ESI]
// 0052a656: MOV dword ptr [ESI + 0x60],EAX
// 0052a659: INC EDI
// 0052a65a: MOV EAX,dword ptr [ESI + 0x58]
// 0052a65d: MOV dword ptr [ESI],EDI
// 0052a65f: TEST EAX,EAX
// 0052a661: JNZ 0x0052a6d4
//   XREF to: 0052a6d4 (CONDITIONAL_JUMP)
// 0052a663: MOV ECX,0x63a160
//   Label: LAB_0052a663
//   XREF to: 0063a160 (PARAM)
// 0052a668: MOV EBX,0x90
// 0052a66d: PUSH 0x63a172
//   XREF to: 0063a172 (DATA)
// 0052a672: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052a678: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0052a67e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052a683: ADD ESP,0x4
// 0052a686: MOV EDI,dword ptr [ESP + 0x1c]
//   Label: LAB_0052a686
//   XREF to: Stack[0xc] (READ)
// 0052a68a: TEST EDI,EDI
// 0052a68c: JZ 0x0052a6a3
//   XREF to: 0052a6a3 (CONDITIONAL_JUMP)
// 0052a68e: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052a692: PUSH EAX
// 0052a693: PUSH 0x0
// 0052a695: MOV EAX,dword ptr [ESI]
// 0052a697: PUSH EDI
// 0052a698: DEC EAX
// 0052a699: PUSH EAX
// 0052a69a: PUSH ESI
// 0052a69b: CALL core_morph.cpp_CMorphModel_animate_FUN_0052a920
//   XREF to: 0052a920 (UNCONDITIONAL_CALL)
// 0052a6a0: ADD ESP,0x14
// 0052a6a3: TEST EBP,EBP
//   Label: LAB_0052a6a3
// 0052a6a5: JNZ 0x0052a6dc
//   XREF to: 0052a6dc (CONDITIONAL_JUMP)
// 0052a6a7: POP EBP
// 0052a6a8: POP EDI
// 0052a6a9: POP ESI
// 0052a6aa: POP EBX
// 0052a6ab: RET
// 0052a6ac: MOV ECX,0x63a103
//   Label: LAB_0052a6ac
//   XREF to: 0063a103 (PARAM)
// 0052a6b1: MOV EBX,0x77
// 0052a6b6: PUSH 0x63a115
//   XREF to: 0063a115 (DATA)
// 0052a6bb: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052a6c1: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0052a6c7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052a6cc: ADD ESP,0x4
// 0052a6cf: JMP 0x0052a595
//   XREF to: 0052a595 (UNCONDITIONAL_JUMP)
// 0052a6d4: CMP dword ptr [ESI + 0x60],0x0
//   Label: LAB_0052a6d4
// 0052a6d8: JZ 0x0052a663
//   XREF to: 0052a663 (CONDITIONAL_JUMP)
// 0052a6da: JMP 0x0052a686
//   XREF to: 0052a686 (UNCONDITIONAL_JUMP)
// 0052a6dc: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_0052a6dc
//   XREF to: Stack[0x10] (READ)
// 0052a6e0: PUSH ECX
// 0052a6e1: PUSH 0x0
// 0052a6e3: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x20] (READ)
// 0052a6e7: PUSH EBX
// 0052a6e8: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x1c] (READ)
// 0052a6ec: PUSH EDI
// 0052a6ed: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x18] (READ)
// 0052a6f1: PUSH EAX
// 0052a6f2: MOV EAX,dword ptr [ESI]
// 0052a6f4: PUSH EBP
// 0052a6f5: DEC EAX
// 0052a6f6: PUSH EAX
// 0052a6f7: PUSH ESI
// 0052a6f8: CALL core_morph.cpp_CMorphModel_setFaceList_FUN_0052aac0
//   XREF to: 0052aac0 (UNCONDITIONAL_CALL)
// 0052a6fd: ADD ESP,0x20
// 0052a700: POP EBP
// 0052a701: POP EDI
// 0052a702: POP ESI
// 0052a703: POP EBX
// 0052a704: RET
