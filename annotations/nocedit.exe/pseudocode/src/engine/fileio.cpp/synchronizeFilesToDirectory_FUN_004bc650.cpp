// Name: engine_fileio.cpp_synchronizeFilesToDirectory_FUN_004bc650
// Address: 004bc650
// Address Range: [[004bc650, 004bc9ee]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650(_FILE *file_list_output,char *source_directory,char *file_pattern,char *dest_directory)

#include "nocturne.h"

void __cdecl engine_fileio_cpp_synchronizeFilesToDirectory_FUN_004bc650(_FILE *file_list_output,char *source_directory,char *file_pattern,char *dest_directory)

{
  char cVar1;
  bool bVar2;
  char *full_path;
  int iVar3;
  _FILE *file;
  _FILE *file_ptr;
  char *pcVar4;
  SFoundFileInfo *pSVar5;
  SFoundFileInfo local_750;
  SFoundFileInfo local_53c;
  char local_328 [260];
  char local_224 [256];
  char local_124 [256];
  CStrList local_24;
  int local_14;
  
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_24);
  shape_edittool_cpp_CStrList_populateWithFullPaths_FUN_004a39e0
            (&local_24,source_directory,file_pattern);
  bVar2 = false;
  local_14 = 0;
  if (0 < local_24.item_count) {
    do {
      full_path = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_24,local_14);
      engine_dosio_c_splitPath_FUN_00481f20(full_path,(char *)0x0,(char *)0x0,local_224,local_124);
      engine_dosio_c_makePath_FUN_00481f50(local_328,(char *)0x0,dest_directory,local_224,local_124)
      ;
      _fprintf((_FILE *)file_list_output->_ptr,"%s\n",local_328);
      pSVar5 = &local_53c;
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
      pcVar4 = local_328;
      pSVar5 = &local_750;
      do {
        cVar1 = *pcVar4;
        pSVar5->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        *(char *)((int)pSVar5 + 1) = cVar1;
        pSVar5 = (SFoundFileInfo *)((int)pSVar5 + 2);
      } while (cVar1 != '\0');
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_53c);
      if (iVar3 == 0) {
        g_CurrentFilename = "..\\engine\\fileio.cpp";
        g_CurrentLineNumber = 0xfe7;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't get info on %s",&local_53c);
      }
      iVar3 = engine_dosio_c_findFileNormally_FUN_004817c0(&local_750);
      if ((((iVar3 == 0) || (local_53c.timestamp < (char *)(local_750.timestamp - 1))) ||
          ((char *)(local_750.timestamp + 1) < local_53c.timestamp)) ||
         (local_53c.file_size != local_750.file_size)) {
        file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (full_path,(char *)0x0,"rb","..\\engine\\fileio.cpp",0xff8);
        if (file == (_FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0xff9;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",full_path);
        }
        file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_328,(char *)0x0,"wb","..\\engine\\fileio.cpp",0xffa
                             );
        if (file_ptr == (_FILE *)0x0) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0xffb;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",local_328);
        }
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Copying %s -> %s");
        while( true ) {
          iVar3 = _fgetc(file);
          if (iVar3 == -1) break;
          _fputc(iVar3,file_ptr);
        }
        if ((file->_flag & 0x20) != 0) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0x1008;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading %s",full_path);
        }
        if ((file_ptr->_flag & 0x20) != 0) {
          g_CurrentFilename = "..\\engine\\fileio.cpp";
          g_CurrentLineNumber = 0x1009;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing %s",local_328);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x100d);
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\engine\\fileio.cpp",0x100e);
        iVar3 = engine_dosio_c_copyFileTimestamp_FUN_00481910(local_328,(char *)local_53c.timestamp)
        ;
        if (iVar3 == 0) {
          shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                    (g_CEditorToolsPtr,"WARNING: Error setting date/time on %s.\n(Most likely reason: Tried to set the file time to a time\nnewer than the current system time on your computer)",local_328);
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
      local_14 = local_14 + 1;
    } while (local_14 < local_24.item_count);
  }
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_24,0);
  return;
}
