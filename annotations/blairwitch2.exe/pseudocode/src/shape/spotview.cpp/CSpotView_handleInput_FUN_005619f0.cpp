// Name: shape_spotview.cpp_CSpotView_handleInput_FUN_005619f0
// Address: 005619f0
// Address Range: [[005619f0, 00561ccc]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005619f0(CSpotView *this_ptr,uint control_flags)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005619f0(CSpotView *this_ptr,uint control_flags)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_20;
  float fVar5;
  float fStack_c;
  
  fStack_20 = 1.0;
  iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_LMENU);
  if (iVar4 == 0) {
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_LSHIFT);
    if (iVar4 != 0) {
      fStack_20 = 4.0;
    }
  }
  else {
    fStack_20 = 0.05;
  }
  fVar3 = (float)1.1000000000000001;
  fVar1 = g_CGamePtr->delta_time_float * fStack_20;
  fVar5 = this_ptr->distance * (float)1.5;
  fVar2 = fVar1 * 3.141593f;
  if (fVar5 < 1.0) {
    fVar5 = 1.0;
  }
  fVar5 = fVar5 * fVar1;
  fStack_c = this_ptr->distance;
  if (this_ptr->distance < 1.0) {
    fStack_c = 1.0;
  }
  fStack_c = fStack_c * fVar1;
  if ((control_flags & 2) != 0) {
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_NUMPAD0);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw + fVar2;
    }
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_DECIMAL);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw - fVar2;
    }
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_SLASH);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw + fVar2;
    }
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_MULTIPLY);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw - fVar2;
    }
  }
  if ((control_flags & 1) != 0) {
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_SUBTRACT);
    if (iVar4 != 0) {
      this_ptr->pitch = this_ptr->pitch + fVar2;
    }
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_ADD);
    if (iVar4 != 0) {
      this_ptr->pitch = this_ptr->pitch - fVar2;
    }
  }
  if ((control_flags & 8) != 0) {
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_NUMPAD4);
    if (iVar4 != 0) {
      this_ptr->pan_x = this_ptr->pan_x - fStack_c;
    }
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_NUMPAD6);
    if (iVar4 != 0) {
      this_ptr->pan_x = this_ptr->pan_x + fStack_c;
    }
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_Q);
    if (iVar4 != 0) {
      this_ptr->pan_y = this_ptr->pan_y + fStack_c;
    }
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_A);
    if (iVar4 != 0) {
      this_ptr->pan_y = this_ptr->pan_y - fStack_c;
    }
  }
  if ((control_flags & 4) != 0) {
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_NUMPAD8);
    if (iVar4 != 0) {
      this_ptr->distance = this_ptr->distance - fVar5;
    }
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getKeyState)(g_CKeys_PTR_00617dd4,DIK_NUMPAD2);
    if (iVar4 != 0) {
      this_ptr->distance = this_ptr->distance + fVar5;
    }
  }
  if ((control_flags & 0x10) != 0) {
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)(g_CKeys_PTR_00617dd4,DIK_EQUALS);
    if (iVar4 != 0) {
      this_ptr->zoom = this_ptr->zoom / (fStack_20 * fVar3);
    }
    iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)(g_CKeys_PTR_00617dd4,DIK_MINUS);
    if (iVar4 != 0) {
      this_ptr->zoom = this_ptr->zoom * fStack_20 * fVar3;
    }
  }
  iVar4 = (*g_CKeys_PTR_00617dd4->vtable->getAndClearKeyState)(g_CKeys_PTR_00617dd4,DIK_NUMPAD5);
  if (iVar4 == 0) {
    shape_spotview_cpp_CSpotView_clampValues_FUN_00561cd0(this_ptr);
    return;
  }
  shape_spotview_cpp_CSpotView_reset_FUN_005619a0(this_ptr,control_flags);
  shape_spotview_cpp_CSpotView_clampValues_FUN_00561cd0(this_ptr);
  return;
}
