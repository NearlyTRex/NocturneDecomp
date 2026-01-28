// Name: crt_process.c_spawnvp_with_path_search_FUN_0060e6a0
// Address: 0060e6a0
// Address Range: [[0060e6a0, 0060e847]]
// Convention: __cdecl
// Signature: int __cdecl crt_process_c_spawnvp_with_path_search_FUN_0060e6a0(int mode,char *program,char **argv)

#include "nocturne.h"

int __cdecl crt_process_c_spawnvp_with_path_search_FUN_0060e6a0(int mode,char *program,char **argv)

{
  int iVar1;
  ThreadData *pTVar2;
  char *str;
  int iVar3;
  char *pcVar4;
  char *dest;
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
