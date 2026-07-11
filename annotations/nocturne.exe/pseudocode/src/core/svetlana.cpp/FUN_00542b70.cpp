// Name: FUN_00542b70
// Address: 00542b70
// Address Range: [[00542b70, 00542d02]]
// Convention: unknown
// Signature: void FUN_00542b70(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00542b70(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  byte local_84 [4];
  uint local_80;
  uint local_5c;
  uint local_58;
  uint local_54;
  byte local_48 [12];
  byte local_3c [12];
  byte local_30 [12];
  byte local_24 [12];
  int local_18;
  int local_14;
  
  iVar3 = 0;
  iVar1 = FUN_0051e0a0(param_1 + 0x150);
  local_18 = -1;
  iVar4 = iVar1;
  iVar5 = local_18;
  if (0 < *(int *)(iVar1 + 0x28558)) {
    do {
      iVar5 = iVar3;
      if (param_2 == *(int *)(iVar4 + 0x2857c)) break;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 0x24;
      iVar5 = local_18;
    } while (iVar3 < *(int *)(iVar1 + 0x28558));
  }
  local_18 = iVar5;
  if (local_18 == -1) {
    _DAT_01cc4800 = "..\\core\\svetlana.cpp";
    _DAT_01cc4804 = 0x2f0;
    FUN_004c8440("Can't find svetlana's parent bone");
  }
  uVar2 = FUN_0051d380(param_1 + 0x150,local_30,param_2);
  FUN_0040a240(param_1,local_24,uVar2);
  uVar2 = FUN_0051d380(param_1 + 0x150,local_48,local_18);
  iVar4 = 0;
  FUN_0040a240(param_1,local_3c,uVar2);
  iVar5 = 0;
  local_14 = 0;
  do {
    while( true ) {
      if (*(int *)(0x01E57284 + 0x14ecb0) <= iVar5) {
        if (local_14 == 0) {
          pcVar6 = "svetlana-miss?.wav";
        }
        else {
          pcVar6 = "svetlana-attack?.wav";
        }
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,pcVar6);
        return;
      }
      iVar1 = *(int *)(iVar4 + 0x14ecb4 + 0x01E57284);
      if (iVar1 != param_1) break;
LAB_00542c3c:
      iVar5 = iVar5 + 1;
      iVar4 = iVar4 + 4;
    }
    FUN_00423ed0(local_84);
    local_80 = 0x41700000;
    local_5c = 3;
    local_58 = 0x3f333333;
    local_54 = 0x67;
    iVar1 = (**(code **)(*(int *)(iVar1 + 0x14c) + 0xfc))(iVar1,local_24,local_3c,local_84,0);
    if (iVar1 == 0) goto LAB_00542c3c;
    local_14 = 1;
    iVar5 = iVar5 + 1;
    iVar4 = iVar4 + 4;
  } while( true );
}
