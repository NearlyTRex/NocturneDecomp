// Name: core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60
// Address: 00537f60
// Address Range: [[00537f60, 005381de]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60()
// Cross-references:
//   core_msnedit.cpp_CDemonMission_showEditorMenu_FUN_005381e0 (005381e0) at 00538807 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Can_t_find_s_s_to_copy_t_0063bc4b
//   TerminatedCString s_rb_0063bc6d
//   TerminatedCString s_core_msnedit_cpp_0063bc70
//   TerminatedCString s_Can_t_open_world_s_0063bc84
//   TerminatedCString s_wb_0063bc98
//   TerminatedCString s_core_msnedit_cpp_0063bc9b
//   TerminatedCString s_Can_t_create_world_s_0063bcaf
//   TerminatedCString s_core_msnedit_cpp_0063bcc5
//   TerminatedCString s_Error_reading_world_s_0063bcd9
//   TerminatedCString s_core_msnedit_cpp_0063bcf0
//   TerminatedCString s_Error_writing_world_s_0063bd04
//   TerminatedCString s_core_msnedit_cpp_0063bd1b
//   TerminatedCString s_core_msnedit_cpp_0063bd2f
//   TerminatedCString s_Mission_and_script_saved_0063bd59
//   TerminatedCString s_txt_0063bd72
//   TerminatedCString s_txt_0063bd76
//   TerminatedCString s_world_0063bd7a
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fputc_FUN_006007a0
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_OpenAndCreateWorld(undefined4 param_1, undefined4 param_2)
    */

void core_msnedit_cpp_OpenAndCreateWorld_FUN_00537f60(void)

{
  char cVar1;
  int iVar2;
  FILE *file_ptr;
  FILE *file_ptr_00;
  int character;
  BADSPACEBASE *in_ESP;
  char *full_path;
  int in_stack_00000004;
  char *in_stack_00000008;
  char *in_stack_00000010;
  FILE *in_stack_fffffc0c;
  char acStack_30c [8];
  char acStack_304 [4];
  char acStack_300 [236];
  char acStack_214 [16];
  char acStack_204 [236];
  char local_118 [16];
  char acStack_108 [248];
  
  full_path = (char *)(in_stack_00000004 + 0x44);
  engine_dosio_c_splitPath_FUN_00481f20(full_path,(char *)0x0,(char *)0x0,local_118,(char *)0x0);
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000008,(char *)0x0,(char *)0x0,acStack_214,(char *)0x0);
  do {
    cVar1 = *in_stack_00000008;
    *full_path = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000008[1];
    in_stack_00000008 = in_stack_00000008 + 2;
    full_path[1] = cVar1;
    full_path = full_path + 2;
  } while (cVar1 != '\0');
  core_msnedit_cpp_CheckWorldMountedAndSave_FUN_0053d190();
  shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
            (g_CEditorToolsPtr,"Mission and script saved");
  engine_dosio_c_makePath_FUN_00481f50
            (acStack_30c,(char *)0x0,(char *)0x0,acStack_108,"txt");
  engine_dosio_c_makePath_FUN_00481f50
            (&stack0xfffffbf4,(char *)0x0,(char *)0x0,acStack_204,"txt");
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880("world",acStack_304);
  if (-1 < iVar2) {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50("world",acStack_300,"rb");
    if (file_ptr == (FILE *)0x0) {
      g_CurrentLineNumber = 0x2eb;
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open world\\%s");
    }
    file_ptr_00 = engine_dosio_c_getFile_FUN_00481a50
                            (in_stack_00000010,&stack0xfffffbf8,"wb");
    if (file_ptr_00 == (FILE *)0x0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2ed;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create world\\%s");
    }
    for (; 0 < iVar2; iVar2 = iVar2 + -1) {
      character = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
      crt_stdio_c_fputc_FUN_006007a0(character,in_stack_fffffc0c);
    }
    if ((file_ptr->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f2;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading world\\%s");
    }
    if ((file_ptr_00->_flag & 0x20) != 0) {
      g_CurrentFilename = "..\\core\\msnedit.cpp";
      g_CurrentLineNumber = 0x2f3;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing world\\%s");
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\msnedit.cpp",0x2f4);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\msnedit.cpp",0x2f5);
    shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
              (g_CEditorToolsPtr,"Copied %s\\%s to %s\\%s");
    return;
  }
  shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
            (g_CEditorToolsPtr,"Can't find %s\\%s to copy to %s\\%s","world",acStack_300);
  return;
}


