// Name: crt_process.c_spawnvp_FUN_0060ca20
// Address: 0060ca20
// Address Range: [[0060ca20, 0060ca42]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_process_c_spawnvp_FUN_0060ca20(int mode,char *cmdname,char **argv)

#include "nocturne.h"

int __watcallStack crt_process_c_spawnvp_FUN_0060ca20(int mode,char *cmdname,char **argv)

{
  int iVar1;
  
  iVar1 = crt_process_c_spawnvp_with_path_search_FUN_0060e6a0(mode,cmdname,argv);
  return iVar1;
}
