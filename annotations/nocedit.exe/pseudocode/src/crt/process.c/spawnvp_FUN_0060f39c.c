// Name: crt_process.c_spawnvp_FUN_0060f39c
// Address: 0060f39c
// Address Range: [[0060f39c, 0060f863]]
// Convention: __cdecl
// Signature: int __cdecl crt_process_c_spawnvp_FUN_0060f39c(int mode,char *cmdname,char **argv)

#include "nocturne.h"

int __cdecl spawnvp(int mode,char *cmdname,char **argv)

{
  char *pcVar1;
  char **ppcVar3;
  char **ppcVar2;
  int iVar4;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  uint uVar6;
  BOOL BVar6;
  ThreadData *pTVar7;
  ThreadData *pTVar8;
  int iVar9;
  BOOL BVar10;
  char *extraout_EAX;
  char *arg1;
  char *program;
  int iVar8;
  uint size_00;
  char **in_stack_00000010;
  PRTL_CRITICAL_SECTION_DEBUG in_stack_ffffff3c;
  char acStack_c0 [104];
  char *local_58;
  char *local_54;
  char *local_50;
  char *local_4c;
  char local_48 [4];
  char *local_44;
  char *local_40;
  char *local_3c;
  void *local_38;
  uint local_34;
  char *local_30;
  char *local_2c;
  char *local_28;
  ulong local_24;
  int local_20;
  char *local_1c;
  char *local_18;
  char local_14;
  char **ppcVar1;
  ulong size;
  char *arg2;
  char *pcVar9;
  
  __STK();
  local_20 = 0;
  if ((g_ProcessSpawnEnabled != 0) &&
     (local_1c = (char *)build_file_info_env(), local_1c != (char *)0x0))
  {
    iVar8 = 1;
    pcVar1 = *in_stack_00000010;
    ppcVar3 = in_stack_00000010;
    while (pcVar1 != (char *)0x0) {
      ppcVar1 = ppcVar3 + 1;
      ppcVar3 = ppcVar3 + 1;
      iVar8 = iVar8 + 1;
      pcVar1 = *ppcVar1;
    }
    size = (iVar8 + 1) * 4;
    ppcVar2 = malloc(size);
    if (ppcVar2 == (char **)0x0) {
      free(local_1c);
    }
    else {
      memcpy(ppcVar2,in_stack_00000010,size - 4);
      ppcVar2[iVar8] = (char *)0x0;
      ppcVar2[iVar8 + -1] = local_1c;
      local_20 = 1;
      in_stack_00000010 = ppcVar2;
    }
  }
  local_14 = '\0';
  if (mode == 2) {
    iVar4 = execv((int)cmdname,(char *)argv,in_stack_00000010);
    if (local_20 == 0) {
      return iVar4;
    }
    free(in_stack_00000010);
    free(local_1c);
    return iVar4;
  }
  iVar4 = build_cmdline
                    ((int)argv,in_stack_00000010,(char *)&local_38,&local_3c,&local_40,&local_44,
                     (int *)0x0,(int)in_stack_ffffff3c);
  if (iVar4 == -1) {
    if (local_20 != 0) {
      free(in_stack_00000010);
      free(local_1c);
    }
    return -1;
  }
  iVar3 = strlen(cmdname);
  local_24 = iVar3 + 0x10e;
  pcVar4 = InternalHeapAlloc(local_24);
  local_30 = pcVar4;
  if (pcVar4 == (char *)0x0) {
    size_00 = local_24 + 3 & 0xfffffffc;
    uVar5 = GetStackUsage();
    if (size_00 < uVar5) {
      ProbeStackSpace(size_00);
      pcVar4 = &stack0xffffff3c;
    }
    else {
      pcVar4 = (char *)0x0;
    }
    iVar9 = local_20;
    if (pcVar4 == (char *)0x0) {
      free(local_38);
      if (iVar9 != 0) {
        free(in_stack_00000010);
        free(local_1c);
      }
      return -1;
    }
  }
  splitpath_s
            (cmdname,pcVar4 + (local_24 - 0x107),(char *)&local_4c,(char *)&local_50,
             (char *)&local_54,(char *)&local_58);
  (*PTR_crt_thread_c_EnterCriticalSection_FUN_0060b180_00685464)
            ((LPCRITICAL_SECTION)&stack0xffffff3c);
  local_2c = InternalHeapAlloc((ulong)local_44);
  local_18 = local_2c;
  if (local_2c == (char *)0x0) {
    local_34 = (uint)(local_44 + 3) & 0xfffffffc;
    uVar6 = GetStackUsage();
    if (local_34 < uVar6) {
      ProbeStackSpace((uint)(local_44 + 3) & 0xfffffffc);
      local_18 = acStack_c0;
    }
    else {
      local_18 = (char *)0x0;
    }
    if (local_18 == (char *)0x0) {
      setErrno(2);
      iVar4 = -1;
      SetWindowsError(10);
      goto LAB_0060f80e;
    }
  }
  makepath(pcVar4,local_4c,local_50,local_54,local_58);
  setErrno(1);
  if (*local_58 == '\0') {
LAB_0060f687:
    pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if ((pTVar7->errno_value != 1) &&
       (pTVar8 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar8->errno_value != 9))
    goto LAB_0060f80e;
    iVar9 = strlen(pcVar4);
    local_28 = pcVar4 + iVar9;
    if (local_14 == '\0') {
      strcpy(local_28,".com");
      setErrno(0);
      iVar4 = spawn(mode,pcVar4,local_18,local_38);
    }
    else {
      setErrno(1);
    }
    pTVar8 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if ((pTVar8->errno_value != 1) &&
       (pTVar8 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar8->errno_value != 9))
    goto LAB_0060f80e;
    setErrno(0);
    strcpy(local_28,".exe");
    iVar4 = spawn(mode,pcVar4,local_18,local_38);
    pTVar8 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if ((pTVar8->errno_value != 1) &&
       (pTVar8 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar8->errno_value != 9))
    goto LAB_0060f80e;
    setErrno(0);
    strcpy(local_28,".bat");
    BVar10 = exists(pcVar4);
    if (BVar10 == 0) goto LAB_0060f80e;
  }
  else {
    iVar4 = _stricmp(local_58,".bat");
    if (iVar4 != 0) {
      setErrno(0);
      iVar4 = spawn(mode,pcVar4,local_18,local_38);
      goto LAB_0060f687;
    }
    iVar4 = -1;
    BVar6 = exists(pcVar4);
    if (BVar6 == 0) goto LAB_0060f687;
  }
  free(local_38);
  pcVar9 = local_18;
  local_38 = (void *)0x0;
  build_command_line(pcVar4,argv,local_18,1);
  set_shell_execute_flag(local_48);
  if (local_14 == '\0') {
    arg1 = "COMMAND";
  }
  else {
    arg1 = "CMD";
  }
  arg2 = extraout_EAX;
  program = getenv("COMSPEC");
  iVar4 = execvp(mode,program,arg1,arg2,pcVar4,pcVar9);
LAB_0060f80e:
  if (local_20 != 0) {
    free(in_stack_00000010);
    free(local_1c);
  }
  ValidateHeapIntegrity(local_2c);
  ValidateHeapIntegrity(local_30);
  free(local_38);
  (*PTR_crt_thread_c_ExitCriticalSection_FUN_0060b180_00685468)
            ((LPCRITICAL_SECTION)&stack0xffffff3c);
  return iVar4;
}
