// Name: cockpit_ckptutil.c_loadSingleEdgeList_FUN_00433440
// Address: 00433440
// Address Range: [[00433440, 00433473]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_loadSingleEdgeList_FUN_00433440 (char *filename,void **edge_data_out,int *edge_count_out)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_loadSingleEdgeList_FUN_00433440
          (char *filename,void **edge_data_out,int *edge_count_out)

{
  SEdgeList local_8;
  
  local_8.edge_data = (void *)0x0;
  cockpit_ckptutil_c_loadEdgeListFile_FUN_004331f0(filename,&local_8,1);
  *edge_data_out = local_8.edge_data;
  *edge_count_out = local_8.edge_count;
  return;
}
