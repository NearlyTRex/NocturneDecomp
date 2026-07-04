// Name: shape_memdbg.cpp_debugFree_FUN_0050f460
// Address: 0050f460
// MANUAL RECONSTRUCTION
// Address Range: [[0050f460, 0050f531]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_debugFree_FUN_0050f460(void *ptr,char *filename,int line_number)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_debugFree_FUN_0050f460(void *ptr,char *filename,int line_number)

{
  SMemHead *header;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150("debugFree(" NOCTURNE_FMT_PTR ", %s, %d)",NOCTURNE_ARG_PTR(ptr),filename,line_number);
  if (ptr == (void *)0x0) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 360;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tried to free NULL pointer at %s line %d",filename,line_number);
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 153;
    core_main_c_displayErrorAndQuit_FUN_00506f10("headFromPtr - NULL ptr");
  }
  header = (SMemHead *)((char *)ptr - sizeof(SMemHead));
  shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(header,filename,line_number);
  shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(header);
  free(header);
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return;
}
