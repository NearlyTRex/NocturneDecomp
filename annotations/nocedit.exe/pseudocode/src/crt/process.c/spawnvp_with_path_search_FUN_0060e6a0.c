// Name: crt_process.c_spawnvp_with_path_search_FUN_0060e6a0
// Address: 0060e6a0
// Address Range: [[0060e6a0, 0060e847]]
// Convention: __cdecl
// Signature: int crt_process.c_spawnvp_with_path_search_FUN_0060e6a0(int mode, char * program, char * * argv)
// Cross-references:
//   crt_process.c_spawnvp_FUN_0060ca20 (0060ca20) at 0060ca38 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_PATH_00659750
//   GET_TLS_FUNC* PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4 = 0060242c
// Function calls:
//   crt_env.c_getenv_FUN_006013f0
//   crt_errno.c_setErrno_FUN_00602790
//   crt_errno.c_SetWindowsError_FUN_006027c8
//   crt_process.c_spawnvp_FUN_0060f39c
//   crt_stack.c_stack_probe_FUN_005ff9f3
//   crt_string.c_memcpy_FUN_0060cd60
//   crt_string.c_strchr_FUN_0060f890
//   crt_string.c_strlen_FUN_0060f870
//   crt_thread.c_GetTLS_FUN_0060242c

#include "nocturne.h"

int __cdecl crt_process_c_spawnvp_with_path_search_FUN_0060e6a0(int mode,char *program,char **argv)

{
  int iVar1;
  ThreadData *pTVar2;
  char *str;
  int iVar3;
  char *pcVar4;
  char *dest;
  BADSPACEBASE *in_ESP;
  uint count;
  char acStack_11c [260];
  uint uStack_18;
  SIZE_T SStack_14;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x130);
  iVar1 = crt_process_c_spawnvp_FUN_0060f39c(mode,program,argv);
  if (((iVar1 == -1) &&
      ((((pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar2->errno_value == 1 ||
         (pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar2->errno_value == 9)) &&
        (*program != '\\')) && ((*program != '\0' && (program[1] != ':')))))) &&
     (str = crt_env_c_getenv_FUN_006013f0("PATH"), str != (char *)0x0)) {
    iVar3 = crt_string_c_strlen_FUN_0060f870(program);
    SStack_14 = iVar3 + 1;
    if (*str != '\0') {
      uStack_18 = 0x104 - SStack_14;
      while( true ) {
        pcVar4 = crt_string_c_strchr_FUN_0060f890(str,0x3b);
        if (pcVar4 == (char *)0x0) {
          iVar1 = crt_string_c_strlen_FUN_0060f870(str);
          pcVar4 = str + iVar1;
        }
        count = (int)pcVar4 - (int)str;
        if (uStack_18 < count) break;
        dest = acStack_11c + count;
        crt_string_c_memcpy_FUN_0060cd60(acStack_11c,str,count);
        if (acStack_11c[count - 1] != '\\') {
          *dest = '\\';
          dest = acStack_11c + count + 1;
        }
        crt_string_c_memcpy_FUN_0060cd60(dest,program,SStack_14);
        iVar1 = crt_process_c_spawnvp_FUN_0060f39c(mode,acStack_11c,argv);
        if (iVar1 != -1) {
          return iVar1;
        }
        pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)();
        if ((pTVar2->errno_value != 1) &&
           (pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar2->errno_value != 9))
        {
          return -1;
        }
        if (*pcVar4 != ';') {
          return -1;
        }
        str = pcVar4 + 1;
        if (*str == '\0') {
          return -1;
        }
      }
      crt_errno_c_setErrno_FUN_00602790(2);
      crt_errno_c_SetWindowsError_FUN_006027c8(10);
      iVar1 = -1;
    }
  }
  return iVar1;
}


