// Name: cockpit_ckptutil.c_loadSingleEdgeList_FUN_0042edc0
// Address: 0042edc0
// Address Range: [[0042edc0, 0042edf3]]
// Convention: unknown
// Signature: void cockpit_ckptutil_c_loadSingleEdgeList_FUN_0042edc0(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void cockpit_ckptutil_c_loadSingleEdgeList_FUN_0042edc0(void)

{
  char *in_stack_00000004;
  uint *in_stack_00000008;
  int *in_stack_0000000c;
  SEdgeList local_8;
  
  local_8.edge_data = (SEdge *)0x0;
  cockpit_ckptutil_c_loadEdgeListFile_FUN_0042eb90(in_stack_00000004,&local_8,1);
  *in_stack_00000008 = local_8.edge_data;
  *in_stack_0000000c = local_8.edge_count;
  return;
}
