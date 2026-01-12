// Name: core_slew.cpp_CSlew_processInput_FUN_005a20b0
// Address: 005a20b0
// Address Range: [[005a20b0, 005a23b8]]
// Convention: __cdecl
// Signature: void core_slew.cpp_CSlew_processInput_FUN_005a20b0(CSlew * this_ptr)

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr)

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
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x38);
  dVar4 = 0.050000000000000003;
  if ((iVar5 != 0) ||
     (iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a), dVar4 = 10,
     iVar5 != 0)) {
    local_28 = local_28 * (float)dVar4;
  }
  fVar1 = local_28 * (float)3.1415926535000001;
  fVar2 = local_28 * (float)8;
  fVar3 = (float)30;
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4f);
  if (iVar5 != 0) {
    this_ptr->yaw = this_ptr->yaw - fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x51);
  if (iVar5 != 0) {
    this_ptr->yaw = this_ptr->yaw + fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x48);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)this_ptr->yaw);
    fVar6 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x50);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)this_ptr->yaw);
    fVar6 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x = (float)((float10)(this_ptr->position).x - fVar6 * (float10)fVar2);
    (this_ptr->position).z = (float)((float10)(this_ptr->position).z - fVar7 * (float10)fVar2);
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4b);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)this_ptr->yaw + (float10)-1.57079632675);
    fVar6 = (float10)fcos((float10)this_ptr->yaw + (float10)-1.57079632675);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4d);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)this_ptr->yaw + (float10)1.57079632675);
    fVar6 = (float10)fcos((float10)this_ptr->yaw + (float10)1.57079632675);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x10);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y + fVar2;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x1e);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y - fVar2;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x3f);
  if (iVar5 != 0) {
    this_ptr->pitch = this_ptr->pitch - fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x42);
  if (iVar5 != 0) {
    this_ptr->pitch = this_ptr->pitch + fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x47);
  if (iVar5 != 0) {
    this_ptr->roll = this_ptr->roll - fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x49);
  if (iVar5 != 0) {
    this_ptr->roll = this_ptr->roll + fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0xc);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate - local_28 * fVar3;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0xd);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate + local_28 * fVar3;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x4c);
  if (iVar5 != 0) {
    this_ptr->roll = 0.0;
    this_ptr->yaw = this_ptr->roll;
    this_ptr->pitch = this_ptr->yaw;
    return;
  }
  return;
}
