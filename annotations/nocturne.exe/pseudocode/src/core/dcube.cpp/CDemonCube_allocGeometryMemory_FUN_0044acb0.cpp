// Name: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0
// Address: 0044acb0
// Address Range: [[0044acb0, 0044adec]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0(CDemonCube *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0(CDemonCube *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CDemonCubeTriangle *pCVar4;
  void *pvVar5;
  SVoxelGrid *pSVar6;
  
  fVar1 = (float)this_ptr->vertex_count;
  pCVar2 = shape_memdbg_cpp_malloc_FUN_00564c18((int)fVar1 * 0xc + 4);
  pCVar3 = pCVar2;
  if (pCVar2 != (CVector3f *)0x0) {
    pCVar3 = (CVector3f *)&pCVar2->y;
    pCVar2->x = fVar1;
  }
  this_ptr->vertex_buffer = pCVar3;
  if (pCVar3 == (CVector3f *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dcube.cpp";
    g_INT_01cc4804 = 0x600;
    core_main_c_FUN_004c8440("CDemonCube::allocMemory - Out of vertex memory");
  }
  pCVar4 = shape_memdbg_cpp_malloc_FUN_00564c18(this_ptr->triangle_count << 5);
  this_ptr->triangle_buffer = pCVar4;
  if (pCVar4 == (CDemonCubeTriangle *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dcube.cpp";
    g_INT_01cc4804 = 0x602;
    core_main_c_FUN_004c8440("CDemonCube::allocMemory - Out of tri memory");
  }
  pvVar5 = malloc(this_ptr->triangle_count);
  this_ptr->ground_type_memory = pvVar5;
  if (pvVar5 == (void *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dcube.cpp";
    g_INT_01cc4804 = 0x604;
    core_main_c_FUN_004c8440("CDemonCube::allocMemory - Out of ground type memory");
  }
  pSVar6 = (SVoxelGrid *)malloc(0x40);
  this_ptr->voxel_buffer1 = pSVar6;
  if (pSVar6 == (SVoxelGrid *)0x0) {
    g_CHAR_PTR_01cc4800 = "..\\core\\dcube.cpp";
    g_INT_01cc4804 = 0x606;
    core_main_c_FUN_004c8440("CDemonCube::allocMemory - Out of voxel memory");
  }
  pSVar6 = (SVoxelGrid *)malloc(0x40);
  this_ptr->voxel_buffer2 = pSVar6;
  if (pSVar6 != (SVoxelGrid *)0x0) {
    return;
  }
  g_CHAR_PTR_01cc4800 = "..\\core\\dcube.cpp";
  g_INT_01cc4804 = 0x608;
  core_main_c_FUN_004c8440("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
