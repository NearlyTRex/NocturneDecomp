// Name: FUN_004c83b0
// Address: 004c83b0
// Address Range: [[004c83b0, 004c8891]]
// Convention: unknown
// Signature: void FUN_004c83b0(int param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c83b0(int param_1,float param_2)

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
  local_1c = param_1 + 0x158;
  do {
    iVar2 = FUN_00524270(local_1c,&param_2);
    switch(iVar2) {
    case 1:
    case 7:
      uVar3 = _DAT_01cc9124;
      if (iVar2 == 7) {
        uVar3 = _DAT_01cc9128;
      }
      FUN_00569040(local_1c,uVar3);
      local_48[0] = local_90;
      auStack_b0[(uint)bVar4 * -2 + 0x1b] = auStack_b0[(uint)bVar4 * -2 + 9];
      auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1c] =
           auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
      iVar2 = *(int *)(param_1 + 0x1ff84);
      if (iVar2 == 0) {
        if (*(int *)(param_1 + 0x2500) != 0) {
          local_18 = (float)FUN_00524a40(local_1c,2);
          if ((float)_DAT_005e10a4 < local_18) {
            (**(code **)(*(int *)(param_1 + 0x154) + 0x24))(param_1,auStack_b0 + 0x1a,0x3fd9999a);
          }
          else {
            local_18 = (float)FUN_00524a40(local_1c,1);
            if (local_18 <= (float)_DAT_005e10a4) {
              local_18 = (float)FUN_00524a40(local_1c,3);
              if ((float)_DAT_005e10a4 < local_18) {
                (**(code **)(*(int *)(param_1 + 0x154) + 0x24))
                          (param_1,auStack_b0 + 0x1a,0x3f800000);
              }
            }
            else {
              (**(code **)(*(int *)(param_1 + 0x154) + 0x24))(param_1,auStack_b0 + 0x1a,0x3f800000);
            }
          }
        }
      }
      else {
        local_18 = *(float *)(param_1 + 0x154);
        uVar3 = (**(code **)(*(int *)(iVar2 + 0x154) + 0x44))(iVar2,0x3f800000);
        FUN_00408b40(param_1,auStack_b0 + 0x1a,uVar3);
        fVar1 = local_18;
        puVar6 = auStack_b0 + 0x14;
        auStack_60[0] = uStack_84;
        auStack_b0[(uint)bVar4 * -2 + 0x15] = auStack_b0[(uint)bVar4 * -2 + 0xc];
        iVar2 = param_1;
        auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x16] =
             auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
        (**(code **)((int)fVar1 + 0x28))(iVar2,puVar6);
      }
      break;
    case 2:
      iVar2 = FUN_0040c600(*(uint *)(param_1 + 0x1ff78),DAT_007c5330);
      if (iVar2 != 0) {
        if (*(int *)(iVar2 + 0x678) != 1) {
          *(uint *)(param_1 + 0x1ffc0) = 0xbf060a92;
          FUN_004ec280(param_1,0);
          break;
        }
        *(uint *)(param_1 + 0x1ffc0) = 0x3ea0d97c;
      }
    case 0x14:
      FUN_004ec280(param_1,0);
      break;
    case 3:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x128))(param_1,0,0);
      FUN_005247c0(local_1c,0,1);
      break;
    default:
      FUN_00434a80(param_1,iVar2);
      break;
    case 6:
      local_24 = FUN_0040c600(*(uint *)(param_1 + 0x26fc),_DAT_01c3f6a0);
      local_20 = local_24;
      if (local_24 != 0) {
        FUN_00569040(local_1c,_DAT_01cc9138);
        puVar6 = auStack_b0 + 0xe;
        local_78[0] = local_3c;
        auStack_b0[(uint)bVar4 * -2 + 0xf] = auStack_b0[(uint)bVar4 * -2 + 0x1e];
        auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x10] =
             auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x1f];
        FUN_00408b40(param_1,puVar6);
        puVar7 = local_f0;
        local_b4 = local_54;
        auStack_b0[(uint)bVar4 * -2] = auStack_b0[(uint)bVar4 * -2 + 0x18];
        auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
             auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x19];
        FUN_0042c010(puVar7);
        local_ec = (float)FUN_0040cc00(0x41200000,0x41700000);
        local_18 = local_ec;
        FUN_00408bb0(local_20,&local_b4);
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
        (**(code **)(*(int *)(local_24 + 0x154) + 0x108))(local_24,local_f0);
        if (0.0 < local_ec) {
          fVar5 = (float10)local_ec * (float10)_DAT_005e109c;
          FUN_005c03a0();
          local_18 = (float)(int)ROUND(fVar5);
          FUN_004e6060(0x01CD0E3C,&local_b4,0,(int)local_18 + 1,0);
          (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"kick1.wav");
          *(uint *)(param_1 + 0x26fc) = 0;
          break;
        }
      }
      *(uint *)(param_1 + 0x26fc) = 0;
      break;
    case 0xf:
      if (*(int *)(param_1 + 0x26fc) != 0) {
        FUN_00408bb0(param_1,*(int *)(param_1 + 0x26fc) + 0x20);
        local_30 = local_9c;
        auStack_b0[(uint)bVar4 * -2 + 0x21] = auStack_b0[(uint)bVar4 * -2 + 6];
        auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0x22] =
             auStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
        if (0.0 < local_28) {
          (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"hit-gh[4,7].wav");
        }
      }
      break;
    case 0x11:
      (**(code **)(*(int *)(param_1 + 0x154) + 0x2c))(param_1,"gb-fall1.wav");
      break;
    case 0x12:
      break;
    case 0x13:
      FUN_004c9990(param_1);
      break;
    case 0x15:
      FUN_004ec2c0(param_1,0);
      break;
    case 0x16:
      iVar2 = FUN_004eb5e0(param_1);
      if (iVar2 == 0) {
        FUN_005247c0(local_1c,0,1);
      }
    }
    if (param_2 <= 0.0) {
      return;
    }
  } while( true );
}
