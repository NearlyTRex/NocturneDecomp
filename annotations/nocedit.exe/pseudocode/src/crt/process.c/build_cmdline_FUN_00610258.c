// Name: crt_process.c_build_cmdline_FUN_00610258
// Address: 00610258
// Address Range: [[00610258, 006103a2]]
// Convention: __cdecl
// Signature: int __cdecl crt_process_c_build_cmdline_FUN_00610258(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag)

#include "nocturne.h"

int __cdecl build_cmdline(int argc,char **argv,char *program,char **out_cmdline,char **out_environment,char **out_buffer,int *out_bufsize,int copy_program_flag)

{
  int iVar2;
  int iVar1;
  char *pcVar3;
  uint uVar2;
  char *pcVar4;
  char **ppcVar4;
  int iVar5;
  int iVar6;
  uint uVar6;
  char *pcVar1;
  
  if (argv == (char **)0x0) {
    argv = g_EnvironmentBlock;
  }
  iVar5 = 0;
  if (argv != (char **)0x0) {
    pcVar4 = *argv;
    ppcVar4 = argv;
    while (pcVar4 != (char *)0x0) {
      iVar2 = func_0x0060f870(*ppcVar4);
      ppcVar4 = ppcVar4 + 1;
      iVar5 = iVar5 + iVar2 + 1;
      pcVar4 = *ppcVar4;
    }
  }
  iVar6 = iVar5 + 1;
  if (out_bufsize != (int *)0x0) {
    iVar1 = func_0x0060f870(*(uint *)argc);
    iVar6 = iVar6 + iVar1 + 3;
  }
  iVar1 = g_HeapFlags;
  uVar6 = iVar6 + 0xf;
  g_HeapFlags = 0x10;
  pcVar3 = InternalHeapAlloc(uVar6);
  if ((pcVar3 == (char *)0x0) &&
     (pcVar3 = malloc(uVar6), pcVar3 == (char *)0x0)) {
    setErrno(5);
    SetWindowsError(8);
    uVar2 = 0xffffffff;
    g_HeapFlags = iVar1;
  }
  else {
    g_HeapFlags = iVar1;
    *(char **)program = pcVar3;
    *out_environment = (char *)0x0;
    *out_cmdline = pcVar3;
    if (argv != (char **)0x0) {
      pcVar1 = *argv;
      while (pcVar1 != (char *)0x0) {
        pcVar4 = *argv;
        argv = argv + 1;
        pcVar4 = strcpy_advance(pcVar3,pcVar4);
        pcVar3 = pcVar4 + 1;
        pcVar1 = *argv;
      }
    }
    *pcVar3 = '\0';
    if (out_bufsize != (int *)0x0) {
      strcpy(pcVar3 + 3,*(char **)argc);
    }
    iVar6 = 0;
    if (*(int *)argc != 0) {
      while( true ) {
        argc = argc + 4;
        if (*(int *)argc == 0) break;
        if (iVar6 != 0) {
          iVar6 = iVar6 + 1;
        }
        iVar1 = func_0x0060f870(*(int *)argc);
        iVar6 = iVar6 + iVar1;
      }
    }
    *out_buffer = (char *)(iVar6 + 0x108);
    uVar2 = uVar6 >> 4;
  }
  return uVar2;
}
