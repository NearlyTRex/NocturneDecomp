// Name: FUN_0052c520
// Address: 0052c520
// Address Range: [[0052c520, 0052c5c1]]
// Convention: unknown
// Signature: void FUN_0052c520(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0052c520(int param_1)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  
  FUN_005c25c0("netlog.txt");
  _DAT_01d51da0 = 1;
  _DAT_01d51d9c = FUN_005b2420();
  _DAT_01d51d9c = _DAT_01d51d9c / 0x12;
  FUN_0059eeb0();
  pcVar2 = (char *)FUN_005c3050("USERNAME");
  if (pcVar2 == (char *)0x0) {
    pcVar2 = (char *)FUN_005c3050("COMPUTERNAME");
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
  _DAT_01d51db4 = 0;
  _DAT_01d6dfb8 = 0;
  FUN_0052cab0(param_1,0);
  return;
}
