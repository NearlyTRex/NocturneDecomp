// Name: shape_memdbg.cpp_debugRealloc_FUN_0050f540
// Address: 0050f540
// MANUAL RECONSTRUCTION
// Address Range: [[0050f540, 0050f6b0]]
// Convention: __cdecl
// Signature: void * __cdecl shape_memdbg_cpp_debugRealloc_FUN_0050f540(void *ptr,int new_size,char *filename,int line_number)

#include "nocturne.h"

void * __cdecl shape_memdbg_cpp_debugRealloc_FUN_0050f540(void *ptr,int new_size,char *filename,int line_number)

{
  SMemHead *pSVar1;
  char *pcVar2;
  SMemHead *header;
  void *pvVar3;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150
            ("debugRealloc(%08X, %d, %s, %d)",(uint)ptr,new_size,filename,line_number);
  if (ptr != (void *)0x0) {
    if (new_size == 0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,filename,line_number);
    }
    else {
      if (ptr == (void *)0x0) {
        g_CurrentFilename = "..\\shape\\memdbg.cpp";
        g_CurrentLineNumber = 0x99;
        core_main_c_displayErrorAndQuit_FUN_00506f10("headFromPtr - NULL ptr");
      }
      pSVar1 = (SMemHead *)((int)ptr + -0x28);
      shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(pSVar1,filename,line_number);
      shape_memdbg_cpp_SMemHead_remove_FUN_0050ef20(pSVar1);
      header = (SMemHead *)realloc(pSVar1,new_size + GAME_SMEMHEAD_AND_BACKGUARD_SIZE)
      ;
      if (header != (SMemHead *)0x0) {
        header->num_bytes = new_size;
        shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(header,filename);
        header->front_guard = GAME_DEADBEEF;
        pSVar1 = header + 1;
        header->source_line = line_number;
        pcVar2 = pSVar1->source_file + header->num_bytes + -0xc;
        pcVar2[0] = -0x53;
        pcVar2[1] = -0x22;
        pcVar2[2] = -0x11;
        pcVar2[3] = -0x42;
        shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(header);
        shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns %08X",(uint)pSVar1);
        wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
        return pSVar1;
      }
      shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(pSVar1);
      shape_memdbg_cpp_traceMemory_FUN_0050f150("   !!FAILED!!");
    }
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    return (void *)0x0;
  }
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(new_size,filename,line_number);
  return pvVar3;
}
