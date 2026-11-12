// Name: engine_mini3d.cpp_FUN_004f7a50
// Address: 004f7a50
// Address Range: [[004f7a50, 004f7d9d]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004f7a50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004f7a50(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_1c;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((*(float *)(param_1 + 0x94) - *(float *)(param_1 + 0x54)) *
      (*(float *)(param_1 + 0x58) - *(float *)(param_1 + 0x18)) <
      (*(float *)(param_1 + 0x54) - *(float *)(param_1 + 0x14)) *
      (*(float *)(param_1 + 0x98) - *(float *)(param_1 + 0x58))) {
    iVar4 = 0;
    _DAT_01d17fbc = 0;
    _DAT_01d17ab4 = 0;
    _DAT_01d17fb8 = 0x4b0;
    iVar3 = param_1;
    if (0 < param_2) {
      do {
        iVar2 = iVar4 + 1;
        if (param_2 <= iVar2) {
          iVar2 = 0;
        }
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_FUN_004f6df0(iVar3,iVar2 * 0x40 + param_1);
        iVar3 = iVar3 + 0x40;
      } while (iVar4 < param_2);
    }
    local_18 = (SSoftwareEdge *)&DAT_01d17ab8;
    iVar3 = 0;
    if (0 < _DAT_01d17ab4) {
      do {
        if ((_DAT_01d17fb8 == (local_18->base).y_min) && (local_18 != (SSoftwareEdge *)0x0))
        goto LAB_004f7b0a;
        iVar3 = iVar3 + 1;
        local_18 = local_18 + 1;
      } while (iVar3 < _DAT_01d17ab4);
    }
    local_18 = (SSoftwareEdge *)0x0;
LAB_004f7b0a:
    if (local_18 != (SSoftwareEdge *)0x0) {
      iVar3 = 0;
      local_14 = (SSoftwareEdge *)&DAT_01d17ab8;
      if (0 < _DAT_01d17ab4) {
        do {
          if ((_DAT_01d17fb8 == (local_14->base).y_min) && (local_14 != local_18))
          goto LAB_004f7b3d;
          iVar3 = iVar3 + 1;
          local_14 = local_14 + 1;
        } while (iVar3 < _DAT_01d17ab4);
      }
      local_14 = (SSoftwareEdge *)0x0;
LAB_004f7b3d:
      if (local_14 != (SSoftwareEdge *)0x0) {
        local_1c = _DAT_01d17fb8;
        do {
          if ((local_18->base).y_max <= local_1c) {
            (local_18->base).y_min = -1;
            local_18 = (SSoftwareEdge *)&DAT_01d17ab8;
            iVar3 = 0;
            if (0 < _DAT_01d17ab4) {
              do {
                if ((local_1c == (local_18->base).y_min) && (local_18 != local_14))
                goto LAB_004f7b8a;
                iVar3 = iVar3 + 1;
                local_18 = local_18 + 1;
              } while (iVar3 < _DAT_01d17ab4);
            }
            local_18 = (SSoftwareEdge *)0x0;
LAB_004f7b8a:
            if (local_18 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if ((local_14->base).y_max <= local_1c) {
            (local_14->base).y_min = -1;
            local_14 = (SSoftwareEdge *)&DAT_01d17ab8;
            iVar3 = 0;
            if (0 < _DAT_01d17ab4) {
              do {
                if ((local_1c == (local_14->base).y_min) && (local_14 != local_18))
                goto LAB_004f7bce;
                iVar3 = iVar3 + 1;
                local_14 = local_14 + 1;
              } while (iVar3 < _DAT_01d17ab4);
            }
            local_14 = (SSoftwareEdge *)0x0;
LAB_004f7bce:
            if (local_14 == (SSoftwareEdge *)0x0) {
              return;
            }
          }
          if (_DAT_01c38b40 == 0) {
            if (DAT_006141c0 == 0x20) {
              engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_0055d0b3
                        (local_14,local_18,local_1c);
            }
            else {
              engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9
                        (local_14,local_18,local_1c);
            }
          }
          else if (DAT_006141c0 == 0x20) {
            engine_special_cpp_FUN_0055c45c();
          }
          else {
            engine_special_cpp_FUN_0055ca23();
          }
          (local_18->base).x_current = (local_18->base).x_current + (local_18->base).x_gradient;
          (local_18->base).u_current = (local_18->base).u_current + (local_18->base).u_gradient;
          (local_18->base).v_current = (local_18->base).v_current + (local_18->base).v_gradient;
          (local_18->base).depth_current =
               (local_18->base).depth_current + (local_18->base).depth_gradient;
          (local_18->base).red_current =
               (local_18->base).red_current + (local_18->base).red_gradient;
          iVar3 = (local_18->base).alpha_current;
          local_18->green_current = local_18->green_current + local_18->green_gradient;
          local_18->blue_current = local_18->blue_current + local_18->blue_gradient;
          iVar4 = (local_18->base).alpha_gradient;
          *(int *)&local_18->field_0x48 =
               *(int *)&local_18->field_0x48 + *(int *)&local_18->field_0x4c;
          (local_18->base).alpha_current = iVar3 + iVar4;
          piVar1 = &(local_14->base).x_current;
          *piVar1 = *piVar1 + (local_14->base).x_gradient;
          (local_14->base).u_current = (local_14->base).u_current + (local_14->base).u_gradient;
          (local_14->base).v_current = (local_14->base).v_current + (local_14->base).v_gradient;
          (local_14->base).depth_current =
               (local_14->base).depth_current + (local_14->base).depth_gradient;
          (local_14->base).red_current =
               (local_14->base).red_current + (local_14->base).red_gradient;
          iVar3 = (local_14->base).alpha_current;
          local_14->green_current = local_14->green_current + local_14->green_gradient;
          local_1c = local_1c + 1;
          local_14->blue_current = local_14->blue_current + local_14->blue_gradient;
          iVar4 = (local_14->base).alpha_gradient;
          *(int *)&local_14->field_0x48 =
               *(int *)&local_14->field_0x48 + *(int *)&local_14->field_0x4c;
          (local_14->base).alpha_current = iVar3 + iVar4;
        } while( true );
      }
    }
  }
  return;
}
