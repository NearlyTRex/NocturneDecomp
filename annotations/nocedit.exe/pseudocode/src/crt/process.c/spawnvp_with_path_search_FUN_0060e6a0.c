// Name: crt_process.c_spawnvp_with_path_search_FUN_0060e6a0
// Address: 0060e6a0
// Address Range: [[0060e6a0, 0060e847]]
// Convention: __cdecl
// Signature: int __cdecl crt_process_c_spawnvp_with_path_search_FUN_0060e6a0(int mode,char *program,char **argv,char **envp)

#include "nocturne.h"

int __cdecl spawnvp_with_path_search(int mode,char *program,char **argv,char **envp)

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
  
  __STK();
  iVar1 = spawnvp(mode,program,argv,envp);
  if (((iVar1 == -1) &&
      ((((pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar2->errno_value == 1 ||
         (pTVar2 = (*PTR_crt_thread_c_GetTLS_FUN_0060242c_00684ee4)(), pTVar2->errno_value == 9)) &&
        (*program != '\\')) && ((*program != '\0' && (program[1] != ':')))))) &&
     (str = getenv("PATH"), str != (char *)0x0)) {
    iVar3 = strlen(program);
    SStack_14 = iVar3 + 1;
    if (*str != '\0') {
      uStack_18 = 0x104 - SStack_14;
      while( true ) {
        pcVar4 = strchr(str,0x3b);
        if (pcVar4 == (char *)0x0) {
          iVar1 = strlen(str);
          pcVar4 = str + iVar1;
        }
        count = (int)pcVar4 - (int)str;
        if (uStack_18 < count) break;
        dest = acStack_11c + count;
        memcpy(acStack_11c,str,count);
        if (acStack_11c[count - 1] != '\\') {
          *dest = '\\';
          dest = acStack_11c + count + 1;
        }
        memcpy(dest,program,SStack_14);
        iVar1 = spawnvp(mode,acStack_11c,argv,envp);
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
      setErrno(2);
      SetWindowsError(10);
      iVar1 = -1;
    }
  }
  return iVar1;
}
