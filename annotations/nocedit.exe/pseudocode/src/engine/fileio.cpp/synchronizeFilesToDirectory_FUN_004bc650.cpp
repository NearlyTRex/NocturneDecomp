// Name: engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
// Address: 004bc650
// Address Range: [[004bc650, 004bc9ee]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650(FILE * file_list_output, char * source_directory, char * file_pattern, char * dest_directory)
// Cross-references:
//   core_fileman.cpp_refreshSoundDirectory_FUN_004be590 (004be590) at 004be5e4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_WARNING_Error_setting_da_00626577
//   TerminatedCString s_s_0062906d
//   TerminatedCString s_engine_fileio_cpp_00629071
//   TerminatedCString s_Can_t_get_info_on_s_00629086
//   TerminatedCString s_Skipping_files_already_i_0062909b
//   TerminatedCString s_engine_fileio_cpp_006290bd
//   TerminatedCString s_rb_006290d2
//   TerminatedCString s_engine_fileio_cpp_006290d5
//   TerminatedCString s_Can_t_open_s_006290ea
//   TerminatedCString s_engine_fileio_cpp_006290f8
//   TerminatedCString s_wb_0062910d
//   TerminatedCString s_engine_fileio_cpp_00629110
//   TerminatedCString s_Can_t_create_s_00629125
//   TerminatedCString s_Copying_s_s_00629135
//   TerminatedCString s_engine_fileio_cpp_00629146
//   TerminatedCString s_Error_reading_s_0062915b
//   TerminatedCString s_engine_fileio_cpp_0062916c
//   TerminatedCString s_Error_writing_s_00629181
//   TerminatedCString s_engine_fileio_cpp_00629192
//   TerminatedCString s_engine_fileio_cpp_006291a7
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fputc_FUN_006007a0
//   engine_dosio.c_copyFileTimestamp_FUN_00481910
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650
          (FILE *file_list_output,char *source_directory,char *file_pattern,char *dest_directory)

{
  char cVar1;
  bool bVar2;
  char *full_path;
  int iVar3;
  FILE *file;
  FILE *file_ptr;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  SFoundFileInfo *pSVar5;
  char *pcVar6;
  uint in_stack_fffff8b8;
  uint uStack_568;
  SFoundFileInfo SStack_564;
  char acStack_350 [4];
  uint uStack_34c;
  char acStack_33c [12];
  char *local_330;
  char local_328 [208];
  char acStack_258 [4];
  char acStack_254 [252];
  char acStack_158 [4];
  char acStack_154 [300];
  undefined4 *puStack_28;
  undefined1 local_24 [8];
  char **ppcStack_1c;
  int index;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20((CStrList *)local_24);
  shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
            ((CStrList *)(local_24 + 4),file_pattern,dest_directory);
  bVar2 = false;
  index = 0;
  if (0 < (int)ppcStack_1c) {
    do {
      full_path = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                            ((CStrList *)&ppcStack_1c,index);
      engine_dosio_c_splitPath_FUN_00481f20
                (full_path,(char *)0x0,(char *)0x0,acStack_258,acStack_158);
      engine_dosio_c_makePath_FUN_00481f50
                ((char *)&SStack_564.timestamp,(char *)0x0,(char *)local_24._4_4_,acStack_254,
                 acStack_154);
      crt_stdio_c_fprintf_FUN_005fe6d0((FILE *)*puStack_28,"%s\n",&SStack_564.container_size);
      pcVar6 = &stack0xfffff888;
      pSVar5 = &SStack_564;
      pcVar4 = full_path;
      do {
        cVar1 = *pcVar4;
        pSVar5->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pSVar5->found_path[1] = cVar1;
        pSVar5 = (SFoundFileInfo *)(pSVar5->found_path + 2);
      } while (cVar1 != '\0');
      pcVar4 = acStack_350;
      do {
        cVar1 = *pcVar4;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_564);
      if (iVar3 == 0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xfe7;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't get info on %s");
      }
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0((SFoundFileInfo *)&stack0xfffff890);
      if ((((iVar3 == 0) || (uStack_34c < SStack_564.found_path._4_4_ - 1)) ||
          (SStack_564.found_path._4_4_ + 1 < uStack_34c)) ||
         (SStack_564.container_size != uStack_568)) {
        file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (full_path,(char *)0x0,"rb","..\\engine\\fileio.cpp",0xff8);
        if (file == (FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0xff9;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s");
        }
        file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (acStack_33c,(char *)0x0,"wb","..\\engine\\fileio.cpp",
                              0xffa);
        if (file_ptr == (FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0xffb;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s");
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Copying %s -> %s");
        while( true ) {
          iVar3 = crt_stdio_c_fgetc_FUN_005fe840(file);
          if (iVar3 == -1) break;
          crt_stdio_c_fputc_FUN_006007a0(iVar3,file_ptr);
        }
        if ((file->_flag & 0x20) != 0) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0x1008;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading %s");
        }
        if ((file_ptr->_flag & 0x20) != 0) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0x1009;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing %s");
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x100d);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0x100e);
        iVar3 = engine_dosio_c_copyFileTimestamp_FUN_00481910(local_328,local_330);
        if (iVar3 == 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)");
          bVar2 = false;
        }
        else {
          bVar2 = false;
        }
      }
      else if (!bVar2) {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Skipping files already in sync...");
        bVar2 = true;
      }
      index = index + 1;
    } while (index < (int)ppcStack_1c);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40((CStrList *)&ppcStack_1c,0,in_stack_fffff8b8);
  return;
}


