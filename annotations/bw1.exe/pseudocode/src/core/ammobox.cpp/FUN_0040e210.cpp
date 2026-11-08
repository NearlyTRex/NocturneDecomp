// Name: FUN_0040e210
// Address: 0040e210
// Address Range: [[0040e210, 0040e319]]
// Convention: unknown
// Signature: void FUN_0040e210(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0040e210(int param_1,uint param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  if (*(int *)(param_1 + 800) != 0) {
    FUN_004f7690(param_2,*(int *)(param_1 + 800),1);
    *(uint *)(param_1 + 800) = 0;
    *(uint *)(param_1 + 0x314) = 0;
    return;
  }
  if (*(int *)(param_1 + 0x314) == 0) {
    return;
  }
  iVar2 = FUN_005c0f32(0x31c);
  pcVar3 = (char *)0x0;
  if (iVar2 != 0) {
    pcVar3 = (char *)FUN_0040dbc0(iVar2);
  }
  if (pcVar3 == (char *)0x0) {
    _DAT_01d1d400 = "..\\core\\ammobox.cpp";
    _DAT_01d1d404 = 0xa2;
    FUN_005030e0("Out of memory");
  }
  FUN_0040ddd0(pcVar3,param_1 + 0x2d4);
  FUN_0040dfd0(pcVar3,*(uint *)(param_1 + 0x314));
  *(uint *)(pcVar3 + 0x318) = *(uint *)(param_1 + 0x318);
  (*(code *)**(uint **)(pcVar3 + 0x154))(pcVar3);
  FUN_0040ddd0(pcVar3,param_1 + 0x2d4);
  pcVar4 = "Some_ammo";
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
  FUN_004f7690(param_2,pcVar3,1);
  *(uint *)(param_1 + 0x314) = 0;
  return;
}
