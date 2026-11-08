// Name: FUN_0059fc10
// Address: 0059fc10
// Address Range: [[0059fc10, 005a0195]]
// Convention: unknown
// Signature: void FUN_0059fc10(int param_1)

#include "nocturne.h"

void FUN_0059fc10(int param_1)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  char local_314 [256];
  char local_214 [256];
  char local_114 [256];
  int local_14;
  
  FUN_00487ec0(param_1);
  FUN_0040b8e0(param_1 + 0x10a60,"speed");
  FUN_0040bae0(param_1 + 0x2b4,"modelName");
  FUN_0040bb60(param_1 + 0x2b4,"MotionState");
  FUN_0040b4b0(param_1 + 0x11360,"initialPosition");
  if (1 < 0x0000000A) {
    if (DAT_007bc038 != 0) {
      iVar3 = param_1 + 0x10af8;
      if (DAT_007bc038 < 2) {
        FUN_0040b730(local_214,"AIState");
        FUN_0059d8e0(iVar3,local_214);
        FUN_0040b730(local_214,"InitialAIState");
        FUN_0059d990(iVar3,local_214);
      }
      else if (DAT_007bc038 == 2) {
        pcVar2 = (char *)FUN_0059db70(iVar3);
        pcVar5 = local_214;
        do {
          cVar1 = *pcVar2;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        FUN_0040b730(local_214,"AIState");
        pcVar2 = (char *)FUN_0059db90(iVar3);
        pcVar5 = local_214;
        do {
          cVar1 = *pcVar2;
          *pcVar5 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar2[1];
          pcVar2 = pcVar2 + 2;
          pcVar5[1] = cVar1;
          pcVar5 = pcVar5 + 2;
        } while (cVar1 != '\0');
        FUN_0040b730(local_214,"InitialAIState");
      }
    }
    FUN_0040b8e0(param_1 + 0x11370,"AlertDistance");
  }
  if (2 < 0x0000000A) {
    FUN_0040b8e0(param_1 + 0x11374,"GiveupDistance");
    FUN_0040b8e0(param_1 + 0x11378,"MadTimer");
  }
  if (3 < 0x0000000A) {
    FUN_0040b9e0(param_1 + 0x113a4,"PatrolGoal");
    FUN_0040b9e0(param_1 + 0x113a8,"PatrolNext");
    FUN_0040b960(param_1 + 0x113ac,"PatrolDirection");
  }
  if (4 < 0x0000000A) {
    FUN_0040b960(param_1 + 0x11390,"AnimationState");
  }
  if ((5 < 0x0000000A) && (DAT_007bc038 != 0)) {
    if (DAT_007bc038 < 2) {
      FUN_0040b730(local_214,"Dummy");
    }
    else if (DAT_007bc038 == 2) {
      pcVar2 = &DAT_005efa99;
      pcVar5 = local_214;
      do {
        cVar1 = *pcVar2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      FUN_0040b730(local_214,"Dummy");
    }
  }
  if ((6 < 0x0000000A) && (DAT_007bc038 != 0)) {
    if (DAT_007bc038 < 2) {
      FUN_0040b730(local_214,"Dummy1");
    }
    else if (DAT_007bc038 == 2) {
      pcVar2 = "DummyVal";
      pcVar5 = local_214;
      do {
        cVar1 = *pcVar2;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar2[1];
        pcVar2 = pcVar2 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      FUN_0040b730(local_214,"Dummy1");
    }
  }
  if (7 < 0x0000000A) {
    FUN_0040b960(param_1 + 0x113b4,"FadeDirection");
    FUN_0040b960(param_1 + 0x113b8,"FadeState");
    FUN_0040b8e0(param_1 + 0x113bc,"FadeStart");
    FUN_0040b8e0(param_1 + 0x113c0,"FadeEnd");
    FUN_0040b8e0(param_1 + 0x113c4,"FadeVal");
    FUN_0040b8e0(param_1 + 0x113c8,"FadeTime");
    FUN_0040b8e0(param_1 + 0x113cc,"FadeTimer");
  }
  if (8 < 0x0000000A) {
    iVar4 = param_1 + 0x10af8;
    local_14 = FUN_0059dc70(iVar4);
    FUN_0040b960(&local_14,"RefStateCount");
    iVar3 = 0;
    if (0 < local_14) {
      do {
        if (DAT_007bc038 != 0) {
          if (DAT_007bc038 < 2) {
            FUN_0040b730(local_114,"RefStateIdentifier");
            FUN_0040b730(local_314,"RefState");
            FUN_0059d6f0(iVar4,local_114,local_314);
          }
          else if (DAT_007bc038 == 2) {
            pcVar2 = (char *)FUN_0059dc00(iVar4,iVar3);
            pcVar5 = local_114;
            do {
              cVar1 = *pcVar2;
              *pcVar5 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar5[1] = cVar1;
              pcVar5 = pcVar5 + 2;
            } while (cVar1 != '\0');
            pcVar2 = (char *)FUN_0059dbe0(iVar4,iVar3);
            pcVar5 = local_314;
            do {
              cVar1 = *pcVar2;
              *pcVar5 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar2[1];
              pcVar2 = pcVar2 + 2;
              pcVar5[1] = cVar1;
              pcVar5 = pcVar5 + 2;
            } while (cVar1 != '\0');
            FUN_0040b730(local_114,"RefStateIdentifier");
            FUN_0040b730(local_314,"RefState");
          }
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < local_14);
    }
  }
  if (9 < 0x0000000A) {
    FUN_0040b960(param_1 + 0x11348,"CanBurn");
    return;
  }
  return;
}
