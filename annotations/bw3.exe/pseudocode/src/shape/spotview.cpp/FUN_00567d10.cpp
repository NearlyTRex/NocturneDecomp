// Name: shape_spotview.cpp_FUN_00567d10
// Address: 00567d10
// Address Range: [[00567d10, 00567fec]]
// Convention: unknown
// Signature: void shape_spotview_cpp_FUN_00567d10(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void shape_spotview_cpp_FUN_00567d10(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  CSpotView *in_stack_00000004;
  uint in_stack_00000008;
  float fStack_20;
  float fVar5;
  float fStack_c;
  
  fStack_20 = 1.0;
  iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x38);
  if (iVar4 == 0) {
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
    if (iVar4 != 0) {
      fStack_20 = 4.0;
    }
  }
  else {
    fStack_20 = 0.05;
  }
  fVar3 = (float)_DAT_005d5c16;
  fVar1 = g_CGamePtr->delta_time_float * fStack_20;
  fVar5 = in_stack_00000004->distance * (float)_DAT_005d5c1e;
  fVar2 = fVar1 * _DAT_005d5c0e;
  if (fVar5 < 1.0) {
    fVar5 = 1.0;
  }
  fVar5 = fVar5 * fVar1;
  fStack_c = in_stack_00000004->distance;
  if (in_stack_00000004->distance < 1.0) {
    fStack_c = 1.0;
  }
  fStack_c = fStack_c * fVar1;
  if ((in_stack_00000008 & 2) != 0) {
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x52);
    if (iVar4 != 0) {
      in_stack_00000004->yaw = in_stack_00000004->yaw + fVar2;
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x53);
    if (iVar4 != 0) {
      in_stack_00000004->yaw = in_stack_00000004->yaw - fVar2;
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x35);
    if (iVar4 != 0) {
      in_stack_00000004->yaw = in_stack_00000004->yaw + fVar2;
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x37);
    if (iVar4 != 0) {
      in_stack_00000004->yaw = in_stack_00000004->yaw - fVar2;
    }
  }
  if ((in_stack_00000008 & 1) != 0) {
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x4a);
    if (iVar4 != 0) {
      in_stack_00000004->pitch = in_stack_00000004->pitch + fVar2;
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x4e);
    if (iVar4 != 0) {
      in_stack_00000004->pitch = in_stack_00000004->pitch - fVar2;
    }
  }
  if ((in_stack_00000008 & 8) != 0) {
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x4b);
    if (iVar4 != 0) {
      in_stack_00000004->pan_x = in_stack_00000004->pan_x - fStack_c;
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x4d);
    if (iVar4 != 0) {
      in_stack_00000004->pan_x = in_stack_00000004->pan_x + fStack_c;
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x10);
    if (iVar4 != 0) {
      in_stack_00000004->pan_y = in_stack_00000004->pan_y + fStack_c;
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1e);
    if (iVar4 != 0) {
      in_stack_00000004->pan_y = in_stack_00000004->pan_y - fStack_c;
    }
  }
  if ((in_stack_00000008 & 4) != 0) {
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x48);
    if (iVar4 != 0) {
      in_stack_00000004->distance = in_stack_00000004->distance - fVar5;
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x50);
    if (iVar4 != 0) {
      in_stack_00000004->distance = in_stack_00000004->distance + fVar5;
    }
  }
  if ((in_stack_00000008 & 0x10) != 0) {
    iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0xd);
    if (iVar4 != 0) {
      in_stack_00000004->zoom = in_stack_00000004->zoom / (fStack_20 * fVar3);
    }
    iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0xc);
    if (iVar4 != 0) {
      in_stack_00000004->zoom = in_stack_00000004->zoom * fStack_20 * fVar3;
    }
  }
  iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x4c);
  if (iVar4 == 0) {
    shape_spotview_cpp_CSpotView_clampValues_FUN_00567ff0(in_stack_00000004);
    return;
  }
  shape_spotview_cpp_CSpotView_reset_FUN_00567cc0(in_stack_00000004,in_stack_00000008);
  shape_spotview_cpp_CSpotView_clampValues_FUN_00567ff0(in_stack_00000004);
  return;
}
