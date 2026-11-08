// Name: FUN_00434320
// Address: 00434320
// Address Range: [[00434320, 004343b5]]
// Convention: unknown
// Signature: void FUN_00434320(int param_1,undefined4 param_2,undefined4 param_3,char *param_4,undefined4 param_5 )

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00434320(int param_1,uint param_2,uint param_3,char *param_4,uint param_5 )

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  char *pcVar4;
  
  if (0x15 < *(int *)(param_1 + 0x27c4)) {
    _DAT_01d1d400 = "..\\core\\charactr.cpp";
    _DAT_01d1d404 = 0x117a;
    FUN_005030e0("CCharacter::addLayerAction - too many");
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
