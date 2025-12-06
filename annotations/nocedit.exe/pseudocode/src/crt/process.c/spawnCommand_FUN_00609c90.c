// Name: crt_process.c_spawnCommand_FUN_00609c90
// Address: 00609c90
// Address Range: [[00609c90, 00609ca9]]
// Convention: __watcallStack
// Signature: int crt_process.c_spawnCommand_FUN_00609c90(int mode, char * cmdPath, char * cmdName, char * args, void * envp, int * result)

#include "nocturne.h"

int __watcallStack
crt_process_c_spawnCommand_FUN_00609c90
          (int mode,char *cmdPath,char *cmdName,char *args,void *envp,int *result)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  iVar1 = crt_process_c_spawnvp_FUN_0060ca20(mode,cmdPath,&cmdName);
  return iVar1;
}
