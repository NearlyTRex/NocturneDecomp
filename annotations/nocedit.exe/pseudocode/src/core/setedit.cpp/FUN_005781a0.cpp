// Name: core_setedit.cpp_FUN_005781a0
// Address: 005781a0
// Address Range: [[005781a0, 0057820d]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_005781a0()

#include "nocturne.h"

int core_setedit_cpp_FUN_005781a0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  char *str1;
  char *in_stack_00000004;
  char acStack_108 [252];
  
  iVar2 = 0;
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000004,(char *)0x0,(char *)0x0,&stack0xfffffef4,(char *)0x0);
  if (0 < DAT_03654368) {
    str1 = &DAT_03654370;
    do {
      iVar1 = crt_string_c_stricmp_FUN_005fe7f0(str1,acStack_108);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x28;
    } while (iVar2 < DAT_03654368);
  }
  return -1;
}
