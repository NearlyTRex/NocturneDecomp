// Name: crt_process.c_spawnvp_FUN_0060f39c
// Address: 0060f39c
// Address Range: [[0060f39c, 0060f863]]
// Convention: __cdecl
// Signature: int crt_process.c_spawnvp_FUN_0060f39c(int mode, char * cmdname, char * * argv)
// Cross-references:
//   crt_process.c_execv_FUN_006101f0 (006101f0) at 00610202 [UNCONDITIONAL_CALL]
//   crt_process.c_execvp_FUN_00610790 (00610790) at 006107a7 [UNCONDITIONAL_CALL]
//   crt_process.c_spawnvp_with_path_search_FUN_0060e6a0 (0060e6a0) at 0060e803 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_bat_00659758
//   TerminatedCString s_com_00659760
//   TerminatedCString s_exe_00659768
//   TerminatedCString s_CMD_00659778
//   TerminatedCString s_COMMAND_0065977c
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
//   int g_ProcessSpawnEnabled = 0x1
//   ENTER_CRITICAL_SECTION_FUNC* PTR_crt_thread.c_EnterCriticalSection_FUN_0060b180_00685464 = 0060b180
//   EXIT_CRITICAL_SECTION_FUNC* PTR_crt_thread.c_ExitCriticalSection_FUN_0060b180_00685468 = 0060b180
// Function calls:
//   crt_env.c_getenv_FUN_006013f0
//   crt_errno.c_setErrno_FUN_00602790
//   crt_errno.c_SetWindowsError_FUN_006027c8
//   crt_file.c_makepath_FUN_005febfc
//   crt_file.c_splitpath_FUN_00610460
//   crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
//   crt_io.c_file_exists_FUN_0060f380
//   crt_memory.c_free_FUN_00601cd0
//   crt_memory.c_malloc_FUN_00601bb0
//   crt_process.c_build_cmdline_FUN_00610258
//   crt_process.c_build_command_line_FUN_006103a4
//   crt_process.c_build_file_info_env_FUN_0060ffd0
//   crt_process.c_execv_FUN_006101f0
//   crt_process.c_execvp_FUN_00610790
//   crt_process.c_set_shell_execute_flag_FUN_00609c80
//   crt_process.c_spawn_FUN_006105a0
//   crt_stack.c_GetStackUsage_FUN_0060c260
//   crt_stack.c_ProbeStackSpace_FUN_005ffa2f
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_string.c_memcpy_FUN_0060cd60
//   crt_string.c_strcpy_FUN_00610760
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_string.c_strlen_FUN_0060f870
//   crt_thread.c_GetTLS_FUN_0060242c
//   crt_thread.c_noop_lock_FUN_0060b180

#include "nocturne.h"

int __cdecl crt_process_c_spawnvp_FUN_0060f39c(int mode,char *cmdname,char **argv)

