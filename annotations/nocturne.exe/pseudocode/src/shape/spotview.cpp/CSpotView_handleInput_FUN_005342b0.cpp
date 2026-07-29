// Name: shape_spotview.cpp_CSpotView_handleInput_FUN_005342b0
// Address: 005342b0
// Address Range: [[005342b0, 0053458c]]
// Convention: __cdecl
// Signature: void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005342b0(CSpotView *this_ptr,uint control_flags)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_spotview_cpp_CSpotView_handleInput_FUN_005342b0(CSpotView *this_ptr,uint control_flags)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float local_20;
  float fStack_1c;
  float fStack_c;
  
  local_20 = 1.0;
  iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x38);
  if (iVar4 == 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x2a);
    if (iVar4 != 0) {
      local_20 = 4.0;
    }
  }
  else {
    local_20 = 0.05;
  }
  fVar3 = (float)_DAT_00595122;
  fVar1 = *(float *)(0x01C775EC + 0x264) * local_20;
  fStack_1c = this_ptr->distance * (float)_DAT_0059512a;
  fVar2 = fVar1 * (float)_DAT_0059511a;
  if (fStack_1c < 1.0) {
    fStack_1c = 1.0;
  }
  fStack_c = this_ptr->distance;
  if (this_ptr->distance < 1.0) {
    fStack_c = 1.0;
  }
  fStack_c = fStack_c * fVar1;
  if ((control_flags & 2) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x52);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw + fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x53);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw - fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x35);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw + fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x37);
    if (iVar4 != 0) {
      this_ptr->yaw = this_ptr->yaw - fVar2;
    }
  }
  if ((control_flags & 1) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4a);
    if (iVar4 != 0) {
      this_ptr->pitch = this_ptr->pitch + fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4e);
    if (iVar4 != 0) {
      this_ptr->pitch = this_ptr->pitch - fVar2;
    }
  }
  if ((control_flags & 8) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4b);
    if (iVar4 != 0) {
      this_ptr->pan_x = this_ptr->pan_x - fStack_c;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4d);
    if (iVar4 != 0) {
      this_ptr->pan_x = this_ptr->pan_x + fStack_c;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x10);
    if (iVar4 != 0) {
      this_ptr->pan_y = this_ptr->pan_y + fStack_c;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1e);
    if (iVar4 != 0) {
      this_ptr->pan_y = this_ptr->pan_y - fStack_c;
    }
  }
  if ((control_flags & 4) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x48);
    if (iVar4 != 0) {
      this_ptr->distance = this_ptr->distance - fStack_1c * fVar1;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x50);
    if (iVar4 != 0) {
      this_ptr->distance = this_ptr->distance + fStack_1c * fVar1;
    }
  }
  if ((control_flags & 0x10) != 0) {
    iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0xd);
    if (iVar4 != 0) {
      this_ptr->zoom = this_ptr->zoom / (local_20 * fVar3);
    }
    iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0xc);
    if (iVar4 != 0) {
      this_ptr->zoom = this_ptr->zoom * local_20 * fVar3;
    }
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4c);
  if (iVar4 == 0) {
    shape_spotview_cpp_CSpotView_clampValues_FUN_00534590(this_ptr);
    return;
  }
  shape_spotview_cpp_CSpotView_reset_FUN_00534260(this_ptr,control_flags);
  shape_spotview_cpp_CSpotView_clampValues_FUN_00534590(this_ptr);
  return;
}
