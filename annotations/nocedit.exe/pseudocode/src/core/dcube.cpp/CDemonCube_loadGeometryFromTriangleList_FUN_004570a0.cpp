// Name: core_dcube.cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0
// Address: 004570a0
// Address Range: [[004570a0, 00457427]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0(CDemonCube *this_ptr,CDemonTriangle *triangle_data,int triangle_count,CVector3f *min_bounds,CVector3f *max_bounds,uchar *ground_types,uint *voxel_data)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_loadGeometryFromTriangleList_FUN_004570a0(CDemonCube *this_ptr,CDemonTriangle *triangle_data,int triangle_count,CVector3f *min_bounds,CVector3f *max_bounds,uchar *ground_types,uint *voxel_data)

{
  char *pcVar1;
  float fVar2;
  CVector3f *pCVar3;
  int iVar4;
  int iVar5;
  CDemonTriangle *pCVar6;
  int iVar7;
  int iVar8;
  SVoxelGrid *pSVar9;
  byte bVar10;
  char local_120 [256];
  uchar *local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar10 = 0;
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
      _sprintf(local_120,"Too many! %d, %d",g_VertexCount,triangle_count);
      g_CurrentFilename = "..\\core\\dcube.cpp";
      g_CurrentLineNumber = 1814;
      core_main_c_displayErrorAndQuit_FUN_00506f10(local_120);
    }
    iVar5 = 0;
    if (0 < triangle_count) {
      iVar8 = 0;
      pCVar3 = &triangle_data->vertex2;
      iVar7 = 0;
      iVar4 = 0x14;
      do {
        pCVar6 = triangle_data + iVar5;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar8) = (pCVar6->vertex1).x;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar8) = (pCVar6->vertex1).y;
        *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar8) = (pCVar6->vertex1).z;
        local_1c = iVar5 * 3;
        *(float *)((int)&g_LoadedVertices[0].vertex.x + iVar4) = pCVar3->x;
        *(float *)((int)&g_LoadedVertices[0].vertex.y + iVar4) = pCVar3->y;
        local_18 = local_1c + 1;
        *(float *)((int)&g_LoadedVertices[0].vertex.z + iVar4) = pCVar3->z;
        *(float *)((int)&g_LoadedVertices[1].vertex.x + iVar4) = pCVar3[1].x;
        *(float *)((int)&g_LoadedVertices[1].vertex.y + iVar4) = pCVar3[1].y;
        local_14 = local_1c + 2;
        fVar2 = pCVar3[1].z;
        g_ModelPolygonData[0].texture_name[iVar7] = '\0';
        *(uint *)((int)g_ModelPolygonData[0].vertex_indices + iVar7 + -0x14) = 3;
        pcVar1 = g_ModelPolygonData[0].texture_name + iVar7 + -4;
        pcVar1[0] = '\x01';
        pcVar1[1] = '\0';
        pcVar1[2] = '\0';
        pcVar1[3] = '\0';
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar7) = local_1c;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar7 + 4) = local_18;
        *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar7 + 8) = local_14;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar7) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar7) = 0;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar7 + 4) = 0;
        pCVar3 = (CVector3f *)((int)(pCVar3 + 4) + 8);
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar7 + 4) = 0;
        iVar8 = iVar8 + 0x3c;
        *(uint *)((int)g_ModelPolygonData[0].uv_u + iVar7 + 8) = 0;
        iVar5 = iVar5 + 1;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar7 + 8) = 0;
        *(float *)((int)&g_LoadedVertices[1].vertex.z + iVar4) = fVar2;
        *(uint *)((int)g_ModelPolygonData[0].uv_v + iVar7 + 0x40) = 0;
        g_ModelPolygonData[0].lightmap_name[iVar7] = '\0';
        iVar7 = iVar7 + 0x184;
        iVar4 = iVar4 + 0x3c;
      } while (iVar5 < triangle_count);
    }
    shape_design_c_calculateVertexNormals_FUN_0045be40();
    shape_design_c_vertexReducer_FUN_00467850(0.01,-1.0,-1);
    this_ptr->vertex_count = g_VertexCount;
    iVar5 = g_PolygonCount;
    this_ptr->triangle_count = g_PolygonCount;
    if ((iVar5 == 0) || (this_ptr->vertex_count == 0)) {
      this_ptr->triangle_count = 0;
      this_ptr->vertex_count = 0;
      return;
    }
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(this_ptr);
    iVar5 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar4 = 0;
      iVar7 = 0;
      do {
        iVar5 = iVar5 + 1;
        *(uint *)((int)&this_ptr->vertex_buffer->x + iVar7) =
             *(uint *)((int)&g_LoadedVertices[0].vertex.x + iVar4);
        *(uint *)((int)&this_ptr->vertex_buffer->y + iVar7) =
             *(uint *)((int)&g_LoadedVertices[0].vertex.y + iVar4);
        *(uint *)((int)&this_ptr->vertex_buffer->z + iVar7) =
             *(uint *)((int)&g_LoadedVertices[0].vertex.z + iVar4);
        iVar4 = iVar4 + 0x14;
        iVar7 = iVar7 + 0xc;
      } while (iVar5 < this_ptr->vertex_count);
    }
    iVar5 = 0;
    if (0 < this_ptr->triangle_count) {
      iVar7 = 0;
      iVar4 = 0;
      local_20 = ground_types;
      do {
        pCVar3 = this_ptr->vertex_buffer;
        core_dcube_cpp_CDemonCubeTriangle_init_FUN_00455430
                  ((CDemonCubeTriangle *)
                   ((int)(this_ptr->triangle_buffer->triangle).vertices + iVar7),
                   pCVar3 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4),
                   pCVar3 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + 4),
                   pCVar3 + *(int *)((int)g_ModelPolygonData[0].vertex_indices + iVar4 + 8));
        iVar4 = iVar4 + 0x184;
        iVar7 = iVar7 + 0x20;
        *(uchar *)((int)this_ptr->ground_type_memory + iVar5) = *local_20;
        iVar5 = iVar5 + 1;
        local_20 = local_20 + 1;
      } while (iVar5 < this_ptr->triangle_count);
    }
    pSVar9 = this_ptr->voxel_buffer1;
    for (iVar5 = 0x10; iVar5 != 0; iVar5 = iVar5 + -1) {
      *(uint *)pSVar9->voxels[0] = *voxel_data;
      voxel_data = voxel_data + (uint)bVar10 * -2 + 1;
      pSVar9 = (SVoxelGrid *)((int)pSVar9 + ((uint)bVar10 * -2 + 1) * 4);
    }
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      pSVar9->voxels[0][0] = (uchar)*voxel_data;
      voxel_data = (uint *)((int)voxel_data + (uint)bVar10 * -2 + 1);
      pSVar9 = (SVoxelGrid *)((int)pSVar9 + (uint)bVar10 * -2 + 1);
    }
  }
  return;
}
