// Name: FUN_0056d060
// Address: 0056d060
// Address Range: [[0056d060, 0056d3ce]]
// Convention: unknown
// Signature: void FUN_0056d060(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056d060(int param_1,int param_2)

{
  byte *puVar1;
  int iVar2;
  uint uVar3;
  float fVar4;
  ulonglong uVar5;
  
  if (*(int *)(param_1 + 0x281c) != 0) {
    return;
  }
  if (*(int *)(0x01CB6900 + 0x1ec) != 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  if (*(int *)(0x01CB6900 + 0x248) == 0) {
    *(uint *)(param_2 + 4) = 0;
  }
  FUN_004cfad0();
  if ((0.0 < *(float *)(param_1 + 0x10a60)) && (0xb < *(int *)(param_2 + 0x30))) {
    *(uint *)(param_2 + 4) = 0;
    return;
  }
  *(uint *)(param_1 + 0x10a60) = _DAT_005fc1c8;
  iVar2 = FUN_0040c840(*(uint *)(param_2 + 0x38),"CBugs");
  if (iVar2 != 0) {
    *(uint *)(param_1 + 0x10a60) = 0x3e19999a;
  }
  iVar2 = 0x01CB6900;
  *(float *)(param_1 + 0x25a8) = *(float *)(param_1 + 0x25a8) - *(float *)(param_2 + 4);
  puVar1 = PTR_DAT_00609ed0;
  if (((*(int *)(iVar2 + 0xdc) != 0) && (0xb < *(int *)(param_2 + 0x30))) &&
     (*(float *)(param_1 + 0x25a8) <= 0.0)) {
    *(uint *)(param_1 + 0x25a8) = 0;
    FUN_00436710(puVar1,"Using auto health\n");
    FUN_004df010();
    FUN_00436710(PTR_DAT_00609ed0,"hit points: %3.2f\n",(double)*(float *)(param_1 + 0x25a8));
  }
  if (0.0 < *(float *)(param_1 + 0x25a8)) {
    if (0.0 < *(float *)(param_2 + 4)) {
      if ((((*(int *)(param_2 + 0x30) != 0x69) && (*(int *)(param_1 + 0x25614) == 0)) &&
          ((*(int *)(param_1 + 0x25694) == 0 && (*(int *)(param_1 + 0x256a4) == 0)))) &&
         ((iVar2 = FUN_0040c8f0(*(uint *)(param_2 + 0x34),_DAT_02653574), iVar2 == 0 ||
          (iVar2 = FUN_0040d060(), iVar2 != 0)))) {
        FUN_00503620(param_1 + 0x2b4,0x24,1);
      }
      iVar2 = FUN_00550b70();
      if (iVar2 == 0) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"stranger_hit??.wav")
        ;
        *(uint *)(param_1 + 0x258d4) = uVar3;
      }
    }
  }
  else {
    *(uint *)(param_1 + 0x25a8) = 0;
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0xf8))();
    iVar2 = FUN_005035c0();
    if ((*(int *)(iVar2 + 0x24) != 0x29) && (iVar2 = FUN_005035c0(), *(int *)(iVar2 + 0x24) != 0x28)
       ) {
      if ((*(int *)(param_1 + 0x25614) == 0) && (*(int *)(param_1 + 0x25694) == 0)) {
        if (*(int *)(param_2 + 0x30) == 1) {
          uVar5 = 0x100000027;
        }
        else {
          uVar3 = 1;
          fVar4 = (float)FUN_0040cf60(0,0x42c80000,1);
          uVar5 = CONCAT44(uVar3,(fVar4 <= _DAT_005ebd41) + 0x25);
        }
      }
      else {
        uVar5 = 0x10000000f;
        *(uint *)(param_1 + 0x25614) = 0;
        *(uint *)(param_1 + 0x25694) = 0;
      }
      FUN_00503620(param_1 + 0x2b4,uVar5);
      FUN_00551050();
      if (*(int *)(param_2 + 0x30) != 1) {
        uVar3 = (**(code **)(*(int *)(param_1 + 0x2b0) + 0x34))(param_1,"stranger_die??.wav")
        ;
        *(uint *)(param_1 + 0x258d4) = uVar3;
      }
      FUN_004c9cc0(0x01CB8284,param_1,0x32,0x42480000,0);
    }
    if (*(int *)(param_1 + 0x25698) == *(int *)(param_1 + 0x2620)) {
      *(uint *)(param_1 + 0x25698) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,0,0);
    if (*(int *)(param_1 + 0x2698) == *(int *)(param_1 + 0x25698)) {
      *(uint *)(param_1 + 0x25698) = 0;
    }
    (**(code **)(*(int *)(param_1 + 0x2b0) + 0x130))(param_1,1,0);
  }
  if (0.0 < *(float *)(param_2 + 4)) {
    FUN_004bb8b0();
  }
  FUN_00427fb0(param_1,param_2);
  return;
}
