// Name: cockpit_ckptutil.c_loadEdgeListFile_FUN_0042eb90
// Address: 0042eb90
// Address Range: [[0042eb90, 0042edbb]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadEdgeListFile_FUN_0042eb90(char *filename,SEdgeList *edge_lists,int expected_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_loadEdgeListFile_FUN_0042eb90(char *filename,SEdgeList *edge_lists,int expected_count)

{
  ulong size;
  SIZE_T SVar1;
  SEdge *pSVar2;
  int *buffer;
  int iVar3;
  byte local_68 [80];
  int local_18;
  _FILE *local_14;
  
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60("art",filename,"rb");
  if (local_14 == (_FILE *)0x0) {
    _sprintf(local_68,"Unable to open edge list file (%s).",filename);
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    g_INT_01cc4804 = 0x49f;
    core_main_c_FUN_004c8440(local_68);
  }
  SVar1 = _fread(&local_18,4,1,local_14);
  if (SVar1 != 1) {
    _sprintf(local_68,"Unable to read number of edge lists (%s).",filename);
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    g_INT_01cc4804 = 0x4a8;
    core_main_c_FUN_004c8440(local_68);
  }
  if (local_18 != expected_count) {
    _sprintf(local_68,"Invalid number of edge lists in file (%s).",filename);
    g_INT_01cc4804 = 0x4af;
    g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
    core_main_c_FUN_004c8440(local_68);
  }
  iVar3 = 0;
  if (0 < expected_count) {
    buffer = &edge_lists->edge_count;
    do {
      SVar1 = _fread(buffer,4,1,local_14);
      if (SVar1 != 1) {
        _sprintf(local_68,"Unable to read number of edges (%s).",filename);
        g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
        g_INT_01cc4804 = 0x4ba;
        core_main_c_FUN_004c8440(local_68);
      }
      if (edge_lists->edge_data != (SEdge *)0x0) {
        FUN_005638d0(edge_lists->edge_data);
      }
      if (0 < edge_lists->edge_count) {
        size = edge_lists->edge_count * 8;
        pSVar2 = (SEdge *)malloc(size);
        edge_lists->edge_data = pSVar2;
        if (pSVar2 == (SEdge *)0x0) {
          printf("\nUnable to allocate memory for edge list.\n");
          g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
          g_INT_01cc4804 = 0x4ce;
          core_main_c_FUN_004c8440(local_68);
        }
        SVar1 = _fread(edge_lists->edge_data,size,1,local_14);
        if (SVar1 != 1) {
          _sprintf(local_68,"Unable to read edge list (%s).",filename);
          g_CHAR_PTR_01cc4800 = "..\\cockpit\\ckptutil.c";
          g_INT_01cc4804 = 0x4d5;
          core_main_c_FUN_004c8440(local_68);
        }
      }
      buffer = buffer + 2;
      iVar3 = iVar3 + 1;
      edge_lists = edge_lists + 1;
    } while (iVar3 < expected_count);
  }
  _fclose(local_14);
  return;
}
