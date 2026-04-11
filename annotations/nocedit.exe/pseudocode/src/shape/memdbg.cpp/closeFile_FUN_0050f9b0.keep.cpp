// Name: shape_memdbg.cpp_closeFile_FUN_0050f9b0
// Address: 0050f9b0
// MANUAL RECONSTRUCTION
// Address Range: [[0050f9b0, 0050fb94]]
// Convention: __cdecl
// Signature: int __cdecl shape_memdbg_cpp_closeFile_FUN_0050f9b0(_FILE *file_ptr,char *source_file,int line_number)

#include "nocturne.h"

int __cdecl shape_memdbg_cpp_closeFile_FUN_0050f9b0(_FILE *file_ptr,char *source_file,int line_number)

{
  int iVar1;
  int iVar3;
  int iVar2;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  if (file_ptr == (_FILE *)0x0) {
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    if (g_RecursiveCallFlag != 0) {
      return 0;
    }
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0x216;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tried to close NULL file pointer at %s line %d",source_file,line_number);
  }
  iVar2 = 0;
  if (0 < g_OpenFileCount) {
    do {
      if (file_ptr == g_FileRegistry[iVar2].file_ptr) {
        if (g_FileRegistry[iVar2].directory[0] == '\0') {
          shape_memdbg_cpp_traceFile_FUN_0050f180
                    ("Closing %s at %s line %d, originally opened for %s at %s line %d",
                     g_FileRegistry[iVar2].filename,source_file,line_number,
                     g_FileRegistry[iVar2].mode,g_FileRegistry[iVar2].source_file,
                     g_FileRegistry[iVar2].line_number);
        }
        else {
          shape_memdbg_cpp_traceFile_FUN_0050f180
                    ("Closing %s in %s at %s line %d, originally opened for %s in %s line %d",
                     g_FileRegistry[iVar2].directory,g_FileRegistry[iVar2].filename,
                     source_file,line_number,
                     g_FileRegistry[iVar2].mode,g_FileRegistry[iVar2].source_file,
                     g_FileRegistry[iVar2].line_number);
        }
        g_OpenFileCount = g_OpenFileCount + -1;
        memmove
                  (g_FileRegistry + iVar2,g_FileRegistry + iVar2 + 1,
                   (g_OpenFileCount - iVar2) * 0x328);
        wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
        iVar3 = _fclose(file_ptr);
        return iVar3;
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < g_OpenFileCount);
  }
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  if (g_RecursiveCallFlag == 0) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0x235;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tried to close file which which was never opened.  (Possibly closing a file twice?)\n%s line %d",source_file,line_number);
  }
  return 0;
}
