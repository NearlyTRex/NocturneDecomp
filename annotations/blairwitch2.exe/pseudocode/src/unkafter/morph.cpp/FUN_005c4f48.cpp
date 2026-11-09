// Name: unkafter_morph.cpp_FUN_005c4f48
// Address: 005c4f48
// Address Range: [[005c4f48, 005c4f71]]
// Convention: unknown
// Signature: char unkafter_morph_cpp_FUN_005c4f48(void)

#include "nocturne.h"

char unkafter_morph_cpp_FUN_005c4f48(void)

{
  BOOL BVar1;
  
  if (DAT_0061f7cc == '\0') {
    BVar1 = SetConsoleCtrlHandler(unkafter_morph_cpp_FUN_005c4eb0,1);
    if (BVar1 != 0) {
      DAT_0061f7cc = '\x01';
    }
  }
  return DAT_0061f7cc;
}
