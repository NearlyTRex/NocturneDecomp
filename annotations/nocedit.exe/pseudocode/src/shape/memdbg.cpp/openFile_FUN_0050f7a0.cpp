// Name: shape_memdbg.cpp_openFile_FUN_0050f7a0
// Address: 0050f7a0
// Address Range: [[0050f7a0, 0050f9a2]]
// Convention: __cdecl
// Signature: _FILE * __cdecl shape_memdbg_cpp_openFile_FUN_0050f7a0(char *filename,char *directory,char *mode,char *source_file,int line_number)

#include "nocturne.h"

_FILE * __cdecl shape_memdbg_cpp_openFile_FUN_0050f7a0(char *filename,char *directory,char *mode,char *source_file,int line_number)

{
  char cVar1;
  int iVar2;
  _FILE *p_Var3;
  SFileTrackingEntry *pSVar4;
  char *pcVar5;
  _FILE *opened_file;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  if (directory == (char *)0x0) {
    shape_memdbg_cpp_traceFile_FUN_0050f180
              ("Opening %s for %s in %s line %d",filename,mode,source_file,line_number);
  }
  else {
    shape_memdbg_cpp_traceFile_FUN_0050f180
              ("Opening %s in %s for %s in %s line %d",directory,filename,mode,source_file,line_number);
  }
  p_Var3 = _fopen(filename,mode);
  if (p_Var3 == (_FILE *)0x0) {
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    shape_memdbg_cpp_traceFile_FUN_0050f180("  Open failed");
    return (_FILE *)0x0;
  }
  if (99 < g_OpenFileCount) {
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    if (g_RecursiveCallFlag != 0) {
      return (_FILE *)0x0;
    }
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 496;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many open files trying to open %s, %s line %d",filename,source_file,line_number);
  }
  iVar2 = g_OpenFileCount;
  pSVar4 = g_FileRegistry + g_OpenFileCount;
  g_OpenFileCount = g_OpenFileCount + 1;
  do {
    cVar1 = *filename;
    pSVar4->filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = filename[1];
    filename = filename + 2;
    pSVar4->filename[1] = cVar1;
    pSVar4 = (SFileTrackingEntry *)(pSVar4->filename + 2);
  } while (cVar1 != '\0');
  pcVar5 = g_FileRegistry[iVar2].mode;
  do {
    cVar1 = *mode;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = mode[1];
    mode = mode + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar5 = g_FileRegistry[iVar2].source_file;
  do {
    cVar1 = *source_file;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = source_file[1];
    source_file = source_file + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  if (directory == (char *)0x0) {
    g_FileRegistry[iVar2].directory[0] = '\0';
  }
  else {
    pcVar5 = g_FileRegistry[iVar2].directory;
    do {
      cVar1 = *directory;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = directory[1];
      directory = directory + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  g_FileRegistry[iVar2].line_number = line_number;
  g_FileRegistry[iVar2].file_ptr = p_Var3;
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return p_Var3;
}
