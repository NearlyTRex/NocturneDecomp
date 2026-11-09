// Name: core_motion.cpp_FUN_00502c1e
// Address: 00502c1e
// Address Range: [[00502c1e, 00502f03]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_00502c1e(int *param_1,undefined4 param_2)

#include "nocturne.h"

void core_motion_cpp_FUN_00502c1e(int *param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  int iVar10;
  int iStack_18;
  int *piStack_14;
  
  FUN_005b8010(param_2,"// motion list version\n");
  FUN_005b8010(param_2,0x5df875,2);
  FUN_005b8010(param_2,"// state list\n");
  FUN_005b8010(param_2,0x5df888,*param_1);
  iVar8 = 0;
  if (0 < *param_1) {
    piVar9 = param_1 + 1;
    do {
      FUN_005b8010(param_2,0x5df88c,piVar9);
      iVar8 = iVar8 + 1;
      piVar9 = (int *)((int)piVar9 + 0x1e);
    } while (iVar8 < *param_1);
  }
  FUN_005b8010(param_2,"// motion count\n");
  FUN_005b8010(param_2,0x5df8a1,param_1[0x709]);
  iStack_18 = 0;
  if (0 < param_1[0x709]) {
    piStack_14 = param_1 + 0x70a;
    do {
      FUN_005b8010(param_2,"// motion %d: \"name\",fps,state,frameStart,frameCount\n",iStack_18);
      FUN_005b8010
                (param_2,0x5df8db,piStack_14,(double)(float)piStack_14[8],piStack_14[9],
                 piStack_14[0x18],piStack_14[0x19]);
      FUN_005b8010(param_2,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n",iStack_18);
      FUN_005b8010
                (param_2,0x5df94a,piStack_14[10],piStack_14[0xd],(double)(float)piStack_14[0xe]);
      FUN_005b8010(param_2,"// motion %d: exitForwardCmd,exitForwardTweenTime,exitForwardsetNewStateAsDesired\n",iStack_18);
      FUN_005b8010
                (param_2,0x5df9a7,piStack_14[0xc],(double)(float)piStack_14[0xf],piStack_14[0x10]);
      FUN_005b8010(param_2,"// motion %d: exitBackwardToMotionNumber,exitBackwardToFrameNumber\n",iStack_18);
      FUN_005b8010(param_2,0x5df9f5,piStack_14[0x14],(double)(float)piStack_14[0x15]);
      FUN_005b8010(param_2,"// motion %d transition count, list: desiredState, cmd, toMotionNumber, toFrameNumber, tweenTime, setNewStateAsDesired\n",iStack_18);
      iVar8 = 0;
      FUN_005b8010(param_2,0x5dfa74,piStack_14[0x1a]);
      if (0 < piStack_14[0x1a]) {
        iVar10 = 0;
        do {
          iVar7 = piStack_14[0x1b];
          iVar2 = iVar10 + 0x14;
          iVar3 = iVar10 + 0x10;
          iVar4 = iVar10 + 0xc;
          iVar5 = iVar10 + 8;
          iVar6 = iVar10 + 4;
          puVar1 = (uint *)(iVar10 + iVar7);
          iVar10 = iVar10 + 0x18;
          iVar8 = iVar8 + 1;
          FUN_005b8010
                    (param_2,"%d,%d,%d,%g,%g,%d\n",*puVar1,*(uint *)(iVar6 + iVar7),
                     *(uint *)(iVar5 + iVar7),(double)*(float *)(iVar4 + iVar7),
                     (double)*(float *)(iVar3 + iVar7),*(uint *)(iVar2 + iVar7));
        } while (iVar8 < piStack_14[0x1a]);
      }
      FUN_005b8010(param_2,"// motion %d signal count, list: frameNumber, value\n",iStack_18);
      iVar8 = 0;
      FUN_005b8010(param_2,0x5dfac0,piStack_14[0x1c]);
      if (0 < piStack_14[0x1c]) {
        do {
          iVar8 = iVar8 + 1;
          FUN_005b8010();
        } while (iVar8 < piStack_14[0x1c]);
      }
      FUN_005b8010(param_2,"// motion %d marker count, list\n",iStack_18);
      iVar8 = 0;
      FUN_005b8010(param_2,0x5dfaec,piStack_14[0x3b]);
      piVar9 = piStack_14;
      if (0 < piStack_14[0x3b]) {
        do {
          iVar8 = iVar8 + 1;
          FUN_005b8010(param_2,0x5dfaef,piVar9[0x3c]);
          piVar9 = piVar9 + 1;
        } while (iVar8 < piStack_14[0x3b]);
      }
      FUN_005b8010(param_2,0x5dfaf3);
      piStack_14 = piStack_14 + 0x46;
      iStack_18 = iStack_18 + 1;
    } while (iStack_18 < param_1[0x709]);
  }
  return;
}
