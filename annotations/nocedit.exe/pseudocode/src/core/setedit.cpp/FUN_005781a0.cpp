// Name: core_setedit.cpp_FUN_005781a0
// Address: 005781a0
// Address Range: [[005781a0, 0057820d]]
// Convention: unknown
// Signature: int core_setedit_cpp_FUN_005781a0(void)

#include "nocturne.h"

int core_setedit_cpp_FUN_005781a0(void)

{
  int iVar1;
  int iVar2;
  char *str1;
  char *in_stack_00000004;
  char local_10c [256];
  
  iVar2 = 0;
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000004,(char *)0x0,(char *)0x0,local_10c,(char *)0x0);
  if (0 < DAT_03654368) {
    str1 = &DAT_03654370;
    do {
      iVar1 = stricmp(str1,local_10c);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x28;
    } while (iVar2 < DAT_03654368);
  }
  return -1;
}
