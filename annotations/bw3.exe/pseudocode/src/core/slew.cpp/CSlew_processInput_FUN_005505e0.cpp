// Name: core_slew.cpp_CSlew_processInput_FUN_005505e0
// Address: 005505e0
// Address Range: [[005505e0, 00550977]]
// Convention: __cdecl
// Signature: void __cdecl core_slew_cpp_CSlew_processInput_FUN_005505e0(CSlew *this_ptr)

#include "nocturne.h"

void __cdecl core_slew_cpp_CSlew_processInput_FUN_005505e0(CSlew *this_ptr)

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
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LMENU);
  dVar4 = 0.050000000000000003;
  if ((iVar5 != 0) ||
     (iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_LSHIFT),
     dVar4 = 10, iVar5 != 0)) {
    local_28 = local_28 * (float)dVar4;
  }
  fVar1 = local_28 * 3.141593f;
  fVar2 = local_28 * (float)8;
  fVar3 = (float)30;
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD1);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y - fVar1;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD3);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y + fVar1;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD8);
  if (iVar5 != 0) {
    fVar6 = (float10)(this_ptr->orientation).vec.y;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    (this_ptr->position).x = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD2);
  if (iVar5 != 0) {
    fVar6 = (float10)(this_ptr->orientation).vec.y;
    fVar7 = (float10)fcos(fVar6);
    fVar6 = (float10)fsin(fVar6);
    (this_ptr->position).x = (float)((float10)(this_ptr->position).x - fVar6 * (float10)fVar2);
    (this_ptr->position).z = (float)((float10)(this_ptr->position).z - fVar7 * (float10)fVar2);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD4);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)(this_ptr->orientation).vec.y + (float10)-1.570796f);
    fVar6 = (float10)fcos((float10)(this_ptr->orientation).vec.y + (float10)-1.570796f);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD6);
  if (iVar5 != 0) {
    fVar7 = (float10)fsin((float10)(this_ptr->orientation).vec.y + (float10)1.570796f);
    fVar6 = (float10)fcos((float10)(this_ptr->orientation).vec.y + (float10)1.570796f);
    (this_ptr->position).x = (float)(fVar7 * (float10)fVar2 + (float10)(this_ptr->position).x);
    (this_ptr->position).z = (float)(fVar6 * (float10)fVar2 + (float10)(this_ptr->position).z);
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_Q);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y + fVar2;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_A);
  if (iVar5 != 0) {
    (this_ptr->position).y = (this_ptr->position).y - fVar2;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_F5);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x - fVar1;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_F8);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x + fVar1;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD7);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z - fVar1;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD9);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z + fVar1;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_MINUS);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate - local_28 * fVar3;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_EQUALS);
  if (iVar5 != 0) {
    this_ptr->slew_rate = this_ptr->slew_rate + local_28 * fVar3;
  }
  iVar5 = (*g_CKeys_PTR_00600284->vtable->getKeyState)(g_CKeys_PTR_00600284,DIK_NUMPAD5);
  if (iVar5 != 0) {
    (this_ptr->orientation).vec.z = 0.0;
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.z;
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.y;
  }
  if ((this_ptr->orientation).vec.y < -3.141593f) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y + 6.283185f;
  }
  if (0x40490fdb < (int)(this_ptr->orientation).vec.y) {
    (this_ptr->orientation).vec.y = (this_ptr->orientation).vec.y + -6.283185f;
  }
  if ((this_ptr->orientation).vec.x < -3.141593f) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x + 6.283185f;
  }
  if (0x40490fdb < (int)(this_ptr->orientation).vec.x) {
    (this_ptr->orientation).vec.x = (this_ptr->orientation).vec.x + -6.283185f;
  }
  if ((this_ptr->orientation).vec.z < -3.141593f) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z + 6.283185f;
  }
  if (0x40490fdb < (int)(this_ptr->orientation).vec.z) {
    (this_ptr->orientation).vec.z = (this_ptr->orientation).vec.z + -6.283185f;
    return;
  }
  return;
}
