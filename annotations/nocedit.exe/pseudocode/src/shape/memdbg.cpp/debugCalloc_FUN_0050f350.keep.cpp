// Name: shape_memdbg.cpp_debugCalloc_FUN_0050f350
// Address: 0050f350
// MANUAL RECONSTRUCTION
// Address Range: [[0050f350, 0050f45f]]
// Convention: __cdecl
// Signature: void * __cdecl shape_memdbg_cpp_debugCalloc_FUN_0050f350(SIZE_T count,SIZE_T size,char *filename,int line_number)

#include "nocturne.h"

void * __cdecl shape_memdbg_cpp_debugCalloc_FUN_0050f350(SIZE_T count,SIZE_T size,char *filename,int line_number)

{
  SMemHead *header;
  ulong count_00;

  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  count_00 = size * count;
  shape_memdbg_cpp_traceMemory_FUN_0050f150
            ("debugCalloc(%d, %d, %s, %d)",(int)count,(int)size,filename,line_number);
  if (count_00 != 0) {
    header = (SMemHead *)malloc(count_00 + GAME_SMEMHEAD_AND_BACKGUARD_SIZE);
    if (header == (SMemHead *)0x0) {
      shape_memdbg_cpp_traceMemory_FUN_0050f150("   !!FAILED!!");
      wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
      return (void *)0x0;
    }
    header->num_bytes = count_00;
    shape_memdbg_cpp_SMemHead_recordSourceFile_FUN_0050eea0(header,filename);
    header->source_line = line_number;
    header->front_guard = GAME_DEADBEEF;
    void *user_data = (void *)(header + 1);
    uint back_guard = GAME_BEEFDEAD;
    memcpy((char *)user_data + count_00, &back_guard, sizeof(back_guard));
    shape_memdbg_cpp_SMemHead_add_FUN_0050eef0(header);
    memset(user_data,0,count_00);
    shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns %08X",(uint)user_data);
    wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
    return user_data;
  }
  shape_memdbg_cpp_traceMemory_FUN_0050f150("   Returns NULL");
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return (void *)0x0;
}