// Assembly code:
// 00537f60: PUSH EBX
//   Label: core_msnedit.cpp_OpenAndCreateWorld_FUN_00537f60
// 00537f61: PUSH ESI
// 00537f62: PUSH EDI
// 00537f63: PUSH EBP
// 00537f64: SUB ESP,0x410
// 00537f6a: MOV EBP,dword ptr [ESP + 0x424]
//   XREF to: Stack[0x4] (READ)
// 00537f71: MOV EBX,dword ptr [ESP + 0x428]
//   XREF to: Stack[0x8] (READ)
// 00537f78: PUSH 0x0
// 00537f7a: LEA EAX,[ESP + 0x30c]
//   XREF to: Stack[-0x118] (DATA)
// 00537f81: PUSH EAX
// 00537f82: PUSH 0x0
// 00537f84: PUSH 0x0
// 00537f86: LEA EDI,[EBP + 0x44]
// 00537f89: PUSH EDI
// 00537f8a: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00537f8f: ADD ESP,0x14
// 00537f92: PUSH 0x0
// 00537f94: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x218] (DATA)
// 00537f9b: PUSH EAX
// 00537f9c: PUSH 0x0
// 00537f9e: PUSH 0x0
// 00537fa0: PUSH EBX
// 00537fa1: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 00537fa6: ADD ESP,0x14
// 00537fa9: MOV ESI,EBX
// 00537fab: PUSH EDI
// 00537fac: MOV AL,byte ptr [ESI]
//   Label: LAB_00537fac
// 00537fae: MOV byte ptr [EDI],AL
// 00537fb0: CMP AL,0x0
// 00537fb2: JZ 0x00537fc4
//   XREF to: 00537fc4 (CONDITIONAL_JUMP)
// 00537fb4: MOV AL,byte ptr [ESI + 0x1]
// 00537fb7: ADD ESI,0x2
// 00537fba: MOV byte ptr [EDI + 0x1],AL
// 00537fbd: ADD EDI,0x2
// 00537fc0: CMP AL,0x0
// 00537fc2: JNZ 0x00537fac
//   XREF to: 00537fac (CONDITIONAL_JUMP)
// 00537fc4: POP EDI
//   Label: LAB_00537fc4
// 00537fc5: PUSH EBX
// 00537fc6: PUSH EBP
// 00537fc7: CALL core_msnedit.cpp_CheckWorldMountedAndSave_FUN_0053d190
//   XREF to: 0053d190 (UNCONDITIONAL_CALL)
// 00537fcc: ADD ESP,0x8
// 00537fcf: PUSH 0x63bd59
//   XREF to: 0063bd59 (DATA)
// 00537fd4: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00537fda: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00537fdb: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 00537fe0: ADD ESP,0x8
// 00537fe3: PUSH 0x63bd72
//   XREF to: 0063bd72 (DATA)
// 00537fe8: LEA EAX,[ESP + 0x30c]
//   XREF to: Stack[-0x118] (DATA)
// 00537fef: PUSH EAX
// 00537ff0: PUSH 0x0
// 00537ff2: PUSH 0x0
// 00537ff4: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x31c] (DATA)
// 00537ffb: PUSH EAX
// 00537ffc: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 00538001: ADD ESP,0x14
// 00538004: PUSH 0x63bd76
//   XREF to: 0063bd76 (DATA)
// 00538009: LEA EAX,[ESP + 0x20c]
//   XREF to: Stack[-0x218] (DATA)
// 00538010: PUSH EAX
// 00538011: PUSH 0x0
// 00538013: PUSH 0x0
// 00538015: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x420] (DATA)
// 00538019: PUSH EAX
// 0053801a: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0053801f: ADD ESP,0x14
// 00538022: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x31c] (DATA)
// 00538029: PUSH EAX
// 0053802a: MOV ECX,0x63bd7a
//   XREF to: 0063bd7a (PARAM)
// 0053802f: LEA EBP,[ESP + 0x4]
//   XREF to: Stack[-0x420] (DATA)
// 00538033: PUSH ECX
//   XREF to: 0063bd7a (DATA)
// 00538034: MOV dword ptr [ESP + 0x410],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0053803b: MOV dword ptr [ESP + 0x414],ECX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 0063bd7a (DATA)
// 00538042: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00538047: ADD ESP,0x8
// 0053804a: MOV EBX,EAX
// 0053804c: TEST EAX,EAX
// 0053804e: JL 0x005380d4
//   XREF to: 005380d4 (CONDITIONAL_JUMP)
// 00538054: PUSH 0x63bc6d
//   XREF to: 0063bc6d (DATA)
// 00538059: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x31c] (DATA)
// 00538060: PUSH EAX
// 00538061: PUSH 0x63bd7a
//   XREF to: 0063bd7a (DATA)
// 00538066: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0053806b: ADD ESP,0xc
// 0053806e: MOV ESI,EAX
// 00538070: TEST EAX,EAX
// 00538072: JNZ 0x0053809e
//   XREF to: 0053809e (CONDITIONAL_JUMP)
// 00538074: MOV dword ptr [0x02f0ca4c],0x2eb
//   XREF to: 02f0ca4c (WRITE)
// 0053807e: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x31c] (DATA)
// 00538085: PUSH EAX
// 00538086: MOV EDI,0x63bc70
//   XREF to: 0063bc70 (DATA)
// 0053808b: PUSH 0x63bc84
//   XREF to: 0063bc84 (DATA)
// 00538090: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 00538096: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053809b: ADD ESP,0x8
// 0053809e: PUSH 0x63bc98
//   Label: LAB_0053809e
//   XREF to: 0063bc98 (DATA)
// 005380a3: PUSH EBP
// 005380a4: MOV EDX,dword ptr [ESP + 0x414]
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 0063bd7a (PARAM)
// 005380ab: PUSH EDX
//   XREF to: 0063bd7a (DATA)
// 005380ac: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 005380b1: ADD ESP,0xc
// 005380b4: MOV EDI,EAX
// 005380b6: TEST EAX,EAX
// 005380b8: JZ 0x00538108
//   XREF to: 00538108 (CONDITIONAL_JUMP)
// 005380ba: TEST EBX,EBX
//   Label: LAB_005380ba
// 005380bc: JLE 0x0053812d
//   XREF to: 0053812d (CONDITIONAL_JUMP)
// 005380be: PUSH EDI
// 005380bf: PUSH ESI
// 005380c0: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005380c5: ADD ESP,0x4
// 005380c8: PUSH EAX
// 005380c9: DEC EBX
// 005380ca: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 005380cf: ADD ESP,0x8
// 005380d2: JMP 0x005380ba
//   XREF to: 005380ba (UNCONDITIONAL_JUMP)
// 005380d4: MOV EAX,ESP
//   Label: LAB_005380d4
// 005380d6: PUSH EAX
// 005380d7: PUSH 0x63bd7a
//   XREF to: 0063bd7a (DATA)
// 005380dc: LEA EAX,[ESP + 0x10c]
//   XREF to: Stack[-0x31c] (DATA)
// 005380e3: PUSH EAX
// 005380e4: PUSH 0x63bd7a
//   XREF to: 0063bd7a (DATA)
// 005380e9: PUSH 0x63bc4b
//   XREF to: 0063bc4b (DATA)
// 005380ee: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005380f4: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 005380f5: CALL shape_edittool.cpp_CEditorTools_showWarning_FUN_0049e6f0
//   XREF to: 0049e6f0 (UNCONDITIONAL_CALL)
// 005380fa: ADD ESP,0x18
// 005380fd: ADD ESP,0x410
// 00538103: POP EBP
// 00538104: POP EDI
// 00538105: POP ESI
// 00538106: POP EBX
// 00538107: RET
// 00538108: PUSH EBP
//   Label: LAB_00538108
// 00538109: MOV ECX,0x63bc9b
//   XREF to: 0063bc9b (PARAM)
// 0053810e: MOV EAX,0x2ed
// 00538113: PUSH 0x63bcaf
//   XREF to: 0063bcaf (DATA)
// 00538118: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0053811e: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00538123: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00538128: ADD ESP,0x8
// 0053812b: JMP 0x005380ba
//   XREF to: 005380ba (UNCONDITIONAL_JUMP)
// 0053812d: TEST byte ptr [ESI + 0xc],0x20
//   Label: LAB_0053812d
// 00538131: JZ 0x0053815e
//   XREF to: 0053815e (CONDITIONAL_JUMP)
// 00538133: MOV EAX,dword ptr [ESP + 0x408]
//   XREF to: Stack[-0x18] (READ)
// 0053813a: PUSH EAX
// 0053813b: MOV ECX,0x63bcc5
//   XREF to: 0063bcc5 (PARAM)
// 00538140: MOV EBX,0x2f2
// 00538145: PUSH 0x63bcd9
//   XREF to: 0063bcd9 (DATA)
// 0053814a: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00538150: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00538156: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0053815b: ADD ESP,0x8
// 0053815e: TEST byte ptr [EDI + 0xc],0x20
//   Label: LAB_0053815e
// 00538162: JZ 0x00538188
//   XREF to: 00538188 (CONDITIONAL_JUMP)
// 00538164: PUSH EBP
// 00538165: MOV EDX,0x63bcf0
//   XREF to: 0063bcf0 (PARAM)
// 0053816a: MOV ECX,0x2f3
// 0053816f: PUSH 0x63bd04
//   XREF to: 0063bd04 (DATA)
// 00538174: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 0053817a: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00538180: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00538185: ADD ESP,0x8
// 00538188: PUSH 0x2f4
//   Label: LAB_00538188
// 0053818d: PUSH 0x63bd1b
//   XREF to: 0063bd1b (DATA)
// 00538192: PUSH ESI
// 00538193: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00538198: ADD ESP,0xc
// 0053819b: PUSH 0x2f5
// 005381a0: PUSH 0x63bd2f
//   XREF to: 0063bd2f (DATA)
// 005381a5: PUSH EDI
// 005381a6: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 005381ab: ADD ESP,0xc
// 005381ae: PUSH EBP
// 005381af: MOV EBX,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x14] (READ)
//   XREF to: 0063bd7a (PARAM)
// 005381b6: PUSH EBX
//   XREF to: 0063bd7a (DATA)
// 005381b7: MOV ESI,dword ptr [ESP + 0x410]
//   XREF to: Stack[-0x18] (READ)
// 005381be: PUSH ESI
// 005381bf: PUSH EBX
//   XREF to: 0063bd7a (DATA)
// 005381c0: PUSH 0x63bd43
//   XREF to: 0063bd43 (DATA)
// 005381c5: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005381cb: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 005381cc: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 005381d1: ADD ESP,0x18
// 005381d4: ADD ESP,0x410
// 005381da: POP EBP
// 005381db: POP EDI
// 005381dc: POP ESI
// 005381dd: POP EBX
// 005381de: RET
