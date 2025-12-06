// Name: shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020
// Address: 0050f020
// Address Range: [[0050f020, 0050f142]]
// Convention: __cdecl
// Signature: void shape_memdbg.cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead * header, char * filename, int line_number)

#include "nocturne.h"

void __cdecl
shape_memdbg_cpp_SMemHead_checkMemory_FUN_0050f020(SMemHead *header,char *filename,int line_number)

{
  int iVar1;
  int iVar2;
  SMemHead *pSVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar5 = g_DebugContext;
  pvVar4 = PTR_s_none_00636540_0067d1fc;
  if (header->front_guard != GAME_DEADBEEF) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0xaf;
    iVar1 = header->source_line;
    iVar2 = header->num_bytes;
    header->source_file[0x13] = '\0';
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Head memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d.\n(Last ok check was at %s line %d)",iVar2,header + 1,header->source_file,iVar1,
               filename,line_number,pvVar4,pvVar5);
  }
  if (*(int *)(header[1].source_file + header->num_bytes + -0xc) != GAME_BEEFDEAD) {
    g_CurrentFilename = "..\\shape\\memdbg.cpp";
    g_CurrentLineNumber = 0xb2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Tail memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",header->num_bytes,header + 1,header->source_file,
               header->source_line,filename,line_number,PTR_s_none_00636540_0067d1fc,g_DebugContext)
    ;
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
              ("List memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)","List memory corruption detected in %d-byte block (%08X), allocated %s, line %d, detected at %s line %d\n(Last ok check was at %s line %d)",
               header->num_bytes,header + 1,header->source_file,header->source_line,filename,
               line_number,PTR_s_none_00636540_0067d1fc,g_DebugContext);
LAB_0050f0dd:
  } while ((header->next != (SMemHead *)0x0) && (header != header->next->prev));
  return;
}
