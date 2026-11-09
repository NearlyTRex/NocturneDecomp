// Name: core_fldnotes.cpp_FUN_004a2620
// Address: 004a2620
// Address Range: [[004a2620, 004a2683]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a2620(int param_1,char *param_2)

#include "nocturne.h"

void core_fldnotes_cpp_FUN_004a2620(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  
  iVar3 = 0;
  cVar1 = *(char *)(param_1 + 0x18);
  iVar2 = param_1;
  while (cVar1 != '\0') {
    iVar3 = iVar3 + 1;
    if (2 < iVar3) break;
    cVar1 = *(char *)(iVar2 + 0x38);
    iVar2 = iVar2 + 0x20;
  }
  if (2 < iVar3) {
    memset((void *)(param_1 + 0x18),0,0x60);
    iVar3 = 0;
  }
  pcVar4 = (char *)(param_1 + 0x18 + iVar3 * 0x20);
  do {
    cVar1 = *param_2;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  return;
}
