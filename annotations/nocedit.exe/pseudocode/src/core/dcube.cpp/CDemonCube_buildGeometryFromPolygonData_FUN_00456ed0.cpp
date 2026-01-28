// Name: core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0
// Address: 00456ed0
// Address Range: [[00456ed0, 0045709d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0(CDemonCube *this_ptr)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0(CDemonCube *this_ptr)

{
  CVector3f *pCVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *local_24;
  int local_20;
  int local_1c;
  byte local_18;
  int local_10;
  
  this_ptr->triangle_count = g_PolygonCount;
  shape_superopt_cpp_TriListSomething_FUN_005d77a0();
  iVar2 = g_VertexCount;
  this_ptr->triangle_count = 0;
  iVar3 = g_PolygonCount;
  this_ptr->vertex_count = iVar2;
  iVar2 = 0;
  if (0 < iVar3) {
    iVar3 = 0;
    do {
      iVar4 = g_PolygonCount;
      iVar5 = iVar3 + -0x14;
      iVar3 = iVar3 + 0x184;
      iVar2 = iVar2 + 1;
      this_ptr->triangle_count =
           this_ptr->triangle_count +
           *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5) + -2;
    } while (iVar2 < iVar4);
  }
  if ((this_ptr->triangle_count != 0) && (this_ptr->vertex_count != 0)) {
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(this_ptr);
    iVar2 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar5 = 0;
      iVar3 = 0;
      do {
        iVar2 = iVar2 + 1;
        *(uint *)((int)&this_ptr->vertex_buffer->x + iVar3) =
             *(uint *)((int)&g_LoadedVertices[0].vertex.x + iVar5);
        *(uint *)((int)&this_ptr->vertex_buffer->y + iVar3) =
             *(uint *)((int)&g_LoadedVertices[0].vertex.y + iVar5);
        *(uint *)((int)&this_ptr->vertex_buffer->z + iVar3) =
             *(uint *)((int)&g_LoadedVertices[0].vertex.z + iVar5);
        iVar5 = iVar5 + 0x14;
        iVar3 = iVar3 + 0xc;
      } while (iVar2 < this_ptr->vertex_count);
    }
    iVar2 = 0;
    local_20 = 0;
    if (0 < g_PolygonCount) {
      local_1c = 0;
      local_24 = g_ModelPolygonData[0].texture_name;
      do {
        iVar3 = crt_stdlib_c_atoi_FUN_005ffef0(local_24);
        local_10 = iVar2 << 5;
        iVar4 = 2;
        iVar5 = local_1c + 8;
        if (2 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_1c + -0x14)) {
          do {
            pCVar1 = this_ptr->vertex_buffer;
            core_dcube_cpp_CDemonCubeTriangle_ctor_FUN_00455430
                      ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + local_10),
                       pCVar1 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_1c),
                       pCVar1 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + -4),
                       pCVar1 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5));
            local_18 = (byte)iVar3;
            *(byte *)(iVar2 + (int)this_ptr->ground_type_memory) = local_18;
            local_10 = local_10 + 0x20;
            iVar2 = iVar2 + 1;
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 4;
          } while (iVar4 < *(int *)((int)g_ModelPolygonData[0].vertex_indices + local_1c + -0x14));
        }
        local_1c = local_1c + 0x184;
        local_24 = local_24 + 0x184;
        local_20 = local_20 + 1;
      } while (local_20 < g_PolygonCount);
    }
    core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0((SVoxelGridParams *)this_ptr);
    return;
  }
  this_ptr->vertex_count = 0;
  this_ptr->triangle_count = 0;
  return;
}
