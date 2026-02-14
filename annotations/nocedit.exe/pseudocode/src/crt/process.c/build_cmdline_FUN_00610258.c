// Name: crt_process.c_build_cmdline_FUN_00610258
// Address: 00610258
// Address Range: [[00610258, 006103a2]]
// Convention: __cdecl
// Signature: int __cdecl crt_process_c_build_cmdline_FUN_00610258(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag)

#include "nocturne.h"

int __cdecl build_cmdline(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  char **ppcVar4;
  int iVar5;
  uint uVar6;
  
  if (argv == (char **)0x0) {
    argv = g_EnvironmentBlock;
  }
  iVar5 = 0;
  if (argv != (char **)0x0) {
    pcVar3 = *argv;
    ppcVar4 = argv;
    while (pcVar3 != (char *)0x0) {
      iVar2 = strlen(*ppcVar4);
      ppcVar4 = ppcVar4 + 1;
      iVar5 = iVar5 + iVar2 + 1;
      pcVar3 = *ppcVar4;
    }
  }
  iVar5 = iVar5 + 1;
  if (out_bufsize != (int *)0x0) {
    iVar2 = strlen(*(char **)argc);
    iVar5 = iVar5 + iVar2 + 3;
  }
  iVar2 = g_HeapFlags;
  uVar6 = iVar5 + 0xf;
  g_HeapFlags = 0x10;
  pcVar3 = InternalHeapAlloc(uVar6);
  if ((pcVar3 == (char *)0x0) &&
     (pcVar3 = malloc(uVar6), pcVar3 == (char *)0x0)) {
    setErrno(5);
    SetWindowsError(8);
    uVar6 = 0xffffffff;
    g_HeapFlags = iVar2;
  }
  else {
    g_HeapFlags = iVar2;
    *(char **)program = pcVar3;
    *out_environment = (char *)0x0;
    *out_cmdline = pcVar3;
    if (argv != (char **)0x0) {
      pcVar1 = *argv;
      while (pcVar1 != (char *)0x0) {
        pcVar1 = *argv;
        argv = argv + 1;
        pcVar3 = strcpy_advance(pcVar3,pcVar1);
        pcVar3 = pcVar3 + 1;
        pcVar1 = *argv;
      }
    }
    *pcVar3 = '\0';
    if (out_bufsize != (int *)0x0) {
      strcpy(pcVar3 + 3,*(char **)argc);
    }
    iVar5 = 0;
    if (*(int *)argc != 0) {
      while( true ) {
        argc = argc + 4;
        if (*(char **)argc == (char *)0x0) break;
        if (iVar5 != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar2 = strlen(*(char **)argc);
        iVar5 = iVar5 + iVar2;
      }
    }
    *out_buffer = (char *)(iVar5 + 0x108);
    uVar6 = uVar6 >> 4;
  }
  return uVar6;
}
