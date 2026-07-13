// Name: __setargv
// Address: 10007c40
// Address Range: [[10007c40, 10007cda]]
// Convention: __cdecl
// Signature: int __cdecl __setargv(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Library Function - Single Match
int __cdecl __setargv(void)

{
  int iVar1;
  char *pcVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_10240690,0x104);
  _DAT_10016d90 = &DAT_10240690;
  pcVar2 = &DAT_10240690;
  if (*DAT_10241980 != '\0') {
    pcVar2 = DAT_10241980;
  }
  FUN_10007ce0(pcVar2,0,0,&local_8,&local_4);
  iVar1 = FUN_10008830(local_8 * 4 + local_4);
  if (iVar1 == 0) {
    __amsg_exit(8);
  }
  FUN_10007ce0(pcVar2,iVar1,iVar1 + local_8 * 4,&local_8,&local_4);
  _DAT_10016d78 = iVar1;
  _DAT_10016d74 = local_8 + -1;
  return local_8 + -1;
}
