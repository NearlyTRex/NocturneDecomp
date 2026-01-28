// Name: crt_stdlib.c_system_FUN_00602130
// Address: 00602130
// Address Range: [[00602130, 006021b4]]
// Convention: __watcallStack
// Signature: int __watcallStack crt_stdlib_c_system_FUN_00602130(char *command)

#include "nocturne.h"

int __watcallStack crt_stdlib_c_system_FUN_00602130(char *command)

{
  int iVar1;
  char *cmdPath;
  int iVar2;
  char *args;
  char *cmdName;
  int *result;
  char local_18 [4];
  char local_14;
  
  cmdPath = crt_env_c_getenv_FUN_006013f0("ComSpec");
  iVar1 = g_ProcessSpawnEnabled;
  if (command == (char *)0x0) {
    iVar2 = 1;
  }
  else {
    local_14 = '\x01';
    if (cmdPath == (char *)0x0) {
      cmdPath = "CMD.EXE";
    }
    result = (int *)0x0;
    g_ProcessSpawnEnabled = 0;
    crt_process_c_set_shell_execute_flag_FUN_00609c80(local_18);
    if (local_14 == '\0') {
      cmdName = "COMMAND";
    }
    else {
      cmdName = "CMD";
    }
    iVar2 = crt_process_c_spawnCommand_FUN_00609c90(0,cmdPath,cmdName,args,command,result);
  }
  g_ProcessSpawnEnabled = iVar1;
  return iVar2;
}
