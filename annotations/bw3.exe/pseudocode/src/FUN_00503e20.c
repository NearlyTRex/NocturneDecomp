// Name: FUN_00503e20
// Address: 00503e20
// Address Range: [[00503e20, 00503ec1]]
// Convention: unknown
// Signature: void FUN_00503e20(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00503e20(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_005a54b0("netlog.txt");
  _DAT_01da6478 = 1;
  _DAT_01da6474 = FUN_005806a0();
  _DAT_01da6474 = _DAT_01da6474 / 0x12;
  FUN_00571ea0();
  pcVar2 = (char *)FUN_005a5ec0("USERNAME");
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_005a5ec0("COMPUTERNAME");
  }
  if (pcVar2 == (char *)0x0) {
    pcVar2 = "MyComputer";
  }
  pcVar3 = (char *)(param_1 + 8);
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  _DAT_01da648c = 0;
  _DAT_01dc2690 = 0;
  FUN_005043b0(param_1,0);
  return;
}
