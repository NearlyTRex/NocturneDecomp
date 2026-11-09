// Name: core_slew.cpp_FUN_005505e0
// Address: 005505e0
// Address Range: [[005505e0, 00550977]]
// Convention: unknown
// Signature: void core_slew_cpp_FUN_005505e0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_slew_cpp_FUN_005505e0(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_28;
  
  local_28 = *(float *)&g_CGamePtr->field_0x314;
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x38);
  dVar4 = _DAT_005d231e;
  if ((iVar5 != 0) ||
     (iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a), dVar4 = _DAT_005d2316, iVar5 != 0)) {
    local_28 = local_28 * (float)dVar4;
  }
  fVar1 = local_28 * _DAT_005d2326;
  fVar2 = local_28 * (float)_DAT_005d232e;
  fVar3 = (float)_DAT_005d2336;
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x4f);
  if (iVar5 != 0) {
    param_1[4] = param_1[4] - fVar1;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x51);
  if (iVar5 != 0) {
    param_1[4] = param_1[4] + fVar1;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x48);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)param_1[4]);
    fVar6 = (float10)fsin((float10)param_1[4]);
    *param_1 = (float)(fVar6 * (float10)fVar2 + (float10)*param_1);
    param_1[2] = (float)(fVar7 * (float10)fVar2 + (float10)param_1[2]);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x50);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)param_1[4]);
    fVar6 = (float10)fsin((float10)param_1[4]);
    *param_1 = (float)((float10)*param_1 - fVar6 * (float10)fVar2);
    param_1[2] = (float)((float10)param_1[2] - fVar7 * (float10)fVar2);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x4b);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)param_1[4] + (float10)_DAT_005d233e);
    fVar6 = (float10)fcos((float10)param_1[4] + (float10)_DAT_005d233e);
    *param_1 = (float)(fVar7 * (float10)fVar2 + (float10)*param_1);
    param_1[2] = (float)(fVar6 * (float10)fVar2 + (float10)param_1[2]);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x4d);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)param_1[4] + (float10)_DAT_005d2342);
    fVar6 = (float10)fcos((float10)param_1[4] + (float10)_DAT_005d2342);
    *param_1 = (float)(fVar7 * (float10)fVar2 + (float10)*param_1);
    param_1[2] = (float)(fVar6 * (float10)fVar2 + (float10)param_1[2]);
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x10);
  if (iVar5 != 0) {
    param_1[1] = param_1[1] + fVar2;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x1e);
  if (iVar5 != 0) {
    param_1[1] = param_1[1] - fVar2;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x3f);
  if (iVar5 != 0) {
    param_1[3] = param_1[3] - fVar1;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x42);
  if (iVar5 != 0) {
    param_1[3] = param_1[3] + fVar1;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x47);
  if (iVar5 != 0) {
    param_1[5] = param_1[5] - fVar1;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x49);
  if (iVar5 != 0) {
    param_1[5] = param_1[5] + fVar1;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0xc);
  if (iVar5 != 0) {
    param_1[6] = param_1[6] - local_28 * fVar3;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0xd);
  if (iVar5 != 0) {
    param_1[6] = param_1[6] + local_28 * fVar3;
  }
  iVar5 = (**(code **)*0x01D70A78)(0x01D70A78,0x4c);
  if (iVar5 != 0) {
    param_1[5] = 0.0;
    param_1[4] = param_1[5];
    param_1[3] = param_1[4];
  }
  if (param_1[4] < _DAT_005d2346) {
    param_1[4] = param_1[4] + _DAT_005d234a;
  }
  if (0x40490fdb < (int)param_1[4]) {
    param_1[4] = param_1[4] + _DAT_005d234e;
  }
  if (param_1[3] < _DAT_005d2346) {
    param_1[3] = param_1[3] + _DAT_005d234a;
  }
  if (0x40490fdb < (int)param_1[3]) {
    param_1[3] = param_1[3] + _DAT_005d234e;
  }
  if (param_1[5] < _DAT_005d2346) {
    param_1[5] = param_1[5] + _DAT_005d234a;
  }
  if (0x40490fdb < (int)param_1[5]) {
    param_1[5] = param_1[5] + _DAT_005d234e;
    return;
  }
  return;
}
