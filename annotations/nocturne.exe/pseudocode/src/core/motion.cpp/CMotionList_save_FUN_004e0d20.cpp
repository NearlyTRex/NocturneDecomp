// Name: core_motion.cpp_CMotionList_save_FUN_004e0d20
// Address: 004e0d20
// Address Range: [[004e0d20, 004e1001]]
// Convention: unknown
// Signature: void core_motion_cpp_CMotionList_save_FUN_004e0d20(int *param_1,undefined4 param_2)

#include "nocturne.h"

void core_motion_cpp_CMotionList_save_FUN_004e0d20(int *param_1,uint param_2)

{
  int *piVar1;
  float *pfVar2;
  float *pfVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int local_18;
  int *local_14;
  
  _fprintf(param_2,"// motion list version\n");
  _fprintf(param_2,"%d\n",2);
  _fprintf(param_2,"// state list\n");
  _fprintf(param_2,"%d\n",*param_1);
  iVar7 = 0;
  if (0 < *param_1) {
    piVar8 = param_1 + 1;
    do {
      iVar7 = iVar7 + 1;
      _fprintf(param_2,"%s\n",piVar8);
      piVar8 = (int *)((int)piVar8 + 0x1e);
    } while (iVar7 < *param_1);
  }
  _fprintf(param_2,"// motion count\n");
  _fprintf(param_2,"%d\n",param_1[0x259]);
  local_18 = 0;
  if (0 < param_1[0x259]) {
    local_14 = param_1 + 0x25a;
    do {
      _fprintf(param_2,"// motion %d: \"name\",fps,state,frameStart,frameCount\n",local_18);
      _fprintf(param_2,"\"%s\",%g,%d,%d,%d\n",local_14,(double)(float)local_14[8],local_14[9],
                 local_14[0x18],local_14[0x19]);
      _fprintf(param_2,"// motion %d: exitForwardFromFrameNumber,exitForwardToMotionNumber,exitForwardToFrameNumber\n",local_18);
      _fprintf(param_2,"%d,%d,%g\n",local_14[10],local_14[0xd],(double)(float)local_14[0xe]);
      _fprintf(param_2,"// motion %d: exitForwardCmd,exitForwardTweenTime,exitForwardsetNewStateAsDesired\n",local_18);
      _fprintf(param_2,"%d,%g,%d\n",local_14[0xc],(double)(float)local_14[0xf],local_14[0x10])
      ;
      _fprintf(param_2,"// motion %d: exitBackwardToMotionNumber,exitBackwardToFrameNumber\n",local_18);
      _fprintf(param_2,"%d,%g\n",local_14[0x14],(double)(float)local_14[0x15]);
      _fprintf(param_2,"// motion %d transition count, list: desiredState, cmd, toMotionNumber, toFrameNumber, tweenTime, setNewStateAsDesired\n",local_18);
      iVar7 = 0;
      _fprintf(param_2,"%d\n",local_14[0x1a]);
      if (0 < local_14[0x1a]) {
        piVar8 = local_14 + 0x1b;
        do {
          piVar1 = piVar8 + 5;
          pfVar2 = (float *)(piVar8 + 4);
          pfVar3 = (float *)(piVar8 + 3);
          piVar4 = piVar8 + 2;
          piVar5 = piVar8 + 1;
          iVar6 = *piVar8;
          piVar8 = piVar8 + 6;
          iVar7 = iVar7 + 1;
          _fprintf(param_2,"%d,%d,%d,%g,%g,%d\n",iVar6,*piVar5,*piVar4,(double)*pfVar3,
                     (double)*pfVar2,*piVar1);
        } while (iVar7 < local_14[0x1a]);
      }
      _fprintf(param_2,"// motion %d signal count, list: frameNumber, value\n",local_18);
      iVar7 = 0;
      _fprintf(param_2,"%d\n",local_14[0x129]);
      if (0 < local_14[0x129]) {
        do {
          iVar7 = iVar7 + 1;
          _fprintf();
        } while (iVar7 < local_14[0x129]);
      }
      _fprintf(param_2,"// motion %d marker count, list\n",local_18);
      iVar7 = 0;
      _fprintf(param_2,"%d",local_14[0x148]);
      piVar8 = local_14;
      if (0 < local_14[0x148]) {
        do {
          iVar7 = iVar7 + 1;
          _fprintf(param_2," %d",piVar8[0x149]);
          piVar8 = piVar8 + 1;
        } while (iVar7 < local_14[0x148]);
      }
      _fprintf(param_2,"\n");
      local_14 = local_14 + 0x153;
      local_18 = local_18 + 1;
    } while (local_18 < param_1[0x259]);
  }
  return;
}
