// Name: FUN_004af410
// Address: 004af410
// Address Range: [[004af410, 004af8f1]]
// Convention: unknown
// Signature: void FUN_004af410(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004af410(int param_1,float param_2)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  float10 fVar5;
  uint auStackY_109c [996];
  uint *puVar6;
  byte *puVar7;
  byte local_f0 [4];
  float local_ec;
  uint local_d4;
  uint local_d0;
  uint local_cc;
  int local_bc;
  int local_b8;
  uint local_b4;
  uint auStack_b0 [5];
  uint local_9c;
  uint local_90;
  uint uStack_84;
  uint local_78 [3];
  uint local_6c;
  uint local_68;
  uint local_64;
  uint auStack_60 [3];
  uint local_54;
  uint local_48 [3];
  uint local_3c;
  uint local_30;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  float local_18;
  
  bVar4 = 0;
  local_1c = param_1 + 0x2b4;
  do {
    iVar2 = FUN_005030c0(local_1c,&param_2);
    switch(iVar2) {
    case 1:
    case 7:
      uVar3 = _DAT_01cb0694;
      if (iVar2 == 7) {
        uVar3 = _DAT_01cb0698;
      }
      FUN_005469a0(local_1c,uVar3);
      local_48[0] = local_90;
      auStack_b0[(uint)bVar4 * -2 + 0x1b] = auStack_b0[(uint)bVar4 * -2 + 9];
      auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c] =
           auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      iVar2 = *(int *)(param_1 + 0x25614);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x2570) != 0) {
          local_18 = (float)FUN_005038a0(local_1c,2);
          if ((float)_DAT_005d702b < local_18) {
            (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))(param_1,auStack_b0 + 0x1a,0x3fd9999a);
          }
          else {
            local_18 = (float)FUN_005038a0(local_1c,1);
            if (local_18 <= (float)_DAT_005d702b) {
              local_18 = (float)FUN_005038a0(local_1c,3);
              if ((float)_DAT_005d702b < local_18) {
                (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))
                          (param_1,auStack_b0 + 0x1a,0x3f800000);
              }
            }
            else {
              (**(code **)(*(int *)(param_1 + 0x2b0) + 0x2c))(param_1,auStack_b0 + 0x1a,0x3f800000);
            }
          }
        }
      }
      else {
        local_18 = *(float *)(param_1 + 0x2b0);
        uVar3 = (**(code **)(*(int *)(iVar2 + 0x2b0) + 0x4c))(iVar2,0x3f800000);
        FUN_00408d70(param_1,auStack_b0 + 0x1a,uVar3);
        fVar1 = local_18;
        puVar6 = auStack_b0 + 0x14;
        auStack_60[0] = uStack_84;
        auStack_b0[(uint)bVar4 * -2 + 0x15] = auStack_b0[(uint)bVar4 * -2 + 0xc];
        iVar2 = param_1;
        auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
             auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
        (**(code **)((int)fVar1 + 0x30))(iVar2,puVar6);
      }
      break;
    case 2:
      iVar2 = FUN_0040c8f0(*(uint *)(param_1 + 0x25608),DAT_007bcc84);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x7d4) != 1) {
          *(uint *)(param_1 + 0x25654) = 0xbf060a92;
          FUN_004cff50(param_1,0);
          break;
        }
        *(uint *)(param_1 + 0x25654) = 0x3ea0d97c;
      }
    case 0x14:
      FUN_004cff50(param_1,0);
      break;
    case 3:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,0,0);
      FUN_00503620(local_1c,0,1);
      break;
    default:
      FUN_0042aa00(param_1,iVar2);
      break;
    case 6:
      local_24 = FUN_0040c8f0(*(uint *)(param_1 + 0x276c),_DAT_01c264e0);
      local_20 = local_24;
      if (local_24 != 0) {
        FUN_005469a0(local_1c,_DAT_01cb06a8);
        puVar6 = auStack_b0 + 0xe;
        local_78[0] = local_3c;
        auStack_b0[(uint)bVar4 * -2 + 0xf] = auStack_b0[(uint)bVar4 * -2 + 0x1e];
        auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
             auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f];
        FUN_00408d70(param_1,puVar6);
        puVar7 = local_f0;
        local_b4 = local_54;
        auStack_b0[(uint)bVar4 * -2] = auStack_b0[(uint)bVar4 * -2 + 0x18];
        auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
        FUN_004222d0(puVar7);
        local_ec = (float)FUN_0040cf60(0x41200000,0x41700000);
        local_18 = local_ec;
        FUN_00408de0(local_20,&local_b4);
        local_6c = auStack_b0[2];
        auStack_b0[(uint)bVar4 * -2 + 0x12] = auStack_b0[(uint)bVar4 * -2 + 3];
        auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x13] =
             auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
        if (&local_d4 != auStack_b0 + 0x11) {
          local_d4 = local_6c;
          local_d0 = local_68;
          local_cc = local_64;
        }
        local_bc = param_1;
        local_b8 = param_1;
        (**(code **)(*(int *)(local_24 + 0x2b0) + 0x110))(local_24,local_f0);
        if (0.0 < local_ec) {
          fVar5 = (float10)local_ec * (float10)_DAT_005d7023;
          FUN_005b7ff0();
          local_18 = (float)(int)ROUND(fVar5);
          FUN_004c9850(0x01CB8284,&local_b4,0,(int)local_18 + 1,0);
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"kick1.wav");
          *(uint *)(param_1 + 0x276c) = 0;
          break;
        }
      }
      *(uint *)(param_1 + 0x276c) = 0;
      break;
    case 0xf:
      if (*(int *)(param_1 + 0x276c) != 0) {
        FUN_00408de0(param_1,*(int *)(param_1 + 0x276c) + 0x20);
        local_30 = local_9c;
        auStack_b0[(uint)bVar4 * -2 + 0x21] = auStack_b0[(uint)bVar4 * -2 + 6];
        auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22] =
             auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
        if (0.0 < local_28) {
          (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"hit-gh[4,7].wav");
        }
      }
      break;
    case 0x11:
      (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      FUN_004b0a40(param_1);
      break;
    case 0x15:
      FUN_004cff90(param_1,0);
      break;
    case 0x16:
      iVar2 = FUN_004cf230(param_1);
      if (iVar2 == 0) {
        FUN_00503620(local_1c,0,1);
      }
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
