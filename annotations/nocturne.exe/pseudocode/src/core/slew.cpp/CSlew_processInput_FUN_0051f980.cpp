// Name: core_slew.cpp_CSlew_processInput_FUN_0051f980
// Address: 0051f980
// Address Range: [[0051f980, 0051fc88]]
// Convention: __cdecl
// Signature: void __cdecl core_slew_cpp_CSlew_processInput_FUN_0051f980(float *param_1)

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_processInput_FUN_0051f980(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_2c;
  
  local_2c = *(float *)(0x01C775EC + 0x264);
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x38);
  dVar4 = 0.050000000000000003;
  if ((iVar5 != 0) ||
     (iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x2a), dVar4 = 10,
     iVar5 != 0)) {
    local_2c = local_2c * (float)dVar4;
  }
  fVar1 = local_2c * (float)3.1415926535000001;
  fVar2 = local_2c * (float)8;
  fVar3 = (float)30;
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4f);
  if (iVar5 != 0) {
    param_1[4] = param_1[4] - fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x51);
  if (iVar5 != 0) {
    param_1[4] = param_1[4] + fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x48);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)param_1[4]);
    fVar6 = (float10)fsin((float10)param_1[4]);
    *param_1 = (float)(fVar6 * (float10)fVar2 + (float10)*param_1);
    param_1[2] = (float)(fVar7 * (float10)fVar2 + (float10)param_1[2]);
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x50);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)param_1[4]);
    fVar6 = (float10)fsin((float10)param_1[4]);
    *param_1 = (float)((float10)*param_1 - fVar6 * (float10)fVar2);
    param_1[2] = (float)((float10)param_1[2] - fVar7 * (float10)fVar2);
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4b);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)param_1[4] + (float10)-1.57079632675);
    fVar6 = (float10)fcos((float10)param_1[4] + (float10)-1.57079632675);
    *param_1 = (float)(fVar7 * (float10)fVar2 + (float10)*param_1);
    param_1[2] = (float)(fVar6 * (float10)fVar2 + (float10)param_1[2]);
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4d);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)param_1[4] + (float10)1.57079632675);
    fVar6 = (float10)fcos((float10)param_1[4] + (float10)1.57079632675);
    *param_1 = (float)(fVar7 * (float10)fVar2 + (float10)*param_1);
    param_1[2] = (float)(fVar6 * (float10)fVar2 + (float10)param_1[2]);
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x10);
  if (iVar5 != 0) {
    param_1[1] = param_1[1] + fVar2;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1e);
  if (iVar5 != 0) {
    param_1[1] = param_1[1] - fVar2;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x3f);
  if (iVar5 != 0) {
    param_1[3] = param_1[3] - fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x42);
  if (iVar5 != 0) {
    param_1[3] = param_1[3] + fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x47);
  if (iVar5 != 0) {
    param_1[5] = param_1[5] - fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x49);
  if (iVar5 != 0) {
    param_1[5] = param_1[5] + fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0xc);
  if (iVar5 != 0) {
    param_1[6] = param_1[6] - local_2c * fVar3;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0xd);
  if (iVar5 != 0) {
    param_1[6] = param_1[6] + local_2c * fVar3;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4c);
  if (iVar5 != 0) {
    param_1[5] = 0.0;
    param_1[4] = param_1[5];
    param_1[3] = param_1[4];
    return;
  }
  return;
}
