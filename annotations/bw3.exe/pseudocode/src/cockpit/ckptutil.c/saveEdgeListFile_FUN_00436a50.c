// Name: cockpit_ckptutil.c_saveEdgeListFile_FUN_00436a50
// Address: 00436a50
// Address Range: [[00436a50, 00436bae]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_saveEdgeListFile_FUN_00436a50(char *filename,SEdgeList *edge_lists,int edge_list_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl cockpit_ckptutil_c_saveEdgeListFile_FUN_00436a50(char *filename,SEdgeList *edge_lists,int edge_list_count)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  _FILE *file_handle;
  int *piVar7;
  int iVar8;
  int iVar9;
  char acStack_6c [80];
  int iStack_1c;
  SEdgeList *pSStack_18;
  int iStack_14;
  
  if (edge_lists == (SEdgeList *)0x0) {
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    _DAT_01d71de4 = 0x4f7;
    core_main_c_displayErrorAndQuit_FUN_004e4330("Edge list array is empty!");
  }
  file_handle = engine_dosio_cpp_getFile_FUN_004659c0((char *)0x5b8b74,filename,(char *)0x5b8b71);
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_6c,"Could not create output file (%s).");
    _DAT_01d71de4 = 0x4fe;
    _DAT_01d71de0 = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_004e4330(acStack_6c);
  }
  FUN_005a3140(file_handle,0x5b8bb1,edge_list_count);
  if (0 < edge_list_count) {
    iStack_1c = edge_list_count << 3;
    pSStack_18 = edge_lists;
    iStack_14 = 0;
    do {
      FUN_005a3140(file_handle,0x5b8bb5,pSStack_18->edge_count);
      iVar6 = iStack_14;
      iVar9 = 0;
      for (iVar8 = 0; piVar7 = (int *)((int)&edge_lists->edge_data + iVar6), iVar8 < piVar7[1];
          iVar8 = iVar8 + 1) {
        iVar5 = *piVar7;
        uVar4 = *(ushort *)(iVar9 + 6 + iVar5);
        iVar2 = iVar9 + 4;
        iVar3 = iVar9 + 2;
        psVar1 = (short *)(iVar9 + iVar5);
        iVar9 = iVar9 + 8;
        FUN_005a3140
                  (file_handle,"%3d %3d %3d %3d %d\n",(int)*psVar1,
                   (int)*(short *)(iVar3 + iVar5),(int)*(short *)(iVar2 + iVar5),
                   (int)((short)(uVar4 * 2) >> 1),uVar4 >> 0xf);
      }
      iStack_14 = iStack_14 + 8;
      pSStack_18 = pSStack_18 + 1;
    } while (iStack_14 < iStack_1c);
  }
  _fclose(file_handle);
  return;
}
