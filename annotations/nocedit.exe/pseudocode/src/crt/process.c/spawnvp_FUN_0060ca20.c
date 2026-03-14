// Name: crt_process.c_spawnvp_FUN_0060ca20
// Address: 0060ca20
// Address Range: [[0060ca20, 0060ca42]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_process_c_spawnvp_FUN_0060ca20(int mode,char *cmdname,char **argv)

#include "nocturne.h"

int __watcallStack spawnvp(int mode,char *cmdname,char **argv)

{
  int iVar1;
  
  iVar1 = spawnvp_with_path_search(mode,cmdname,argv,g_EnvironmentBlock);
  return iVar1;
}
