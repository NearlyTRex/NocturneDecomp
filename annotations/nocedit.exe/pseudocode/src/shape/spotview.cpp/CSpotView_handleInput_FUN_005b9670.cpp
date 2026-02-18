// Name: shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670
// Address: 005b9670
// Address Range: [[005b9670, 005b994c]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(CSpotView *this_ptr,uint control_flags)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(CSpotView *this_ptr,uint control_flags)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float local_20;
  float fStack_1c;
  float fStack_c;
  
  local_20 = 1.0;
  iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
  if (iVar4 == 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if (iVar4 != 0) {
      local_20 = 4.0;
    }
  }
  else {
    local_20 = 0.05;
  }
  fVar3 = (float)1.1000000000000001;
  fVar1 = g_CGamePtr->delta_time_float * local_20;
  fStack_1c = this_ptr->distance * (float)1.5;
  fVar2 = fVar1 * (float)3.1415926535000001;
  if (fStack_1c < 1.0) {
    fStack_1c = 1.0;
  }
  fStack_c = this_ptr->distance;
  if (this_ptr->distance < 1.0) {
    fStack_c = 1.0;
  }
  fStack_c = fStack_c * fVar1;
  if ((control_flags & 2) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD0);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw + fVar2;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_DECIMAL);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw - fVar2;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SLASH);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw + fVar2;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_MULTIPLY);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw - fVar2;
    }
  }
  if ((control_flags & 1) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SUBTRACT);
    if (iVar4 != 0) {
      this_ptr->pitch = this_ptr->pitch + fVar2;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ADD);
    if (iVar4 != 0) {
      this_ptr->pitch = this_ptr->pitch - fVar2;
    }
  }
  if ((control_flags & 8) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar4 != 0) {
      this_ptr->pan_x = this_ptr->pan_x - fStack_c;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar4 != 0) {
      this_ptr->pan_x = this_ptr->pan_x + fStack_c;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
    if (iVar4 != 0) {
      this_ptr->pan_y = this_ptr->pan_y + fStack_c;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
    if (iVar4 != 0) {
      this_ptr->pan_y = this_ptr->pan_y - fStack_c;
    }
  }
  if ((control_flags & 4) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
    if (iVar4 != 0) {
      this_ptr->distance = this_ptr->distance - fStack_1c * fVar1;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
    if (iVar4 != 0) {
      this_ptr->distance = this_ptr->distance + fStack_1c * fVar1;
    }
  }
  if ((control_flags & 0x10) != 0) {
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_EQUALS);
    if (iVar4 != 0) {
      this_ptr->zoom = this_ptr->zoom / (local_20 * fVar3);
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_MINUS);
    if (iVar4 != 0) {
      this_ptr->zoom = this_ptr->zoom * local_20 * fVar3;
    }
  }
  iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD5);
  if (iVar4 == 0) {
    shape_spotview_cpp_CSpotView_clampValues_FUN_005b9950(this_ptr);
    return;
  }
  shape_spotview_cpp_CSpotView_reset_FUN_005b9620(this_ptr,control_flags);
  shape_spotview_cpp_CSpotView_clampValues_FUN_005b9950(this_ptr);
  return;
}
