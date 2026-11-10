// Name: shape_spotview.cpp_FUN_0058443e
// Address: 0058443e
// Address Range: [[0058443e, 0058471c]]
// Convention: unknown
// Signature: void shape_spotview_cpp_FUN_0058443e(CSpotView *param_1,uint param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void shape_spotview_cpp_FUN_0058443e(CSpotView *param_1,uint param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fStack_20;
  float fVar5;
  float fStack_c;
  
  fStack_20 = 1.0;
  iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x38);
  if (iVar4 == 0) {
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x2a);
    if (iVar4 != 0) {
      fStack_20 = 4.0;
    }
  }
  else {
    fStack_20 = 0.05;
  }
  fVar3 = (float)_DAT_005f62fc;
  fVar1 = g_CGamePtr->delta_time_float * fStack_20;
  fVar5 = param_1->distance * (float)_DAT_005f6304;
  fVar2 = fVar1 * _DAT_005f62f4;
  if (fVar5 < 1.0) {
    fVar5 = 1.0;
  }
  fVar5 = fVar5 * fVar1;
  fStack_c = param_1->distance;
  if (param_1->distance < 1.0) {
    fStack_c = 1.0;
  }
  fStack_c = fStack_c * fVar1;
  if ((param_2 & 2) != 0) {
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x52);
    if (iVar4 != 0) {
      param_1->yaw = param_1->yaw + fVar2;
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x53);
    if (iVar4 != 0) {
      param_1->yaw = param_1->yaw - fVar2;
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x35);
    if (iVar4 != 0) {
      param_1->yaw = param_1->yaw + fVar2;
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x37);
    if (iVar4 != 0) {
      param_1->yaw = param_1->yaw - fVar2;
    }
  }
  if ((param_2 & 1) != 0) {
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x4a);
    if (iVar4 != 0) {
      param_1->pitch = param_1->pitch + fVar2;
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x4e);
    if (iVar4 != 0) {
      param_1->pitch = param_1->pitch - fVar2;
    }
  }
  if ((param_2 & 8) != 0) {
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x4b);
    if (iVar4 != 0) {
      param_1->pan_x = param_1->pan_x - fStack_c;
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x4d);
    if (iVar4 != 0) {
      param_1->pan_x = param_1->pan_x + fStack_c;
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x10);
    if (iVar4 != 0) {
      param_1->pan_y = param_1->pan_y + fStack_c;
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1e);
    if (iVar4 != 0) {
      param_1->pan_y = param_1->pan_y - fStack_c;
    }
  }
  if ((param_2 & 4) != 0) {
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x48);
    if (iVar4 != 0) {
      param_1->distance = param_1->distance - fVar5;
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x50);
    if (iVar4 != 0) {
      param_1->distance = param_1->distance + fVar5;
    }
  }
  if ((param_2 & 0x10) != 0) {
    iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0xd);
    if (iVar4 != 0) {
      param_1->zoom = param_1->zoom / (fStack_20 * fVar3);
    }
    iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0xc);
    if (iVar4 != 0) {
      param_1->zoom = param_1->zoom * fStack_20 * fVar3;
    }
  }
  iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x4c);
  if (iVar4 == 0) {
    shape_spotview_cpp_CSpotView_clampValues_FUN_00584720(param_1);
    return;
  }
  shape_spotview_cpp_CSpotView_reset_FUN_005843f0(param_1,param_2);
  shape_spotview_cpp_CSpotView_clampValues_FUN_00584720(param_1);
  return;
}
