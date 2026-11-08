// Name: FUN_0055cc40
// Address: 0055cc40
// Address Range: [[0055cc40, 0055d09a]]
// Convention: unknown
// Signature: undefined4 FUN_0055cc40(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0055cc40(int *param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piStack_b14;
  int *piStack_b10;
  char *pcStack_b0c;
  char *pcStack_b08;
  byte auStack_9b4 [440];
  byte auStack_7fc [392];
  byte auStack_674 [384];
  byte auStack_4f4 [400];
  byte auStack_364 [392];
  byte auStack_1dc [424];
  uint uStack_34;
  uint uStack_14;
  
  iVar5 = *(int *)(param_2 + 0x60);
  if (((iVar5 < 1) || (0x1e < iVar5)) || (*(int *)(iVar5 * 0x24 + 0x2cf500c) == 0)) {
    pcStack_b0c = "DirectSoundDevice::startSfx - invalid handle: %d";
    _DAT_01d71de0 = "..\\sound\\snddx.cpp";
    _DAT_01d71de4 = 0x612;
    piStack_b10 = (int *)0x55cc89;
    pcStack_b08 = (char *)iVar5;
    FUN_004e4330();
  }
  pcStack_b08 = (char *)0xffffffff;
  pcStack_b0c = (char *)param_2;
  piStack_b10 = param_1;
  piStack_b14 = (int *)0x55cc96;
  iVar2 = (**(code **)(*param_1 + 0x44))();
  uVar3 = 0;
  if (iVar2 != 0) {
    uStack_14 = 0;
    if (*(int *)(param_2 + 0x68) == 0) {
      pcStack_b08 = "DirectSoundDevice::startSfx - no sample??";
      _DAT_01d71de0 = "..\\sound\\snddx.cpp";
      _DAT_01d71de4 = 0x61c;
      pcStack_b0c = (char *)0x55cdac;
      FUN_004e4330();
    }
    if ((1 < *(int *)(*(int *)(param_2 + 0x68) + 0x124)) ||
       (0 < *(int *)(*(int *)(param_2 + 0x68) + 0x13c))) {
      pcStack_b08 = "DirectSoundDevice::startSfx - exotic jump sequences not allowed for hardware mixed sounds";
      _DAT_01d71de0 = "..\\sound\\snddx.cpp";
      _DAT_01d71de4 = 0x61e;
      pcStack_b0c = (char *)0x55cce4;
      FUN_004e4330();
    }
    if ((*(int *)(*(int *)(param_2 + 0x68) + 0x124) == 1) &&
       (-1 < *(int *)(*(int *)(param_2 + 0x68) + 0x13c))) {
      uStack_14 = uStack_14 | 1;
    }
    if (*(int *)(*(int *)(param_2 + 0x68) + 0x164) != *(int *)(*(int *)(param_2 + 0x68) + 0x110)) {
      uStack_14 = uStack_14 | 1;
    }
    pcStack_b08 = (char *)uStack_14;
    pcStack_b0c = (char *)0x0;
    piStack_b10 = (int *)0x0;
    piStack_b14 = *(int **)(iVar5 * 0x24 + 0x2cf500c);
    iVar2 = (**(code **)(*piStack_b14 + 0x30))();
    if (iVar2 == -0x7787ff9c) {
      piVar1 = *(int **)(iVar5 * 0x24 + 0x2cf500c);
      iVar2 = (**(code **)(*piVar1 + 0x44))(piVar1,0);
      if (iVar2 != 0) {
        uVar3 = FUN_0055a670(iVar2);
        FUN_005a28c0(auStack_7fc,"DirectSux: Unable to %s.  (%s)",
                     "Set frequency hardware sfx secondary buffer",uVar3);
        FUN_0055a560(auStack_7fc);
        return 0;
      }
      piVar1 = *(int **)(iVar5 * 0x24 + 0x2cf500c);
      iVar2 = (**(code **)(*piVar1 + 0x3c))(piVar1,0xffffd8f0);
      if (iVar2 != 0) {
        uVar3 = FUN_0055a670(iVar2);
        FUN_005a28c0(auStack_674,"DirectSux: Unable to %s.  (%s)",
                     "Set volume hardware sfx secondary buffer",uVar3);
        FUN_0055a560(auStack_674);
        return 0;
      }
      piVar1 = *(int **)(iVar5 * 0x24 + 0x2cf500c);
      iVar2 = (**(code **)(*piVar1 + 0x30))(piVar1,0,0,uStack_34);
      if (iVar2 != 0) {
        uVar3 = FUN_0055a670(iVar2);
        FUN_005a28c0(auStack_364,"DirectSux: Unable to %s.  (%s)",
                     "Play hardware sfx secondary buffer",uVar3);
        FUN_0055a560(auStack_364);
        return 0;
      }
      iVar2 = iVar5 * 0x24;
      if (((*(int *)(iVar2 + 0x2cf5028) != -1) &&
          (*(int *)(iVar2 + 0x2cf5028) != *(int *)(*(int *)(param_2 + 0x68) + 0x10c))) &&
         (iVar4 = FUN_0055abc0((float)*(int *)(*(int *)(param_2 + 0x68) + 0x10c) *
                               *(float *)(param_2 + 0x3c)),
         1 < (uint)(iVar4 - *(int *)(iVar2 + 0x2cf5028)))) {
        iVar2 = (**(code **)(**(int **)(iVar2 + 0x2cf500c) + 0x44))
                          (*(int **)(iVar2 + 0x2cf500c),iVar4);
        if (iVar2 != 0) {
          uVar3 = FUN_0055a670(iVar2);
          FUN_005a28c0(auStack_4f4,"DirectSux: Unable to %s.  (%s)",
                       "Set hardware sfx secondary buffer frequency",uVar3);
          FUN_0055a560(auStack_4f4);
        }
        *(int *)(iVar5 * 0x24 + 0x2cf5028) = iVar4;
      }
      piVar1 = *(int **)(iVar5 * 0x24 + 0x2cf500c);
      iVar2 = (**(code **)(*piVar1 + 0x34))(piVar1,0);
      if (iVar2 != 0) {
        uVar3 = FUN_0055a670(iVar2);
        FUN_005a28c0(auStack_1dc,"DirectSux: Unable to %s.  (%s)",
                     "Set hardware sfx secondary buffer playback position",uVar3);
        FUN_0055a560(auStack_1dc);
        return 0;
      }
      piVar1 = *(int **)(iVar5 * 0x24 + 0x2cf500c);
      iVar5 = (**(code **)(*piVar1 + 0x3c))(piVar1,*(uint *)(iVar5 * 0x24 + 0x2cf5020));
      if (iVar5 != 0) {
        uVar3 = FUN_0055a670(iVar5);
        FUN_005a28c0(auStack_9b4,"DirectSux: Unable to %s.  (%s)",
                     "Set hardware sfx secondary buffer volume",uVar3);
        FUN_0055a560(auStack_9b4);
        return 0;
      }
    }
    else if (iVar2 != 0) {
      uVar3 = FUN_0055a670(iVar2);
      FUN_005a28c0(&piStack_b14,"DirectSux: Unable to %s.  (%s)",
                   "Play hardware sfx secondary buffer",uVar3);
      FUN_0055a560(&piStack_b14);
      return 0;
    }
    uVar3 = 1;
    *(byte *)(param_2 + 0x11b) = *(byte *)(param_2 + 0x11b) & 0xbf;
  }
  return uVar3;
}
