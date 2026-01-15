// Name: crt_stdlib.c_system_FUN_00602130
// Address: 00602130
// Address Range: [[00602130, 006021b4]]
// Convention: __watcallStack
// Signature: int crt_stdlib.c_system_FUN_00602130(char * command)

#include "nocturne.h"

int __watcallStack crt_stdlib_c_system_FUN_00602130(char *command)

{
  int iVar1;
  char *cmdPath;
  int iVar2;
  char *args;
  char *cmdName;
  void *in_stack_ffffffe8;
  uint in_stack_ffffffec;
  int *result;
  
  cmdPath = crt_env_c_getenv_FUN_006013f0("ComSpec");
  iVar1 = g_ProcessSpawnEnabled;
  if (command == (char *)0x0) {
    iVar2 = 1;
  }
  else {
    result = (int *)CONCAT31 /* combine 2-byte values */((int3)((uint)in_stack_ffffffec >> 8),1);
    if (cmdPath == (char *)0x0) {
      cmdPath = "CMD.EXE";
    }
    g_ProcessSpawnEnabled = 0;
    crt_process_c_set_shell_execute_flag_FUN_00609c80(&stack0xffffffe8);
    if ((char)result == '\0') {
      cmdName = "COMMAND";
    }
    else {
      cmdName = "CMD";
    }
    iVar2 = crt_process_c_spawnCommand_FUN_00609c90(0,cmdPath,cmdName,args,in_stack_ffffffe8,result)
    ;
  }
  g_ProcessSpawnEnabled = iVar1;
  return iVar2;
}
