// Name: engine_mini3d.cpp_fillPolygon_FUN_004f7a50
// Address: 004f7a50
// Address Range: [[004f7a50, 004f7d9d]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillPolygon_FUN_004f7a50(float *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_fillPolygon_FUN_004f7a50(float *vertices,int vertex_count)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *v0;
  SSoftwareEdge *local_18;
  SSoftwareEdge *local_14;
  
  if ((vertices[0x25] - vertices[0x15]) * (vertices[0x16] - vertices[6]) <
      (vertices[0x15] - vertices[5]) * (vertices[0x26] - vertices[0x16])) {
    iVar4 = 0;
    _DAT_01d17fbc = 0;
    _DAT_01d17ab4 = 0;
    _DAT_01d17fb8 = 0x4b0;
    v0 = vertices;
    if (0 < vertex_count) {
      do {
        iVar3 = iVar4 + 1;
        if (vertex_count <= iVar3) {
          iVar3 = 0;
        }
        iVar4 = iVar4 + 1;
        engine_mini3d_cpp_setupScanEdge_FUN_004f6df0(v0,vertices + iVar3 * 0x10);
        v0 = v0 + 0x10;
      } while (iVar4 < vertex_count);
    }
    iVar4 = _DAT_01d17fb8;
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
        do {
          if ((local_18->base).y_max <= iVar4) {
            (local_18->base).y_min = -1;
            local_18 = (SSoftwareEdge *)&DAT_01d17ab8;
            iVar3 = 0;
            if (0 < _DAT_01d17ab4) {
              do {
                if ((iVar4 == (local_18->base).y_min) && (local_18 != local_14)) goto LAB_004f7b8a;
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
          if ((local_14->base).y_max <= iVar4) {
            (local_14->base).y_min = -1;
            local_14 = (SSoftwareEdge *)&DAT_01d17ab8;
            iVar3 = 0;
            if (0 < _DAT_01d17ab4) {
              do {
                if ((iVar4 == (local_14->base).y_min) && (local_14 != local_18)) goto LAB_004f7bce;
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
                        (local_14,local_18,iVar4);
            }
            else {
              engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_0055d2e9
                        (local_14,local_18,iVar4);
            }
          }
          else if (DAT_006141c0 == 0x20) {
            engine_special_cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_0055c45c
                      (local_14,local_18,iVar4);
          }
          else {
            engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_0055ca23
                      (local_14,local_18,iVar4);
          }
          *(int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + *(int *)(iVar4 + 0xc);
          *(int *)(iVar4 + 0x18) = *(int *)(iVar4 + 0x18) + *(int *)(iVar4 + 0x1c);
          *(int *)(iVar4 + 0x20) = *(int *)(iVar4 + 0x20) + *(int *)(iVar4 + 0x24);
          *(int *)(iVar4 + 0x28) = *(int *)(iVar4 + 0x28) + *(int *)(iVar4 + 0x2c);
          *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + *(int *)(iVar4 + 0x14);
          *(int *)(iVar4 + 0x38) = *(int *)(iVar4 + 0x38) + *(int *)(iVar4 + 0x3c);
          *(int *)(iVar4 + 0x40) = *(int *)(iVar4 + 0x40) + *(int *)(iVar4 + 0x44);
          *(int *)(iVar4 + 0x48) = *(int *)(iVar4 + 0x48) + *(int *)(iVar4 + 0x4c);
          *(int *)(iVar4 + 0x30) = *(int *)(iVar4 + 0x30) + *(int *)(iVar4 + 0x34);
          piVar1 = &(local_18->base).x_current;
          *piVar1 = *piVar1 + (local_18->base).x_gradient;
          (local_18->base).u_current = (local_18->base).u_current + (local_18->base).u_gradient;
          (local_18->base).v_current = (local_18->base).v_current + (local_18->base).v_gradient;
          (local_18->base).depth_current =
               (local_18->base).depth_current + (local_18->base).depth_gradient;
          (local_18->base).red_current =
               (local_18->base).red_current + (local_18->base).red_gradient;
          iVar3 = (local_18->base).alpha_current;
          local_18->green_current = local_18->green_current + local_18->green_gradient;
          local_18->blue_current = local_18->blue_current + local_18->blue_gradient;
          iVar2 = (local_18->base).alpha_gradient;
          *(int *)&local_18->field_0x48 =
               *(int *)&local_18->field_0x48 + *(int *)&local_18->field_0x4c;
          (local_18->base).alpha_current = iVar3 + iVar2;
        } while( true );
      }
    }
  }
  return;
}
