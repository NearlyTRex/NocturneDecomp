// Name: FUN_004eafd0
// Address: 004eafd0
// Address Range: [[004eafd0, 004eb080]]
// Convention: unknown
// Signature: void FUN_004eafd0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004eafd0(int param_1)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  FUN_004f7050(param_1 + 0x1fae8);
  uVar2 = FUN_0040c2b0(&DAT_005e4800,_DAT_02c99770);
  pcVar3 = (char *)FUN_0040c600(uVar2);
  if (pcVar3 == (char *)0x0) {
    _DAT_01d1d400 = "..\\core\\hero.cpp";
    _DAT_01d1d404 = 0x1d3;
    FUN_005030e0("Out of memory!");
  }
  pcVar4 = "Your_weapon";
  pcVar5 = pcVar3;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  FUN_004f7690(param_1 + 0x1fae8,pcVar3,1);
  FUN_004f8dc0(param_1 + 0x1fae8,0,5,1);
  pcVar3[0x568] = 'd';
  pcVar3[0x569] = '\0';
  pcVar3[0x56a] = '\0';
  pcVar3[0x56b] = '\0';
  return;
}
