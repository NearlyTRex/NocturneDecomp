// Name: shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
// Address: 0050f020
// MANUAL RECONSTRUCTION
// Address Range: [[0050f020, 0050f142]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead *header,char *filename,int line_number)

#include "nocturne.h"
#include "debug_log.h"

void __cdecl shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead *header,char *filename,int line_number)

{
  int iVar1;
  int iVar2;
  SMemHead *pSVar3;
  char *pcVar4;
  int iVar5;

  iVar5 = g_MemCheckLastLine;
  pcVar4 = g_MemCheckLastFile;
  if (header->front_guard != GAME_DEADBEEF) {
    // Emit a clean backtrace BEFORE the game's displayErrorAndQuit path —
    // that path tries to %s the block's source_file field, which is random
    // stack memory when the "header" pointer was reached via a corrupt list
    // `next`, and the resulting SDL MessageBox crashes without a usable
    // stack. DERROR + DBACKTRACE give us the real caller chain.
    DERROR("SMemHead front_guard mismatch: header=%p guard=0x%08x "
           "(expected 0x%08x). caller-ctx=%s:%d last-ok=%s:%d",
           (void *)header, header->front_guard, (unsigned)GAME_DEADBEEF,
           filename ? filename : "(null)", line_number,
           pcVar4 ? pcVar4 : "(null)", iVar5);
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0xaf;
    iVar1 = header->source_line;
    iVar2 = header->num_bytes;
    header->source_file[0x13] = '\0';
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Head memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d.\n(Last ok check was at %s line %d)",iVar2,(uint)(header + 1),header->source_file,iVar1,
               filename,line_number,pcVar4,iVar5);
  }
  int back_guard_val;
  memcpy(&back_guard_val, (char *)(header + 1) + header->num_bytes, sizeof(back_guard_val));
  if (back_guard_val != GAME_BEEFDEAD) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0xb2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tail memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",header->num_bytes,(uint)(header + 1),header->source_file,
               header->source_line,filename,line_number,g_MemCheckLastFile,g_MemCheckLastLine);
  }
  pSVar3 = g_MemoryListHead;
  if (header->prev != (SMemHead *)0x0) {
    pSVar3 = header->prev->next;
  }
  if (header == pSVar3) goto LAB_0050f0dd;
  do {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0xb8;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("List memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",header->num_bytes,(uint)(header + 1),header->source_file,
               header->source_line,filename,line_number,g_MemCheckLastFile,g_MemCheckLastLine);
LAB_0050f0dd:
  } while ((header->next != (SMemHead *)0x0) && (header != header->next->prev));
  return;
}
