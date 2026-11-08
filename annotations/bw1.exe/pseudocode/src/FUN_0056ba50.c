// Name: FUN_0056ba50
// Address: 0056ba50
// Address Range: [[0056ba50, 0056bde7]]
// Convention: unknown
// Signature: void FUN_0056ba50(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_0056ba50(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_28;
  
  local_28 = *(float *)(0x01CCF390 + 0x294);
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x38);
  dVar4 = _DAT_005f281b;
  if ((iVar5 != 0) ||
     (iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x2a), dVar4 = _DAT_005f2813, iVar5 != 0)) {
    local_28 = local_28 * (float)dVar4;
  }
  fVar1 = local_28 * _DAT_005f2823;
  fVar2 = local_28 * (float)_DAT_005f282b;
  fVar3 = (float)_DAT_005f2833;
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x4f);
  if (iVar5 != 0) {
    param_1[4] = param_1[4] - fVar1;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x51);
  if (iVar5 != 0) {
    param_1[4] = param_1[4] + fVar1;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x48);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)param_1[4]);
    fVar6 = (float10)fsin((float10)param_1[4]);
    *param_1 = (float)(fVar6 * (float10)fVar2 + (float10)*param_1);
    param_1[2] = (float)(fVar7 * (float10)fVar2 + (float10)param_1[2]);
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x50);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)param_1[4]);
    fVar6 = (float10)fsin((float10)param_1[4]);
    *param_1 = (float)((float10)*param_1 - fVar6 * (float10)fVar2);
    param_1[2] = (float)((float10)param_1[2] - fVar7 * (float10)fVar2);
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x4b);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)param_1[4] + (float10)_DAT_005f283b);
    fVar6 = (float10)fcos((float10)param_1[4] + (float10)_DAT_005f283b);
    *param_1 = (float)(fVar7 * (float10)fVar2 + (float10)*param_1);
    param_1[2] = (float)(fVar6 * (float10)fVar2 + (float10)param_1[2]);
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x4d);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)param_1[4] + (float10)_DAT_005f283f);
    fVar6 = (float10)fcos((float10)param_1[4] + (float10)_DAT_005f283f);
    *param_1 = (float)(fVar7 * (float10)fVar2 + (float10)*param_1);
    param_1[2] = (float)(fVar6 * (float10)fVar2 + (float10)param_1[2]);
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x10);
  if (iVar5 != 0) {
    param_1[1] = param_1[1] + fVar2;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1e);
  if (iVar5 != 0) {
    param_1[1] = param_1[1] - fVar2;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x3f);
  if (iVar5 != 0) {
    param_1[3] = param_1[3] - fVar1;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x42);
  if (iVar5 != 0) {
    param_1[3] = param_1[3] + fVar1;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x47);
  if (iVar5 != 0) {
    param_1[5] = param_1[5] - fVar1;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x49);
  if (iVar5 != 0) {
    param_1[5] = param_1[5] + fVar1;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0xc);
  if (iVar5 != 0) {
    param_1[6] = param_1[6] - local_28 * fVar3;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0xd);
  if (iVar5 != 0) {
    param_1[6] = param_1[6] + local_28 * fVar3;
  }
  iVar5 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x4c);
  if (iVar5 != 0) {
    param_1[5] = 0.0;
    param_1[4] = param_1[5];
    param_1[3] = param_1[4];
  }
  if (param_1[4] < _DAT_005f2843) {
    param_1[4] = param_1[4] + _DAT_005f2847;
  }
  if (0x40490fdb < (int)param_1[4]) {
    param_1[4] = param_1[4] + _DAT_005f284b;
  }
  if (param_1[3] < _DAT_005f2843) {
    param_1[3] = param_1[3] + _DAT_005f2847;
  }
  if (0x40490fdb < (int)param_1[3]) {
    param_1[3] = param_1[3] + _DAT_005f284b;
  }
  if (param_1[5] < _DAT_005f2843) {
    param_1[5] = param_1[5] + _DAT_005f2847;
  }
  if (0x40490fdb < (int)param_1[5]) {
    param_1[5] = param_1[5] + _DAT_005f284b;
    return;
  }
  return;
}
