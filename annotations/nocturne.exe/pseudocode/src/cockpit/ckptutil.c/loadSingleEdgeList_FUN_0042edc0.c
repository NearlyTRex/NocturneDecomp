// Name: cockpit_ckptutil.c_loadSingleEdgeList_FUN_0042edc0
// Address: 0042edc0
// Address Range: [[0042edc0, 0042edf3]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadSingleEdgeList_FUN_0042edc0(char *filename,void **edge_data_out,int *edge_count_out)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_loadSingleEdgeList_FUN_0042edc0(char *filename,void **edge_data_out,int *edge_count_out)

{
  SEdgeList local_8;
  
  local_8.edge_data = (SEdge *)0x0;
  cockpit_ckptutil_c_loadEdgeListFile_FUN_0042eb90(filename,&local_8,1);
  *edge_data_out = local_8.edge_data;
  *edge_count_out = local_8.edge_count;
  return;
}
