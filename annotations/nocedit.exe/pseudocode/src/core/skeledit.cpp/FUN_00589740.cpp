// Name: core_skeledit.cpp_FUN_00589740
// Address: 00589740
// Address Range: [[00589740, 005897ae]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_00589740()

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589740(void)

{
  int iVar1;
  int iVar2;
  FILE *in_stack_0000000c;
  byte *in_stack_00000010;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x10);
  *in_stack_00000010 = 0;
  while( true ) {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
    if (iVar1 < 0) {
      return;
    }
    if (iVar1 == 10) break;
    if (iVar1 == 0x22) {
      while( true ) {
        iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
        if (iVar1 < 0) {
          return;
        }
        if (iVar1 == 10) break;
        if (iVar1 == 0x22) {
          iVar1 = 1;
          do {
            iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_0000000c);
            if (iVar2 < 0) {
              return;
            }
          } while ((iVar2 != 10) || (iVar1 = iVar1 + -1, 0 < iVar1));
          return;
        }
        *in_stack_00000010 = (char)iVar1;
        in_stack_00000010[1] = 0;
        in_stack_00000010 = in_stack_00000010 + 1;
      }
      return;
    }
  }
  return;
}
