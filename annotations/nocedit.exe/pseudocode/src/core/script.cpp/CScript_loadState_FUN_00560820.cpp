// Name: core_script.cpp_CScript_loadState_FUN_00560820
// Address: 00560820
// Address Range: [[00560820, 00560b46]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_loadState_FUN_00560820()
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1a36 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_006433f2
//   TerminatedCString s_core_script_cpp_006433f6
//   TerminatedCString s_CScript_loadState_file_v_00643409
//   TerminatedCString s_d_0064343e
//   TerminatedCString s_d_00643442
//   TerminatedCString s_d_00643446
//   TerminatedCString s_g_0064344a
//   TerminatedCString s_d_0064344e
//   TerminatedCString s_anon_00643452
//   TerminatedCString s_anon_00643459
//   TerminatedCString s_g_0064345c
//   TerminatedCString s_g_00643460
//   TerminatedCString s_d_00643464
//   TerminatedCString s_d_00643468
//   TerminatedCString s_d_0064346c
//   TerminatedCString s_u_00643470
//   TerminatedCString s_The_script_you_were_usin_00643474
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CGame* g_CGamePtr = 02d81a9c
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_02d81cc4
//   undefined4 DAT_02d81cc8
//   undefined4 DAT_02d81ccc
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_0310f4a0
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_script.cpp_CalculateCRC_FUN_00560d80
//   core_script.cpp_GetReferencedActor_FUN_00560760
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0

#include "nocturne.h"

/* Signature: void core_script.cpp_CScript_loadState(CScript* pScript, undefined4 pFilePtr, int
   param_3) */

int core_script_cpp_CScript_loadState_FUN_00560820
              (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,int param_5,
              FILE *param_6)

{
  int iVar1;
  int extraout_EAX;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar2;
  int in_stack_00000040;
  int in_stack_00000048;
  int in_stack_00000058;
  undefined1 *puStack_b8;
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffee8,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  if (6 < unaff_EBP) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0xf56;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::loadState - file version is newer than .EXE");
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef4,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  if (1 < unaff_EBX) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffefc,0xff,param_6);
    crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  }
  if (2 < param_5) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff04,0xff,param_6);
    crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  }
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff04,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%g\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff0c,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff14,0xff,param_6);
  *(undefined1 *)(param_5 + 0x54) = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"\"%[^\"]");
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"\"\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff20,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%g\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff28,0xff,param_6);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%g\n");
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff30,0xff,param_6);
  core_script_cpp_GetReferencedActor_FUN_00560760();
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff38,0xff,param_6);
  iVar1 = core_script_cpp_GetReferencedActor_FUN_00560760();
  if (4 < in_stack_00000040) {
    crt_stdio_c_fgets_FUN_005fefd0(&stack0xffffff40,0xff,param_6);
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
  }
  if (3 < in_stack_00000048) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&puStack_b8,0xff,param_6);
    iVar2 = 0;
    iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
    if (0 < *(int *)(param_5 + 0x45c)) {
      do {
        iVar2 = iVar2 + 1;
        crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%d\n");
        iVar1 = *(int *)(param_5 + 0x45c);
      } while (iVar2 < iVar1);
    }
  }
  if (5 < in_stack_00000048) {
    crt_stdio_c_fgets_FUN_005fefd0((char *)&puStack_b8,0xff,param_6);
    puStack_b8 = &stack0x00000050;
    crt_stdio_c_fscanf_FUN_005fe7c0(param_6,"%u\n");
    puStack_b8 = (undefined1 *)0x560b1c;
    iVar1 = core_script_cpp_CalculateCRC_FUN_00560d80();
    if (iVar1 != in_stack_00000058) {
      puStack_b8 = (undefined1 *)0x560b39;
      shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
                (g_CEditorToolsPtr,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return extraout_EAX;
    }
  }
  return iVar1;
}


