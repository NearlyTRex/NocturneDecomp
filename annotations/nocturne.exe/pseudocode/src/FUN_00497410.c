// Name: FUN_00497410
// Address: 00497410
// Address Range: [[00497410, 0049780b]]
// Convention: unknown
// Signature: void FUN_00497410(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00497410(int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  float10 fVar6;
  byte local_a0 [4];
  float local_9c;
  uint local_84;
  uint local_80;
  uint local_7c;
  int local_6c;
  int local_68;
  byte local_64 [12];
  byte local_58 [12];
  byte auStack_4c [12];
  byte local_40 [12];
  byte local_34 [12];
  byte local_28 [12];
  int local_1c;
  float local_18;
  
  iVar1 = param_1 + 0x150;
  do {
    iVar3 = FUN_004e11c0(iVar1,&param_2);
    switch(iVar3) {
    case 1:
    case 7:
      uVar4 = _DAT_01c713b4;
      if (iVar3 == 7) {
        uVar4 = _DAT_01c713b8;
      }
      FUN_0051d2a0(iVar1,local_58,uVar4);
      iVar3 = *(int *)(param_1 + 0x1fa14);
      if (iVar3 == 0) {
        if (*(int *)(param_1 + 0x2408) != 0) {
          local_18 = (float)FUN_004e18d0(iVar1,2);
          if ((float)_DAT_005820ea < local_18) {
            (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))(param_1,local_58,0x3fd9999a);
          }
          else {
            local_18 = (float)FUN_004e18d0(iVar1,1);
            if (local_18 <= (float)_DAT_005820ea) {
              local_18 = (float)FUN_004e18d0(iVar1,3);
              if ((float)_DAT_005820ea < local_18) {
                (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))(param_1,local_58,0x3f800000);
              }
            }
            else {
              (**(code **)(*(int *)(param_1 + 0x14c) + 0x1c))(param_1,local_58,0x3f800000);
            }
          }
        }
      }
      else {
        iVar2 = *(int *)(param_1 + 0x14c);
        uVar4 = (**(code **)(*(int *)(iVar3 + 0x14c) + 0x3c))(iVar3,0x3f800000);
        uVar4 = FUN_0040a240(param_1,auStack_4c,local_58,uVar4);
        (**(code **)(iVar2 + 0x20))(param_1,uVar4);
      }
      break;
    case 2:
      iVar3 = FUN_0040d890(*(uint *)(param_1 + 0x1fa08),DAT_00764ad4);
      if (iVar3 != 0) {
        if (*(int *)(iVar3 + 0x664) != 1) {
          *(uint *)(param_1 + 0x1fa50) = 0xbf060a92;
          FUN_004b5c30(param_1,0);
          break;
        }
        *(uint *)(param_1 + 0x1fa50) = 0x3ea0d97c;
      }
    case 0x14:
      FUN_004b5c30(param_1,0);
      break;
    case 3:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x120))(param_1,0,0);
      FUN_004e16b0(iVar1,0,1);
      break;
    default:
      FUN_0042add0(param_1,iVar3);
      break;
    case 6:
      iVar3 = FUN_0040d890(*(uint *)(param_1 + 0x2590),_DAT_01bcdef4);
      local_1c = iVar3;
      if (iVar3 != 0) {
        uVar4 = FUN_0051d2a0(iVar1,local_40,_DAT_01c713c8);
        FUN_0040a240(param_1,local_64,uVar4);
        FUN_00423ed0(local_a0);
        local_9c = (float)FUN_0040dda0(0x41200000,0x41700000);
        local_18 = local_9c;
        puVar5 = (uint *)FUN_0040a290(iVar3,local_34,local_64);
        if (&local_84 != puVar5) {
          local_84 = *puVar5;
          local_80 = puVar5[1];
          local_7c = puVar5[2];
        }
        local_6c = param_1;
        local_68 = param_1;
        (**(code **)(*(int *)(local_1c + 0x14c) + 0x100))(local_1c,local_a0);
        if (0.0 < local_9c) {
          fVar6 = (float10)local_9c * (float10)_DAT_005820e2;
          FUN_00563a30();
          local_18 = (float)(int)ROUND(fVar6);
          FUN_004b0200(0x01C78C7C,local_64,0,(int)local_18 + 1,0);
          (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"kick1.wav");
          *(uint *)(param_1 + 0x2590) = 0;
          break;
        }
      }
      *(uint *)(param_1 + 0x2590) = 0;
      break;
    case 0xf:
      if ((*(int *)(param_1 + 0x2590) != 0) &&
         (iVar3 = FUN_0040a290(param_1,local_28,*(int *)(param_1 + 0x2590) + 0x20),
         0.0 < *(float *)(iVar3 + 8))) {
        (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"hit-gh[4,7].wav");
      }
      break;
    case 0x11:
      (**(code **)(*(int *)(param_1 + 0x14c) + 0x24))(param_1,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      FUN_00498790(param_1);
      break;
    case 0x15:
      FUN_004b5c70(param_1,0);
      break;
    case 0x16:
      iVar3 = FUN_004b5270(param_1);
      if (iVar3 == 0) {
        FUN_004e16b0(iVar1,0,1);
      }
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
