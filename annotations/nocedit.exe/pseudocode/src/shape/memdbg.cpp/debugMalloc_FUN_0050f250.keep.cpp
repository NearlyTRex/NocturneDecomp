// Name: shape_memdbg.cpp_debugMalloc_FUN_0050f250
// Address: 0050f250
// MANUAL RECONSTRUCTION
// Address Range: [[0050f250, 0050f347]]
// Convention: __cdecl
// Signature: void * __cdecl shape_memdbg_cpp_debugMalloc_FUN_0050f250(int size,char *filename,int line_number)

#include "nocturne.h"

void * __cdecl shape_memdbg_cpp_debugMalloc_FUN_0050f250(int size,char *filename,int line_number)

{
  SMemHead *header;

  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150("debugMalloc(%d, %s, %d)",size,filename,line_number);
  if (size != 0) {
    header = (SMemHead *)malloc(size + GAME_SMEMHEAD_AND_BACKGUARD_SIZE);
    if (header == (SMemHead *)0x0) {
      shape_memdbg_cpp_traceMemory_FUN_0050f150("   !!FAILED!!");
      wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
      return (void *)0x0;
    }
    header->num_bytes = size;
    shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(header,filename);
    header->front_guard = GAME_DEADBEEF;
    header->source_line = line_number;
    void *user_data = (void *)(header + 1);
    uint back_guard = GAME_BEEFDEAD;
    memcpy((char *)user_data + size, &back_guard, sizeof(back_guard));
    shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(header);
    shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns %08X",(uint)user_data);
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    return user_data;
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns NULL");
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return (void *)0x0;
}
