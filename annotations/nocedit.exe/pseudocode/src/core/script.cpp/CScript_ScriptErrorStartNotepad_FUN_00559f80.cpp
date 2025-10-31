// Name: core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80
// Address: 00559f80
// Address Range: [[00559f80, 0055a364]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80()
// Cross-references:
//   core_mission.cpp_CDemonMission_FUN_005235b0 (005235b0) at 005235eb [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_world_006417af
//   TerminatedCString s_txt_006417b5
//   undefined4 DAT_006417b6
//   undefined4 DAT_006417b7
//   undefined4 DAT_006417b8
//   TerminatedCString s_rt_006417ba
//   TerminatedCString s_world_006417bd
//   TerminatedCString s_core_script_cpp_006417c3
//   TerminatedCString s_Probable_non_text_file_s_006417d6
//   TerminatedCString s_core_script_cpp_0064181b
//   TerminatedCString s_core_script_cpp_0064182e
//   TerminatedCString s_wt_00641841
//   TerminatedCString s_script_txt_00641844
//   TerminatedCString s_s_4d_s_0064184f
//   TerminatedCString s_core_script_cpp_00641859
//   TerminatedCString s_Syntax_error_on_s_line_d_0064186c
//   TerminatedCString s_Try_to_load_the_script_a_0064188b
//   TerminatedCString s_Don_t_use_the_script_jus_006418d5
//   TerminatedCString s_Execute_NOTEPAD_on_the_s_006418fc
//   TerminatedCString s_Cancel_00641925
//   TerminatedCString s_Note_This_only_works_in__0064192c
//   TerminatedCString s_start_notepad_world_s_006419c2
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   undefined4 DAT_031089e8
//   undefined4 DAT_0310f4b0
// Function calls:
//   core_script.cpp_CScript_dbLoad_FUN_005603c0
//   core_script.cpp_CScript_FreeSomething1_FUN_00559870
//   core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0
//   core_script.cpp_FUN_0055a540
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_ftell_FUN_00601560
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_stdlib.c_system_FUN_00602130
//   crt_string.c_splitpath_FUN_005ff178
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

/* Signature: undefined1 core_script.cpp_CScript_ScriptErrorStartNotepad(undefined4 pScript,
   undefined4 sFilename, undefined4 param_3) */

undefined4 core_script_cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80(void)

