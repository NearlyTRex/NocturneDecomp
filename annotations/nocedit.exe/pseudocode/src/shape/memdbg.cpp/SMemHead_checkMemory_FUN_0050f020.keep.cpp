// Name: shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
// Address: 0050f020
// MANUAL RECONSTRUCTION
// Address Range: [[0050f020, 0050f142]]
// Convention: __cdecl
// Signature: void __cdecl shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead *this_ptr,char *filename,int line_number)

#include "nocturne.h"
#include "core/debug_log.h"

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
    // Emit a clean backtrace BEFORE the game's displayErrorAndQuit path —
    // that path tries to %s the block's source_file field, which is random
    // stack memory when the `this_ptr` header was reached via a corrupt list
    // `next`, and the resulting SDL MessageBox crashes without a usable
    // stack. DERROR + DBACKTRACE give us the real caller chain.
    DERROR("SMemHead front_guard mismatch: header=%p guard=0x%08x "
           "(expected 0x%08x). caller-ctx=%s:%d last-ok=%s:%d",
           (void *)this_ptr,this_ptr->front_guard, (unsigned)GAME_DEADBEEF,
           filename ? filename : "(null)", line_number,
           pcVar4 ? pcVar4 : "(null)", iVar5);
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 175;
    iVar1 = this_ptr->source_line;
    iVar2 = this_ptr->num_bytes;
    this_ptr->source_file[0x13] = '\0';
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Head memory corruption detected in %d-byte block (" NOCTURNE_FMT_PTR "), allocated %s, line %d, detected at %s line %d.\n(Last ok check was at %s line %d)",iVar2,NOCTURNE_ARG_PTR(this_ptr + 1),this_ptr->source_file,iVar1,
               filename,line_number,pcVar4,iVar5);
  }
  int back_guard_val;
  memcpy(&back_guard_val, (char *)(this_ptr + 1) + this_ptr->num_bytes, sizeof(back_guard_val));
  if (back_guard_val != GAME_BEEFDEAD) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 178;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tail memory corruption detected in %d-byte block (" NOCTURNE_FMT_PTR "), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",this_ptr->num_bytes,NOCTURNE_ARG_PTR(this_ptr + 1),this_ptr->source_file,
               this_ptr->source_line,filename,line_number,g_MemCheckLastFile,g_MemCheckLastLine);
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
              ("List memory corruption detected in %d-byte block (" NOCTURNE_FMT_PTR "), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",this_ptr->num_bytes,NOCTURNE_ARG_PTR(this_ptr + 1),this_ptr->source_file,
               this_ptr->source_line,filename,line_number,g_MemCheckLastFile,g_MemCheckLastLine);
LAB_0050f0dd:
  } while ((this_ptr->next != (SMemHead *)0x0) && (this_ptr != this_ptr->next->prev));
  return;
}
