// Name: cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480
// Address: 00433480
// Address Range: [[00433480, 004335e8]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_saveEdgeListFile_FUN_00433480(char *filename,SEdgeList *edge_lists,int edge_list_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_saveEdgeListFile_FUN_00433480(char *filename,SEdgeList *edge_lists,int edge_list_count)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  ushort uVar4;
  int iVar5;
  int iVar6;
  _FILE *file;
  int *piVar7;
  int iVar8;
  int iVar9;
  char local_6c [80];
  int local_1c;
  SEdgeList *local_18;
  int local_14;
  
  if (edge_lists == (SEdgeList *)0x0) {
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 0x500;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Edge list array is empty!");
  }
  file = engine_dosio_c_getFile_FUN_00481a50("art",filename,"wt");
  if (file == (_FILE *)0x0) {
    _sprintf(local_6c,"Could not create output file (%s).",filename);
    g_CurrentLineNumber = 0x507;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_6c);
  }
  _fprintf(file,"%d\n",edge_list_count);
  if (0 < edge_list_count) {
    local_1c = edge_list_count << 3;
    local_18 = edge_lists;
    local_14 = 0;
    do {
      _fprintf(file,"%d\n",local_18->edge_count);
      iVar6 = local_14;
      iVar9 = 0;
      for (iVar8 = 0; piVar7 = (int *)((int)&edge_lists->edge_data + iVar6), iVar8 < piVar7[1];
          iVar8 = iVar8 + 1) {
        iVar5 = *piVar7;
        uVar4 = *(ushort *)(iVar9 + 6 + iVar5);
        iVar2 = iVar9 + 4;
        iVar3 = iVar9 + 2;
        psVar1 = (short *)(iVar9 + iVar5);
        iVar9 = iVar9 + 8;
        _fprintf(file,"%3d %3d %3d %3d %d\n",(int)*psVar1,(int)*(short *)(iVar3 + iVar5),
                   (int)*(short *)(iVar2 + iVar5),(int)((short)(uVar4 * 2) >> 1),
                   (uint)(uVar4 >> 0xf));
      }
      local_14 = local_14 + 8;
      local_18 = local_18 + 1;
    } while (local_14 < local_1c);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",0x522);
  return;
}
