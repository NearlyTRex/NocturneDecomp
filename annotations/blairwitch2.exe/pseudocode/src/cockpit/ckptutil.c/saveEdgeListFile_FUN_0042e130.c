// Name: cockpit_ckptutil.c_saveEdgeListFile_FUN_0042e130
// Address: 0042e130
// Address Range: [[0042e130, 0042e28e]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_saveEdgeListFile_FUN_0042e130(char *filename,SEdgeList *edge_lists,int edge_list_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_saveEdgeListFile_FUN_0042e130(char *filename,SEdgeList *edge_lists,int edge_list_count)

{
  int iVar1;
  _FILE *file;
  int iVar2;
  char acStack_6c [80];
  int iStack_1c;
  SEdgeList *pSStack_18;
  int iStack_14;
  
  if (edge_lists == (SEdgeList *)0x0) {
    g_CHAR_PTR_01d046a0 = "..\\cockpit\\ckptutil.c";
    g_INT_01d046a4 = 0x525;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Edge list array is empty!");
  }
  file = engine_dosio_cpp_getFile_FUN_00460c70("art",filename,"wt");
  if (file == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Could not create output file (%s).");
    g_INT_01d046a4 = 0x52c;
    g_CHAR_PTR_01d046a0 = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_004e4500(acStack_6c);
  }
  _fprintf(file,"%d\n");
  if (0 < edge_list_count) {
    iStack_1c = edge_list_count << 3;
    pSStack_18 = edge_lists;
    iStack_14 = 0;
    do {
      _fprintf(file,"%d\n");
      iVar1 = iStack_14;
      for (iVar2 = 0; iVar2 < *(int *)((int)&edge_lists->edge_count + iVar1); iVar2 = iVar2 + 1) {
        _fprintf(file,"%3d %3d %3d %3d %d\n");
      }
      iStack_14 = iStack_14 + 8;
      pSStack_18 = pSStack_18 + 1;
    } while (iStack_14 < iStack_1c);
  }
  _fclose(file);
  return;
}
