// Name: FUN_0056af50
// Address: 0056af50
// Address Range: [[0056af50, 0056af75]]
// Convention: unknown
// Signature: int FUN_0056af50(void)

#include "nocturne.h"

int FUN_0056af50(void)

{
  int iVar1;
  byte uVar2;
  undefined3 extraout_var;
  int character;
  
  iVar1 = DAT_005c1cf8;
  uVar2 = DrainConsoleInputAndSetup();
  character = CONCAT31(extraout_var,uVar2);
  if ((character != -1) && (iVar1 == 0)) {
    WriteConsoleChar(character);
  }
  return character;
}