// Assembly code:
// 004bc650: PUSH EBX
//   Label: engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
// 004bc651: PUSH ESI
// 004bc652: PUSH EDI
// 004bc653: PUSH EBP
// 004bc654: SUB ESP,0x740
// 004bc65a: LEA EAX,[ESP + 0x72c]
//   XREF to: Stack[-0x24] (DATA)
// 004bc661: PUSH EAX
// 004bc662: CALL shape_edittool.cpp_CStrList_ctor_FUN_004a2a20
//   XREF to: 004a2a20 (UNCONDITIONAL_CALL)
// 004bc667: ADD ESP,0x4
// 004bc66a: MOV EDX,dword ptr [ESP + 0x75c]
//   XREF to: Stack[0xc] (READ)
// 004bc671: PUSH EDX
// 004bc672: MOV ECX,dword ptr [ESP + 0x75c]
//   XREF to: Stack[0x8] (READ)
// 004bc679: PUSH ECX
// 004bc67a: LEA EAX,[ESP + 0x734]
//   XREF to: Stack[-0x24] (DATA)
// 004bc681: PUSH EAX
// 004bc682: CALL shape_edittool.cpp_CStrList_populateWithFullPaths_FUN_004a39e0
//   XREF to: 004a39e0 (UNCONDITIONAL_CALL)
// 004bc687: ADD ESP,0xc
// 004bc68a: XOR EBX,EBX
// 004bc68c: MOV EDI,dword ptr [ESP + 0x72c]
//   XREF to: Stack[-0x24] (READ)
// 004bc693: MOV dword ptr [ESP + 0x73c],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004bc69a: TEST EDI,EDI
// 004bc69c: JLE 0x004bc7f0
//   XREF to: 004bc7f0 (CONDITIONAL_JUMP)
// 004bc6a2: MOV ECX,dword ptr [ESP + 0x73c]
//   Label: LAB_004bc6a2
//   XREF to: Stack[-0x14] (READ)
// 004bc6a9: PUSH ECX
// 004bc6aa: LEA EAX,[ESP + 0x730]
//   XREF to: Stack[-0x24] (DATA)
// 004bc6b1: PUSH EAX
// 004bc6b2: CALL shape_edittool.cpp_CStrList_getStringAt_FUN_004a2f70
//   XREF to: 004a2f70 (UNCONDITIONAL_CALL)
// 004bc6b7: MOV ESI,EAX
// 004bc6b9: ADD ESP,0x8
// 004bc6bc: MOV EBP,EAX
// 004bc6be: LEA EAX,[ESP + 0x62c]
//   XREF to: Stack[-0x124] (DATA)
// 004bc6c5: PUSH EAX
// 004bc6c6: LEA EAX,[ESP + 0x530]
//   XREF to: Stack[-0x224] (DATA)
// 004bc6cd: PUSH EAX
// 004bc6ce: PUSH 0x0
// 004bc6d0: PUSH 0x0
// 004bc6d2: PUSH ESI
// 004bc6d3: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004bc6d8: ADD ESP,0x14
// 004bc6db: LEA EAX,[ESP + 0x62c]
//   XREF to: Stack[-0x124] (DATA)
// 004bc6e2: PUSH EAX
// 004bc6e3: LEA EAX,[ESP + 0x530]
//   XREF to: Stack[-0x224] (DATA)
// 004bc6ea: PUSH EAX
// 004bc6eb: MOV EDI,dword ptr [ESP + 0x768]
//   XREF to: Stack[0x10] (READ)
// 004bc6f2: PUSH EDI
// 004bc6f3: PUSH 0x0
// 004bc6f5: LEA EAX,[ESP + 0x438]
//   XREF to: Stack[-0x328] (DATA)
// 004bc6fc: PUSH EAX
// 004bc6fd: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 004bc702: ADD ESP,0x14
// 004bc705: LEA EAX,[ESP + 0x428]
//   XREF to: Stack[-0x328] (DATA)
// 004bc70c: PUSH EAX
// 004bc70d: MOV EAX,dword ptr [ESP + 0x758]
//   XREF to: Stack[0x4] (READ)
// 004bc714: PUSH 0x62906d
//   XREF to: 0062906d (DATA)
// 004bc719: MOV EDX,dword ptr [EAX]
// 004bc71b: PUSH EDX
// 004bc71c: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004bc721: ADD ESP,0xc
// 004bc724: LEA EDI,[ESP + 0x214]
//   XREF to: Stack[-0x53c] (DATA)
// 004bc72b: PUSH EDI
// 004bc72c: MOV AL,byte ptr [ESI]
//   Label: LAB_004bc72c
// 004bc72e: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x53c] (DATA)
// 004bc730: CMP AL,0x0
// 004bc732: JZ 0x004bc744
//   XREF to: 004bc744 (CONDITIONAL_JUMP)
// 004bc734: MOV AL,byte ptr [ESI + 0x1]
// 004bc737: ADD ESI,0x2
// 004bc73a: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x53b] (WRITE)
// 004bc73d: ADD EDI,0x2
// 004bc740: CMP AL,0x0
// 004bc742: JNZ 0x004bc72c
//   XREF to: 004bc72c (CONDITIONAL_JUMP)
// 004bc744: POP EDI
//   Label: LAB_004bc744
// 004bc745: LEA ESI,[ESP + 0x428]
//   XREF to: Stack[-0x328] (DATA)
// 004bc74c: MOV EDI,ESP
// 004bc74e: PUSH EDI
// 004bc74f: MOV AL,byte ptr [ESI]
//   Label: LAB_004bc74f
//   XREF to: Stack[-0x328] (DATA)
// 004bc751: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x750] (DATA)
// 004bc753: CMP AL,0x0
// 004bc755: JZ 0x004bc767
//   XREF to: 004bc767 (CONDITIONAL_JUMP)
// 004bc757: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x327] (READ)
// 004bc75a: ADD ESI,0x2
// 004bc75d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x74f] (WRITE)
// 004bc760: ADD EDI,0x2
// 004bc763: CMP AL,0x0
// 004bc765: JNZ 0x004bc74f
//   XREF to: 004bc74f (CONDITIONAL_JUMP)
// 004bc767: POP EDI
//   Label: LAB_004bc767
// 004bc768: LEA EAX,[ESP + 0x214]
//   XREF to: Stack[-0x53c] (DATA)
// 004bc76f: PUSH EAX
// 004bc770: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004bc775: ADD ESP,0x4
// 004bc778: TEST EAX,EAX
// 004bc77a: JZ 0x004bc80d
//   XREF to: 004bc80d (CONDITIONAL_JUMP)
// 004bc780: MOV EAX,ESP
//   Label: LAB_004bc780
// 004bc782: PUSH EAX
// 004bc783: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004bc788: ADD ESP,0x4
// 004bc78b: TEST EAX,EAX
// 004bc78d: JZ 0x004bc85b
//   XREF to: 004bc85b (CONDITIONAL_JUMP)
// 004bc793: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x544] (READ)
// 004bc79a: MOV EDI,dword ptr [ESP + 0x420]
//   XREF to: Stack[-0x330] (READ)
// 004bc7a1: DEC EAX
// 004bc7a2: CMP EAX,EDI
// 004bc7a4: JA 0x004bc85b
//   XREF to: 004bc85b (CONDITIONAL_JUMP)
// 004bc7aa: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x544] (READ)
// 004bc7b1: INC EAX
// 004bc7b2: CMP EAX,EDI
// 004bc7b4: JC 0x004bc85b
//   XREF to: 004bc85b (CONDITIONAL_JUMP)
// 004bc7ba: MOV EAX,dword ptr [ESP + 0x418]
//   XREF to: Stack[-0x338] (READ)
// 004bc7c1: CMP EAX,dword ptr [ESP + 0x204]
//   XREF to: Stack[-0x54c] (READ)
// 004bc7c8: JNZ 0x004bc85b
//   XREF to: 004bc85b (CONDITIONAL_JUMP)
// 004bc7ce: TEST EBX,EBX
// 004bc7d0: JZ 0x004bc83d
//   XREF to: 004bc83d (CONDITIONAL_JUMP)
// 004bc7d2: MOV EBP,dword ptr [ESP + 0x73c]
//   Label: LAB_004bc7d2
//   XREF to: Stack[-0x14] (READ)
// 004bc7d9: INC EBP
// 004bc7da: MOV EDX,dword ptr [ESP + 0x72c]
//   XREF to: Stack[-0x24] (READ)
// 004bc7e1: MOV dword ptr [ESP + 0x73c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004bc7e8: CMP EBP,EDX
// 004bc7ea: JL 0x004bc6a2
//   XREF to: 004bc6a2 (CONDITIONAL_JUMP)
// 004bc7f0: PUSH 0x0
//   Label: LAB_004bc7f0
// 004bc7f2: LEA EAX,[ESP + 0x730]
//   XREF to: Stack[-0x24] (DATA)
// 004bc7f9: PUSH EAX
// 004bc7fa: CALL shape_edittool.cpp_CStrList_dtor_FUN_004a2a40
//   XREF to: 004a2a40 (UNCONDITIONAL_CALL)
// 004bc7ff: ADD ESP,0x8
// 004bc802: ADD ESP,0x740
// 004bc808: POP EBP
// 004bc809: POP EDI
// 004bc80a: POP ESI
// 004bc80b: POP EBX
// 004bc80c: RET
// 004bc80d: LEA EAX,[ESP + 0x214]
//   Label: LAB_004bc80d
//   XREF to: Stack[-0x53c] (DATA)
// 004bc814: PUSH EAX
// 004bc815: MOV ECX,0x629071
//   XREF to: 00629071 (PARAM)
// 004bc81a: MOV ESI,0xfe7
// 004bc81f: PUSH 0x629086
//   XREF to: 00629086 (DATA)
// 004bc824: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004bc82a: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004bc830: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bc835: ADD ESP,0x8
// 004bc838: JMP 0x004bc780
//   XREF to: 004bc780 (UNCONDITIONAL_JUMP)
// 004bc83d: PUSH 0x62909b
//   Label: LAB_004bc83d
//   XREF to: 0062909b (DATA)
// 004bc842: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004bc848: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004bc849: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bc84e: MOV EBX,0x1
// 004bc853: ADD ESP,0x8
// 004bc856: JMP 0x004bc7d2
//   XREF to: 004bc7d2 (UNCONDITIONAL_JUMP)
// 004bc85b: PUSH 0xff8
//   Label: LAB_004bc85b
// 004bc860: PUSH 0x6290bd
//   XREF to: 006290bd (DATA)
// 004bc865: PUSH 0x6290d2
//   XREF to: 006290d2 (DATA)
// 004bc86a: PUSH 0x0
// 004bc86c: PUSH EBP
// 004bc86d: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004bc872: ADD ESP,0x14
// 004bc875: MOV ESI,EAX
// 004bc877: TEST EAX,EAX
// 004bc879: JNZ 0x004bc89f
//   XREF to: 004bc89f (CONDITIONAL_JUMP)
// 004bc87b: PUSH EBP
// 004bc87c: MOV EBX,0x6290d5
//   XREF to: 006290d5 (PARAM)
// 004bc881: MOV EDI,0xff9
// 004bc886: PUSH 0x6290ea
//   XREF to: 006290ea (DATA)
// 004bc88b: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004bc891: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004bc897: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bc89c: ADD ESP,0x8
// 004bc89f: PUSH 0xffa
//   Label: LAB_004bc89f
// 004bc8a4: PUSH 0x6290f8
//   XREF to: 006290f8 (DATA)
// 004bc8a9: PUSH 0x62910d
//   XREF to: 0062910d (DATA)
// 004bc8ae: PUSH 0x0
// 004bc8b0: LEA EAX,[ESP + 0x438]
//   XREF to: Stack[-0x328] (DATA)
// 004bc8b7: PUSH EAX
// 004bc8b8: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004bc8bd: ADD ESP,0x14
// 004bc8c0: MOV EBX,EAX
// 004bc8c2: TEST EAX,EAX
// 004bc8c4: JZ 0x004bc8fd
//   XREF to: 004bc8fd (CONDITIONAL_JUMP)
// 004bc8c6: LEA EAX,[ESP + 0x428]
//   Label: LAB_004bc8c6
//   XREF to: Stack[-0x328] (DATA)
// 004bc8cd: PUSH EAX
// 004bc8ce: PUSH EBP
// 004bc8cf: PUSH 0x629135
//   XREF to: 00629135 (DATA)
// 004bc8d4: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004bc8da: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bc8db: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004bc8e0: ADD ESP,0x10
// 004bc8e3: PUSH ESI
//   Label: LAB_004bc8e3
// 004bc8e4: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004bc8e9: ADD ESP,0x4
// 004bc8ec: CMP EAX,-0x1
// 004bc8ef: JZ 0x004bc929
//   XREF to: 004bc929 (CONDITIONAL_JUMP)
// 004bc8f1: PUSH EBX
// 004bc8f2: PUSH EAX
// 004bc8f3: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004bc8f8: ADD ESP,0x8
// 004bc8fb: JMP 0x004bc8e3
//   XREF to: 004bc8e3 (UNCONDITIONAL_JUMP)
// 004bc8fd: MOV dword ptr [0x02f0ca48],0x629110
//   Label: LAB_004bc8fd
//   XREF to: 02f0ca48 (WRITE)
//   XREF to: 00629110 (DATA)
// 004bc907: LEA EAX,[ESP + 0x428]
//   XREF to: Stack[-0x328] (DATA)
// 004bc90e: PUSH EAX
// 004bc90f: MOV EDX,0xffb
// 004bc914: PUSH 0x629125
//   XREF to: 00629125 (DATA)
// 004bc919: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004bc91f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bc924: ADD ESP,0x8
// 004bc927: JMP 0x004bc8c6
//   XREF to: 004bc8c6 (UNCONDITIONAL_JUMP)
// 004bc929: TEST byte ptr [ESI + 0xc],0x20
//   Label: LAB_004bc929
// 004bc92d: JZ 0x004bc952
//   XREF to: 004bc952 (CONDITIONAL_JUMP)
// 004bc92f: PUSH EBP
// 004bc930: MOV EDI,0x629146
//   XREF to: 00629146 (DATA)
// 004bc935: MOV EAX,0x1008
// 004bc93a: PUSH 0x62915b
//   XREF to: 0062915b (DATA)
// 004bc93f: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004bc945: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004bc94a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bc94f: ADD ESP,0x8
// 004bc952: TEST byte ptr [EBX + 0xc],0x20
//   Label: LAB_004bc952
// 004bc956: JZ 0x004bc983
//   XREF to: 004bc983 (CONDITIONAL_JUMP)
// 004bc958: LEA EAX,[ESP + 0x428]
//   XREF to: Stack[-0x328] (DATA)
// 004bc95f: PUSH EAX
// 004bc960: MOV EDX,0x62916c
//   XREF to: 0062916c (PARAM)
// 004bc965: MOV ECX,0x1009
// 004bc96a: PUSH 0x629181
//   XREF to: 00629181 (DATA)
// 004bc96f: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004bc975: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004bc97b: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bc980: ADD ESP,0x8
// 004bc983: PUSH 0x100d
//   Label: LAB_004bc983
// 004bc988: PUSH 0x629192
//   XREF to: 00629192 (DATA)
// 004bc98d: PUSH ESI
// 004bc98e: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bc993: ADD ESP,0xc
// 004bc996: PUSH 0x100e
// 004bc99b: PUSH 0x6291a7
//   XREF to: 006291a7 (DATA)
// 004bc9a0: PUSH EBX
// 004bc9a1: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bc9a6: ADD ESP,0xc
// 004bc9a9: MOV EBX,dword ptr [ESP + 0x420]
//   XREF to: Stack[-0x330] (READ)
// 004bc9b0: PUSH EBX
// 004bc9b1: LEA EAX,[ESP + 0x42c]
//   XREF to: Stack[-0x328] (DATA)
// 004bc9b8: PUSH EAX
// 004bc9b9: CALL engine_dosio.c_copyFileTimestamp_FUN_00481910
//   XREF to: 00481910 (UNCONDITIONAL_CALL)
// 004bc9be: ADD ESP,0x8
// 004bc9c1: TEST EAX,EAX
// 004bc9c3: JZ 0x004bc9cc
//   XREF to: 004bc9cc (CONDITIONAL_JUMP)
// 004bc9c5: XOR EBX,EBX
// 004bc9c7: JMP 0x004bc7d2
//   XREF to: 004bc7d2 (UNCONDITIONAL_JUMP)
// 004bc9cc: LEA EAX,[ESP + 0x428]
//   Label: LAB_004bc9cc
//   XREF to: Stack[-0x328] (DATA)
// 004bc9d3: PUSH EAX
// 004bc9d4: PUSH 0x626577
//   XREF to: 00626577 (DATA)
// 004bc9d9: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bc9df: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bc9e0: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bc9e5: ADD ESP,0xc
// 004bc9e8: XOR EBX,EBX
// 004bc9ea: JMP 0x004bc7d2
//   XREF to: 004bc7d2 (UNCONDITIONAL_JUMP)