{
  undefined4 *puVar1;
  char cVar2;
  int iVar3;
  FILE *pFVar4;
  long lVar5;
  long lVar6;
  int iVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  char *pcVar9;
  char *pcVar10;
  byte bVar12;
  int in_stack_00000004;
  char *in_stack_0000000c;
  char *in_stack_00000010;
  char *in_stack_00000018;
  int in_stack_0000001c;
  undefined4 in_stack_00000030;
  int in_stack_0000003c;
  undefined4 in_stack_00000040;
  CStrList_vtable *in_stack_fffff8c4;
  CStrList_vtable *in_stack_fffff8c8;
  CStrList_vtable *in_stack_fffff8cc;
  CStrList_vtable *in_stack_fffff8d0;
  CStrList_vtable *in_stack_fffff8d4;
  CStrList_remove *in_stack_fffff8d8;
  char **in_stack_fffff8dc;
  CStrList_vtable *in_stack_fffff8e0;
  CStrList_swap *in_stack_fffff8e4;
  char acStack_3cc [4];
  undefined1 auStack_3c8 [488];
  char acStack_1e0 [4];
  char acStack_1dc [336];
  char acStack_8c [4];
  char acStack_88 [112];
  int local_18;
  char *pcVar11;
  
  bVar12 = 0;
  local_18 = in_stack_00000004 + 0x38;
  do {
    core_script_cpp_CScript_FreeSomething1_FUN_00559870();
    iVar3 = engine_dosio_c_getFileSize_FUN_00481880("world",in_stack_0000000c);
    if (iVar3 < 1) {
      return 1;
    }
    crt_string_c_splitpath_FUN_005ff178
              (in_stack_00000010,(char *)0x0,(char *)0x0,acStack_1e0,(char *)0x0);
    pcVar9 = ".txt";
    iVar8 = -1;
    pcVar11 = acStack_1dc;
    do {
      pcVar10 = pcVar11;
      if (iVar8 == 0) break;
      iVar8 = iVar8 + -1;
      pcVar10 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    core_script_cpp_CScript_dbLoad_FUN_005603c0();
    pFVar4 = engine_dosio_c_getFile_FUN_00481a50("world",in_stack_00000018,"rt");
    if (pFVar4 == (FILE *)0x0) {
      return 1;
    }
    lVar5 = crt_stdio_c_ftell_FUN_00601560(pFVar4);
    do {
      iVar8 = 0;
      while( true ) {
        do {
          lVar6 = crt_stdio_c_ftell_FUN_00601560(pFVar4);
          if ((iVar3 + lVar5 <= lVar6) ||
             (iVar7 = crt_stdio_c_fgetc_FUN_005fe840(pFVar4), iVar7 == -1)) goto LAB_0055a085;
        } while (iVar7 == 0xd);
        if (iVar7 == 10) break;
        if (iVar7 == 0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\script.cpp",0x31b);
          iVar3 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                            ((CBitFont *)(in_stack_00000004 + 0x38));
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"Probable non-text file %s detected near line %d.  Cannot use script.",in_stack_00000030,
                     iVar3 + 1);
          core_script_cpp_CScript_FreeSomething1_FUN_00559870();
          return 0;
        }
        auStack_3c8[iVar8] = (char)iVar7;
        iVar8 = iVar8 + 1;
      }
LAB_0055a085:
      acStack_3cc[iVar8] = '\0';
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&DAT_00000001,acStack_3cc);
    } while (in_stack_0000000c != (char *)0x0);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\script.cpp",0x32d);
    core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370();
    iVar3 = 0;
    pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       ("script.txt",(char *)0x0,"wt","..\\core\\script.cpp",
                        0x336);
    if (0 < *(int *)(in_stack_00000004 + 0x30)) {
      iVar8 = 0;
      do {
        iVar7 = iVar8 + 4;
        puVar1 = (undefined4 *)(iVar8 + *(int *)(in_stack_00000004 + 0x34));
        iVar8 = iVar8 + 8;
        iVar3 = iVar3 + 1;
        crt_stdio_c_fprintf_FUN_005fe6d0
                  (pFVar4,"%4d | %s\n","%4d | %s\n",*puVar1,
                   *(undefined4 *)(iVar7 + *(int *)(in_stack_00000004 + 0x34)));
      } while (iVar3 < *(int *)(in_stack_00000004 + 0x30));
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar4,"..\\core\\script.cpp",0x33a);
    if (in_stack_0000003c != 0) {
LAB_0055a34a:
      core_script_cpp_FUN_0055a540();
      return 1;
    }
    iVar3 = core_script_cpp_CScript_StepThroughWholeScript_FUN_0055a4b0();
    shape_edittool_cpp_CPickList_clear_FUN_004a5770((CPickList *)&DAT_0310f4b0);
    if (iVar3 == 0) goto LAB_0055a34a;
    while( true ) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&DAT_031089e8,"Syntax error on %s line %d:\n%s",in_stack_00000040,
                 in_stack_0000001c + 1,iVar3);
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff8ac);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff8b0,"Try to load the script again.  (You can ALT-TAB and edit the script now.)");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff8b4,"Don't use the script, just keep going.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)&stack0xfffff8b8,"Execute NOTEPAD on the script right now.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff8bc,"Cancel");
      iVar8 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)&stack0xfffff8c0,&DAT_031089e8,-1,0);
      if (iVar8 == 0) break;
      if (iVar8 == 1) {
        core_script_cpp_CScript_FreeSomething1_FUN_00559870();
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff8c8,0,(uint)in_stack_fffff8c8,(uint)in_stack_fffff8cc,
                   (uint)in_stack_fffff8d0,(uint)in_stack_fffff8d4,(uint)in_stack_fffff8d8);
        return 1;
      }
      if (iVar8 != 2) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff8c4,0,(uint)in_stack_fffff8c4,(uint)in_stack_fffff8c8,
                   (uint)in_stack_fffff8cc,(uint)in_stack_fffff8d0,(uint)in_stack_fffff8d4);
        return 0;
      }
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"Note: This only works in NT.\nWhen you are done editing the script, close notepad\nand ALT-TAB back to Nocturne.\nThen you can try to reload the script.");
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_8c,"start notepad world\\%s");
      in_stack_fffff8c4 = (CStrList_vtable *)0x55a249;
      crt_stdlib_c_system_FUN_00602130(acStack_88);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      in_stack_fffff8cc = (CStrList_vtable *)&stack0xfffff8d4;
      in_stack_fffff8d0 = (CStrList_vtable *)0x0;
      in_stack_fffff8c8 = (CStrList_vtable *)0x55a25c;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff8d4,0,(uint)in_stack_fffff8d4,(uint)in_stack_fffff8d8,
                 (uint)in_stack_fffff8dc,(uint)in_stack_fffff8e0,(uint)in_stack_fffff8e4);
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffff8c4,0,(uint)in_stack_fffff8c4,(uint)in_stack_fffff8c8,
               (uint)in_stack_fffff8cc,(uint)in_stack_fffff8d0,(uint)in_stack_fffff8d4);
  } while( true );
}


