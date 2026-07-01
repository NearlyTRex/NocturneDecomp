// Name: cockpit_ckptutil.c_saveEdgeListFile_FUN_00433480
// Address: 00433480
// MANUAL RECONSTRUCTION
// Address Range: [[00433480, 004335e8]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_saveEdgeListFile_FUN_00433480(char *filename,SEdgeList *edge_lists,int edge_list_count)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_saveEdgeListFile_FUN_00433480(char *filename,SEdgeList *edge_lists,int edge_list_count)

{
  _FILE *file;
  int iVar8;
  char local_6c [80];
  SEdgeList *local_18;
  int local_14;
  ushort uVar4;
  
  if (edge_lists == (SEdgeList *)0x0) {
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    g_CurrentLineNumber = 1280;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Edge list array is empty!");
  }
  file = engine_dosio_cpp_getFile_FUN_00481a50("art",filename,"wt");
  if (file == (_FILE *)0x0) {
    _sprintf(local_6c,"Could not create output file (%s).",filename);
    g_CurrentLineNumber = 1287;
    g_CurrentFilename = "..\\cockpit\\ckptutil.c";
    core_main_c_displayErrorAndQuit_FUN_00506f10(local_6c);
  }
  _fprintf(file,"%d\n",edge_list_count);
  if (0 < edge_list_count) {
    local_18 = edge_lists;
    local_14 = 0;
    do {
      _fprintf(file,"%d\n",local_18->edge_count);
      for (iVar8 = 0; iVar8 < local_18->edge_count; iVar8 = iVar8 + 1) {
        SEdge *edge = &local_18->edge_data[iVar8];
        uVar4 = (ushort)edge->y1;
        _fprintf(file,"%3d %3d %3d %3d %d\n",(int)edge->x0,(int)edge->y0,(int)edge->x1,
                   (int)((short)(uVar4 * 2) >> 1),(uint)(uVar4 >> 0xf));
      }
      local_14 = local_14 + 1;
      local_18 = local_18 + 1;
    } while (local_14 < edge_list_count);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\cockpit\\ckptutil.c",1314);
  return;
}
