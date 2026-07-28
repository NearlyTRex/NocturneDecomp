// Name: core_slew.cpp_CSlew_processInput_FUN_0051f980
// Address: 0051f980
// Address Range: [[0051f980, 0051fc88]]
// Convention: __cdecl
// Signature: void __cdecl core_slew_cpp_CSlew_processInput_FUN_0051f980(CSlew *this_ptr)

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_processInput_FUN_0051f980(CSlew *this_ptr)

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
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y - fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x51);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y + fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x48);
  if (iVar5 != 0) {
    fVar6 = (float10)(this_ptr->orientation).vec.y;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    (this_ptr->position).x = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x50);
  if (iVar5 != 0) {
    fVar6 = (float10)(this_ptr->orientation).vec.y;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    (this_ptr->position).x = (float)((float10)(this_ptr->position).x - fVar6 * (float10)fVar2);
    (this_ptr->position).z = (float)((float10)(this_ptr->position).z - fVar7 * (float10)fVar2);
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4b);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)(this_ptr->orientation).vec.y + (float10)-1.57079632675);
    fVar6 = (float10)fcos((float10)(this_ptr->orientation).vec.y + (float10)-1.57079632675);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4d);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)(this_ptr->orientation).vec.y + (float10)1.57079632675);
    fVar6 = (float10)fcos((float10)(this_ptr->orientation).vec.y + (float10)1.57079632675);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x10);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y + fVar2;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1e);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y - fVar2;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x3f);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x - fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x42);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x + fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x47);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z - fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x49);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z + fVar1;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0xc);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate - local_2c * fVar3;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0xd);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate + local_2c * fVar3;
  }
  iVar5 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4c);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.z = 0.0;
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.z;
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.y;
    return;
  }
  return;
}
