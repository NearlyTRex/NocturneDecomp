// Name: crt_startup.c__setargv_FUN_10007c40
// Address: 10007c40
// Address Range: [[10007c40, 10007cda]]
// Convention: __cdecl
// Signature: int __cdecl crt_startup_c__setargv_FUN_10007c40(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl _setargv(void)

{
  char **argv;
  char *cmdstart;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_10240690,0x104);
  _DAT_10016d90 = &DAT_10240690;
  cmdstart = &DAT_10240690;
  if (*DAT_10241980 != '\0') {
    cmdstart = DAT_10241980;
  }
  parse_cmdline(cmdstart,(char **)0x0,(char *)0x0,&local_8,&local_4);
  argv = (char **)malloc(local_8 * 4 + local_4);
  if (argv == (char **)0x0) {
    _amsg_exit(8);
  }
  parse_cmdline(cmdstart,argv,(char *)(argv + local_8),&local_8,&local_4);
  _DAT_10016d78 = argv;
  _DAT_10016d74 = local_8 + -1;
  return local_8 + -1;
}