// Assembly code:
// 00559f80: PUSH EBX
//   Label: core_script.cpp_CScript_ScriptErrorStartNotepad_FUN_00559f80
// 00559f81: PUSH ESI
// 00559f82: PUSH EDI
// 00559f83: PUSH EBP
// 00559f84: SUB ESP,0x780
// 00559f8a: MOV EBP,dword ptr [ESP + 0x794]
//   XREF to: Stack[0x4] (READ)
// 00559f91: LEA EAX,[EBP + 0x38]
// 00559f94: MOV dword ptr [ESP + 0x778],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00559f9b: PUSH EBP
//   Label: LAB_00559f9b
// 00559f9c: CALL core_script.cpp_CScript_FreeSomething1_FUN_00559870
//   XREF to: 00559870 (UNCONDITIONAL_CALL)
// 00559fa1: ADD ESP,0x4
// 00559fa4: MOV EDX,dword ptr [ESP + 0x798]
//   XREF to: Stack[0x8] (READ)
// 00559fab: PUSH EDX
// 00559fac: PUSH 0x6417af
//   XREF to: 006417af (DATA)
// 00559fb1: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00559fb6: MOV EBX,EAX
// 00559fb8: ADD ESP,0x8
// 00559fbb: TEST EAX,EAX
// 00559fbd: JG 0x00559fd1
//   XREF to: 00559fd1 (CONDITIONAL_JUMP)
// 00559fbf: MOV ESI,0x1
//   Label: LAB_00559fbf
// 00559fc4: MOV EAX,ESI
// 00559fc6: ADD ESP,0x780
// 00559fcc: POP EBP
// 00559fcd: POP EDI
// 00559fce: POP ESI
// 00559fcf: POP EBX
// 00559fd0: RET
// 00559fd1: PUSH 0x0
//   Label: LAB_00559fd1
// 00559fd3: LEA EAX,[ESP + 0x5ac]
//   XREF to: Stack[-0x1e8] (DATA)
// 00559fda: PUSH EAX
// 00559fdb: PUSH 0x0
// 00559fdd: PUSH 0x0
// 00559fdf: MOV ECX,dword ptr [ESP + 0x7a8]
//   XREF to: Stack[0x8] (READ)
// 00559fe6: PUSH ECX
// 00559fe7: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 00559fec: ADD ESP,0x14
// 00559fef: MOV ESI,0x6417b5
//   XREF to: 006417b5 (DATA)
// 00559ff4: LEA EDI,[ESP + 0x5a8]
//   XREF to: Stack[-0x1e8] (DATA)
// 00559ffb: PUSH EDI
// 00559ffc: SUB ECX,ECX
// 00559ffe: DEC ECX
// 00559fff: MOV AL,0x0
// 0055a001: SCASB.REPNE ES:EDI
// 0055a003: DEC EDI
// 0055a004: MOV AL,byte ptr [ESI]
//   Label: LAB_0055a004
//   XREF to: 006417b5 (READ)
//   XREF to: 006417b7 (READ)
// 0055a006: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x1e8] (DATA)
// 0055a008: CMP AL,0x0
// 0055a00a: JZ 0x0055a01c
//   XREF to: 0055a01c (CONDITIONAL_JUMP)
// 0055a00c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006417b6 (READ)
//   XREF to: 006417b8 (READ)
// 0055a00f: ADD ESI,0x2
// 0055a012: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x1e7] (WRITE)
// 0055a015: ADD EDI,0x2
// 0055a018: CMP AL,0x0
// 0055a01a: JNZ 0x0055a004
//   XREF to: 0055a004 (CONDITIONAL_JUMP)
// 0055a01c: POP EDI
//   Label: LAB_0055a01c
// 0055a01d: LEA EAX,[ESP + 0x5a8]
//   XREF to: Stack[-0x1e8] (DATA)
// 0055a024: PUSH EAX
// 0055a025: PUSH EBP
// 0055a026: CALL core_script.cpp_CScript_dbLoad_FUN_005603c0
//   XREF to: 005603c0 (UNCONDITIONAL_CALL)
// 0055a02b: ADD ESP,0x8
// 0055a02e: PUSH 0x6417ba
//   XREF to: 006417ba (DATA)
// 0055a033: MOV ESI,dword ptr [ESP + 0x79c]
//   XREF to: Stack[0x8] (READ)
// 0055a03a: PUSH ESI
// 0055a03b: PUSH 0x6417bd
//   XREF to: 006417bd (DATA)
// 0055a040: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0055a045: ADD ESP,0xc
// 0055a048: MOV ESI,EAX
// 0055a04a: TEST EAX,EAX
// 0055a04c: JZ 0x00559fbf
//   XREF to: 00559fbf (CONDITIONAL_JUMP)
// 0055a052: PUSH EAX
// 0055a053: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 0055a058: ADD ESP,0x4
// 0055a05b: LEA EDI,[EBX + EAX*0x1]
// 0055a05e: MOV dword ptr [ESP + 0x77c],0x1
//   XREF to: Stack[-0x14] (WRITE)
// 0055a069: XOR EBX,EBX
//   Label: LAB_0055a069
// 0055a06b: PUSH ESI
//   Label: LAB_0055a06b
// 0055a06c: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 0055a071: ADD ESP,0x4
// 0055a074: CMP EAX,EDI
// 0055a076: JL 0x0055a264
//   XREF to: 0055a264 (CONDITIONAL_JUMP)
// 0055a07c: XOR EAX,EAX
// 0055a07e: MOV dword ptr [ESP + 0x77c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0055a085: XOR AH,AH
//   Label: LAB_0055a085
// 0055a087: MOV byte ptr [ESP + EBX*0x1 + 0x3a8],AH
// 0055a08e: LEA EAX,[ESP + 0x3a8]
//   XREF to: Stack[-0x3e8] (DATA)
// 0055a095: PUSH EAX
// 0055a096: MOV EDX,dword ptr [ESP + 0x77c]
//   XREF to: Stack[-0x18] (READ)
// 0055a09d: PUSH EDX
// 0055a09e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0055a0a3: ADD ESP,0x8
// 0055a0a6: CMP dword ptr [ESP + 0x77c],0x0
//   XREF to: Stack[-0x14] (READ)
// 0055a0ae: JNZ 0x0055a069
//   XREF to: 0055a069 (CONDITIONAL_JUMP)
// 0055a0b0: PUSH 0x32d
// 0055a0b5: PUSH 0x64181b
//   XREF to: 0064181b (DATA)
// 0055a0ba: PUSH ESI
// 0055a0bb: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0055a0c0: ADD ESP,0xc
// 0055a0c3: PUSH EBP
// 0055a0c4: CALL core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
//   XREF to: 0055a370 (UNCONDITIONAL_CALL)
// 0055a0c9: ADD ESP,0x4
// 0055a0cc: PUSH 0x336
// 0055a0d1: PUSH 0x64182e
//   XREF to: 0064182e (DATA)
// 0055a0d6: PUSH 0x641841
//   XREF to: 00641841 (DATA)
// 0055a0db: PUSH 0x0
// 0055a0dd: PUSH 0x641844
//   XREF to: 00641844 (DATA)
// 0055a0e2: XOR EDI,EDI
// 0055a0e4: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0055a0e9: ADD ESP,0x14
// 0055a0ec: MOV EBX,dword ptr [EBP + 0x30]
// 0055a0ef: MOV ESI,EAX
// 0055a0f1: TEST EBX,EBX
// 0055a0f3: JLE 0x0055a11c
//   XREF to: 0055a11c (CONDITIONAL_JUMP)
// 0055a0f5: XOR EBX,EBX
// 0055a0f7: MOV EAX,dword ptr [EBP + 0x34]
//   Label: LAB_0055a0f7
// 0055a0fa: MOV EDX,dword ptr [EBX + EAX*0x1 + 0x4]
// 0055a0fe: PUSH EDX
// 0055a0ff: MOV ECX,dword ptr [EBX + EAX*0x1]
// 0055a102: PUSH ECX
// 0055a103: PUSH 0x64184f
//   XREF to: 0064184f (DATA)
// 0055a108: PUSH ESI
// 0055a109: ADD EBX,0x8
// 0055a10c: INC EDI
// 0055a10d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0055a112: MOV EAX,dword ptr [EBP + 0x30]
// 0055a115: ADD ESP,0x10
// 0055a118: CMP EDI,EAX
// 0055a11a: JL 0x0055a0f7
//   XREF to: 0055a0f7 (CONDITIONAL_JUMP)
// 0055a11c: PUSH 0x33a
//   Label: LAB_0055a11c
// 0055a121: PUSH 0x641859
//   XREF to: 00641859 (DATA)
// 0055a126: PUSH ESI
// 0055a127: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0055a12c: ADD ESP,0xc
// 0055a12f: CMP dword ptr [ESP + 0x79c],0x0
//   XREF to: Stack[0xc] (READ)
// 0055a137: JNZ 0x0055a34a
//   XREF to: 0055a34a (CONDITIONAL_JUMP)
// 0055a13d: LEA EAX,[ESP + 0x774]
//   XREF to: Stack[-0x1c] (DATA)
// 0055a144: PUSH EAX
// 0055a145: PUSH EBP
// 0055a146: CALL core_script.cpp_CScript_StepThroughWholeScript_FUN_0055a4b0
//   XREF to: 0055a4b0 (UNCONDITIONAL_CALL)
// 0055a14b: ADD ESP,0x8
// 0055a14e: PUSH 0x310f4b0
//   XREF to: 0310f4b0 (DATA)
// 0055a153: MOV ESI,EAX
// 0055a155: MOV EBX,EAX
// 0055a157: CALL shape_edittool.cpp_CPickList_clear_FUN_004a5770
//   XREF to: 004a5770 (UNCONDITIONAL_CALL)
// 0055a15c: ADD ESP,0x4
// 0055a15f: TEST ESI,ESI
// 0055a161: JZ 0x0055a34a
//   XREF to: 0055a34a (CONDITIONAL_JUMP)
// 0055a167: MOV EDI,0x31089e8
//   XREF to: 031089e8 (DATA)
// 0055a16c: XOR ESI,ESI
// 0055a16e: MOV EAX,dword ptr [ESP + 0x774]
//   Label: LAB_0055a16e
//   XREF to: Stack[-0x1c] (READ)
// 0055a175: PUSH EBX
// 0055a176: INC EAX
// 0055a177: PUSH EAX
// 0055a178: MOV ECX,dword ptr [ESP + 0x7a0]
//   XREF to: Stack[0x8] (READ)
// 0055a17f: PUSH ECX
// 0055a180: PUSH 0x64186c
//   XREF to: 0064186c (DATA)
// 0055a185: PUSH EDI
//   XREF to: 031089e8 (DATA)
// 0055a186: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0055a18b: ADD ESP,0x14
// 0055a18e: MOV EAX,ESP
// 0055a190: PUSH EAX
// 0055a191: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0055a196: ADD ESP,0x4
// 0055a199: PUSH 0x64188b
//   XREF to: 0064188b (DATA)
// 0055a19e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x790] (DATA)
// 0055a1a2: PUSH EAX
// 0055a1a3: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0055a1a8: ADD ESP,0x8
// 0055a1ab: PUSH 0x6418d5
//   XREF to: 006418d5 (DATA)
// 0055a1b0: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x790] (DATA)
// 0055a1b4: PUSH EAX
// 0055a1b5: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0055a1ba: ADD ESP,0x8
// 0055a1bd: PUSH 0x6418fc
//   XREF to: 006418fc (DATA)
// 0055a1c2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x790] (DATA)
// 0055a1c6: PUSH EAX
// 0055a1c7: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0055a1cc: ADD ESP,0x8
// 0055a1cf: PUSH 0x641925
//   XREF to: 00641925 (DATA)
// 0055a1d4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x790] (DATA)
// 0055a1d8: PUSH EAX
// 0055a1d9: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0055a1de: ADD ESP,0x8
// 0055a1e1: PUSH ESI
// 0055a1e2: PUSH -0x1
// 0055a1e4: PUSH EDI
//   XREF to: 031089e8 (DATA)
// 0055a1e5: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x790] (DATA)
// 0055a1e9: PUSH EAX
// 0055a1ea: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0055a1ef: ADD ESP,0x10
// 0055a1f2: TEST EAX,EAX
// 0055a1f4: JZ 0x0055a337
//   XREF to: 0055a337 (CONDITIONAL_JUMP)
// 0055a1fa: CMP EAX,0x1
// 0055a1fd: JZ 0x0055a2f0
//   XREF to: 0055a2f0 (CONDITIONAL_JUMP)
// 0055a203: CMP EAX,0x2
// 0055a206: JNZ 0x0055a31a
//   XREF to: 0055a31a (CONDITIONAL_JUMP)
// 0055a20c: PUSH 0x64192c
//   XREF to: 0064192c (DATA)
// 0055a211: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0055a216: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 0055a217: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 0055a21c: ADD ESP,0x8
// 0055a21f: MOV EDX,dword ptr [ESP + 0x798]
//   XREF to: Stack[0x8] (READ)
// 0055a226: PUSH EDX
// 0055a227: PUSH 0x6419c2
//   XREF to: 006419c2 (DATA)
// 0055a22c: LEA EAX,[ESP + 0x6b4]
//   XREF to: Stack[-0xe4] (DATA)
// 0055a233: PUSH EAX
// 0055a234: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0055a239: ADD ESP,0xc
// 0055a23c: LEA EAX,[ESP + 0x6ac]
//   XREF to: Stack[-0xe4] (DATA)
// 0055a243: PUSH EAX
// 0055a244: CALL crt_stdlib.c_system_FUN_00602130
//   XREF to: 00602130 (UNCONDITIONAL_CALL)
// 0055a249: ADD ESP,0x4
// 0055a24c: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0055a251: PUSH ESI
// 0055a252: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x790] (DATA)
// 0055a256: PUSH EAX
// 0055a257: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0055a25c: ADD ESP,0x8
// 0055a25f: JMP 0x0055a16e
//   XREF to: 0055a16e (UNCONDITIONAL_JUMP)
// 0055a264: PUSH ESI
//   Label: LAB_0055a264
// 0055a265: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0055a26a: ADD ESP,0x4
// 0055a26d: MOV EDX,EAX
// 0055a26f: CMP EAX,-0x1
// 0055a272: JZ 0x0055a085
//   XREF to: 0055a085 (CONDITIONAL_JUMP)
// 0055a278: CMP EAX,0xd
// 0055a27b: JZ 0x0055a06b
//   XREF to: 0055a06b (CONDITIONAL_JUMP)
// 0055a281: CMP EAX,0xa
// 0055a284: JZ 0x0055a085
//   XREF to: 0055a085 (CONDITIONAL_JUMP)
// 0055a28a: TEST EAX,EAX
// 0055a28c: JZ 0x0055a29b
//   XREF to: 0055a29b (CONDITIONAL_JUMP)
// 0055a28e: INC EBX
// 0055a28f: MOV byte ptr [ESP + EBX*0x1 + 0x3a7],DL
//   XREF to: Stack[-0x3e8] (DATA)
// 0055a296: JMP 0x0055a06b
//   XREF to: 0055a06b (UNCONDITIONAL_JUMP)
// 0055a29b: PUSH 0x31b
//   Label: LAB_0055a29b
// 0055a2a0: PUSH 0x6417c3
//   XREF to: 006417c3 (DATA)
// 0055a2a5: PUSH ESI
// 0055a2a6: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0055a2ab: ADD ESP,0xc
// 0055a2ae: LEA EAX,[EBP + 0x38]
// 0055a2b1: PUSH EAX
// 0055a2b2: CALL shape_edittool.cpp_getFontBitmapCount_FUN_004a6ed0
//   XREF to: 004a6ed0 (UNCONDITIONAL_CALL)
// 0055a2b7: ADD ESP,0x4
// 0055a2ba: INC EAX
// 0055a2bb: PUSH EAX
// 0055a2bc: MOV EDX,dword ptr [ESP + 0x79c]
//   XREF to: Stack[0x8] (READ)
// 0055a2c3: PUSH EDX
// 0055a2c4: PUSH 0x6417d6
//   XREF to: 006417d6 (DATA)
// 0055a2c9: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0055a2cf: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0055a2d0: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0055a2d5: ADD ESP,0x10
// 0055a2d8: PUSH EBP
// 0055a2d9: XOR ESI,ESI
// 0055a2db: CALL core_script.cpp_CScript_FreeSomething1_FUN_00559870
//   XREF to: 00559870 (UNCONDITIONAL_CALL)
// 0055a2e0: ADD ESP,0x4
// 0055a2e3: MOV EAX,ESI
// 0055a2e5: ADD ESP,0x780
// 0055a2eb: POP EBP
// 0055a2ec: POP EDI
// 0055a2ed: POP ESI
// 0055a2ee: POP EBX
// 0055a2ef: RET
// 0055a2f0: PUSH EBP
//   Label: LAB_0055a2f0
// 0055a2f1: CALL core_script.cpp_CScript_FreeSomething1_FUN_00559870
//   XREF to: 00559870 (UNCONDITIONAL_CALL)
// 0055a2f6: ADD ESP,0x4
// 0055a2f9: PUSH 0x0
// 0055a2fb: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x790] (DATA)
// 0055a2ff: PUSH EAX
// 0055a300: MOV ESI,0x1
// 0055a305: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0055a30a: ADD ESP,0x8
// 0055a30d: MOV EAX,ESI
// 0055a30f: ADD ESP,0x780
// 0055a315: POP EBP
// 0055a316: POP EDI
// 0055a317: POP ESI
// 0055a318: POP EBX
// 0055a319: RET
// 0055a31a: XOR ESI,ESI
//   Label: LAB_0055a31a
// 0055a31c: PUSH ESI
// 0055a31d: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x790] (DATA)
// 0055a321: PUSH EAX
// 0055a322: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0055a327: ADD ESP,0x8
// 0055a32a: MOV EAX,ESI
// 0055a32c: ADD ESP,0x780
// 0055a332: POP EBP
// 0055a333: POP EDI
// 0055a334: POP ESI
// 0055a335: POP EBX
// 0055a336: RET
// 0055a337: PUSH EAX
//   Label: LAB_0055a337
// 0055a338: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x790] (DATA)
// 0055a33c: PUSH EAX
// 0055a33d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0055a342: ADD ESP,0x8
// 0055a345: JMP 0x00559f9b
//   XREF to: 00559f9b (UNCONDITIONAL_JUMP)
// 0055a34a: PUSH EBP
//   Label: LAB_0055a34a
// 0055a34b: MOV ESI,0x1
// 0055a350: CALL core_script.cpp_FUN_0055a540
//   XREF to: 0055a540 (UNCONDITIONAL_CALL)
// 0055a355: ADD ESP,0x4
// 0055a358: MOV EAX,ESI
// 0055a35a: ADD ESP,0x780
// 0055a360: POP EBP
// 0055a361: POP EDI
// 0055a362: POP ESI
// 0055a363: POP EBX
// 0055a364: RET
