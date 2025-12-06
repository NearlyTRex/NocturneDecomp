// Name: shape_memdbg.cpp_debugMalloc_FUN_0050f250
// Address: 0050f250
// Address Range: [[0050f250, 0050f347]]
// Convention: __cdecl
// Signature: void * shape_memdbg.cpp_debugMalloc_FUN_0050f250(int size, char * filename, int line_number)

#include "nocturne.h"

void * __cdecl shape_memdbg_cpp_debugMalloc_FUN_0050f250(int size,char *filename,int line_number)

{
  char *pcVar1;
  SMemHead *header;
  char *in_stack_00000010;
  int in_stack_00000014;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150
            ("debugMalloc(%d, %s, %d)",size,in_stack_00000010,in_stack_00000014);
  if (size != 0) {
    header = (SMemHead *)crt_memory_c_malloc_FUN_00601bb0(size + GAME_SMEMHEAD_AND_BACKGUARD_SIZE);
    if (header == (SMemHead *)0x0) {
      shape_memdbg_cpp_traceMemory_FUN_0050f150("   !!FAILED!!");
      wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
      return (void *)0x0;
    }
    header->num_bytes = size;
    shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(header,in_stack_00000010);
    header->front_guard = GAME_DEADBEEF;
    header->source_line = in_stack_00000014;
    pcVar1 = header[1].source_file + header->num_bytes + -0xc;
    pcVar1[0] = -0x53;
    pcVar1[1] = -0x22;
    pcVar1[2] = -0x11;
    pcVar1[3] = -0x42;
    shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(header);
    shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns %08X");
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    return header + 1;
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns NULL");
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return (void *)0x0;
}