{
  char **ppcVar1;
  ulong size;
  bool bVar2;
  char **ppcVar3;
  int iVar4;
  char *pcVar5;
  uint uVar6;
  undefined3 extraout_var;
  ThreadData *pTVar7;
  undefined3 extraout_var_00;
  char *extraout_EAX;
  char *arg1;
  char *program;
  int iVar8;
  uint size_00;
  BADSPACEBASE *in_ESP;
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
    pcVar5 = *in_stack_00000010;
    ppcVar3 = in_stack_00000010;
    while (pcVar5 != (char *)0x0) {
      ppcVar1 = ppcVar3 + 1;
      ppcVar3 = ppcVar3 + 1;
      iVar8 = iVar8 + 1;
      pcVar5 = *ppcVar1;
    }
    size = (iVar8 + 1) * 4;
    ppcVar3 = (char **)crt_memory_c_malloc_FUN_00601bb0(size);
    if (ppcVar3 == (char **)0x0) {
      crt_memory_c_free_FUN_00601cd0(local_1c);
    }
    else {
      crt_string_c_memcpy_FUN_0060cd60(ppcVar3,in_stack_00000010,size - 4);
      ppcVar3[iVar8] = (char *)0x0;
      ppcVar3[iVar8 + -1] = local_1c;
      local_20 = 1;
      in_stack_00000010 = ppcVar3;
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
  iVar4 = crt_string_c_strlen_FUN_0060f870(cmdname);
  local_24 = iVar4 + 0x10e;
  pcVar5 = (char *)crt_heap_c_InternalHeapAlloc_FUN_00601bc0(local_24);
  local_30 = pcVar5;
  if (pcVar5 == (char *)0x0) {
    size_00 = local_24 + 3 & 0xfffffffc;
    uVar6 = crt_stack_c_GetStackUsage_FUN_0060c260();
    if (size_00 < uVar6) {
      crt_stack_c_ProbeStackSpace_FUN_005ffa2f(size_00);
      pcVar5 = &stack0xffffff3c;
    }
    else {
      pcVar5 = (char *)0x0;
    }
    iVar4 = local_20;
    if (pcVar5 == (char *)0x0) {
      crt_memory_c_free_FUN_00601cd0(local_38);
      if (iVar4 != 0) {
        crt_memory_c_free_FUN_00601cd0(in_stack_00000010);
        crt_memory_c_free_FUN_00601cd0(local_1c);
      }
      return -1;
    }
  }
  crt_file_c_splitpath_FUN_00610460(cmdname,pcVar5 + (local_24 - 0x107),&local_4c);
  (*PTR_crt_thread_c_EnterCriticalSection_FUN_0060b180_00685464)
            ((LPCRITICAL_SECTION)&stack0xffffff3c);
  local_2c = (char *)crt_heap_c_InternalHeapAlloc_FUN_00601bc0((ulong)local_44);
  local_18 = local_2c;
  if (local_2c == (char *)0x0) {
    local_34 = (uint)(local_44 + 3) & 0xfffffffc;
    uVar6 = crt_stack_c_GetStackUsage_FUN_0060c260();
    if (local_34 < uVar6) {
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
  crt_file_c_makepath_FUN_005febfc(pcVar5,local_4c,local_50,local_54,local_58);
  crt_errno_c_setErrno_FUN_00602790(1);
  if (*local_58 == '\0') {
LAB_0060f687:
    pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if ((pTVar7->errno_value != 1) &&
       (pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar7->errno_value != 9))
    goto LAB_0060f80e;
    iVar4 = crt_string_c_strlen_FUN_0060f870(pcVar5);
    local_28 = pcVar5 + iVar4;
    if (local_14 == '\0') {
      crt_string_c_strcpy_FUN_00610760(local_28,".com");
      crt_errno_c_setErrno_FUN_00602790(0);
      iVar8 = crt_process_c_spawn_FUN_006105a0(mode,pcVar5,local_18,local_38);
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
    iVar8 = crt_process_c_spawn_FUN_006105a0(mode,pcVar5,local_18,local_38);
    pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
    if ((pTVar7->errno_value != 1) &&
       (pTVar7 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar7->errno_value != 9))
    goto LAB_0060f80e;
    crt_errno_c_setErrno_FUN_00602790(0);
    crt_string_c_strcpy_FUN_00610760(local_28,".bat");
    bVar2 = crt_io_c_file_exists_FUN_0060f380(pcVar5);
    if (CONCAT31(extraout_var_00,bVar2) == 0) goto LAB_0060f80e;
  }
  else {
    iVar8 = crt_string_c_stricmp_FUN_005fe7f0(local_58,".bat");
    if (iVar8 != 0) {
      crt_errno_c_setErrno_FUN_00602790(0);
      iVar8 = crt_process_c_spawn_FUN_006105a0(mode,pcVar5,local_18,local_38);
      goto LAB_0060f687;
    }
    iVar8 = -1;
    bVar2 = crt_io_c_file_exists_FUN_0060f380(pcVar5);
    if (CONCAT31(extraout_var,bVar2) == 0) goto LAB_0060f687;
  }
  crt_memory_c_free_FUN_00601cd0(local_38);
  pcVar9 = local_18;
  local_38 = (void *)0x0;
  crt_process_c_build_command_line_FUN_006103a4(pcVar5,argv,local_18,1);
  crt_process_c_set_shell_execute_flag_FUN_00609c80(local_48);
  if (local_14 == '\0') {
    arg1 = "COMMAND";
  }
  else {
    arg1 = "CMD";
  }
  arg2 = extraout_EAX;
  program = crt_env_c_getenv_FUN_006013f0("COMSPEC");
  iVar8 = crt_process_c_execvp_FUN_00610790(mode,program,arg1,arg2,pcVar5,pcVar9);
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


// Assembly code:
// 0060f39c: PUSH 0xe4
//   Label: crt_process.c_spawnvp_FUN_0060f39c
// 0060f3a1: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0060f3a6: PUSH EBX
// 0060f3a7: PUSH ESI
// 0060f3a8: PUSH EDI
// 0060f3a9: PUSH EBP
// 0060f3aa: MOV EBP,ESP
// 0060f3ac: SUB ESP,0xb4
// 0060f3b2: SUB EBP,0x72
// 0060f3b5: MOV EBX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x10] (READ)
// 0060f3bb: MOV ECX,dword ptr [0x006853e0]
//   XREF to: 006853e0 (READ)
// 0060f3c1: XOR EDX,EDX
// 0060f3c3: MOV ESI,EBX
// 0060f3c5: MOV dword ptr [EBP + 0x62],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0060f3c8: TEST ECX,ECX
// 0060f3ca: JZ 0x0060f440
//   XREF to: 0060f440 (CONDITIONAL_JUMP)
// 0060f3d0: CALL crt_process.c_build_file_info_env_FUN_0060ffd0
//   XREF to: 0060ffd0 (UNCONDITIONAL_CALL)
// 0060f3d5: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0060f3d8: TEST EAX,EAX
// 0060f3da: JZ 0x0060f440
//   XREF to: 0060f440 (CONDITIONAL_JUMP)
// 0060f3dc: MOV EDX,0x1
// 0060f3e1: MOV EDI,dword ptr [EBX]
// 0060f3e3: MOV EAX,EBX
// 0060f3e5: TEST EDI,EDI
// 0060f3e7: JZ 0x0060f3f4
//   XREF to: 0060f3f4 (CONDITIONAL_JUMP)
// 0060f3e9: MOV EBX,dword ptr [EAX + 0x4]
//   Label: LAB_0060f3e9
// 0060f3ec: ADD EAX,0x4
// 0060f3ef: INC EDX
// 0060f3f0: TEST EBX,EBX
// 0060f3f2: JNZ 0x0060f3e9
//   XREF to: 0060f3e9 (CONDITIONAL_JUMP)
// 0060f3f4: INC EDX
//   Label: LAB_0060f3f4
// 0060f3f5: LEA EDI,[EDX*0x4 + 0x0]
// 0060f3fc: PUSH EDI
// 0060f3fd: CALL crt_memory.c_malloc_FUN_00601bb0
//   XREF to: 00601bb0 (UNCONDITIONAL_CALL)
// 0060f402: MOV EBX,EAX
// 0060f404: ADD ESP,0x4
// 0060f407: TEST EAX,EAX
// 0060f409: JZ 0x0060f434
//   XREF to: 0060f434 (CONDITIONAL_JUMP)
// 0060f40b: LEA EAX,[EDI + -0x4]
// 0060f40e: PUSH EAX
// 0060f40f: PUSH ESI
// 0060f410: PUSH EBX
// 0060f411: CALL crt_string.c_memcpy_FUN_0060cd60
//   XREF to: 0060cd60 (UNCONDITIONAL_CALL)
// 0060f416: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x1c] (READ)
// 0060f419: MOV dword ptr [EDI + EBX*0x1 + -0x4],0x0
// 0060f421: MOV ESI,EBX
// 0060f423: MOV dword ptr [EDI + EBX*0x1 + -0x8],EAX
// 0060f427: MOV EDI,0x1
// 0060f42c: ADD ESP,0xc
// 0060f42f: MOV dword ptr [EBP + 0x62],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0060f432: JMP 0x0060f440
//   XREF to: 0060f440 (UNCONDITIONAL_JUMP)
// 0060f434: MOV ECX,dword ptr [EBP + 0x66]
//   Label: LAB_0060f434
//   XREF to: Stack[-0x1c] (READ)
// 0060f437: PUSH ECX
// 0060f438: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f43d: ADD ESP,0x4
// 0060f440: XOR AH,AH
//   Label: LAB_0060f440
// 0060f442: MOV byte ptr [EBP + 0x6e],AH
//   XREF to: Stack[-0x14] (WRITE)
// 0060f445: CMP dword ptr [EBP + 0x86],0x2
//   XREF to: Stack[0x4] (READ)
// 0060f44c: JNZ 0x0060f48a
//   XREF to: 0060f48a (CONDITIONAL_JUMP)
// 0060f44e: PUSH ESI
// 0060f44f: MOV ECX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0060f455: PUSH ECX
// 0060f456: MOV EDI,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x8] (READ)
// 0060f45c: PUSH EDI
// 0060f45d: CALL crt_process.c_execv_FUN_006101f0
//   XREF to: 006101f0 (UNCONDITIONAL_CALL)
// 0060f462: MOV EBX,EAX
// 0060f464: MOV EAX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x20] (READ)
// 0060f467: ADD ESP,0xc
// 0060f46a: TEST EAX,EAX
// 0060f46c: JZ 0x0060f483
//   XREF to: 0060f483 (CONDITIONAL_JUMP)
// 0060f46e: PUSH ESI
// 0060f46f: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f474: ADD ESP,0x4
// 0060f477: MOV EDX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x1c] (READ)
// 0060f47a: PUSH EDX
// 0060f47b: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f480: ADD ESP,0x4
// 0060f483: MOV EAX,EBX
//   Label: LAB_0060f483
// 0060f485: JMP 0x0060f85c
//   XREF to: 0060f85c (UNCONDITIONAL_JUMP)
// 0060f48a: PUSH 0x0
//   Label: LAB_0060f48a
// 0060f48c: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x44] (DATA)
// 0060f48f: PUSH EAX
// 0060f490: LEA EAX,[EBP + 0x42]
//   XREF to: Stack[-0x40] (DATA)
// 0060f493: PUSH EAX
// 0060f494: LEA EAX,[EBP + 0x46]
//   XREF to: Stack[-0x3c] (DATA)
// 0060f497: PUSH EAX
// 0060f498: LEA EAX,[EBP + 0x4a]
//   XREF to: Stack[-0x38] (DATA)
// 0060f49b: PUSH EAX
// 0060f49c: PUSH ESI
// 0060f49d: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0060f4a3: PUSH EDX
// 0060f4a4: CALL crt_process.c_build_cmdline_FUN_00610258
//   XREF to: 00610258 (UNCONDITIONAL_CALL)
// 0060f4a9: ADD ESP,0x1c
// 0060f4ac: MOV EDI,EAX
// 0060f4ae: CMP EAX,-0x1
// 0060f4b1: JNZ 0x0060f4db
//   XREF to: 0060f4db (CONDITIONAL_JUMP)
// 0060f4b3: CMP dword ptr [EBP + 0x62],0x0
//   XREF to: Stack[-0x20] (READ)
// 0060f4b7: JZ 0x0060f4ce
//   XREF to: 0060f4ce (CONDITIONAL_JUMP)
// 0060f4b9: PUSH ESI
// 0060f4ba: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f4bf: ADD ESP,0x4
// 0060f4c2: MOV EBX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x1c] (READ)
// 0060f4c5: PUSH EBX
// 0060f4c6: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f4cb: ADD ESP,0x4
// 0060f4ce: MOV EAX,0xffffffff
//   Label: LAB_0060f4ce
// 0060f4d3: LEA ESP,[EBP + 0x72]
//   XREF to: Stack[-0x10] (DATA)
// 0060f4d6: POP EBP
// 0060f4d7: POP EDI
// 0060f4d8: POP ESI
// 0060f4d9: POP EBX
// 0060f4da: RET
// 0060f4db: MOV EBX,dword ptr [EBP + 0x8a]
//   Label: LAB_0060f4db
//   XREF to: Stack[0x8] (READ)
// 0060f4e1: PUSH EBX
// 0060f4e2: CALL crt_string.c_strlen_FUN_0060f870
//   XREF to: 0060f870 (UNCONDITIONAL_CALL)
// 0060f4e7: ADD ESP,0x4
// 0060f4ea: ADD EAX,0x10e
// 0060f4ef: PUSH EAX
// 0060f4f0: MOV dword ptr [EBP + 0x5e],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0060f4f3: CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   XREF to: 00601bc0 (UNCONDITIONAL_CALL)
// 0060f4f8: ADD ESP,0x4
// 0060f4fb: MOV dword ptr [EBP + 0x52],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0060f4fe: TEST EAX,EAX
// 0060f500: JNZ 0x0060f55f
//   XREF to: 0060f55f (CONDITIONAL_JUMP)
// 0060f502: MOV EBX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x24] (READ)
// 0060f505: ADD EBX,0x3
// 0060f508: AND BL,0xfc
// 0060f50b: CALL crt_stack.c_GetStackUsage_FUN_0060c260
//   XREF to: 0060c260 (UNCONDITIONAL_CALL)
// 0060f510: CMP EBX,EAX
// 0060f512: JNC 0x0060f522
//   XREF to: 0060f522 (CONDITIONAL_JUMP)
// 0060f514: PUSH EBX
// 0060f515: CALL crt_stack.c_ProbeStackSpace_FUN_005ffa2f
//   XREF to: 005ffa2f (UNCONDITIONAL_CALL)
// 0060f51a: MOV EAX,EBX
// 0060f51c: SUB ESP,EAX
// 0060f51e: MOV EAX,ESP
// 0060f520: JMP 0x0060f524
//   XREF to: 0060f524 (UNCONDITIONAL_JUMP)
// 0060f522: XOR EAX,EAX
//   Label: LAB_0060f522
// 0060f524: MOV EBX,EAX
//   Label: LAB_0060f524
// 0060f526: TEST EAX,EAX
// 0060f528: JNZ 0x0060f561
//   XREF to: 0060f561 (CONDITIONAL_JUMP)
// 0060f52a: MOV ECX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x38] (READ)
// 0060f52d: PUSH ECX
// 0060f52e: MOV EDI,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x20] (READ)
// 0060f531: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f536: ADD ESP,0x4
// 0060f539: TEST EDI,EDI
// 0060f53b: JZ 0x0060f552
//   XREF to: 0060f552 (CONDITIONAL_JUMP)
// 0060f53d: PUSH ESI
// 0060f53e: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f543: ADD ESP,0x4
// 0060f546: MOV EAX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x1c] (READ)
// 0060f549: PUSH EAX
// 0060f54a: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f54f: ADD ESP,0x4
// 0060f552: MOV EAX,0xffffffff
//   Label: LAB_0060f552
// 0060f557: LEA ESP,[EBP + 0x72]
//   XREF to: Stack[-0x10] (DATA)
// 0060f55a: POP EBP
// 0060f55b: POP EDI
// 0060f55c: POP ESI
// 0060f55d: POP EBX
// 0060f55e: RET
// 0060f55f: MOV EBX,EAX
//   Label: LAB_0060f55f
// 0060f561: LEA EAX,[EBP + 0x2a]
//   Label: LAB_0060f561
//   XREF to: Stack[-0x58] (DATA)
// 0060f564: PUSH EAX
// 0060f565: LEA EAX,[EBP + 0x2e]
//   XREF to: Stack[-0x54] (DATA)
// 0060f568: PUSH EAX
// 0060f569: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x50] (DATA)
// 0060f56c: PUSH EAX
// 0060f56d: LEA EAX,[EBP + 0x36]
//   XREF to: Stack[-0x4c] (DATA)
// 0060f570: PUSH EAX
// 0060f571: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x24] (READ)
// 0060f574: SUB EAX,0x107
// 0060f579: ADD EAX,EBX
// 0060f57b: PUSH EAX
// 0060f57c: MOV EAX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x8] (READ)
// 0060f582: PUSH EAX
// 0060f583: CALL crt_file.c_splitpath_FUN_00610460
//   XREF to: 00610460 (UNCONDITIONAL_CALL)
// 0060f588: ADD ESP,0x18
// 0060f58b: LEA EAX,[EBP + -0x42]
//   XREF to: Stack[-0xc4] (DATA)
// 0060f58e: PUSH EAX
// 0060f58f: CALL dword ptr [PTR_crt_thread.c_EnterCriticalSection_FUN_0060b180_00685464]
//   XREF to: 0060b180 (COMPUTED_CALL)
//   XREF to: 00685464 (READ)
// 0060f595: ADD ESP,0x4
// 0060f598: MOV EDX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x44] (READ)
// 0060f59b: PUSH EDX
// 0060f59c: CALL crt_heap.c_InternalHeapAlloc_FUN_00601bc0
//   XREF to: 00601bc0 (UNCONDITIONAL_CALL)
// 0060f5a1: ADD ESP,0x4
// 0060f5a4: MOV dword ptr [EBP + 0x56],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0060f5a7: TEST EAX,EAX
// 0060f5a9: JNZ 0x0060f603
//   XREF to: 0060f603 (CONDITIONAL_JUMP)
// 0060f5ab: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x44] (READ)
// 0060f5ae: ADD EAX,0x3
// 0060f5b1: AND AL,0xfc
// 0060f5b3: MOV dword ptr [EBP + 0x4e],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0060f5b6: CALL crt_stack.c_GetStackUsage_FUN_0060c260
//   XREF to: 0060c260 (UNCONDITIONAL_CALL)
// 0060f5bb: CMP EAX,dword ptr [EBP + 0x4e]
//   XREF to: Stack[-0x34] (READ)
// 0060f5be: JBE 0x0060f5dc
//   XREF to: 0060f5dc (CONDITIONAL_JUMP)
// 0060f5c0: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x44] (READ)
// 0060f5c3: ADD EAX,0x3
// 0060f5c6: AND AL,0xfc
// 0060f5c8: PUSH EAX
// 0060f5c9: CALL crt_stack.c_ProbeStackSpace_FUN_005ffa2f
//   XREF to: 005ffa2f (UNCONDITIONAL_CALL)
// 0060f5ce: MOV EAX,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x44] (READ)
// 0060f5d1: ADD EAX,0x3
// 0060f5d4: AND AL,0xfc
// 0060f5d6: SUB ESP,EAX
// 0060f5d8: MOV EAX,ESP
// 0060f5da: JMP 0x0060f5de
//   XREF to: 0060f5de (UNCONDITIONAL_JUMP)
// 0060f5dc: XOR EAX,EAX
//   Label: LAB_0060f5dc
// 0060f5de: MOV dword ptr [EBP + 0x6a],EAX
//   Label: LAB_0060f5de
//   XREF to: Stack[-0x18] (WRITE)
// 0060f5e1: TEST EAX,EAX
// 0060f5e3: JNZ 0x0060f606
//   XREF to: 0060f606 (CONDITIONAL_JUMP)
// 0060f5e5: PUSH 0x2
// 0060f5e7: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060f5ec: ADD ESP,0x4
// 0060f5ef: PUSH 0xa
// 0060f5f1: MOV EDI,0xffffffff
// 0060f5f6: CALL crt_errno.c_SetWindowsError_FUN_006027c8
//   XREF to: 006027c8 (UNCONDITIONAL_CALL)
// 0060f5fb: ADD ESP,0x4
// 0060f5fe: JMP 0x0060f80e
//   XREF to: 0060f80e (UNCONDITIONAL_JUMP)
// 0060f603: MOV dword ptr [EBP + 0x6a],EAX
//   Label: LAB_0060f603
//   XREF to: Stack[-0x18] (WRITE)
// 0060f606: MOV EAX,dword ptr [EBP + 0x2a]
//   Label: LAB_0060f606
//   XREF to: Stack[-0x58] (READ)
// 0060f609: PUSH EAX
// 0060f60a: MOV EDX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x54] (READ)
// 0060f60d: PUSH EDX
// 0060f60e: MOV ECX,dword ptr [EBP + 0x32]
//   XREF to: Stack[-0x50] (READ)
// 0060f611: PUSH ECX
// 0060f612: MOV EAX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x4c] (READ)
// 0060f615: PUSH EAX
// 0060f616: PUSH EBX
// 0060f617: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 0060f61c: ADD ESP,0x14
// 0060f61f: PUSH 0x1
// 0060f621: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060f626: MOV EAX,dword ptr [EBP + 0x2a]
//   XREF to: Stack[-0x58] (READ)
// 0060f629: MOV DL,byte ptr [EAX]
// 0060f62b: ADD ESP,0x4
// 0060f62e: TEST DL,DL
// 0060f630: JZ 0x0060f687
//   XREF to: 0060f687 (CONDITIONAL_JUMP)
// 0060f632: PUSH 0x659758
//   XREF to: 00659758 (DATA)
// 0060f637: PUSH EAX
// 0060f638: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0060f63d: ADD ESP,0x8
// 0060f640: TEST EAX,EAX
// 0060f642: JNZ 0x0060f65c
//   XREF to: 0060f65c (CONDITIONAL_JUMP)
// 0060f644: PUSH EBX
// 0060f645: MOV EDI,0xffffffff
// 0060f64a: CALL crt_io.c_file_exists_FUN_0060f380
//   XREF to: 0060f380 (UNCONDITIONAL_CALL)
// 0060f64f: ADD ESP,0x4
// 0060f652: TEST EAX,EAX
// 0060f654: JNZ 0x0060f79d
//   XREF to: 0060f79d (CONDITIONAL_JUMP)
// 0060f65a: JMP 0x0060f687
//   XREF to: 0060f687 (UNCONDITIONAL_JUMP)
// 0060f65c: PUSH 0x0
//   Label: LAB_0060f65c
// 0060f65e: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060f663: ADD ESP,0x4
// 0060f666: MOV ECX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0060f66c: PUSH ECX
// 0060f66d: MOV EDI,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x38] (READ)
// 0060f670: PUSH EDI
// 0060f671: MOV EAX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x18] (READ)
// 0060f674: PUSH EAX
// 0060f675: PUSH EBX
// 0060f676: MOV EDX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0060f67c: PUSH EDX
// 0060f67d: CALL crt_process.c_spawn_FUN_006105a0
//   XREF to: 006105a0 (UNCONDITIONAL_CALL)
// 0060f682: ADD ESP,0x14
// 0060f685: MOV EDI,EAX
// 0060f687: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: LAB_0060f687
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060f68d: CMP dword ptr [EAX + 0x4],0x1
// 0060f691: JZ 0x0060f6a3
//   XREF to: 0060f6a3 (CONDITIONAL_JUMP)
// 0060f693: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060f699: CMP dword ptr [EAX + 0x4],0x9
// 0060f69d: JNZ 0x0060f80e
//   XREF to: 0060f80e (CONDITIONAL_JUMP)
// 0060f6a3: PUSH EBX
//   Label: LAB_0060f6a3
// 0060f6a4: CALL crt_string.c_strlen_FUN_0060f870
//   XREF to: 0060f870 (UNCONDITIONAL_CALL)
// 0060f6a9: LEA EDX,[EBX + EAX*0x1]
// 0060f6ac: MOV dword ptr [EBP + 0x5a],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0060f6af: MOV DH,byte ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 0060f6b2: ADD ESP,0x4
// 0060f6b5: TEST DH,DH
// 0060f6b7: JZ 0x0060f6c5
//   XREF to: 0060f6c5 (CONDITIONAL_JUMP)
// 0060f6b9: PUSH 0x1
// 0060f6bb: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060f6c0: ADD ESP,0x4
// 0060f6c3: JMP 0x0060f701
//   XREF to: 0060f701 (UNCONDITIONAL_JUMP)
// 0060f6c5: PUSH 0x659760
//   Label: LAB_0060f6c5
//   XREF to: 00659760 (DATA)
// 0060f6ca: MOV ECX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x28] (READ)
// 0060f6cd: PUSH ECX
// 0060f6ce: CALL crt_string.c_strcpy_FUN_00610760
//   XREF to: 00610760 (UNCONDITIONAL_CALL)
// 0060f6d3: ADD ESP,0x8
// 0060f6d6: PUSH 0x0
// 0060f6d8: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060f6dd: ADD ESP,0x4
// 0060f6e0: MOV EDI,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0060f6e6: PUSH EDI
// 0060f6e7: MOV EAX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x38] (READ)
// 0060f6ea: PUSH EAX
// 0060f6eb: MOV EDX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x18] (READ)
// 0060f6ee: PUSH EDX
// 0060f6ef: PUSH EBX
// 0060f6f0: MOV ECX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0060f6f6: PUSH ECX
// 0060f6f7: CALL crt_process.c_spawn_FUN_006105a0
//   XREF to: 006105a0 (UNCONDITIONAL_CALL)
// 0060f6fc: ADD ESP,0x14
// 0060f6ff: MOV EDI,EAX
// 0060f701: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   Label: LAB_0060f701
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060f707: CMP dword ptr [EAX + 0x4],0x1
// 0060f70b: JZ 0x0060f71d
//   XREF to: 0060f71d (CONDITIONAL_JUMP)
// 0060f70d: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060f713: CMP dword ptr [EAX + 0x4],0x9
// 0060f717: JNZ 0x0060f80e
//   XREF to: 0060f80e (CONDITIONAL_JUMP)
// 0060f71d: PUSH 0x0
//   Label: LAB_0060f71d
// 0060f71f: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060f724: ADD ESP,0x4
// 0060f727: PUSH 0x659768
//   XREF to: 00659768 (DATA)
// 0060f72c: MOV EDI,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x28] (READ)
// 0060f72f: PUSH EDI
// 0060f730: CALL crt_string.c_strcpy_FUN_00610760
//   XREF to: 00610760 (UNCONDITIONAL_CALL)
// 0060f735: ADD ESP,0x8
// 0060f738: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0060f73e: PUSH EAX
// 0060f73f: MOV EDX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x38] (READ)
// 0060f742: PUSH EDX
// 0060f743: MOV ECX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x18] (READ)
// 0060f746: PUSH ECX
// 0060f747: PUSH EBX
// 0060f748: MOV EDI,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0060f74e: PUSH EDI
// 0060f74f: CALL crt_process.c_spawn_FUN_006105a0
//   XREF to: 006105a0 (UNCONDITIONAL_CALL)
// 0060f754: ADD ESP,0x14
// 0060f757: MOV EDI,EAX
// 0060f759: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060f75f: CMP dword ptr [EAX + 0x4],0x1
// 0060f763: JZ 0x0060f775
//   XREF to: 0060f775 (CONDITIONAL_JUMP)
// 0060f765: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060f76b: CMP dword ptr [EAX + 0x4],0x9
// 0060f76f: JNZ 0x0060f80e
//   XREF to: 0060f80e (CONDITIONAL_JUMP)
// 0060f775: PUSH 0x0
//   Label: LAB_0060f775
// 0060f777: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060f77c: ADD ESP,0x4
// 0060f77f: PUSH 0x659758
//   XREF to: 00659758 (DATA)
// 0060f784: MOV EAX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x28] (READ)
// 0060f787: PUSH EAX
// 0060f788: CALL crt_string.c_strcpy_FUN_00610760
//   XREF to: 00610760 (UNCONDITIONAL_CALL)
// 0060f78d: ADD ESP,0x8
// 0060f790: PUSH EBX
// 0060f791: CALL crt_io.c_file_exists_FUN_0060f380
//   XREF to: 0060f380 (UNCONDITIONAL_CALL)
// 0060f796: ADD ESP,0x4
// 0060f799: TEST EAX,EAX
// 0060f79b: JZ 0x0060f80e
//   XREF to: 0060f80e (CONDITIONAL_JUMP)
// 0060f79d: MOV EDX,dword ptr [EBP + 0x4a]
//   Label: LAB_0060f79d
//   XREF to: Stack[-0x38] (READ)
// 0060f7a0: PUSH EDX
// 0060f7a1: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f7a6: ADD ESP,0x4
// 0060f7a9: PUSH 0x1
// 0060f7ab: MOV EDI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x18] (READ)
// 0060f7ae: PUSH EDI
// 0060f7af: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0xc] (READ)
// 0060f7b5: PUSH EAX
// 0060f7b6: XOR ECX,ECX
// 0060f7b8: PUSH EBX
// 0060f7b9: MOV dword ptr [EBP + 0x4a],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 0060f7bc: CALL crt_process.c_build_command_line_FUN_006103a4
//   XREF to: 006103a4 (UNCONDITIONAL_CALL)
// 0060f7c1: ADD ESP,0x10
// 0060f7c4: PUSH 0x0
// 0060f7c6: PUSH EDI
// 0060f7c7: XOR EAX,EAX
// 0060f7c9: PUSH EBX
// 0060f7ca: MOV AL,byte ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 0060f7cd: PUSH EAX
// 0060f7ce: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x48] (DATA)
// 0060f7d1: PUSH EAX
// 0060f7d2: CALL crt_process.c_set_shell_execute_flag_FUN_00609c80
//   XREF to: 00609c80 (UNCONDITIONAL_CALL)
// 0060f7d7: ADD ESP,0x8
// 0060f7da: MOV BL,byte ptr [EBP + 0x6e]
//   XREF to: Stack[-0x14] (READ)
// 0060f7dd: PUSH EAX
// 0060f7de: TEST BL,BL
// 0060f7e0: JZ 0x0060f7e9
//   XREF to: 0060f7e9 (CONDITIONAL_JUMP)
// 0060f7e2: MOV EAX,0x659778
//   XREF to: 00659778 (PARAM)
// 0060f7e7: JMP 0x0060f7ee
//   XREF to: 0060f7ee (UNCONDITIONAL_JUMP)
// 0060f7e9: MOV EAX,0x65977c
//   Label: LAB_0060f7e9
//   XREF to: 0065977c (PARAM)
// 0060f7ee: PUSH EAX
//   Label: LAB_0060f7ee
//   XREF to: 00659778 (DATA)
//   XREF to: 0065977c (DATA)
// 0060f7ef: PUSH 0x659770
//   XREF to: 00659770 (DATA)
// 0060f7f4: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 0060f7f9: ADD ESP,0x4
// 0060f7fc: PUSH EAX
// 0060f7fd: MOV EBX,dword ptr [EBP + 0x86]
//   XREF to: Stack[0x4] (READ)
// 0060f803: PUSH EBX
// 0060f804: CALL crt_process.c_execvp_FUN_00610790
//   XREF to: 00610790 (UNCONDITIONAL_CALL)
// 0060f809: ADD ESP,0x1c
// 0060f80c: MOV EDI,EAX
// 0060f80e: CMP dword ptr [EBP + 0x62],0x0
//   Label: LAB_0060f80e
//   XREF to: Stack[-0x20] (READ)
// 0060f812: JZ 0x0060f829
//   XREF to: 0060f829 (CONDITIONAL_JUMP)
// 0060f814: PUSH ESI
// 0060f815: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f81a: ADD ESP,0x4
// 0060f81d: MOV ESI,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x1c] (READ)
// 0060f820: PUSH ESI
// 0060f821: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f826: ADD ESP,0x4
// 0060f829: MOV EAX,dword ptr [EBP + 0x56]
//   Label: LAB_0060f829
//   XREF to: Stack[-0x2c] (READ)
// 0060f82c: PUSH EAX
// 0060f82d: CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
//   XREF to: 00601ce0 (UNCONDITIONAL_CALL)
// 0060f832: ADD ESP,0x4
// 0060f835: MOV EDX,dword ptr [EBP + 0x52]
//   XREF to: Stack[-0x30] (READ)
// 0060f838: PUSH EDX
// 0060f839: CALL crt_heap.c_ValidateHeapIntegrity_FUN_00601ce0
//   XREF to: 00601ce0 (UNCONDITIONAL_CALL)
// 0060f83e: ADD ESP,0x4
// 0060f841: MOV EBX,dword ptr [EBP + 0x4a]
//   XREF to: Stack[-0x38] (READ)
// 0060f844: PUSH EBX
// 0060f845: CALL crt_memory.c_free_FUN_00601cd0
//   XREF to: 00601cd0 (UNCONDITIONAL_CALL)
// 0060f84a: ADD ESP,0x4
// 0060f84d: LEA EAX,[EBP + -0x42]
//   XREF to: Stack[-0xc4] (DATA)
// 0060f850: PUSH EAX
// 0060f851: CALL dword ptr [PTR_crt_thread.c_ExitCriticalSection_FUN_0060b180_00685468]
//   XREF to: 0060b180 (COMPUTED_CALL)
//   XREF to: 00685468 (READ)
// 0060f857: ADD ESP,0x4
// 0060f85a: MOV EAX,EDI
// 0060f85c: LEA ESP,[EBP + 0x72]
//   Label: LAB_0060f85c
//   XREF to: Stack[-0x10] (DATA)
// 0060f85f: POP EBP
// 0060f860: POP EDI
// 0060f861: POP ESI
// 0060f862: POP EBX
// 0060f863: RET
