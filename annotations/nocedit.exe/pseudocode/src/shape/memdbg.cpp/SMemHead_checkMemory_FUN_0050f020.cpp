// Name: shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
// Address: 0050f020
// Address Range: [[0050f020, 0050f142]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead *this_ptr,char *filename,int line_number)

#include "nocturne.h"

void __cdecl shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead *this_ptr,char *filename,int line_number)

{
  int iVar1;
  int iVar2;
  SMemHead *pSVar3;
  char *pcVar4;
  int iVar5;
  
  iVar5 = g_MemCheckLastLine;
  pcVar4 = g_MemCheckLastFile;
  if (this_ptr->front_guard != GAME_DEADBEEF) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 175;
    iVar1 = this_ptr->source_line;
    iVar2 = this_ptr->num_bytes;
    this_ptr->source_file[0x13] = '\0';
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Head memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d.\n(Last ok check was at %s line %d)",iVar2,this_ptr + 1,this_ptr->source_file,iVar1,
               filename,line_number,pcVar4,iVar5);
  }
  if (*(int *)(this_ptr[1].source_file + this_ptr->num_bytes + -0xc) != GAME_BEEFDEAD) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 178;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tail memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",this_ptr->num_bytes,this_ptr + 1,
               this_ptr->source_file,this_ptr->source_line,filename,line_number,g_MemCheckLastFile,
               g_MemCheckLastLine);
  }
  pSVar3 = g_MemoryListHead;
  if (this_ptr->prev != (SMemHead *)0x0) {
    pSVar3 = this_ptr->prev->next;
  }
  if (this_ptr == pSVar3) goto LAB_0050f0dd;
  do {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 184;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("List memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",this_ptr->num_bytes,this_ptr + 1,
               this_ptr->source_file,this_ptr->source_line,filename,line_number,g_MemCheckLastFile,
               g_MemCheckLastLine);
LAB_0050f0dd:
  } while ((this_ptr->next != (SMemHead *)0x0) && (this_ptr != this_ptr->next->prev));
  return;
}
