// Name: core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
// Address: 004570a0
// Address Range: [[004570a0, 00457427]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0 (CDemonCube *this_ptr,void *triangle_data,int triangle_count,CVector3f *min_bounds, CVector3f *max_bounds,uchar *ground_types,uint *voxel_data)

#include "nocturne.h"

void __cdecl
core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
          (CDemonCube *this_ptr,void *triangle_data,int triangle_count,CVector3f *min_bounds,
          CVector3f *max_bounds,uchar *ground_types,uint *voxel_data)

{
  char *pcVar1;
  uint uVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  SVoxelGrid *pSVar10;
  byte bVar11;
  char local_120 [256];
  uchar *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar11 = 0;
  if (&this_ptr->min_bounds != min_bounds) {
    (this_ptr->min_bounds).x = min_bounds->x;
    (this_ptr->min_bounds).y = min_bounds->y;
    (this_ptr->min_bounds).z = min_bounds->z;
  }
  if (&this_ptr->max_bounds != max_bounds) {
    (this_ptr->max_bounds).x = max_bounds->x;
    (this_ptr->max_bounds).y = max_bounds->y;
    (this_ptr->max_bounds).z = max_bounds->z;
  }
  if (triangle_count != 0) {
    g_VertexCount = triangle_count * 3;
    g_PolygonCount = triangle_count;
    if ((20000 < g_VertexCount) || (20000 < triangle_count)) {
      sprintf
                (local_120,"Too many! %d, %d",g_VertexCount,triangle_count);
      g_CurrentFilename = "..\\core\\dcube.cpp";
      g_CurrentLineNumber = 0x716;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_120);
    }
    iVar6 = 0;
    if (0 < triangle_count) {
      iVar9 = 0;
      puVar4 = (uint *)((int)triangle_data + 0xc);
      iVar8 = 0;
      iVar5 = 0x14;
      do {
        puVar7 = (uint *)((int)triangle_data + iVar6 * 0x38);
        *(uint *)((int)&g_LoadedVertices[0].vertex.x + iVar9) = *puVar7;
        *(uint *)((int)&g_LoadedVertices[0].vertex.y + iVar9) = puVar7[1];
        *(uint *)((int)&g_LoadedVertices[0].vertex.z + iVar9) = puVar7[2];
        local_1c = iVar6 * 3;
        *(uint *)((int)&g_LoadedVertices[0].vertex.x + iVar5) = *puVar4;
        *(uint *)((int)&g_LoadedVertices[0].vertex.y + iVar5) = puVar4[1];
        local_18 = local_1c + 1;
        *(uint *)((int)&g_LoadedVertices[0].vertex.z + iVar5) = puVar4[2];
        *(uint *)((int)&g_LoadedVertices[1].vertex.x + iVar5) = puVar4[3];
        *(uint *)((int)&g_LoadedVertices[1].vertex.y + iVar5) = puVar4[4];
        local_14 = local_1c + 2;
        uVar2 = puVar4[5];
        g_ModelPolygonData[0].texture_name[iVar8] = '\0';
        *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar8 + -0x14) = 3;
        pcVar1 = g_ModelPolygonData[0].texture_name + iVar8 + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar8) = local_1c;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar8 + 4) = local_18;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar8 + 8) = local_14;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar8) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar8 + 4) = 0;
        puVar4 = puVar4 + 0xe;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar8 + 4) = 0;
        iVar9 = iVar9 + 0x3c;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar8 + 8) = 0;
        iVar6 = iVar6 + 1;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar8 + 8) = 0;
        *(uint *)((int)&g_LoadedVertices[1].vertex.z + iVar5) = uVar2;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar8 + 0x40) = 0;
        g_ModelPolygonData[0].lightmap_name[iVar8] = '\0';
        iVar8 = iVar8 + 0x184;
        iVar5 = iVar5 + 0x3c;
      } while (iVar6 < triangle_count);
    }
    shape_design_c_calculateVertexNormals_FUN_0045be40();
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
    this_ptr->vertex_count = g_VertexCount;
    iVar6 = g_PolygonCount;
    this_ptr->triangle_count = g_PolygonCount;
    if ((iVar6 == 0) || (this_ptr->vertex_count == 0)) {
      this_ptr->triangle_count = 0;
      this_ptr->vertex_count = 0;
      return;
    }
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(this_ptr);
    iVar6 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar5 = 0;
      iVar8 = 0;
      do {
        iVar6 = iVar6 + 1;
        *(uint *)((int)&this_ptr->vertex_buffer->x + iVar8) =
             *(uint *)((int)&g_LoadedVertices[0].vertex.x + iVar5);
        *(uint *)((int)&this_ptr->vertex_buffer->y + iVar8) =
             *(uint *)((int)&g_LoadedVertices[0].vertex.y + iVar5);
        *(uint *)((int)&this_ptr->vertex_buffer->z + iVar8) =
             *(uint *)((int)&g_LoadedVertices[0].vertex.z + iVar5);
        iVar5 = iVar5 + 0x14;
        iVar8 = iVar8 + 0xc;
      } while (iVar6 < this_ptr->vertex_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->triangle_count) {
      iVar8 = 0;
      iVar5 = 0;
      local_20 = ground_types;
      do {
        pCVar3 = this_ptr->vertex_buffer;
        core_dcube_cpp_CDemonCubeTriangle_ctor_FUN_00455430
                  ((CDemonCubeTriangle *)((int)this_ptr->triangle_buffer->vertices + iVar8),
                   pCVar3 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5),
                   pCVar3 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + 4),
                   pCVar3 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar5 + 8));
        iVar5 = iVar5 + 0x184;
        iVar8 = iVar8 + 0x20;
        *(uchar *)((int)this_ptr->ground_type_memory + iVar6) = *local_20;
        iVar6 = iVar6 + 1;
        local_20 = local_20 + 1;
      } while (iVar6 < this_ptr->triangle_count);
    }
    pSVar10 = this_ptr->voxel_buffer1;
    for (iVar6 = 0x10; iVar6 != 0; iVar6 = iVar6 + -1) {
      *(uint *)pSVar10->voxels[0] = *voxel_data;
      voxel_data = voxel_data + (uint)bVar11 * -2 + 1;
      pSVar10 = (SVoxelGrid *)((int)pSVar10 + ((uint)bVar11 * -2 + 1) * 4);
    }
    for (iVar6 = 0; iVar6 != 0; iVar6 = iVar6 + -1) {
      pSVar10->voxels[0][0] = (uchar)*voxel_data;
      voxel_data = (uint *)((int)voxel_data + (uint)bVar11 * -2 + 1);
      pSVar10 = (SVoxelGrid *)((int)pSVar10 + (uint)bVar11 * -2 + 1);
    }
  }
  return;
}
