// Name: shape_memdbg.cpp_CLeakChecker_dtor_FUN_0050fbc0
// Address: 0050fbc0
// MANUAL RECONSTRUCTION
// Address Range: [[0050fbc0, 0050fdac]]
// Convention: __cdecl
// Signature: CLeakChecker * __cdecl shape_memdbg_cpp_CLeakChecker_dtor_FUN_0050fbc0(CLeakChecker *this_ptr,uint flags)

#include "nocturne.h"

CLeakChecker * __cdecl shape_memdbg_cpp_CLeakChecker_dtor_FUN_0050fbc0(CLeakChecker *this_ptr,uint flags)

{
  SMemHead *pSVar1;
  _FILE *p_Var2;
  int iVar4;
  
  if ((g_RecursiveCallFlag == 0) && (g_IsDestroyingLeakChecker == 0)) {
    g_IsDestroyingLeakChecker = 1;
    if (0 < g_OpenFileCount) {
      shape_memdbg_cpp_traceFile_FUN_0050f180("!!!!!Files left open:");
      p_Var2 = (_FILE *)fopen("memdbg.txt","at");
      if (p_Var2 == (_FILE *)0x0) {
        g_CurrentFilename = "..\\shape\\memdbg.cpp";
        g_CurrentLineNumber = 622;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Files left open, but can't log them.");
      }
      iVar4 = 0;
      if (0 < g_OpenFileCount) {
        do {
          if (g_FileRegistry[iVar4].directory[0] == '\0') {
            _fprintf(p_Var2,"%s, opened %s line %d\n",g_FileRegistry[iVar4].filename,
                       g_FileRegistry[iVar4].source_file,g_FileRegistry[iVar4].line_number);
          }
          else {
            _fprintf(p_Var2,"%s in %s, opened %s line %d\n",g_FileRegistry[iVar4].directory,
                       g_FileRegistry[iVar4].filename,g_FileRegistry[iVar4].source_file,
                       g_FileRegistry[iVar4].line_number);
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < g_OpenFileCount);
      }
      _fclose(p_Var2);
      g_CurrentFilename = "..\\shape\\memdbg.cpp";
      g_CurrentLineNumber = 638;
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Files were left open.  Check %s","memdbg.txt");
    }
    if (g_MemoryListHead != (SMemHead *)0x0) {
      shape_memdbg_cpp_traceFile_FUN_0050f180("!!!!!Memory leaks detected:");
      p_Var2 = (_FILE *)fopen("memdbg.txt","at");
      pSVar1 = g_MemoryListHead;
      if (p_Var2 == (_FILE *)0x0) {
        g_CurrentFilename = "..\\shape\\memdbg.cpp";
        g_CurrentLineNumber = 649;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Memory leaks detected, but can't log them.");
        pSVar1 = g_MemoryListHead;
      }
      for (; pSVar1 != (SMemHead *)0x0; pSVar1 = pSVar1->next) {
        _fprintf(p_Var2,"%d bytes, %s line %d\n",pSVar1->num_bytes,pSVar1->source_file,
                   pSVar1->source_line);
      }
      _fclose(p_Var2);
      g_CurrentLineNumber = 663;
      g_CurrentFilename = "..\\shape\\memdbg.cpp";
      core_main_c_displayErrorAndQuit_FUN_00506f10
                ("Memory leaks detected.  Check %s","memdbg.txt");
    }
  }
  return this_ptr;
}
