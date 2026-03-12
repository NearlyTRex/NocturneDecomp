// Name: shape_spotview.cpp_CSpotView_handleInput_FUN_005b9670
// Address: 005b9670
// Address Range: [[005b9670, 005b994c]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(CSpotView *this_ptr,uint control_flags)

#include "nocturne.h"

void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005b9670(CSpotView *this_ptr,uint control_flags)

{
  float fVar4;
  int iVar4;
  int iVar5;
  float local_20;
  float fStack_1c;
  float fStack_c;
  float fVar2;
  float fVar1;
  float fVar3;
  
  local_20 = 1.0;
  iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LMENU);
  if (iVar4 == 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
    if (iVar5 != 0) {
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
  fVar4 = fStack_c * fVar1;
  if ((control_flags & 2) != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD0);
    if (iVar5 != 0) {
      this_ptr->yaw = this_ptr->yaw + fVar2;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_DECIMAL);
    if (iVar5 != 0) {
      this_ptr->yaw = this_ptr->yaw - fVar2;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SLASH);
    if (iVar5 != 0) {
      this_ptr->yaw = this_ptr->yaw + fVar2;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_MULTIPLY);
    if (iVar5 != 0) {
      this_ptr->yaw = this_ptr->yaw - fVar2;
    }
  }
  if ((control_flags & 1) != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_SUBTRACT);
    if (iVar5 != 0) {
      this_ptr->pitch = this_ptr->pitch + fVar2;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_ADD);
    if (iVar5 != 0) {
      this_ptr->pitch = this_ptr->pitch - fVar2;
    }
  }
  if ((control_flags & 8) != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD4);
    if (iVar5 != 0) {
      this_ptr->pan_x = this_ptr->pan_x - fVar4;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD6);
    if (iVar5 != 0) {
      this_ptr->pan_x = this_ptr->pan_x + fVar4;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_Q);
    if (iVar5 != 0) {
      this_ptr->pan_y = this_ptr->pan_y + fVar4;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_A);
    if (iVar5 != 0) {
      this_ptr->pan_y = this_ptr->pan_y - fVar4;
    }
  }
  if ((control_flags & 4) != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD8);
    if (iVar5 != 0) {
      this_ptr->distance = this_ptr->distance - fStack_1c * fVar1;
    }
    iVar5 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_NUMPAD2);
    if (iVar5 != 0) {
      this_ptr->distance = this_ptr->distance + fStack_1c * fVar1;
    }
  }
  if ((control_flags & 0x10) != 0) {
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_EQUALS);
    if (iVar5 != 0) {
      this_ptr->zoom = this_ptr->zoom / (local_20 * fVar3);
    }
    iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_MINUS);
    if (iVar5 != 0) {
      this_ptr->zoom = this_ptr->zoom * local_20 * fVar3;
    }
  }
  iVar5 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_NUMPAD5);
  if (iVar5 == 0) {
    shape_spotview_cpp_CSpotView_clampValues_FUN_005b9950(this_ptr);
    return;
  }
  shape_spotview_cpp_CSpotView_reset_FUN_005b9620(this_ptr,control_flags);
  shape_spotview_cpp_CSpotView_clampValues_FUN_005b9950(this_ptr);
  return;
}
