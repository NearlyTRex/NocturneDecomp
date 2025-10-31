// Name: core_morph.cpp_CMorphModel_addPart2_FUN_0052a710
// Address: 0052a710
// Address Range: [[0052a710, 0052a869]]
// Convention: unknown
// Signature: undefined core_morph.cpp_CMorphModel_addPart2_FUN_0052a710()
// Cross-references:
//   core_morph.cpp_CallToAddpartAgain_FUN_0052a870 (0052a870) at 0052a8bf [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_morph_cpp_0063a196
//   TerminatedCString s_CMorphModel_addPart_too__0063a1a8
//   TerminatedCString s_core_morph_cpp_0063a1cf
//   TerminatedCString s_core_morph_cpp_0063a1e1
//   TerminatedCString s_core_morph_cpp_0063a1f3
//   TerminatedCString s_CMorphModel_setup_out_of_0063a205
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_morph.cpp_CMorphModel_animate_FUN_0052a920
//   core_morph.cpp_CMorphModel_setFaceList_2_FUN_0052aca0
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540

#include "nocturne.h"

/* Signature: undefined1 core_morph.cpp_CMorphModel_addPart2(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5, undefined4 param_6, undefined4
   param_7) */

void core_morph_cpp_CMorphModel_addPart2_FUN_0052a710
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               int *param_5,undefined4 param_6,int param_7,undefined4 param_8,int param_9,
               undefined4 param_10,int param_11,undefined4 param_12,int param_13)

{
  void *pvVar1;
  
  if (4 < *param_5) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0xac;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::addPart - too many parts!");
  }
  param_5[*param_5 * 4 + 3] = param_5[0x15];
  param_5[*param_5 * 4 + 1] = param_7;
  param_5[*param_5 * 4 + 4] = param_5[0x17];
  param_5[*param_5 * 4 + 2] = param_9;
  param_5[0x15] = param_5[0x15] + param_5[*param_5 * 4 + 1];
  param_5[0x17] = param_5[0x17] + param_5[*param_5 * 4 + 2];
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     ((void *)param_5[0x16],param_5[0x15] << 4,"..\\core\\morph.cpp",0xbe);
  param_5[0x16] = (int)pvVar1;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     ((void *)param_5[0x18],param_5[0x17] * 0x3c,"..\\core\\morph.cpp",0xbf);
  param_5[0x18] = (int)pvVar1;
  *param_5 = *param_5 + 1;
  if ((param_5[0x16] == 0) || (param_5[0x18] == 0)) {
    g_CurrentFilename = "..\\core\\morph.cpp";
    g_CurrentLineNumber = 0xc5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMorphModel::setup - out of memory!",unaff_EBX);
  }
  if (param_11 != 0) {
    core_morph_cpp_CMorphModel_animate_FUN_0052a920();
  }
  if (param_13 != 0) {
    core_morph_cpp_CMorphModel_setFaceList_2_FUN_0052aca0();
    return;
  }
  return;
}