// Assembly code:
// 00560820: PUSH EBX
//   Label: core_script.cpp_CScript_loadState_FUN_00560820
// 00560821: PUSH ESI
// 00560822: PUSH EDI
// 00560823: PUSH EBP
// 00560824: SUB ESP,0x108
// 0056082a: MOV EBP,dword ptr [ESP + 0x11c]
//   XREF to: Stack[0x4] (READ)
// 00560831: MOV EDI,dword ptr [ESP + 0x120]
//   XREF to: Stack[0x8] (READ)
// 00560838: PUSH EDI
// 00560839: PUSH 0xff
// 0056083e: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 00560842: PUSH EAX
// 00560843: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00560848: ADD ESP,0xc
// 0056084b: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x18] (DATA)
// 00560852: PUSH EAX
// 00560853: PUSH 0x6433f2
//   XREF to: 006433f2 (DATA)
// 00560858: PUSH EDI
// 00560859: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0056085e: ADD ESP,0xc
// 00560861: CMP dword ptr [ESP + 0x100],0x6
//   XREF to: Stack[-0x18] (READ)
// 00560869: JG 0x00560ac5
//   XREF to: 00560ac5 (CONDITIONAL_JUMP)
// 0056086f: PUSH EDI
//   Label: LAB_0056086f
// 00560870: PUSH 0xff
// 00560875: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 00560879: PUSH EAX
// 0056087a: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0056087f: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00560884: ADD ESP,0xc
// 00560887: ADD EAX,0x228
// 0056088c: PUSH EAX
//   XREF to: 02d81cc4 (DATA)
// 0056088d: PUSH 0x64343e
//   XREF to: 0064343e (DATA)
// 00560892: PUSH EDI
// 00560893: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560898: ADD ESP,0xc
// 0056089b: CMP dword ptr [ESP + 0x100],0x2
//   XREF to: Stack[-0x18] (READ)
// 005608a3: JL 0x005608d1
//   XREF to: 005608d1 (CONDITIONAL_JUMP)
// 005608a5: PUSH EDI
// 005608a6: PUSH 0xff
// 005608ab: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 005608af: PUSH EAX
// 005608b0: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005608b5: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005608ba: ADD ESP,0xc
// 005608bd: ADD EAX,0x22c
// 005608c2: PUSH EAX
//   XREF to: 02d81cc8 (DATA)
// 005608c3: PUSH 0x643442
//   XREF to: 00643442 (DATA)
// 005608c8: PUSH EDI
// 005608c9: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005608ce: ADD ESP,0xc
// 005608d1: CMP dword ptr [ESP + 0x100],0x3
//   Label: LAB_005608d1
//   XREF to: Stack[-0x18] (READ)
// 005608d9: JL 0x00560907
//   XREF to: 00560907 (CONDITIONAL_JUMP)
// 005608db: PUSH EDI
// 005608dc: PUSH 0xff
// 005608e1: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 005608e5: PUSH EAX
// 005608e6: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005608eb: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 005608f0: ADD ESP,0xc
// 005608f3: ADD EAX,0x230
// 005608f8: PUSH EAX
//   XREF to: 02d81ccc (DATA)
// 005608f9: PUSH 0x643446
//   XREF to: 00643446 (DATA)
// 005608fe: PUSH EDI
// 005608ff: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560904: ADD ESP,0xc
// 00560907: PUSH EDI
//   Label: LAB_00560907
// 00560908: PUSH 0xff
// 0056090d: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 00560911: PUSH EAX
// 00560912: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00560917: ADD ESP,0xc
// 0056091a: PUSH 0x310f4a0
//   XREF to: 0310f4a0 (DATA)
// 0056091f: PUSH 0x64344a
//   XREF to: 0064344a (DATA)
// 00560924: PUSH EDI
// 00560925: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0056092a: ADD ESP,0xc
// 0056092d: PUSH EDI
// 0056092e: PUSH 0xff
// 00560933: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 00560937: PUSH EAX
// 00560938: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0056093d: ADD ESP,0xc
// 00560940: LEA EAX,[EBP + 0x48]
// 00560943: PUSH EAX
// 00560944: PUSH 0x64344e
//   XREF to: 0064344e (DATA)
// 00560949: PUSH EDI
// 0056094a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0056094f: ADD ESP,0xc
// 00560952: PUSH EDI
// 00560953: PUSH 0xff
// 00560958: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 0056095c: PUSH EAX
// 0056095d: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00560962: ADD ESP,0xc
// 00560965: LEA EBX,[EBP + 0x54]
// 00560968: PUSH EBX
// 00560969: PUSH 0x643452
//   XREF to: 00643452 (DATA)
// 0056096e: PUSH EDI
// 0056096f: MOV byte ptr [EBP + 0x54],0x0
// 00560973: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560978: ADD ESP,0xc
// 0056097b: PUSH EBX
// 0056097c: PUSH 0x643459
//   XREF to: 00643459 (DATA)
// 00560981: PUSH EDI
// 00560982: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560987: ADD ESP,0xc
// 0056098a: PUSH EDI
// 0056098b: PUSH 0xff
// 00560990: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 00560994: PUSH EAX
// 00560995: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 0056099a: ADD ESP,0xc
// 0056099d: LEA EAX,[EBP + 0x4c]
// 005609a0: PUSH EAX
// 005609a1: PUSH 0x64345c
//   XREF to: 0064345c (DATA)
// 005609a6: PUSH EDI
// 005609a7: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005609ac: ADD ESP,0xc
// 005609af: PUSH EDI
// 005609b0: PUSH 0xff
// 005609b5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 005609b9: PUSH EAX
// 005609ba: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005609bf: ADD ESP,0xc
// 005609c2: LEA EAX,[EBP + 0x50]
// 005609c5: PUSH EAX
// 005609c6: PUSH 0x643460
//   XREF to: 00643460 (DATA)
// 005609cb: PUSH EDI
// 005609cc: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005609d1: ADD ESP,0xc
// 005609d4: PUSH EDI
// 005609d5: PUSH 0xff
// 005609da: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 005609de: PUSH EAX
// 005609df: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 005609e4: ADD ESP,0xc
// 005609e7: LEA EAX,[EBP + 0x4]
// 005609ea: PUSH EAX
// 005609eb: PUSH EDI
// 005609ec: CALL core_script.cpp_GetReferencedActor_FUN_00560760
//   XREF to: 00560760 (UNCONDITIONAL_CALL)
// 005609f1: ADD ESP,0x8
// 005609f4: PUSH EDI
// 005609f5: PUSH 0xff
// 005609fa: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 005609fe: PUSH EAX
// 005609ff: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00560a04: ADD ESP,0xc
// 00560a07: LEA EAX,[EBP + 0xc]
// 00560a0a: PUSH EAX
// 00560a0b: PUSH EDI
// 00560a0c: CALL core_script.cpp_GetReferencedActor_FUN_00560760
//   XREF to: 00560760 (UNCONDITIONAL_CALL)
// 00560a11: ADD ESP,0x8
// 00560a14: CMP dword ptr [ESP + 0x100],0x5
//   XREF to: Stack[-0x18] (READ)
// 00560a1c: JL 0x00560a43
//   XREF to: 00560a43 (CONDITIONAL_JUMP)
// 00560a1e: PUSH EDI
// 00560a1f: PUSH 0xff
// 00560a24: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 00560a28: PUSH EAX
// 00560a29: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00560a2e: ADD ESP,0xc
// 00560a31: LEA EAX,[EBP + 0x14]
// 00560a34: PUSH EAX
// 00560a35: PUSH 0x643464
//   XREF to: 00643464 (DATA)
// 00560a3a: PUSH EDI
// 00560a3b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560a40: ADD ESP,0xc
// 00560a43: CMP dword ptr [ESP + 0x100],0x4
//   Label: LAB_00560a43
//   XREF to: Stack[-0x18] (READ)
// 00560a4b: JL 0x00560ab0
//   XREF to: 00560ab0 (CONDITIONAL_JUMP)
// 00560a4d: PUSH EDI
// 00560a4e: PUSH 0xff
// 00560a53: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 00560a57: PUSH EAX
// 00560a58: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00560a5d: ADD ESP,0xc
// 00560a60: LEA EAX,[EBP + 0x45c]
// 00560a66: PUSH EAX
// 00560a67: PUSH 0x643468
//   XREF to: 00643468 (DATA)
// 00560a6c: PUSH EDI
// 00560a6d: XOR ESI,ESI
// 00560a6f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560a74: MOV EBX,dword ptr [EBP + 0x45c]
// 00560a7a: ADD ESP,0xc
// 00560a7d: TEST EBX,EBX
// 00560a7f: JLE 0x00560ab0
//   XREF to: 00560ab0 (CONDITIONAL_JUMP)
// 00560a81: LEA EBX,[EBP + 0x460]
// 00560a87: PUSH EBX
//   Label: LAB_00560a87
// 00560a88: PUSH 0x64346c
//   XREF to: 0064346c (DATA)
// 00560a8d: PUSH EDI
// 00560a8e: INC ESI
// 00560a8f: ADD EBX,0x4
// 00560a92: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560a97: MOV EAX,dword ptr [EBP + 0x45c]
// 00560a9d: ADD ESP,0xc
// 00560aa0: CMP ESI,EAX
// 00560aa2: JL 0x00560a87
//   XREF to: 00560a87 (CONDITIONAL_JUMP)
// 00560aa4: LEA EAX,[EAX]
// 00560aaa: LEA EDX,[EDX]
// 00560ab0: CMP dword ptr [ESP + 0x100],0x6
//   Label: LAB_00560ab0
//   XREF to: Stack[-0x18] (READ)
// 00560ab8: JGE 0x00560aed
//   XREF to: 00560aed (CONDITIONAL_JUMP)
// 00560aba: ADD ESP,0x108
//   Label: LAB_00560aba
// 00560ac0: POP EBP
// 00560ac1: POP EDI
// 00560ac2: POP ESI
// 00560ac3: POP EBX
// 00560ac4: RET
// 00560ac5: MOV ECX,0x6433f6
//   Label: LAB_00560ac5
//   XREF to: 006433f6 (PARAM)
// 00560aca: MOV EBX,0xf56
// 00560acf: PUSH 0x643409
//   XREF to: 00643409 (DATA)
// 00560ad4: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00560ada: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00560ae0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00560ae5: ADD ESP,0x4
// 00560ae8: JMP 0x0056086f
//   XREF to: 0056086f (UNCONDITIONAL_JUMP)
// 00560aed: PUSH EDI
//   Label: LAB_00560aed
// 00560aee: PUSH 0xff
// 00560af3: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x118] (DATA)
// 00560af7: PUSH EAX
// 00560af8: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00560afd: ADD ESP,0xc
// 00560b00: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x14] (DATA)
// 00560b07: PUSH EAX
// 00560b08: PUSH 0x643470
//   XREF to: 00643470 (DATA)
// 00560b0d: PUSH EDI
// 00560b0e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00560b13: ADD ESP,0xc
// 00560b16: PUSH EBP
// 00560b17: CALL core_script.cpp_CalculateCRC_FUN_00560d80
//   XREF to: 00560d80 (UNCONDITIONAL_CALL)
// 00560b1c: ADD ESP,0x4
// 00560b1f: CMP EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x14] (READ)
// 00560b26: JZ 0x00560aba
//   XREF to: 00560aba (CONDITIONAL_JUMP)
// 00560b28: PUSH 0x643474
//   XREF to: 00643474 (DATA)
// 00560b2d: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00560b33: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00560b34: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 00560b39: ADD ESP,0x8
// 00560b3c: ADD ESP,0x108
// 00560b42: POP EBP
// 00560b43: POP EDI
// 00560b44: POP ESI
// 00560b45: POP EBX
// 00560b46: RET
