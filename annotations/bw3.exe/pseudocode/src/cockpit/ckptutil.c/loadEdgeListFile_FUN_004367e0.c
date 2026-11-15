// Name: cockpit_ckptutil.c_loadEdgeListFile_FUN_004367e0
// Address: 004367e0
// Address Range: [[004367e0, 00436a0b]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadEdgeListFile_FUN_004367e0(char *filename,SEdgeList *edge_lists,int expected_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_loadEdgeListFile_FUN_004367e0(char *filename,SEdgeList *edge_lists,int expected_count)

{
  ulong size;
  SIZE_T SVar1;
  SEdge *pSVar2;
  int *buffer;
  int iVar3;
  char acStack_64 [76];
  int iStack_18;
  _FILE *p_Stack_14;
  
  p_Stack_14 = engine_dosio_cpp_getFile_FUN_004659c0((char *)0x5b89d1,filename,(char *)0x5b89ce);
  if (p_Stack_14 == (_FILE *)0x0) {
    _sprintf(&stack0xffffff98,"Unable to open edge list file (%s).");
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d71de4 = 0x486;
    core_main_c_displayErrorAndQuit_FUN_004e4330(&stack0xffffff98);
  }
  SVar1 = _fread(&iStack_18,4,1,p_Stack_14);
  if (SVar1 != 1) {
    _sprintf(&stack0xffffff98,"Unable to read number of edge lists (%s).");
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d71de4 = 0x48f;
    core_main_c_displayErrorAndQuit_FUN_004e4330(&stack0xffffff98);
  }
  if (iStack_18 != expected_count) {
    _sprintf(&stack0xffffff98,"Invalid number of edge lists in file (%s).");
    _DAT_01d71de4 = 0x498;
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_004e4330(&stack0xffffff98);
  }
  iVar3 = 0;
  if (0 < expected_count) {
    buffer = &edge_lists->edge_count;
    do {
      SVar1 = _fread(buffer,4,1,p_Stack_14);
      if (SVar1 != 1) {
        _sprintf(&stack0xffffff98,"Unable to read number of edges (%s).");
        _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
        _DAT_01d71de4 = 0x4a3;
        core_main_c_displayErrorAndQuit_FUN_004e4330(&stack0xffffff98);
      }
      if (edge_lists->edge_data != (SEdge *)0x0) {
        FUN_005a3770(edge_lists->edge_data);
      }
      if (0 < edge_lists->edge_count) {
        size = edge_lists->edge_count * 8;
        pSVar2 = (SEdge *)malloc(size);
        edge_lists->edge_data = pSVar2;
        if (pSVar2 == (SEdge *)0x0) {
          printf("\nUnable to allocate memory for edge list.\n");
          _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d71de4 = 0x4b9;
          core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_64);
        }
        SVar1 = _fread(edge_lists->edge_data,size,1,p_Stack_14);
        if (SVar1 != 1) {
          _sprintf(&stack0xffffff98,"Unable to read edge list (%s).");
          _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
          _DAT_01d71de4 = 0x4c0;
          core_main_c_displayErrorAndQuit_FUN_004e4330(&stack0xffffff98);
        }
      }
      buffer = buffer + 2;
      iVar3 = iVar3 + 1;
      edge_lists = edge_lists + 1;
    } while (iVar3 < expected_count);
  }
  _fclose(p_Stack_14);
  return;
}
