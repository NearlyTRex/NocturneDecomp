// Name: core_dcube.cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0
// Address: 00456ed0
// MANUAL RECONSTRUCTION
// Address Range: [[00456ed0, 0045709d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0(CDemonCube *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_buildGeometryFromPolygonData_FUN_00456ed0(CDemonCube *this_ptr)

{
  int iVar2;
  int iVar1;
  int iVar6;
  int iVar4;
  int local_20;
  byte local_18;
  CVector3f *pCVar1;
  
  this_ptr->triangle_count = g_PolygonCount;
  shape_superopt_cpp_optimizeCubeTriList_FUN_005d77a0();
  iVar6 = g_VertexCount;
  this_ptr->triangle_count = 0;
  iVar1 = g_PolygonCount;
  this_ptr->vertex_count = iVar6;
  for (iVar2 = 0; iVar2 < g_PolygonCount; iVar2 = iVar2 + 1) {
    this_ptr->triangle_count =
         this_ptr->triangle_count +
         (int)g_ModelPolygonData[iVar2].vertex_indices_count + -2;
  }
  if ((this_ptr->triangle_count != 0) && (this_ptr->vertex_count != 0)) {
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(this_ptr);
    for (iVar6 = 0; iVar6 < this_ptr->vertex_count; iVar6 = iVar6 + 1) {
      this_ptr->vertex_buffer[iVar6] = g_LoadedVertices[iVar6].vertex;
    }
    iVar6 = 0;
    for (local_20 = 0; local_20 < g_PolygonCount; local_20 = local_20 + 1) {
      iVar1 = atoi(g_ModelPolygonData[local_20].texture_name);
      iVar4 = 2;
      if (2 < (int)g_ModelPolygonData[local_20].vertex_indices_count) {
        do {
          pCVar1 = this_ptr->vertex_buffer;
          core_dcube_cpp_CDemonCubeTriangle_init_FUN_00455430
                    (&this_ptr->triangle_buffer[iVar6],
                     pCVar1 + g_ModelPolygonData[local_20].vertex_indices[0],
                     pCVar1 + g_ModelPolygonData[local_20].vertex_indices[iVar4 - 1],
                     pCVar1 + g_ModelPolygonData[local_20].vertex_indices[iVar4]);
          local_18 = (byte)iVar1;
          ((byte *)this_ptr->ground_type_memory)[iVar6] = local_18;
          iVar6 = iVar6 + 1;
          iVar4 = iVar4 + 1;
        } while (iVar4 < (int)g_ModelPolygonData[local_20].vertex_indices_count);
      }
    }
    core_dcube_cpp_CDemonCube_buildVoxelOccupancyGrid_FUN_00457cf0(this_ptr);
    return;
  }
  this_ptr->vertex_count = 0;
  this_ptr->triangle_count = 0;
  return;
}
