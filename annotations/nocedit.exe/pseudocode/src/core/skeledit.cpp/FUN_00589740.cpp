// Name: core_skeledit.cpp_FUN_00589740
// Address: 00589740
// Address Range: [[00589740, 005897ae]]
// Convention: unknown
// Signature: void core_skeledit_cpp_FUN_00589740(void)

#include "nocturne.h"

void core_skeledit_cpp_FUN_00589740(void)

{
  int iVar1;
  int iVar2;
  _FILE *in_stack_00000004;
  byte *in_stack_00000008;
  
  __STK(0x10);
  *in_stack_00000008 = 0;
  while( true ) {
    iVar1 = _fgetc(in_stack_00000004);
    if (iVar1 < 0) {
      return;
    }
    if (iVar1 == 10) break;
    if (iVar1 == 0x22) {
      while( true ) {
        iVar1 = _fgetc(in_stack_00000004);
        if (iVar1 < 0) {
          return;
        }
        if (iVar1 == 10) break;
        if (iVar1 == 0x22) {
          iVar1 = 1;
          do {
            iVar2 = _fgetc(in_stack_00000004);
            if (iVar2 < 0) {
              return;
            }
          } while ((iVar2 != 10) || (iVar1 = iVar1 + -1, 0 < iVar1));
          return;
        }
        *in_stack_00000008 = (char)iVar1;
        in_stack_00000008[1] = 0;
        in_stack_00000008 = in_stack_00000008 + 1;
      }
      return;
    }
  }
  return;
}
