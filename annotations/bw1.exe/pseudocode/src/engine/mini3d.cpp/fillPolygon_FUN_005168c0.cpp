// Name: engine_mini3d.cpp_fillPolygon_FUN_005168c0
// Address: 005168c0
// Address Range: [[005168c0, 00516c58]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillPolygon_FUN_005168c0(float *vertices,int vertex_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_fillPolygon_FUN_005168c0(float *vertices,int vertex_count)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *v0;
  int local_28;
  SSoftwareEdge *local_24;
  SSoftwareEdge *local_20;
  
  fVar2 = (vertices[0x16] - vertices[6]) * (vertices[0x25] - vertices[0x15]);
  fVar3 = (vertices[0x15] - vertices[5]) * (vertices[0x26] - vertices[0x16]);
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
  v0 = vertices;
  if (0 < vertex_count) {
    do {
      iVar4 = iVar5 + 1;
      if (vertex_count <= iVar4) {
        iVar4 = 0;
      }
      iVar5 = iVar5 + 1;
      engine_mini3d_cpp_setupScanEdge_FUN_00515bd0(v0,vertices + iVar4 * 0x10);
      v0 = v0 + 0x10;
    } while (iVar5 < vertex_count);
  }
  local_20 = (SSoftwareEdge *)&DAT_01d2c0c8;
  iVar5 = 0;
  if (0 < _DAT_01d2c0c4) {
    do {
      if ((_DAT_01d2c5c8 == (local_20->base).y_min) && (local_20 != (SSoftwareEdge *)0x0))
      goto LAB_005169b4;
      iVar5 = iVar5 + 1;
      local_20 = local_20 + 1;
    } while (iVar5 < _DAT_01d2c0c4);
  }
  local_20 = (SSoftwareEdge *)0x0;
LAB_005169b4:
  if (local_20 != (SSoftwareEdge *)0x0) {
    iVar5 = 0;
    local_24 = (SSoftwareEdge *)&DAT_01d2c0c8;
    if (0 < _DAT_01d2c0c4) {
      do {
        if ((_DAT_01d2c5c8 == (local_24->base).y_min) && (local_24 != local_20)) goto LAB_005169e7;
        iVar5 = iVar5 + 1;
        local_24 = local_24 + 1;
      } while (iVar5 < _DAT_01d2c0c4);
    }
    local_24 = (SSoftwareEdge *)0x0;
LAB_005169e7:
    if (local_24 != (SSoftwareEdge *)0x0) {
      local_28 = _DAT_01d2c5c8;
      do {
        if ((local_20->base).y_max <= local_28) {
          (local_20->base).y_min = -1;
          local_20 = (SSoftwareEdge *)&DAT_01d2c0c8;
          iVar5 = 0;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_28 == (local_20->base).y_min) && (local_20 != local_24)) goto LAB_00516a34;
              iVar5 = iVar5 + 1;
              local_20 = local_20 + 1;
            } while (iVar5 < _DAT_01d2c0c4);
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
          iVar5 = 0;
          if (0 < _DAT_01d2c0c4) {
            do {
              if ((local_28 == (local_24->base).y_min) && (local_24 != local_20)) goto LAB_00516a78;
              iVar5 = iVar5 + 1;
              local_24 = local_24 + 1;
            } while (iVar5 < _DAT_01d2c0c4);
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
        iVar5 = (local_20->base).alpha_current;
        local_20->green_current = local_20->green_current + local_20->green_gradient;
        local_20->blue_current = local_20->blue_current + local_20->blue_gradient;
        iVar4 = (local_20->base).alpha_gradient;
        *(int *)&local_20->field_0x48 =
             *(int *)&local_20->field_0x48 + *(int *)&local_20->field_0x4c;
        (local_20->base).alpha_current = iVar5 + iVar4;
        piVar1 = &(local_24->base).x_current;
        *piVar1 = *piVar1 + (local_24->base).x_gradient;
        (local_24->base).u_current = (local_24->base).u_current + (local_24->base).u_gradient;
        (local_24->base).v_current = (local_24->base).v_current + (local_24->base).v_gradient;
        (local_24->base).depth_current =
             (local_24->base).depth_current + (local_24->base).depth_gradient;
        (local_24->base).red_current = (local_24->base).red_current + (local_24->base).red_gradient;
        iVar5 = (local_24->base).alpha_current;
        local_24->green_current = local_24->green_current + local_24->green_gradient;
        local_28 = local_28 + 1;
        local_24->blue_current = local_24->blue_current + local_24->blue_gradient;
        iVar4 = (local_24->base).alpha_gradient;
        *(int *)&local_24->field_0x48 =
             *(int *)&local_24->field_0x48 + *(int *)&local_24->field_0x4c;
        (local_24->base).alpha_current = iVar5 + iVar4;
      } while( true );
    }
  }
  return;
}
