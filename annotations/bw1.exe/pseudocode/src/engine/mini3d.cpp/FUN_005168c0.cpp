// Name: engine_mini3d.cpp_FUN_005168c0
// Address: 005168c0
// Address Range: [[005168c0, 00516c58]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_005168c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_005168c0(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_28;
  SSoftwareEdge *local_24;
  SSoftwareEdge *local_20;
  
  fVar2 = (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x18)) *
          (*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x54));
  fVar3 = (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x14)) *
          (*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x58));
  if (_DAT_01d22578 == 0) {
    if (fVar3 <= fVar2) {
      return;
    }
  }
  else if (fVar2 <= fVar3) {
    return;
  }
  iVar5 = 0;
  _DAT_01d2c5cc = 0;
  _DAT_01d2c0c4 = 0;
  _DAT_01d2c5c8 = 0x4b0;
  iVar6 = param_1;
  if (0 < param_2) {
    do {
      iVar4 = iVar5 + 1;
      if (param_2 <= iVar4) {
        iVar4 = 0;
      }
      iVar5 = iVar5 + 1;
      engine_mini3d_cpp_FUN_00515bd0(iVar6,iVar4 * 0x40 + param_1);
      iVar6 = iVar6 + 0x40;
    } while (iVar5 < param_2);
  }
  local_20 = (SSoftwareEdge *)&DAT_01d2c0c8;
  iVar6 = 0;
  if (0 < _DAT_01d2c0c4) {
    do {
      if ((_DAT_01d2c5c8 == (local_20->base).y_min) && (local_20 != (SSoftwareEdge *)0x0))
      goto LAB_005169b4;
      iVar6 = iVar6 + 1;
      local_20 = local_20 + 1;
    } while (iVar6 < _DAT_01d2c0c4);
  }
  local_20 = (SSoftwareEdge *)0x0;
LAB_005169b4:
  if (local_20 != (SSoftwareEdge *)0x0) {
    iVar6 = 0;
    local_24 = (SSoftwareEdge *)&DAT_01d2c0c8;
    if (0 < _DAT_01d2c0c4) {
      do {
        if ((_DAT_01d2c5c8 == (local_24->base).y_min) && (local_24 != local_20)) goto LAB_005169e7;
        iVar6 = iVar6 + 1;
        local_24 = local_24 + 1;
      } while (iVar6 < _DAT_01d2c0c4);
    }
    local_24 = (SSoftwareEdge *)0x0;
LAB_005169e7:
    if (local_24 != (SSoftwareEdge *)0x0) {
      local_28 = _DAT_01d2c5c8;
      do {
        if ((local_20->base).y_max <= local_28) {
          (local_20->base).y_min = -1;
          local_20 = (SSoftwareEdge *)&DAT_01d2c0c8;
          iVar6 = 0;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_28 == (local_20->base).y_min) && (local_20 != local_24)) goto LAB_00516a34;
              iVar6 = iVar6 + 1;
              local_20 = local_20 + 1;
            } while (iVar6 < _DAT_01d2c0c4);
          }
          local_20 = (SSoftwareEdge *)0x0;
LAB_00516a34:
          if (local_20 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_24->base).y_max <= local_28) {
          (local_24->base).y_min = -1;
          local_24 = (SSoftwareEdge *)&DAT_01d2c0c8;
          iVar6 = 0;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_28 == (local_24->base).y_min) && (local_24 != local_20)) goto LAB_00516a78;
              iVar6 = iVar6 + 1;
              local_24 = local_24 + 1;
            } while (iVar6 < _DAT_01d2c0c4);
          }
          local_24 = (SSoftwareEdge *)0x0;
LAB_00516a78:
          if (local_24 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (_DAT_01c51d00 == 0) {
          if (DAT_0061b4a0 == 0x20) {
            engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0057fb03
                      (local_24,local_20,local_28);
          }
          else {
            engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0057fd39
                      (local_24,local_20,local_28);
          }
        }
        else if (DAT_0061b4a0 == 0x20) {
          engine_special_cpp_FUN_0057eeac();
        }
        else {
          engine_special_cpp_FUN_0057f473();
        }
        (local_20->base).x_current = (local_20->base).x_current + (local_20->base).x_gradient;
        (local_20->base).u_current = (local_20->base).u_current + (local_20->base).u_gradient;
        (local_20->base).v_current = (local_20->base).v_current + (local_20->base).v_gradient;
        (local_20->base).depth_current =
             (local_20->base).depth_current + (local_20->base).depth_gradient;
        (local_20->base).red_current = (local_20->base).red_current + (local_20->base).red_gradient;
        iVar6 = (local_20->base).alpha_current;
        local_20->green_current = local_20->green_current + local_20->green_gradient;
        local_20->blue_current = local_20->blue_current + local_20->blue_gradient;
        iVar5 = (local_20->base).alpha_gradient;
        *(int *)&local_20->field_0x48 =
             *(int *)&local_20->field_0x48 + *(int *)&local_20->field_0x4c;
        (local_20->base).alpha_current = iVar6 + iVar5;
        piVar1 = &(local_24->base).x_current;
        *piVar1 = *piVar1 + (local_24->base).x_gradient;
        (local_24->base).u_current = (local_24->base).u_current + (local_24->base).u_gradient;
        (local_24->base).v_current = (local_24->base).v_current + (local_24->base).v_gradient;
        (local_24->base).depth_current =
             (local_24->base).depth_current + (local_24->base).depth_gradient;
        (local_24->base).red_current = (local_24->base).red_current + (local_24->base).red_gradient;
        iVar6 = (local_24->base).alpha_current;
        local_24->green_current = local_24->green_current + local_24->green_gradient;
        local_28 = local_28 + 1;
        local_24->blue_current = local_24->blue_current + local_24->blue_gradient;
        iVar5 = (local_24->base).alpha_gradient;
        *(int *)&local_24->field_0x48 =
             *(int *)&local_24->field_0x48 + *(int *)&local_24->field_0x4c;
        (local_24->base).alpha_current = iVar6 + iVar5;
      } while( true );
    }
  }
  return;
}
