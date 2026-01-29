// Name: shape_memdbg.cpp_debugMemdump_FUN_0050f6c0
// Address: 0050f6c0
// Address Range: [[0050f6c0, 0050f791]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_debugMemdump_FUN_0050f6c0(_FILE *output_file)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_debugMemdump_FUN_0050f6c0(_FILE *output_file)

{
  SMemHead *pSVar1;
  int iVar2;
  int iVar3;
  
  if (g_RecursiveCallFlag == 0) {
    if (g_FileMutex == (HANDLE)0x0) {
      g_FileMutex = wincore_winrun_cpp_createMutex_FUN_005f3fe0();
    }
    wincore_winrun_cpp_waitForMutex_FUN_005f3ff0(g_FileMutex);
  }
  _fprintf(output_file,"================================\n");
  _fprintf(output_file,"memory usage summary\n");
  iVar3 = 0;
  iVar2 = 0;
  _fprintf(output_file,"================================\n");
  for (pSVar1 = g_MemoryListHead; pSVar1 != (SMemHead *)0x0; pSVar1 = pSVar1->next) {
    iVar2 = iVar2 + pSVar1->num_bytes;
    iVar3 = iVar3 + 1;
    _fprintf(output_file,"%d bytes, %s line %d\n",pSVar1->num_bytes,pSVar1->source_file,
               pSVar1->source_line);
  }
  _fprintf(output_file,"--------------------------------\n");
  _fprintf(output_file,"Total %d blocks, %d bytes\n",iVar3,iVar2);
  wincore_winrun_cpp_releaseMutex_FUN_005f4050(g_FileMutex);
  return;
}
