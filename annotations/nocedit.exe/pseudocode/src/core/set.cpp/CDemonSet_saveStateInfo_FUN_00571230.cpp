// Name: core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230
// Address: 00571230
// Address Range: [[00571230, 00571319]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230(CDemonSet * this_ptr)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1b50 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_anon_006460bb
//   TerminatedCString s_d_006460c3
//   TerminatedCString s_core_set_cpp_006460c7
//   TerminatedCString s_Set_saveState_info_is_in_006460d7
//   TerminatedCString s_anon_00646100
//   TerminatedCString s_d_00646108
//   TerminatedCString s_The_set_has_changed_sinc_0064610c
//   TerminatedCString s_d_00646172
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00571230(CDemonSet *this_ptr)

{
  int unaff_EBX;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonSet *pCVar2;
  int unaff_retaddr;
  FILE *in_stack_00000008;
  int in_stack_ffffffec;
  
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&stack0xffffffe8);
  if (in_stack_ffffffec != 1) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0x136a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Set saveState info is invalid version %d");
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (this_ptr->camera_count != unaff_EBX) {
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
              (g_CEditorToolsPtr,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < unaff_retaddr) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
      if (iVar1 < this_ptr->camera_count) {
        pCVar2->cameras[0].field17_0x1a0 = (int)in_stack_00000008;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].field17_0x1a0;
    } while (iVar1 < (int)this_ptr);
  }
  return;
}


// Assembly code:
// 00571230: PUSH EBX
//   Label: core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230
// 00571231: PUSH ESI
// 00571232: PUSH EDI
// 00571233: PUSH EBP
// 00571234: SUB ESP,0xc
// 00571237: MOV EBP,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 0057123b: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 0057123f: PUSH 0x6460bb
//   XREF to: 006460bb (DATA)
// 00571244: PUSH EDI
// 00571245: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0057124a: ADD ESP,0x8
// 0057124d: MOV EAX,ESP
// 0057124f: PUSH EAX
// 00571250: PUSH 0x6460c3
//   XREF to: 006460c3 (DATA)
// 00571255: PUSH EDI
// 00571256: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0057125b: ADD ESP,0xc
// 0057125e: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x1c] (DATA)
// 00571261: CMP EDX,0x1
// 00571264: JNZ 0x005712e5
//   XREF to: 005712e5 (CONDITIONAL_JUMP)
// 0057126a: PUSH 0x646100
//   Label: LAB_0057126a
//   XREF to: 00646100 (DATA)
// 0057126f: PUSH EDI
// 00571270: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00571275: ADD ESP,0x8
// 00571278: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x18] (DATA)
// 0057127c: PUSH EAX
// 0057127d: PUSH 0x646108
//   XREF to: 00646108 (DATA)
// 00571282: PUSH EDI
// 00571283: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00571288: ADD ESP,0xc
// 0057128b: MOV EDX,dword ptr [EBP]
// 0057128e: CMP EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x18] (READ)
// 00571292: JZ 0x005712a8
//   XREF to: 005712a8 (CONDITIONAL_JUMP)
// 00571294: PUSH 0x64610c
//   XREF to: 0064610c (DATA)
// 00571299: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057129f: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005712a0: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005712a5: ADD ESP,0x8
// 005712a8: MOV ESI,dword ptr [ESP + 0x4]
//   Label: LAB_005712a8
//   XREF to: Stack[-0x18] (READ)
// 005712ac: XOR EBX,EBX
// 005712ae: TEST ESI,ESI
// 005712b0: JLE 0x005712dd
//   XREF to: 005712dd (CONDITIONAL_JUMP)
// 005712b2: MOV ESI,EBP
// 005712b4: LEA EAX,[ESP + 0x8]
//   Label: LAB_005712b4
//   XREF to: Stack[-0x14] (DATA)
// 005712b8: PUSH EAX
// 005712b9: PUSH 0x646172
//   XREF to: 00646172 (DATA)
// 005712be: PUSH EDI
// 005712bf: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005712c4: MOV EDX,dword ptr [EBP]
// 005712c7: ADD ESP,0xc
// 005712ca: CMP EBX,EDX
// 005712cc: JL 0x0057130e
//   XREF to: 0057130e (CONDITIONAL_JUMP)
// 005712ce: MOV EAX,dword ptr [ESP + 0x4]
//   Label: LAB_005712ce
//   XREF to: Stack[-0x18] (READ)
// 005712d2: INC EBX
// 005712d3: ADD ESI,0x1a4
// 005712d9: CMP EBX,EAX
// 005712db: JL 0x005712b4
//   XREF to: 005712b4 (CONDITIONAL_JUMP)
// 005712dd: ADD ESP,0xc
//   Label: LAB_005712dd
// 005712e0: POP EBP
// 005712e1: POP EDI
// 005712e2: POP ESI
// 005712e3: POP EBX
// 005712e4: RET
// 005712e5: PUSH EDX
//   Label: LAB_005712e5
// 005712e6: MOV ECX,0x6460c7
//   XREF to: 006460c7 (PARAM)
// 005712eb: MOV EBX,0x136a
// 005712f0: PUSH 0x6460d7
//   XREF to: 006460d7 (DATA)
// 005712f5: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005712fb: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00571301: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00571306: ADD ESP,0x8
// 00571309: JMP 0x0057126a
//   XREF to: 0057126a (UNCONDITIONAL_JUMP)
// 0057130e: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0057130e
//   XREF to: Stack[-0x14] (READ)
// 00571312: MOV dword ptr [ESI + 0x1a4],EAX
// 00571318: JMP 0x005712ce
//   XREF to: 005712ce (UNCONDITIONAL_JUMP)
