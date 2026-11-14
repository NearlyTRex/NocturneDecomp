// Name: core_motion.cpp_FUN_004fb6b0
// Address: 004fb6b0
// Address Range: [[004fb6b0, 004fb9be]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_004fb6b0(int *param_1,undefined4 param_2)

#include "nocturne.h"

void core_motion_cpp_FUN_004fb6b0(int *param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  float *pfVar3;
  float *pfVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int *piVar10;
  int iStack_18;
  int *piStack_14;
  
  FUN_005a3140(param_2,"// motion list version\n");
  FUN_005a3140(param_2,0x5c98a8,3);
  FUN_005a3140(param_2,"// state list\n");
  FUN_005a3140(param_2,0x5c98bb,*param_1);
  iVar8 = 0;
  if (0 < *param_1) {
    piVar10 = param_1 + 1;
    do {
      FUN_005a3140(param_2,0x5c98bf,piVar10);
      iVar8 = iVar8 + 1;
      piVar10 = (int *)((int)piVar10 + 0x1e);
    } while (iVar8 < *param_1);
  }
  FUN_005a3140(param_2,"// motion count\n");
  FUN_005a3140(param_2,0x5c98d4,param_1[0x709]);
  iStack_18 = 0;
  if (0 < param_1[0x709]) {
    piStack_14 = param_1 + 0x70a;
    do {
      FUN_005a3140(param_2,"// motion %d: \"name\",fps,state,frameStart,frameCount\n",iStack_18);
      FUN_005a3140
                (param_2,0x5c990e,piStack_14,(double)(float)piStack_14[8],piStack_14[9],
                 piStack_14[0x18],piStack_14[0x19]);
      FUN_005a3140(param_2,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n",iStack_18);
      FUN_005a3140
                (param_2,0x5c997d,piStack_14[10],piStack_14[0xd],(double)(float)piStack_14[0xe]);
      FUN_005a3140(param_2,"// motion %d: exitForwardCmd,exitForwardTweenTime,exitForwardsetNewStateAsDesired\n",iStack_18);
      FUN_005a3140
                (param_2,0x5c99da,piStack_14[0xc],(double)(float)piStack_14[0xf],piStack_14[0x10]);
      FUN_005a3140(param_2,"// motion %d: exitBackwardToMotionNumber,exitBackwardToFrameNumber\n",iStack_18);
      FUN_005a3140(param_2,0x5c9a28,piStack_14[0x14],(double)(float)piStack_14[0x15]);
      FUN_005a3140(param_2,"// motion %d: frameResolution, storedFrameCount\n",iStack_18);
      FUN_005a3140();
      FUN_005a3140(param_2,"// motion %d transition count, list: desiredState, cmd, toMotionNumber, toFrameNumber, tweenTime, setNewStateAsDesired\n",iStack_18);
      iVar8 = 0;
      FUN_005a3140(param_2,0x5c9adf,piStack_14[0x1c]);
      if (0 < piStack_14[0x1c]) {
        iVar9 = 0;
        do {
          iVar7 = piStack_14[0x1d];
          puVar2 = (uint *)(iVar7 + 0x14 + iVar9);
          pfVar3 = (float *)(iVar7 + 0x10 + iVar9);
          pfVar4 = (float *)(iVar7 + 0xc + iVar9);
          puVar5 = (uint *)(iVar7 + 8 + iVar9);
          puVar6 = (uint *)(iVar7 + 4 + iVar9);
          puVar1 = (uint *)(iVar7 + iVar9);
          iVar9 = iVar9 + 0x18;
          iVar8 = iVar8 + 1;
          FUN_005a3140
                    (param_2,"%d,%d,%d,%g,%g,%d\n",*puVar1,*puVar6,*puVar5,(double)*pfVar4,
                     (double)*pfVar3,*puVar2);
        } while (iVar8 < piStack_14[0x1c]);
      }
      FUN_005a3140(param_2,"// motion %d signal count, list: frameNumber, value\n",iStack_18);
      iVar8 = 0;
      FUN_005a3140(param_2,0x5c9b2b,piStack_14[0x1e]);
      if (0 < piStack_14[0x1e]) {
        do {
          iVar8 = iVar8 + 1;
          FUN_005a3140();
        } while (iVar8 < piStack_14[0x1e]);
      }
      FUN_005a3140(param_2,"// motion %d marker count, list\n",iStack_18);
      iVar8 = 0;
      FUN_005a3140(param_2,0x5c9b58,piStack_14[0x3d]);
      piVar10 = piStack_14;
      if (0 < piStack_14[0x3d]) {
        do {
          iVar8 = iVar8 + 1;
          FUN_005a3140(param_2,0x5c9b5b,piVar10[0x3e]);
          piVar10 = piVar10 + 1;
        } while (iVar8 < piStack_14[0x3d]);
      }
      FUN_005a3140(param_2,0x5c9b5f);
      piStack_14 = piStack_14 + 0x48;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < param_1[0x709]);
  }
  return;
}
