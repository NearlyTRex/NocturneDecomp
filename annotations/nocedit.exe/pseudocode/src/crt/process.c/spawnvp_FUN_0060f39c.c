// Name: crt_process.c_spawnvp_FUN_0060f39c
// Address: 0060f39c
// Address Range: [[0060f39c, 0060f863]]
// Convention: __cdecl
// Signature: int crt_process.c_spawnvp_FUN_0060f39c(int mode, char * cmdname, char * * argv)

#include "nocturne.h"

int __cdecl crt_process_c_spawnvp_FUN_0060f39c(int mode,char *cmdname,char **argv)

{
  char **ppcVar1;
  ulong size;
  char **ppcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  BOOL BVar6;
  ThreadData *pTVar7;
  char *extraout_EAX;
  char *arg1;
  char *program;
  int iVar8;
  uint size_00;
  char **in_stack_00000010;
  char *arg2;
  char *pcVar9;
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
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0xe4);
  local_20 = 0;
  if ((g_ProcessSpawnEnabled != 0) &&
     (local_1c = (char *)crt_process_c_build_file_info_env_FUN_0060ffd0(), local_1c != (char *)0x0))
  {
    iVar8 = 1;
    pcVar4 = *in_stack_00000010;
    ppcVar2 = in_stack_00000010;
    while (pcVar4 != (char *)0x0) {
      ppcVar1 = ppcVar2 + 1;
      ppcVar2 = ppcVar2 + 1;
      iVar8 = iVar8 + 1;
      pcVar4 = *ppcVar1;
    }
    size = (iVar8 + 1) * 4;
    ppcVar2 = crt_memory_c_malloc_FUN_00601bb0(size);
    if (ppcVar2 == (char **)0x0) {
      crt_memory_c_free_FUN_00601cd0(local_1c);
    }
    else {
      crt_string_c_memcpy_FUN_0060cd60(ppcVar2,in_stack_00000010,size - 4);
      ppcVar2[iVar8] = (char *)0x0;
      ppcVar2[iVar8 + -1] = local_1c;
      local_20 = 1;
      in_stack_00000010 = ppcVar2;
    }
  }
  local_14 = '\0';
  if (mode == 2) {
    iVar8 = crt_process_c_execv_FUN_006101f0((int)cmdname,(char *)argv,in_stack_00000010);
    if (local_20 == 0) {
      return iVar8;
    }
    crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
    crt_memory_c_free_FUN_00601cd0(local_1c);
    return iVar8;
  }
  iVar8 = crt_process_c_build_cmdline_FUN_00610258
                    ((int)argv,in_stack_00000010,(char *)&local_38,&local_3c,&local_40,&local_44,
                     (int *)0x0,(int)in_stack_ffffff3c);
  if (iVar8 == -1) {
    if (local_20 != 0) {
      crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
      crt_memory_c_free_FUN_00601cd0(local_1c);
    }
    return -1;
  }
  iVar3 = crt_string_c_strlen_FUN_0060f870(cmdname);
  local_24 = iVar3 + 0x10e;
  pcVar4 = crt_heap_c_InternalHeapAlloc_FUN_00601bc0(local_24);
  local_30 = pcVar4;
  if (pcVar4 == (char *)0x0) {
    size_00 = local_24 + 3 & 0xfffffffc;
    uVar5 = crt_stack_c_GetStackUsage_FUN_0060c260();
    if (size_00 < uVar5) {
      crt_stack_c_ProbeStackSpace_FUN_005ffa2f(size_00);
      pcVar4 = &stack0xffffff3c;
    }
    else {
      pcVar4 = (char *)0x0;
    }
    iVar3 = local_20;
    if (pcVar4 == (char *)0x0) {
      crt_memory_c_free_FUN_00601cd0(local_38);
      if (iVar3 != 0) {
        crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
        crt_memory_c_free_FUN_00601cd0(local_1c);
      }
      return -1;
    }
  }
  crt_file_c_splitpath_s_FUN_00610460
            (cmdname,pcVar4 + (local_24 - 0x107),(char *)&local_4c,(char *)&local_50,
             (char *)&local_54,(char *)&local_58);
  (*PTR_crt_thread_c_EnterCriticalSection_FUN_0060b180_00685464)
            ((LPCRITICAL_SECTION)&stack0xffffff3c);
  local_2c = crt_heap_c_InternalHeapAlloc_FUN_00601bc0((ulong)local_44);
  local_18 = local_2c;
  if (local_2c == (char *)0x0) {
    local_34 = (uint)(local_44 + 3) & 0xfffffffc;
    uVar5 = crt_stack_c_GetStackUsage_FUN_0060c260();
    if (local_34 < uVar5) {
      crt_stack_c_ProbeStackSpace_FUN_005ffa2f((uint)(local_44 + 3) & 0xfffffffc);
      local_18 = acStack_c0;
    }
    else {
      local_18 = (char *)0x0;
    }
    if (local_18 == (char *)0x0) {
      crt_errno_c_setErrno_FUN_00602790(2);
      iVar8 = -1;
      crt_errno_c_SetWindowsError_FUN_006027c8(10);
      goto LAB_0060f80e;
    }
  }
  crt_file_c_makepath_FUN_005febfc(pcVar4,local_4c,local_50,local_54,local_58);
  crt_errno_c_setErrno_FUN_00602790(1);
  if (*local_58 == '\0') {
LAB_0060f687:
    pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if ((pTVar7->errno_value != 1) &&
       (pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar7->errno_value != 9))
    goto LAB_0060f80e;
    iVar3 = crt_string_c_strlen_FUN_0060f870(pcVar4);
    local_28 = pcVar4 + iVar3;
    if (local_14 == '\0') {
      crt_string_c_strcpy_FUN_00610760(local_28,".com");
      crt_errno_c_setErrno_FUN_00602790(0);
      iVar8 = crt_process_c_spawn_FUN_006105a0(mode,pcVar4,local_18,local_38);
    }
    else {
      crt_errno_c_setErrno_FUN_00602790(1);
    }
    pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if ((pTVar7->errno_value != 1) &&
       (pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar7->errno_value != 9))
    goto LAB_0060f80e;
    crt_errno_c_setErrno_FUN_00602790(0);
    crt_string_c_strcpy_FUN_00610760(local_28,".exe");
    iVar8 = crt_process_c_spawn_FUN_006105a0(mode,pcVar4,local_18,local_38);
    pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if ((pTVar7->errno_value != 1) &&
       (pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar7->errno_value != 9))
    goto LAB_0060f80e;
    crt_errno_c_setErrno_FUN_00602790(0);
    crt_string_c_strcpy_FUN_00610760(local_28,".bat");
    BVar6 = crt_io_c_file_exists_FUN_0060f380(pcVar4);
    if (BVar6 == 0) goto LAB_0060f80e;
  }
  else {
    iVar8 = crt_string_c_stricmp_FUN_005fe7f0(local_58,".bat");
    if (iVar8 != 0) {
      crt_errno_c_setErrno_FUN_00602790(0);
      iVar8 = crt_process_c_spawn_FUN_006105a0(mode,pcVar4,local_18,local_38);
      goto LAB_0060f687;
    }
    iVar8 = -1;
    BVar6 = crt_io_c_file_exists_FUN_0060f380(pcVar4);
    if (BVar6 == 0) goto LAB_0060f687;
  }
  crt_memory_c_free_FUN_00601cd0(local_38);
  pcVar9 = local_18;
  local_38 = (void *)0x0;
  crt_process_c_build_command_line_FUN_006103a4(pcVar4,argv,local_18,1);
  crt_process_c_set_shell_execute_flag_FUN_00609c80(local_48);
  if (local_14 == '\0') {
    arg1 = "COMMAND";
  }
  else {
    arg1 = "CMD";
  }
  arg2 = extraout_EAX;
  program = crt_env_c_getenv_FUN_006013f0("COMSPEC");
  iVar8 = crt_process_c_execvp_FUN_00610790(mode,program,arg1,arg2,pcVar4,pcVar9);
LAB_0060f80e:
  if (local_20 != 0) {
    crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
    crt_memory_c_free_FUN_00601cd0(local_1c);
  }
  crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(local_2c);
  crt_heap_c_ValidateHeapIntegrity_FUN_00601ce0(local_30);
  crt_memory_c_free_FUN_00601cd0(local_38);
  (*PTR_crt_thread_c_ExitCriticalSection_FUN_0060b180_00685468)
            ((LPCRITICAL_SECTION)&stack0xffffff3c);
  return iVar8;
}
