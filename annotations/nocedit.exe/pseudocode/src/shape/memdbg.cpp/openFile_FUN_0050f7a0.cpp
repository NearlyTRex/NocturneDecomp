// Name: shape_memdbg.cpp_openFile_FUN_0050f7a0
// Address: 0050f7a0
// Address Range: [[0050f7a0, 0050f9a2]]
// Convention: __cdecl
// Signature: FILE * shape_memdbg.cpp_openFile_FUN_0050f7a0(char * filename, char * directory, char * mode, char * source_file, int line_number)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: opened_file */

FILE * __cdecl
shape_memdbg_cpp_openFile_FUN_0050f7a0
          (char *filename,char *directory,char *mode,char *source_file,int line_number)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  char *pcVar4;
  char *pcVar5;
  FileTrackingEntry *pFVar6;
  char *in_stack_00000018;
  uint in_stack_0000001c;
  char *in_stack_00000024;
  uint in_stack_00000028;
  int in_stack_0000002c;
  FILE *opened_file;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  if (directory == (char *)0x0) {
    shape_memdbg_cpp_traceFile_FUN_0050f180
              ("Opening %s for %s in %s line %d",filename,line_number,source_file,
               in_stack_0000001c);
  }
  else {
    shape_memdbg_cpp_traceFile_FUN_0050f180
              ("Opening %s in %s for %s in %s line %d",directory,filename,line_number,source_file,
               in_stack_0000001c);
  }
  pFVar3 = crt_stdio_c_fopen_FUN_00601a7c(filename,in_stack_00000018);
  if (pFVar3 == (FILE *)0x0) {
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    shape_memdbg_cpp_traceFile_FUN_0050f180("  Open failed");
    return (FILE *)0x0;
  }
  if (99 < g_OpenFileCount) {
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    if (g_RecursiveCallFlag != 0) {
      return (FILE *)0x0;
    }
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0x1f0;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Too many open files trying to open %s, %s line %d",filename,source_file,in_stack_00000028);
  }
  iVar2 = g_OpenFileCount;
  pFVar6 = g_FileRegistry + g_OpenFileCount;
  g_OpenFileCount = g_OpenFileCount + 1;
  pcVar4 = filename;
  do {
    cVar1 = *pcVar4;
    pFVar6->filename[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pFVar6->filename[1] = cVar1;
    pFVar6 = (FileTrackingEntry *)(pFVar6->filename + 2);
  } while (cVar1 != '\0');
  pcVar4 = g_FileRegistry[iVar2].mode;
  do {
    cVar1 = *in_stack_00000024;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = in_stack_00000024[1];
    in_stack_00000024 = in_stack_00000024 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  pcVar4 = g_FileRegistry[iVar2].source_file;
  do {
    cVar1 = *source_file;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = source_file[1];
    source_file = source_file + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  if (directory == (char *)0x0) {
    g_FileRegistry[iVar2].directory[0] = '\0';
  }
  else {
    pcVar4 = g_FileRegistry[iVar2].directory;
    pcVar5 = directory;
    do {
      cVar1 = *pcVar5;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar5[1];
      pcVar5 = pcVar5 + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  g_FileRegistry[iVar2].line_number = in_stack_0000002c;
  g_FileRegistry[iVar2].file_ptr = (FILE *)filename;
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return (FILE *)directory;
}
