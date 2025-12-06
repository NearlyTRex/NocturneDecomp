// Name: cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0
// Address: 004331f0
// Address Range: [[004331f0, 0043343d]]
// Convention: __cdecl
// Signature: void cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0(char * filename, SEdgeList * edge_lists, int expected_count)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_loadEdgeListFile_FUN_004331f0
          (char *filename,SEdgeList *edge_lists,int expected_count)

{
  FILE *pFVar1;
  SIZE_T SVar2;
  void *pvVar3;
  BADSPACEBASE *in_ESP;
  FILE *unaff_ESI;
  int *buffer;
  int iVar4;
  int unaff_retaddr;
  int in_stack_00000024;
  char acStack_50 [64];
  
  pFVar1 = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (pFVar1 == (FILE *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&stack0xffffff9c,"Unable to open edge list file (%s).",edge_lists);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x4a7;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa0);
  }
  SVar2 = crt_stdio_c_fread_FUN_005fd990(&stack0xfffffff4,4,1,unaff_ESI);
  if (SVar2 != 1) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa8,"Unable to read number of edge lists (%s).");
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x4b0;
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffac);
  }
  if (unaff_retaddr != in_stack_00000024) {
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_50,"Invalid number of edge lists in file (%s).");
    g_CurrentLineNumber = 0x4b7;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffac);
  }
  iVar4 = 0;
  if (0 < in_stack_00000024) {
    buffer = &edge_lists->edge_count;
    do {
      SVar2 = crt_stdio_c_fread_FUN_005fd990(buffer,4,1,(FILE *)filename);
      if (SVar2 != 1) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa8,"Unable to read number of edges (%s).");
        g_CurrentFilename = "..\\cockpit\\ckptutil.c";
        g_CurrentLineNumber = 0x4c2;
        core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffac);
      }
      if (edge_lists->edge_data != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (edge_lists->edge_data,"..\\cockpit\\ckptutil.c",0x4c8);
      }
      if (0 < edge_lists->edge_count) {
        SVar2 = edge_lists->edge_count * 8;
        pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (SVar2,"..\\cockpit\\ckptutil.c",0x4d2);
        edge_lists->edge_data = pvVar3;
        if (pvVar3 == (void *)0x0) {
          crt_unknown_c_FUN_005ff0d0();
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x4d6;
          core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffa0);
        }
        SVar2 = crt_stdio_c_fread_FUN_005fd990(edge_lists->edge_data,SVar2,1,unaff_ESI);
        if (SVar2 != 1) {
          crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffffa8,"Unable to read edge list (%s).");
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x4dd;
          core_main_c_displayErrorAndQuit_FUN_00506f10(&stack0xffffffac);
        }
      }
      buffer = buffer + 2;
      iVar4 = iVar4 + 1;
      edge_lists = edge_lists + 1;
    } while (iVar4 < in_stack_00000024);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)filename,"..\\cockpit\\ckptutil.c",0x4e2);
  return;
}