// Assembly code:
// 0052a710: PUSH EBX
//   Label: core_morph.cpp_CMorphModel_addPart2_FUN_0052a710
// 0052a711: PUSH ESI
// 0052a712: PUSH EDI
// 0052a713: PUSH EBP
// 0052a714: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0052a718: CMP dword ptr [EBX],0x5
// 0052a71b: JGE 0x0052a816
//   XREF to: 0052a816 (CONDITIONAL_JUMP)
// 0052a721: MOV EAX,dword ptr [EBX]
//   Label: LAB_0052a721
// 0052a723: SHL EAX,0x4
// 0052a726: LEA EDX,[EBX + EAX*0x1]
// 0052a729: MOV EAX,dword ptr [EBX + 0x54]
// 0052a72c: MOV dword ptr [EDX + 0xc],EAX
// 0052a72f: MOV EAX,dword ptr [EBX]
// 0052a731: SHL EAX,0x4
// 0052a734: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052a738: MOV dword ptr [EBX + EAX*0x1 + 0x4],EDX
// 0052a73c: MOV EAX,dword ptr [EBX]
// 0052a73e: SHL EAX,0x4
// 0052a741: LEA EDX,[EBX + EAX*0x1]
// 0052a744: MOV EAX,dword ptr [EBX + 0x5c]
// 0052a747: MOV dword ptr [EDX + 0x10],EAX
// 0052a74a: MOV EAX,dword ptr [EBX]
// 0052a74c: SHL EAX,0x4
// 0052a74f: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0052a753: MOV dword ptr [EBX + EAX*0x1 + 0x8],EDX
// 0052a757: MOV EAX,dword ptr [EBX]
// 0052a759: SHL EAX,0x4
// 0052a75c: MOV EDI,dword ptr [EBX + 0x54]
// 0052a75f: ADD EDI,dword ptr [EBX + EAX*0x1 + 0x4]
// 0052a763: MOV EAX,dword ptr [EBX]
// 0052a765: MOV dword ptr [EBX + 0x54],EDI
// 0052a768: SHL EAX,0x4
// 0052a76b: MOV EBP,dword ptr [EBX + 0x5c]
// 0052a76e: MOV EAX,dword ptr [EBX + EAX*0x1 + 0x8]
// 0052a772: PUSH 0xbe
// 0052a777: ADD EBP,EAX
// 0052a779: MOV EAX,dword ptr [EBX + 0x54]
// 0052a77c: PUSH 0x63a1cf
//   XREF to: 0063a1cf (DATA)
// 0052a781: SHL EAX,0x4
// 0052a784: PUSH EAX
// 0052a785: MOV EAX,dword ptr [EBX + 0x58]
// 0052a788: PUSH EAX
// 0052a789: MOV dword ptr [EBX + 0x5c],EBP
// 0052a78c: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0052a791: MOV dword ptr [EBX + 0x58],EAX
// 0052a794: MOV EAX,dword ptr [EBX + 0x5c]
// 0052a797: ADD ESP,0x10
// 0052a79a: SHL EAX,0x2
// 0052a79d: PUSH 0xbf
// 0052a7a2: MOV EDX,EAX
// 0052a7a4: SHL EAX,0x4
// 0052a7a7: PUSH 0x63a1e1
//   XREF to: 0063a1e1 (DATA)
// 0052a7ac: SUB EAX,EDX
// 0052a7ae: PUSH EAX
// 0052a7af: MOV EDX,dword ptr [EBX + 0x60]
// 0052a7b2: PUSH EDX
// 0052a7b3: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 0052a7b8: ADD ESP,0x10
// 0052a7bb: MOV ECX,dword ptr [EBX]
// 0052a7bd: MOV dword ptr [EBX + 0x60],EAX
// 0052a7c0: INC ECX
// 0052a7c1: MOV ESI,dword ptr [EBX + 0x58]
// 0052a7c4: MOV dword ptr [EBX],ECX
// 0052a7c6: TEST ESI,ESI
// 0052a7c8: JNZ 0x0052a83e
//   XREF to: 0052a83e (CONDITIONAL_JUMP)
// 0052a7ca: MOV EBP,0x63a1f3
//   Label: LAB_0052a7ca
//   XREF to: 0063a1f3 (DATA)
// 0052a7cf: MOV EAX,0xc5
// 0052a7d4: PUSH 0x63a205
//   XREF to: 0063a205 (DATA)
// 0052a7d9: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 0052a7df: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 0052a7e4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052a7e9: ADD ESP,0x4
// 0052a7ec: MOV EDX,dword ptr [ESP + 0x1c]
//   Label: LAB_0052a7ec
//   XREF to: Stack[0xc] (READ)
// 0052a7f0: TEST EDX,EDX
// 0052a7f2: JZ 0x0052a809
//   XREF to: 0052a809 (CONDITIONAL_JUMP)
// 0052a7f4: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0052a7f8: PUSH ECX
// 0052a7f9: PUSH 0x0
// 0052a7fb: MOV EAX,dword ptr [EBX]
// 0052a7fd: PUSH EDX
// 0052a7fe: DEC EAX
// 0052a7ff: PUSH EAX
// 0052a800: PUSH EBX
// 0052a801: CALL core_morph.cpp_CMorphModel_animate_FUN_0052a920
//   XREF to: 0052a920 (UNCONDITIONAL_CALL)
// 0052a806: ADD ESP,0x14
// 0052a809: MOV EDI,dword ptr [ESP + 0x24]
//   Label: LAB_0052a809
//   XREF to: Stack[0x14] (READ)
// 0052a80d: TEST EDI,EDI
// 0052a80f: JNZ 0x0052a846
//   XREF to: 0052a846 (CONDITIONAL_JUMP)
// 0052a811: POP EBP
// 0052a812: POP EDI
// 0052a813: POP ESI
// 0052a814: POP EBX
// 0052a815: RET
// 0052a816: MOV ECX,0x63a196
//   Label: LAB_0052a816
//   XREF to: 0063a196 (PARAM)
// 0052a81b: MOV ESI,0xac
// 0052a820: PUSH 0x63a1a8
//   XREF to: 0063a1a8 (DATA)
// 0052a825: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0052a82b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0052a831: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0052a836: ADD ESP,0x4
// 0052a839: JMP 0x0052a721
//   XREF to: 0052a721 (UNCONDITIONAL_JUMP)
// 0052a83e: CMP dword ptr [EBX + 0x60],0x0
//   Label: LAB_0052a83e
// 0052a842: JZ 0x0052a7ca
//   XREF to: 0052a7ca (CONDITIONAL_JUMP)
// 0052a844: JMP 0x0052a7ec
//   XREF to: 0052a7ec (UNCONDITIONAL_JUMP)
// 0052a846: MOV EBP,dword ptr [ESP + 0x20]
//   Label: LAB_0052a846
//   XREF to: Stack[0x10] (READ)
// 0052a84a: PUSH EBP
// 0052a84b: PUSH 0x0
// 0052a84d: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x1c] (READ)
// 0052a851: PUSH EAX
// 0052a852: MOV EDX,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x18] (READ)
// 0052a856: PUSH EDX
// 0052a857: MOV EAX,dword ptr [EBX]
// 0052a859: PUSH EDI
// 0052a85a: DEC EAX
// 0052a85b: PUSH EAX
// 0052a85c: PUSH EBX
// 0052a85d: CALL core_morph.cpp_CMorphModel_setFaceList_2_FUN_0052aca0
//   XREF to: 0052aca0 (UNCONDITIONAL_CALL)
// 0052a862: ADD ESP,0x1c
// 0052a865: POP EBP
// 0052a866: POP EDI
// 0052a867: POP ESI
// 0052a868: POP EBX
// 0052a869: RET
