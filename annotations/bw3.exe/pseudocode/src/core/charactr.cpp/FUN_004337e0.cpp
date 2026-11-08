// Name: FUN_004337e0
// Address: 004337e0
// Address Range: [[004337e0, 00433875]]
// Convention: unknown
// Signature: void FUN_004337e0(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5 )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004337e0(int param_1,uint param_2,uint param_3,char *param_4,uint param_5 )

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  
  if (0x20 < *(int *)(param_1 + 0x27c4)) {
    _DAT_01d71de0 = "..\\core\\charactr.cpp";
    _DAT_01d71de4 = 0x12bf;
    FUN_004e4330("CCharacter::addLayerAction - too many");
  }
  iVar2 = *(int *)(param_1 + 0x27c4);
  *(int *)(param_1 + 0x27c4) = *(int *)(param_1 + 0x27c4) + 1;
  puVar3 = (uint *)(param_1 + 0x27c8 + iVar2 * 0x38);
  *puVar3 = param_2;
  pcVar4 = (char *)(puVar3 + 2);
  puVar3[1] = param_3;
  do {
    cVar1 = *param_4;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_4[1];
    param_4 = param_4 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  puVar3[10] = param_5;
  return;
}