// Assembly code:
// 0060e6a0: PUSH 0x130
//   Label: crt_process.c_spawnvp_with_path_search_FUN_0060e6a0
// 0060e6a5: CALL crt_stack.c_stack_probe_FUN_005ff9f3
//   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
// 0060e6aa: PUSH EBX
// 0060e6ab: PUSH ESI
// 0060e6ac: PUSH EDI
// 0060e6ad: PUSH EBP
// 0060e6ae: SUB ESP,0x10c
// 0060e6b4: MOV EBP,dword ptr [ESP + 0x124]
//   XREF to: Stack[0x8] (READ)
// 0060e6bb: MOV EDX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[0x10] (READ)
// 0060e6c2: PUSH EDX
// 0060e6c3: MOV EBX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[0xc] (READ)
// 0060e6ca: PUSH EBX
// 0060e6cb: PUSH EBP
// 0060e6cc: MOV ECX,dword ptr [ESP + 0x12c]
//   XREF to: Stack[0x4] (READ)
// 0060e6d3: PUSH ECX
// 0060e6d4: CALL crt_process.c_spawnvp_FUN_0060f39c
//   XREF to: 0060f39c (UNCONDITIONAL_CALL)
// 0060e6d9: ADD ESP,0x10
// 0060e6dc: MOV EDI,EAX
// 0060e6de: CMP EAX,-0x1
// 0060e6e1: JNZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e6e7: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060e6ed: CMP dword ptr [EAX + 0x4],0x1
// 0060e6f1: JZ 0x0060e703
//   XREF to: 0060e703 (CONDITIONAL_JUMP)
// 0060e6f3: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060e6f9: CMP dword ptr [EAX + 0x4],0x9
// 0060e6fd: JNZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e703: MOV AH,byte ptr [EBP]
//   Label: LAB_0060e703
// 0060e706: CMP AH,0x5c
// 0060e709: JZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e70f: TEST AH,AH
// 0060e711: JZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e717: CMP byte ptr [EBP + 0x1],0x3a
// 0060e71b: JZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e721: PUSH 0x659750
//   XREF to: 00659750 (DATA)
// 0060e726: CALL crt_env.c_getenv_FUN_006013f0
//   XREF to: 006013f0 (UNCONDITIONAL_CALL)
// 0060e72b: MOV ESI,EAX
// 0060e72d: ADD ESP,0x4
// 0060e730: MOV EBX,EAX
// 0060e732: TEST EAX,EAX
// 0060e734: JZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e73a: PUSH EBP
// 0060e73b: CALL crt_string.c_strlen_FUN_0060f870
//   XREF to: 0060f870 (UNCONDITIONAL_CALL)
// 0060e740: ADD ESP,0x4
// 0060e743: INC EAX
// 0060e744: MOV CL,byte ptr [ESI]
// 0060e746: MOV dword ptr [ESP + 0x108],EAX
// 0060e74d: TEST CL,CL
// 0060e74f: JZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e755: MOV EAX,0x104
// 0060e75a: MOV ECX,dword ptr [ESP + 0x108]
// 0060e761: SUB EAX,ECX
// 0060e763: MOV dword ptr [ESP + 0x104],EAX
// 0060e76a: PUSH 0x3b
//   Label: LAB_0060e76a
// 0060e76c: PUSH EBX
// 0060e76d: CALL crt_string.c_strchr_FUN_0060f890
//   XREF to: 0060f890 (UNCONDITIONAL_CALL)
// 0060e772: ADD ESP,0x8
// 0060e775: MOV ESI,EAX
// 0060e777: TEST EAX,EAX
// 0060e779: JNZ 0x0060e787
//   XREF to: 0060e787 (CONDITIONAL_JUMP)
// 0060e77b: PUSH EBX
// 0060e77c: CALL crt_string.c_strlen_FUN_0060f870
//   XREF to: 0060f870 (UNCONDITIONAL_CALL)
// 0060e781: ADD ESP,0x4
// 0060e784: LEA ESI,[EBX + EAX*0x1]
// 0060e787: MOV EDI,ESI
//   Label: LAB_0060e787
// 0060e789: MOV EAX,dword ptr [ESP + 0x104]
// 0060e790: SUB EDI,EBX
// 0060e792: CMP EDI,EAX
// 0060e794: JBE 0x0060e7b4
//   XREF to: 0060e7b4 (CONDITIONAL_JUMP)
// 0060e796: PUSH 0x2
// 0060e798: CALL crt_errno.c_setErrno_FUN_00602790
//   XREF to: 00602790 (UNCONDITIONAL_CALL)
// 0060e79d: ADD ESP,0x4
// 0060e7a0: PUSH 0xa
// 0060e7a2: CALL crt_errno.c_SetWindowsError_FUN_006027c8
//   XREF to: 006027c8 (UNCONDITIONAL_CALL)
// 0060e7a7: MOV EAX,0xffffffff
// 0060e7ac: ADD ESP,0x4
// 0060e7af: JMP 0x0060e83d
//   XREF to: 0060e83d (UNCONDITIONAL_JUMP)
// 0060e7b4: PUSH EDI
//   Label: LAB_0060e7b4
// 0060e7b5: PUSH EBX
// 0060e7b6: LEA EAX,[ESP + 0x8]
// 0060e7ba: LEA EBX,[ESP + 0x8]
// 0060e7be: PUSH EAX
// 0060e7bf: ADD EBX,EDI
// 0060e7c1: CALL crt_string.c_memcpy_FUN_0060cd60
//   XREF to: 0060cd60 (UNCONDITIONAL_CALL)
// 0060e7c6: MOV AL,byte ptr [EBX + -0x1]
// 0060e7c9: ADD ESP,0xc
// 0060e7cc: CMP AL,0x5c
// 0060e7ce: JZ 0x0060e7d4
//   XREF to: 0060e7d4 (CONDITIONAL_JUMP)
// 0060e7d0: MOV byte ptr [EBX],0x5c
// 0060e7d3: INC EBX
// 0060e7d4: MOV EDX,dword ptr [ESP + 0x108]
//   Label: LAB_0060e7d4
// 0060e7db: PUSH EDX
// 0060e7dc: PUSH EBP
// 0060e7dd: PUSH EBX
// 0060e7de: CALL crt_string.c_memcpy_FUN_0060cd60
//   XREF to: 0060cd60 (UNCONDITIONAL_CALL)
// 0060e7e3: ADD ESP,0xc
// 0060e7e6: MOV EBX,dword ptr [ESP + 0x12c]
// 0060e7ed: PUSH EBX
// 0060e7ee: MOV ECX,dword ptr [ESP + 0x12c]
// 0060e7f5: PUSH ECX
// 0060e7f6: LEA EAX,[ESP + 0x8]
// 0060e7fa: PUSH EAX
// 0060e7fb: MOV EDI,dword ptr [ESP + 0x12c]
// 0060e802: PUSH EDI
// 0060e803: CALL crt_process.c_spawnvp_FUN_0060f39c
//   XREF to: 0060f39c (UNCONDITIONAL_CALL)
// 0060e808: ADD ESP,0x10
// 0060e80b: MOV EDI,EAX
// 0060e80d: CMP EAX,-0x1
// 0060e810: JNZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e812: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060e818: CMP dword ptr [EAX + 0x4],0x1
// 0060e81c: JZ 0x0060e82a
//   XREF to: 0060e82a (CONDITIONAL_JUMP)
// 0060e81e: CALL dword ptr [PTR_crt_thread.c_GetTLS_FUN_0060242c_00684ee4]
//   XREF to: 0060242c (COMPUTED_CALL)
//   XREF to: 00684ee4 (READ)
// 0060e824: CMP dword ptr [EAX + 0x4],0x9
// 0060e828: JNZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e82a: CMP byte ptr [ESI],0x3b
//   Label: LAB_0060e82a
// 0060e82d: JNZ 0x0060e83b
//   XREF to: 0060e83b (CONDITIONAL_JUMP)
// 0060e82f: LEA EBX,[ESI + 0x1]
// 0060e832: CMP byte ptr [EBX],0x0
// 0060e835: JNZ 0x0060e76a
//   XREF to: 0060e76a (CONDITIONAL_JUMP)
// 0060e83b: MOV EAX,EDI
//   Label: LAB_0060e83b
// 0060e83d: ADD ESP,0x10c
//   Label: LAB_0060e83d
// 0060e843: POP EBP
// 0060e844: POP EDI
// 0060e845: POP ESI
// 0060e846: POP EBX
// 0060e847: RET
