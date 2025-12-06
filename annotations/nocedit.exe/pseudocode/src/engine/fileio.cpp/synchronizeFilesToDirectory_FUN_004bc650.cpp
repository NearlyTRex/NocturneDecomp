// Name: engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
// Address: 004bc650
// Address Range: [[004bc650, 004bc9ee]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650(FILE * file_list_output, char * source_directory, char * file_pattern, char * dest_directory)

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
  uint *puStack_28;
  byte local_24 [8];
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
