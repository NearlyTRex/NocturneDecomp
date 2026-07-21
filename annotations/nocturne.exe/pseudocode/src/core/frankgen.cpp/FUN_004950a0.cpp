// Name: FUN_004950a0
// Address: 004950a0
// Address Range: [[004950a0, 0049523c]]
// Convention: unknown
// Signature: void FUN_004950a0(undefined *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004950a0(byte *param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int *piVar5;
  int *piVar6;
  byte bVar7;
  float10 fVar8;
  int aiStackY_1018 [1012];
  byte *apuStack_3c [3];
  int iStack_30;
  int local_2c [2];
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  bVar7 = 0;
  switch(*(uint *)(param_1 + 0x150)) {
  case 0:
    apuStack_3c[0] = 0x450FC000;
    uVar2 = 0;
    goto LAB_004950c9;
  case 1:
    apuStack_3c[0] = (byte *)0x4427c000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x43030000);
    break;
  case 2:
    apuStack_3c[0] = (byte *)0x445dc000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x4403c000);
    break;
  case 3:
    apuStack_3c[0] = (byte *)0x44d9a000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x44882000);
    break;
  case 4:
    apuStack_3c[0] = (byte *)0x43c80000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x43af0000);
    break;
  case 5:
    apuStack_3c[0] = (byte *)0x44828000;
    core_frankgen_cpp_CFrankenstienMachine_setPartFrame_FUN_004952b0(param_1,0x44580000);
    break;
  case 6:
  case 7:
    apuStack_3c[0] = (byte *)0x44f14000;
    uVar2 = 0x44d4a000;
    goto LAB_004950c9;
  case 8:
    apuStack_3c[0] = (byte *)0x450fc000;
    uVar2 = 0x44f3a000;
LAB_004950c9:
    core_frankgen_cpp_CFrankenstienMachine_setCourseFrame_FUN_00495340(param_1,uVar2);
    break;
  default:
    apuStack_3c[0] = &DAT_00581d6d;
    _DAT_01cc4800 = "..\\core\\frankgen.cpp";
    _DAT_01cc4804 = 0x1bb;
    FUN_004c8440();
  }
  apuStack_3c[0] = param_1;
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_0040a000();
  apuStack_3c[0] = (byte *)0x4950e6;
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
  puVar4 = (uint *)
           core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240(param_1,apuStack_3c,&local_24);
  if ((uint *)(param_1 + 0x488) != puVar4) {
    *(uint *)(param_1 + 0x488) = *puVar4;
    *(uint *)(param_1 + 0x48c) = puVar4[1];
    *(uint *)(param_1 + 0x490) = puVar4[2];
    return;
  }
  return;
}
