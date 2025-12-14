// Name: shape_memdbg.cpp_debugCalloc_FUN_0050f350
// Address: 0050f350
// Address Range: [[0050f350, 0050f45f]]
// Convention: __cdecl
// Signature: void * shape_memdbg.cpp_debugCalloc_FUN_0050f350(SIZE_T count, SIZE_T size, char * filename, int line_number)

#include "nocturne.h"

void * __cdecl
shape_memdbg_cpp_debugCalloc_FUN_0050f350(SIZE_T count,SIZE_T size,char *filename,int line_number)

{
  SMemHead *dest;
  char *pcVar1;
  SMemHead *header;
  ulong count_00;
  uint in_stack_00000018;
  int in_stack_00000024;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  count_00 = size * count;
  shape_memdbg_cpp_traceMemory_FUN_0050f150
            ("debugCalloc(%d, %d, %s, %d)",count,size,filename,in_stack_00000018);
  if (count_00 != 0) {
    header = crt_memory_c_malloc_FUN_00601bb0(count_00 + GAME_SMEMHEAD_AND_BACKGUARD_SIZE);
    if (header == (SMemHead *)0x0) {
      shape_memdbg_cpp_traceMemory_FUN_0050f150("   !!FAILED!!");
      wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
      return (void *)0x0;
    }
    header->num_bytes = count_00;
    shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(header,filename);
    header->source_line = in_stack_00000024;
    dest = header + 1;
    header->front_guard = GAME_DEADBEEF;
    pcVar1 = dest->source_file + header->num_bytes + -0xc;
    pcVar1[0] = -0x53;
    pcVar1[1] = -0x22;
    pcVar1[2] = -0x11;
    pcVar1[3] = -0x42;
    shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(header);
    crt_memory_c_memset_FUN_005fde40(dest,0,count_00);
    shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns %08X");
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    return dest;
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns NULL");
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return (void *)0x0;
}
