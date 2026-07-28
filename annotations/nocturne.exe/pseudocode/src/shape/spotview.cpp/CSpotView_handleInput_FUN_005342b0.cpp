// Name: shape_spotview.cpp_CSpotView_handleInput_FUN_005342b0
// Address: 005342b0
// Address Range: [[005342b0, 0053458c]]
// Convention: unknown
// Signature: void shape_spotview_cpp_CSpotView_handleInput_FUN_005342b0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_spotview_cpp_CSpotView_handleInput_FUN_005342b0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CSpotView *in_stack_00000004;
  uint in_stack_00000008;
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
  fStack_1c = in_stack_00000004->distance * (float)_DAT_0059512a;
  fVar2 = fVar1 * (float)_DAT_0059511a;
  if (fStack_1c < 1.0) {
    fStack_1c = 1.0;
  }
  fStack_c = in_stack_00000004->distance;
  if (in_stack_00000004->distance < 1.0) {
    fStack_c = 1.0;
  }
  fStack_c = fStack_c * fVar1;
  if ((in_stack_00000008 & 2) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x52);
    if (iVar4 != 0) {
      in_stack_00000004->yaw = in_stack_00000004->yaw + fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x53);
    if (iVar4 != 0) {
      in_stack_00000004->yaw = in_stack_00000004->yaw - fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x35);
    if (iVar4 != 0) {
      in_stack_00000004->yaw = in_stack_00000004->yaw + fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x37);
    if (iVar4 != 0) {
      in_stack_00000004->yaw = in_stack_00000004->yaw - fVar2;
    }
  }
  if ((in_stack_00000008 & 1) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4a);
    if (iVar4 != 0) {
      in_stack_00000004->pitch = in_stack_00000004->pitch + fVar2;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4e);
    if (iVar4 != 0) {
      in_stack_00000004->pitch = in_stack_00000004->pitch - fVar2;
    }
  }
  if ((in_stack_00000008 & 8) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4b);
    if (iVar4 != 0) {
      in_stack_00000004->pan_x = in_stack_00000004->pan_x - fStack_c;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x4d);
    if (iVar4 != 0) {
      in_stack_00000004->pan_x = in_stack_00000004->pan_x + fStack_c;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x10);
    if (iVar4 != 0) {
      in_stack_00000004->pan_y = in_stack_00000004->pan_y + fStack_c;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1e);
    if (iVar4 != 0) {
      in_stack_00000004->pan_y = in_stack_00000004->pan_y - fStack_c;
    }
  }
  if ((in_stack_00000008 & 4) != 0) {
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x48);
    if (iVar4 != 0) {
      in_stack_00000004->distance = in_stack_00000004->distance - fStack_1c * fVar1;
    }
    iVar4 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x50);
    if (iVar4 != 0) {
      in_stack_00000004->distance = in_stack_00000004->distance + fStack_1c * fVar1;
    }
  }
  if ((in_stack_00000008 & 0x10) != 0) {
    iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0xd);
    if (iVar4 != 0) {
      in_stack_00000004->zoom = in_stack_00000004->zoom / (local_20 * fVar3);
    }
    iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0xc);
    if (iVar4 != 0) {
      in_stack_00000004->zoom = in_stack_00000004->zoom * local_20 * fVar3;
    }
  }
  iVar4 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x4c);
  if (iVar4 == 0) {
    shape_spotview_cpp_CSpotView_clampValues_FUN_00534590(in_stack_00000004);
    return;
  }
  shape_spotview_cpp_CSpotView_reset_FUN_00534260(in_stack_00000004,in_stack_00000008);
  shape_spotview_cpp_CSpotView_clampValues_FUN_00534590(in_stack_00000004);
  return;
}
