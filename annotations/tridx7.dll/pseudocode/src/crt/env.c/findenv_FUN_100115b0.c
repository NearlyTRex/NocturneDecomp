// Name: crt_env.c_findenv_FUN_100115b0
// Address: 100115b0
// Address Range: [[100115b0, 1001160b]]
// Convention: __cdecl
// Signature: int __cdecl crt_env_c_findenv_FUN_100115b0(char *name,int len)

#include "nocturne.h"

int __cdecl findenv(char *name,int len)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = *DAT_10016d80;
  piVar2 = DAT_10016d80;
  while( true ) {
    if (iVar1 == 0) {
      return -((int)piVar2 - (int)DAT_10016d80 >> 2);
    }
    iVar1 = __env_compare(name,(char *)*piVar2,len);
    if ((iVar1 == 0) && ((*(char *)(*piVar2 + len) == '=' || (*(char *)(*piVar2 + len) == '\0'))))
    break;
    piVar2 = piVar2 + 1;
    iVar1 = *piVar2;
  }
  return (int)piVar2 - (int)DAT_10016d80 >> 2;
}
