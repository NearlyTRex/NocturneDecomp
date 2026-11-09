// Name: unkafter_zombie.cpp_FUN_005cd248
// Address: 005cd248
// Address Range: [[005cd248, 005cd271]]
// Convention: unknown
// Signature: char unkafter_zombie_cpp_FUN_005cd248(void)

#include "nocturne.h"

char unkafter_zombie_cpp_FUN_005cd248(void)

{
  BOOL BVar1;
  
  if (DAT_00626b4c == '\0') {
    BVar1 = SetConsoleCtrlHandler(unkafter_zombie_cpp_FUN_005cd1b0,1);
    if (BVar1 != 0) {
      DAT_00626b4c = '\x01';
    }
  }
  return DAT_00626b4c;
}
