// Name: core_slew.cpp_CSlew_processInput_FUN_005a20b0
// Address: 005a20b0
// Address Range: [[005a20b0, 005a23b8]]
// Convention: __cdecl
// Signature: void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr)

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
  float local_2c;
  float local_20;
  float local_1c;
  float local_18;
  
  local_2c = g_CGamePtr->delta_time_float;
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
  dVar4 = 0.050000000000000003;
  if ((iVar5 != 0) ||
     (iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT), dVar4 = 10,
     iVar5 != 0)) {
    local_2c = local_2c * (float)dVar4;
  }
  fVar1 = local_2c * (float)3.1415926535000001;
  fVar2 = local_2c * (float)8;
  fVar3 = (float)30;
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD1);
  if (iVar5 != 0) {
    this_ptr->yaw = this_ptr->yaw - fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD3);
  if (iVar5 != 0) {
    this_ptr->yaw = this_ptr->yaw + fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)this_ptr->yaw);
    fVar6 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
  if (iVar5 != 0) {
    fVar7 = (float10)fcos((float10)this_ptr->yaw);
    fVar6 = (float10)fsin((float10)this_ptr->yaw);
    (this_ptr->position).x = (float)((float10)(this_ptr->position).x - fVar6 * (float10)fVar2);
    (this_ptr->position).z = (float)((float10)(this_ptr->position).z - fVar7 * (float10)fVar2);
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)this_ptr->yaw + (float10)-1.57079632675);
    fVar6 = (float10)fcos((float10)this_ptr->yaw + (float10)-1.57079632675);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)this_ptr->yaw + (float10)1.57079632675);
    fVar6 = (float10)fcos((float10)this_ptr->yaw + (float10)1.57079632675);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y + fVar2;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y - fVar2;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F5);
  if (iVar5 != 0) {
    this_ptr->pitch = this_ptr->pitch - fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F8);
  if (iVar5 != 0) {
    this_ptr->pitch = this_ptr->pitch + fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD7);
  if (iVar5 != 0) {
    this_ptr->roll = this_ptr->roll - fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD9);
  if (iVar5 != 0) {
    this_ptr->roll = this_ptr->roll + fVar1;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_MINUS);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate - local_2c * fVar3;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_EQUALS);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate + local_2c * fVar3;
  }
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD5);
  if (iVar5 != 0) {
    this_ptr->roll = 0.0;
    this_ptr->yaw = this_ptr->roll;
    this_ptr->pitch = this_ptr->yaw;
    return;
  }
  return;
}
