// Name: engine_mini3d.cpp_FUN_004f2090
// Address: 004f2090
// Address Range: [[004f2090, 004f2428]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f2090(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f2090(int param_1,int param_2)

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
  if (_DAT_01d76cf8 == 0) {
    if (fVar3 <= fVar2) {
      return;
    }
  }
  else if (fVar2 <= fVar3) {
    return;
  }
  iVar5 = 0;
  _DAT_01d80d4c = 0;
  _DAT_01d80844 = 0;
  _DAT_01d80d48 = 0x4b0;
  iVar6 = param_1;
  if (0 < param_2) {
    do {
      iVar4 = iVar5 + 1;
      if (param_2 <= iVar4) {
        iVar4 = 0;
      }
      iVar5 = iVar5 + 1;
      engine_mini3d_cpp_FUN_004f13a0(iVar6,iVar4 * 0x40 + param_1);
      iVar6 = iVar6 + 0x40;
    } while (iVar5 < param_2);
  }
  local_20 = (SSoftwareEdge *)&DAT_01d80848;
  iVar6 = 0;
  if (0 < _DAT_01d80844) {
    do {
      if ((_DAT_01d80d48 == (local_20->base).y_min) && (local_20 != (SSoftwareEdge *)0x0))
      goto LAB_004f2184;
      iVar6 = iVar6 + 1;
      local_20 = local_20 + 1;
    } while (iVar6 < _DAT_01d80844);
  }
  local_20 = (SSoftwareEdge *)0x0;
LAB_004f2184:
  if (local_20 != (SSoftwareEdge *)0x0) {
    iVar6 = 0;
    local_24 = (SSoftwareEdge *)&DAT_01d80848;
    if (0 < _DAT_01d80844) {
      do {
        if ((_DAT_01d80d48 == (local_24->base).y_min) && (local_24 != local_20)) goto LAB_004f21b7;
        iVar6 = iVar6 + 1;
        local_24 = local_24 + 1;
      } while (iVar6 < _DAT_01d80844);
    }
    local_24 = (SSoftwareEdge *)0x0;
LAB_004f21b7:
    if (local_24 != (SSoftwareEdge *)0x0) {
      local_28 = _DAT_01d80d48;
      do {
        if ((local_20->base).y_max <= local_28) {
          (local_20->base).y_min = -1;
          local_20 = (SSoftwareEdge *)&DAT_01d80848;
          iVar6 = 0;
          if (0 < _DAT_01d80844) {
            do {
              if ((local_28 == (local_20->base).y_min) && (local_20 != local_24)) goto LAB_004f2204;
              iVar6 = iVar6 + 1;
              local_20 = local_20 + 1;
            } while (iVar6 < _DAT_01d80844);
          }
          local_20 = (SSoftwareEdge *)0x0;
LAB_004f2204:
          if (local_20 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_24->base).y_max <= local_28) {
          (local_24->base).y_min = -1;
          local_24 = (SSoftwareEdge *)&DAT_01d80848;
          iVar6 = 0;
          if (0 < _DAT_01d80844) {
            do {
              if ((local_28 == (local_24->base).y_min) && (local_24 != local_20)) goto LAB_004f2248;
              iVar6 = iVar6 + 1;
              local_24 = local_24 + 1;
            } while (iVar6 < _DAT_01d80844);
          }
          local_24 = (SSoftwareEdge *)0x0;
LAB_004f2248:
          if (local_24 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (_DAT_01c6e2a0 == 0) {
          if (DAT_005fba20 == 0x20) {
            engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33
                      (local_24,local_20,local_28);
          }
          else {
            engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69
                      (local_24,local_20,local_28);
          }
        }
        else if (DAT_005fba20 == 0x20) {
          engine_special_cpp_FUN_00561fdc();
        }
        else {
          engine_special_cpp_FUN_005625a3();
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
