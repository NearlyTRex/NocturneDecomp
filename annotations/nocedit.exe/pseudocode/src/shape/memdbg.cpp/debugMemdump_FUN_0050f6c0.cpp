// Name: shape_memdbg.cpp_debugMemdump_FUN_0050f6c0
// Address: 0050f6c0
// Address Range: [[0050f6c0, 0050f791]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_debugMemdump_FUN_0050f6c0(FILE * output_file)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_debugMemdump_FUN_0050f6c0(FILE *output_file)

{
  SMemHead *pSVar1;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"================================\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"memory usage summary\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"================================\n");
  for (pSVar1 = g_MemoryListHead; pSVar1 != (SMemHead *)0x0; pSVar1 = pSVar1->next) {
    crt_stdio_c_fprintf_FUN_005fe6d0
              (output_file,"%d bytes, %s line %d\n","%d bytes, %s line %d\n",pSVar1->num_bytes
               ,pSVar1->source_file);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"--------------------------------\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(output_file,"Total %d blocks, %d bytes\n");
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return;
}
