// Name: core_setedit.cpp_FUN_00578210
// Address: 00578210
// Address Range: [[00578210, 00578285]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_FUN_00578210()

#include "nocturne.h"

byte core_setedit_cpp_FUN_00578210(void)

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
        if (iVar2 < 0) {
          return 0xff;
        }
        return (&DAT_03659190)[iVar2];
      }
      iVar2 = iVar2 + 1;
      str1 = str1 + 0x28;
    } while (iVar2 < DAT_03654368);
  }
  return 0xff;
}
