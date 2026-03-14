// Name: crt_process.c_execvp_FUN_00610790
// Address: 00610790
// Address Range: [[00610790, 006107b0]]
// Convention: __cdecl
// Signature: int __cdecl crt_process_c_execvp_FUN_00610790(int argc,char *program,char *arg1,char *arg2,...)

#include "nocturne.h"

int __cdecl execvp(int argc,char *program,char *arg1,char *arg2,...)

{
  int iVar1;
  
  iVar1 = spawnvp(argc,program,&arg1,g_EnvironmentBlock);
  return iVar1;
}
