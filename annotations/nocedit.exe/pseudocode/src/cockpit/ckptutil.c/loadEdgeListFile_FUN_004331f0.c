// Name: cockpit_ckptutil.c_loadEdgeListFile_FUN_004331f0
// Address: 004331f0
// Address Range: [[004331f0, 0043343d]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadEdgeListFile_FUN_004331f0(char *filename,SEdgeList *edge_lists,int expected_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_loadEdgeListFile_FUN_004331f0(char *filename,SEdgeList *edge_lists,int expected_count)

{
  SIZE_T SVar1;
  void *pvVar2;
  int *buffer;
  int iVar3;
  char local_68 [80];
  int local_18;
  _FILE *local_14;
  
  local_14 = engine_dosio_c_getFile_FUN_00481a50("art",filename,"rb");
  if (local_14 == (_FILE *)0x0) {
    _sprintf(local_68,"Unable to open edge list file (%s).",filename);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x4a7;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_68);
  }
  SVar1 = _fread(&local_18,4,1,local_14);
  if (SVar1 != 1) {
    _sprintf(local_68,"Unable to read number of edge lists (%s).",filename);
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x4b0;
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_68);
  }
  if (local_18 != expected_count) {
    _sprintf(local_68,"Invalid number of edge lists in file (%s).",filename);
    g_CurrentLineNumber = 0x4b7;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_68);
  }
  iVar3 = 0;
  if (0 < expected_count) {
    buffer = &edge_lists->edge_count;
    do {
      SVar1 = _fread(buffer,4,1,local_14);
      if (SVar1 != 1) {
        _sprintf(local_68,"Unable to read number of edges (%s).",filename);
        g_CurrentFilename = "..\\cockpit\\ckptutil.c";
        g_CurrentLineNumber = 0x4c2;
        core_main_c_displayErrorAndQuit_FUN_00506f10(local_68);
      }
      if (edge_lists->edge_data != (void *)0x0) {
        shape_memdbg_cpp_debugFree_FUN_0050f460
                  (edge_lists->edge_data,"..\\cockpit\\ckptutil.c",0x4c8);
      }
      if (0 < edge_lists->edge_count) {
        SVar1 = edge_lists->edge_count * 8;
        pvVar2 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                           (SVar1,"..\\cockpit\\ckptutil.c",0x4d2);
        edge_lists->edge_data = pvVar2;
        if (pvVar2 == (void *)0x0) {
          printf("\nUnable to allocate memory for edge list.\n");
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x4d6;
          core_main_c_displayErrorAndQuit_FUN_00506f10(local_68);
        }
        SVar1 = _fread(edge_lists->edge_data,SVar1,1,local_14);
        if (SVar1 != 1) {
          _sprintf(local_68,"Unable to read edge list (%s).",filename);
          g_CurrentFilename = "..\\cockpit\\ckptutil.c";
          g_CurrentLineNumber = 0x4dd;
          core_main_c_displayErrorAndQuit_FUN_00506f10(local_68);
        }
      }
      buffer = buffer + 2;
      iVar3 = iVar3 + 1;
      edge_lists = edge_lists + 1;
    } while (iVar3 < expected_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_14,"..\\cockpit\\ckptutil.c",0x4e2);
  return;
}
