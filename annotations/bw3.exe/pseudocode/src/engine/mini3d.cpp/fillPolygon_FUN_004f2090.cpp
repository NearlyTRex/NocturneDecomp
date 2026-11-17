// Name: engine_mini3d.cpp_fillPolygon_FUN_004f2090
// Address: 004f2090
// Address Range: [[004f2090, 004f2428]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_fillPolygon_FUN_004f2090(float *vertices,int vertex_count)

#include "nocturne.h"

void __cdecl engine_mini3d_cpp_fillPolygon_FUN_004f2090(float *vertices,int vertex_count)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *v0;
  SSoftwareEdge *local_24;
  SSoftwareEdge *local_20;
  
  fVar2 = (vertices[0x16] - vertices[6]) * (vertices[0x25] - vertices[0x15]);
  fVar3 = (vertices[0x15] - vertices[5]) * (vertices[0x26] - vertices[0x16]);
  if (g_INT_01d76cf8 == 0) {
    if (fVar3 <= fVar2) {
      return;
    }
  }
  else if (fVar2 <= fVar3) {
    return;
  }
  iVar5 = 0;
  g_INT_01d80d4c = 0;
  g_INT_01d80844 = 0;
  g_INT_01d80d48 = 0x4b0;
  v0 = vertices;
  if (0 < vertex_count) {
    do {
      iVar4 = iVar5 + 1;
      if (vertex_count <= iVar4) {
        iVar4 = 0;
      }
      iVar5 = iVar5 + 1;
      engine_mini3d_cpp_setupScanEdge_FUN_004f13a0(v0,vertices + iVar4 * 0x10);
      v0 = v0 + 0x10;
    } while (iVar5 < vertex_count);
  }
  iVar5 = g_INT_01d80d48;
  local_20 = &g_SSoftwareEdge_01d80848;
  iVar4 = 0;
  if (0 < g_INT_01d80844) {
    do {
      if ((g_INT_01d80d48 == (local_20->base).y_min) && (local_20 != (SSoftwareEdge *)0x0))
      goto LAB_004f2184;
      iVar4 = iVar4 + 1;
      local_20 = local_20 + 1;
    } while (iVar4 < g_INT_01d80844);
  }
  local_20 = (SSoftwareEdge *)0x0;
LAB_004f2184:
  if (local_20 != (SSoftwareEdge *)0x0) {
    iVar4 = 0;
    local_24 = &g_SSoftwareEdge_01d80848;
    if (0 < g_INT_01d80844) {
      do {
        if ((g_INT_01d80d48 == (local_24->base).y_min) && (local_24 != local_20)) goto LAB_004f21b7;
        iVar4 = iVar4 + 1;
        local_24 = local_24 + 1;
      } while (iVar4 < g_INT_01d80844);
    }
    local_24 = (SSoftwareEdge *)0x0;
LAB_004f21b7:
    if (local_24 != (SSoftwareEdge *)0x0) {
      do {
        if ((local_20->base).y_max <= iVar5) {
          (local_20->base).y_min = -1;
          local_20 = &g_SSoftwareEdge_01d80848;
          iVar4 = 0;
          if (0 < g_INT_01d80844) {
            do {
              if ((iVar5 == (local_20->base).y_min) && (local_20 != local_24)) goto LAB_004f2204;
              iVar4 = iVar4 + 1;
              local_20 = local_20 + 1;
            } while (iVar4 < g_INT_01d80844);
          }
          local_20 = (SSoftwareEdge *)0x0;
LAB_004f2204:
          if (local_20 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if ((local_24->base).y_max <= iVar5) {
          (local_24->base).y_min = -1;
          local_24 = &g_SSoftwareEdge_01d80848;
          iVar4 = 0;
          if (0 < g_INT_01d80844) {
            do {
              if ((iVar5 == (local_24->base).y_min) && (local_24 != local_20)) goto LAB_004f2248;
              iVar4 = iVar4 + 1;
              local_24 = local_24 + 1;
            } while (iVar4 < g_INT_01d80844);
          }
          local_24 = (SSoftwareEdge *)0x0;
LAB_004f2248:
          if (local_24 == (SSoftwareEdge *)0x0) {
            return;
          }
        }
        if (g_MMXSupported == 0) {
          if (g_INT_005fba20 == 0x20) {
            engine_special_cpp_renderPerspectiveCorrectScanline32_FUN_00562c33
                      (local_24,local_20,iVar5);
          }
          else {
            engine_special_cpp_renderPerspectiveCorrectScanline16_FUN_00562e69
                      (local_24,local_20,iVar5);
          }
        }
        else if (g_INT_005fba20 == 0x20) {
          engine_special_cpp_renderMMXPerspectiveScanlineTrueColor32_FUN_00561fdc
                    (local_24,local_20,iVar5);
        }
        else {
          engine_special_cpp_renderMMXPerspectiveScanlineTrueColor16_FUN_005625a3
                    (local_24,local_20,iVar5);
        }
        (local_24->base).x_current = (local_24->base).x_current + (local_24->base).x_gradient;
        (local_24->base).u_current = (local_24->base).u_current + (local_24->base).u_gradient;
        (local_24->base).v_current = (local_24->base).v_current + (local_24->base).v_gradient;
        (local_24->base).depth_current =
             (local_24->base).depth_current + (local_24->base).depth_gradient;
        (local_24->base).red_current = (local_24->base).red_current + (local_24->base).red_gradient;
        iVar4 = (local_24->base).alpha_current;
        local_24->green_current = local_24->green_current + local_24->green_gradient;
        local_24->blue_current = local_24->blue_current + local_24->blue_gradient;
        iVar1 = (local_24->base).alpha_gradient;
        *(int *)&local_24->field_0x48 =
             *(int *)&local_24->field_0x48 + *(int *)&local_24->field_0x4c;
        (local_24->base).alpha_current = iVar4 + iVar1;
        *(int *)(iVar5 + 8) = *(int *)(iVar5 + 8) + *(int *)(iVar5 + 0xc);
        *(int *)(iVar5 + 0x18) = *(int *)(iVar5 + 0x18) + *(int *)(iVar5 + 0x1c);
        *(int *)(iVar5 + 0x20) = *(int *)(iVar5 + 0x20) + *(int *)(iVar5 + 0x24);
        *(int *)(iVar5 + 0x28) = *(int *)(iVar5 + 0x28) + *(int *)(iVar5 + 0x2c);
        *(int *)(iVar5 + 0x10) = *(int *)(iVar5 + 0x10) + *(int *)(iVar5 + 0x14);
        *(int *)(iVar5 + 0x38) = *(int *)(iVar5 + 0x38) + *(int *)(iVar5 + 0x3c);
        *(int *)(iVar5 + 0x40) = *(int *)(iVar5 + 0x40) + *(int *)(iVar5 + 0x44);
        *(int *)(iVar5 + 0x48) = *(int *)(iVar5 + 0x48) + *(int *)(iVar5 + 0x4c);
        *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + *(int *)(iVar5 + 0x34);
      } while( true );
    }
  }
  return;
}
