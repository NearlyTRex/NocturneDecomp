// Name: core_frankgen.cpp_FUN_004950a0
// Address: 004950a0
// Address Range: [[004950a0, 0049523c]]
// Convention: unknown
// Signature: void core_frankgen_cpp_FUN_004950a0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_frankgen_cpp_FUN_004950a0(char *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  float10 fVar8;
  int aiStackY_1018 [1012];
  char *apcStack_3c [3];
  int iStack_30;
  int local_2c [2];
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  bVar7 = 0;
  switch(*(uint *)(param_1 + 0x150)) {
  case 0:
    apcStack_3c[0] = (char *)2300.0f;
    uVar2 = 0;
    goto LAB_004950c9;
  case 1:
    apcStack_3c[0] = (char *)0x4427c000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x43030000);
    break;
  case 2:
    apcStack_3c[0] = (char *)0x445dc000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x4403c000);
    break;
  case 3:
    apcStack_3c[0] = (char *)0x44d9a000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x44882000);
    break;
  case 4:
    apcStack_3c[0] = (char *)0x43c80000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x43af0000);
    break;
  case 5:
    apcStack_3c[0] = (char *)0x44828000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x44580000);
    break;
  case 6:
  case 7:
    apcStack_3c[0] = (char *)0x44f14000;
    uVar2 = 0x44d4a000;
    goto LAB_004950c9;
  case 8:
    apcStack_3c[0] = (char *)0x450fc000;
    uVar2 = 0x44f3a000;
LAB_004950c9:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_00495340(param_1,uVar2);
    break;
  default:
    apcStack_3c[0] = "WTF!";
    PTR_01cc4800 = "..\\core\\frankgen.cpp";
    INT_01cc4804 = 0x1bb;
    core_main_c_FUN_004c8440();
  }
  apcStack_3c[0] = param_1;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000();
  apcStack_3c[0] = (char *)0x4950e6;
  fVar8 = (float10)round((float10)*(float *)(param_1 + 0x178));
  local_18 = (int)ROUND(fVar8);
  iVar1 = *(int *)(param_1 + 0x480);
  uVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(param_1 + 0x17c,local_18)
  ;
  iVar3 = core_dmodel_cpp_CKeyFramedModel_getFrameVertices_FUN_00453080(uVar2);
  piVar5 = (int *)(iVar1 * 0xc + iVar3);
  piVar6 = piVar5 + (uint)bVar7 * -2 + 1;
  iStack_30 = *piVar5;
  local_2c[(uint)bVar7 * -2] = *piVar6;
  local_2c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 1] = piVar6[(uint)bVar7 * -2 + 1];
  local_24 = (float)iStack_30 * _DAT_0059db58;
  local_20 = (float)local_2c[0] * _DAT_0059db58;
  local_1c = (float)local_2c[1] * _DAT_0059db58;
  pcVar4 = (char *)core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                             (param_1,apcStack_3c,&local_24);
  if (param_1 + 0x488 != pcVar4) {
    *(uint *)(param_1 + 0x488) = *(uint *)pcVar4;
    *(uint *)(param_1 + 0x48c) = *(uint *)(pcVar4 + 4);
    *(uint *)(param_1 + 0x490) = *(uint *)(pcVar4 + 8);
    return;
  }
  return;
}
