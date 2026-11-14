// Name: core_slew.cpp_CSlew_processInput_FUN_005493d0
// Address: 005493d0
// Address Range: [[005493d0, 00549767]]
// Convention: __cdecl
// Signature: void __cdecl core_slew_cpp_CSlew_processInput_FUN_005493d0(CSlew *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_slew_cpp_CSlew_processInput_FUN_005493d0(CSlew *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  double dVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float local_28;
  
  local_28 = g_CGamePtr->delta_time_float;
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x38);
  dVar4 = _DAT_005e7621;
  if ((iVar5 != 0) ||
     (iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a), dVar4 = _DAT_005e7619, iVar5 != 0)) {
    local_28 = local_28 * (float)dVar4;
  }
  fVar1 = local_28 * _DAT_005e7629;
  fVar2 = local_28 * (float)_DAT_005e7631;
  fVar3 = (float)_DAT_005e7639;
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x4f);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y - fVar1;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x51);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y + fVar1;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x48);
  if (iVar5 != 0) {
    fVar6 = (float10)(this_ptr->orientation).vec.y;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    (this_ptr->position).x = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x50);
  if (iVar5 != 0) {
    fVar6 = (float10)(this_ptr->orientation).vec.y;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    (this_ptr->position).x = (float)((float10)(this_ptr->position).x - fVar6 * (float10)fVar2);
    (this_ptr->position).z = (float)((float10)(this_ptr->position).z - fVar7 * (float10)fVar2);
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x4b);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)(this_ptr->orientation).vec.y + (float10)_DAT_005e7641);
    fVar6 = (float10)fcos((float10)(this_ptr->orientation).vec.y + (float10)_DAT_005e7641);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x4d);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)(this_ptr->orientation).vec.y + (float10)_DAT_005e7645);
    fVar6 = (float10)fcos((float10)(this_ptr->orientation).vec.y + (float10)_DAT_005e7645);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x10);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y + fVar2;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x1e);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y - fVar2;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x3f);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x - fVar1;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x42);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x + fVar1;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x47);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z - fVar1;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x49);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z + fVar1;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0xc);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate - local_28 * fVar3;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0xd);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate + local_28 * fVar3;
  }
  iVar5 = (**(code **)*0x01D02F84)(0x01D02F84,0x4c);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.z = 0.0;
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.z;
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.y;
  }
  if ((this_ptr->orientation).vec.y < _DAT_005e7649) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y + _DAT_005e764d;
  }
  if (0x40490fdb < (int)(this_ptr->orientation).vec.y) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y + _DAT_005e7651;
  }
  if ((this_ptr->orientation).vec.x < _DAT_005e7649) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x + _DAT_005e764d;
  }
  if (0x40490fdb < (int)(this_ptr->orientation).vec.x) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x + _DAT_005e7651;
  }
  if ((this_ptr->orientation).vec.z < _DAT_005e7649) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z + _DAT_005e764d;
  }
  if (0x40490fdb < (int)(this_ptr->orientation).vec.z) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z + _DAT_005e7651;
    return;
  }
  return;
}
