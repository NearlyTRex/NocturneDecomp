// Name: core_slew.cpp_CSlew_processInput_FUN_005a20b0
// Address: 005a20b0
// MANUAL RECONSTRUCTION
// Address Range: [[005a20b0, 005a23b8]]
// Convention: __cdecl
// Signature: void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr)

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_processInput_FUN_005a20b0(CSlew *this_ptr)

{
  int iVar5;
  int iVar1;
  float10 fVar4;
  float10 fVar6;
  float10 fVar7;
  float10 fVar5;
  float local_2c;
  float fVar3;
  double dVar4;
  float fVar2;
  float fVar1;
  
  local_2c = g_CGamePtr->delta_time_float;
  iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
  dVar4 = 0.050000000000000003;
  if ((iVar5 != 0) ||
     (iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT), dVar4 = 10,
     iVar1 != 0)) {
    local_2c = local_2c * (float)dVar4;
  }
  fVar1 = local_2c * (float)3.1415926535000001;
  fVar2 = local_2c * (float)8;
  fVar3 = (float)30;
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD1);
  if (iVar1 != 0) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y - fVar1;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD3);
  if (iVar1 != 0) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y + fVar1;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
  if (iVar1 != 0) {
    fVar4 = (float10)(this_ptr->orientation).vec.y;
    fVar5 = (float10)fcos(fVar4);
    fVar6 = (float10)fsin(fVar4);
    (this_ptr->position).x = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar5 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
  if (iVar1 != 0) {
    fVar4 = (float10)(this_ptr->orientation).vec.y;
    fVar5 = (float10)fcos(fVar4);
    fVar4 = (float10)fsin(fVar4);
    (this_ptr->position).x = (float)((float10)(this_ptr->position).x - fVar4 * (float10)fVar2);
    (this_ptr->position).z = (float)((float10)(this_ptr->position).z - fVar5 * (float10)fVar2);
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
  if (iVar1 != 0) {
    fVar7 = (float10)fsin((float10)(this_ptr->orientation).vec.y + (float10)-1.57079632675);
    fVar5 = (float10)fcos((float10)(this_ptr->orientation).vec.y + (float10)-1.57079632675);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar5 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
  if (iVar1 != 0) {
    fVar5 = (float10)fsin((float10)(this_ptr->orientation).vec.y + (float10)1.57079632675);
    fVar4 = (float10)fcos((float10)(this_ptr->orientation).vec.y + (float10)1.57079632675);
    (this_ptr->position).x = (float)(fVar5 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar4 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
  if (iVar1 != 0) {
    (this_ptr->position).y = (this_ptr->position).y + fVar2;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
  if (iVar1 != 0) {
    (this_ptr->position).y = (this_ptr->position).y - fVar2;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F5);
  if (iVar1 != 0) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x - fVar1;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_F8);
  if (iVar1 != 0) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x + fVar1;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD7);
  if (iVar1 != 0) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z - fVar1;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD9);
  if (iVar1 != 0) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z + fVar1;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_MINUS);
  if (iVar1 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate - local_2c * fVar3;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_EQUALS);
  if (iVar1 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate + local_2c * fVar3;
  }
  iVar1 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD5);
  if (iVar1 != 0) {
    (this_ptr->orientation).vec.x = 0.0f;
    (this_ptr->orientation).vec.y = 0.0f;
    (this_ptr->orientation).vec.z = 0.0f;
    return;
  }
  return;
}
