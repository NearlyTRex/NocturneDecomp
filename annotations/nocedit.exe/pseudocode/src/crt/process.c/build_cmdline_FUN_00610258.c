// Name: crt_process.c_build_cmdline_FUN_00610258
// Address: 00610258
// Address Range: [[00610258, 006103a2]]
// Convention: __cdecl
// Signature: int crt_process.c_build_cmdline_FUN_00610258(int argc, char * * argv, char * program, char * * out_cmdline, char * * out_environment, char * * out_buffer, int * out_bufsize, int copy_program_flag)

#include "nocturne.h"

int __cdecl
crt_process_c_build_cmdline_FUN_00610258
          (int argc,char **argv,char *program,char **out_cmdline,char **out_environment,
          char **out_buffer,int *out_bufsize,int copy_program_flag)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int unaff_EBX;
  char **ppcVar4;
  int unaff_EDI;
  int iVar5;
  uint uVar6;
  int in_stack_00000024;
  
  if (argv == (char **)0x0) {
    argv = g_EnvironmentBlock;
  }
  iVar5 = 0;
  if (argv != (char **)0x0) {
    pcVar3 = *argv;
    ppcVar4 = argv;
    while (pcVar3 != (char *)0x0) {
      iVar2 = crt_string_c_strlen_FUN_0060f870(*ppcVar4);
      ppcVar4 = ppcVar4 + 1;
      iVar5 = iVar5 + iVar2 + 1;
      pcVar3 = *ppcVar4;
    }
  }
  iVar5 = iVar5 + 1;
  if (out_bufsize != (int *)0x0) {
    iVar2 = crt_string_c_strlen_FUN_0060f870(*(char **)argc);
    iVar5 = iVar5 + iVar2 + 3;
  }
  uVar6 = iVar5 + 0xf;
  g_HeapFlags = 0x10;
  pcVar3 = crt_heap_c_InternalHeapAlloc_FUN_00601bc0(uVar6);
  if ((pcVar3 == (char *)0x0) &&
     (pcVar3 = crt_memory_c_malloc_FUN_00601bb0(uVar6), pcVar3 == (char *)0x0)) {
    crt_errno_c_setErrno_FUN_00602790(5);
    crt_errno_c_SetWindowsError_FUN_006027c8(8);
    uVar6 = 0xffffffff;
    g_HeapFlags = unaff_EBX;
  }
  else {
    g_HeapFlags = unaff_EDI;
    *out_environment = pcVar3;
    *out_bufsize = 0;
    *out_buffer = pcVar3;
    if (argv != (char **)0x0) {
      pcVar1 = *argv;
      while (pcVar1 != (char *)0x0) {
        pcVar1 = *argv;
        argv = argv + 1;
        pcVar3 = crt_string_c_strcpy_advance_FUN_00610240(pcVar3,pcVar1);
        pcVar3 = pcVar3 + 1;
        pcVar1 = *argv;
      }
    }
    *pcVar3 = '\0';
    if (in_stack_00000024 != 0) {
      crt_string_c_strcpy_FUN_00610760(pcVar3 + 3,*(char **)argc);
    }
    iVar5 = 0;
    if (*(int *)argc != 0) {
      while( true ) {
        argc = argc + 4;
        if (*(char **)argc == (char *)0x0) break;
        if (iVar5 != 0) {
          iVar5 = iVar5 + 1;
        }
        iVar2 = crt_string_c_strlen_FUN_0060f870(*(char **)argc);
        iVar5 = iVar5 + iVar2;
      }
    }
    *(int *)copy_program_flag = iVar5 + 0x108;
    uVar6 = uVar6 >> 4;
  }
  return uVar6;
}
