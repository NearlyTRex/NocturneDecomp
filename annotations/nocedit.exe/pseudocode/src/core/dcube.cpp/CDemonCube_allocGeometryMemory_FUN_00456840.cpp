// Name: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00456840
// Address: 00456840
// Address Range: [[00456840, 004569ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(CDemonCube *this_ptr)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00456840(CDemonCube *this_ptr)

{
  float fVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  CDemonCubeTriangle *pCVar4;
  void *pvVar5;
  SVoxelGrid *pSVar6;
  
  fVar1 = (float)this_ptr->vertex_count;
  pCVar2 = (CVector3f *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     ((int)fVar1 * 0xc + 4,"..\\core\\dcube.cpp",0x5ff);
  pCVar3 = pCVar2;
  if (pCVar2 != (CVector3f *)0x0) {
    pCVar3 = (CVector3f *)&pCVar2->y;
    pCVar2->x = fVar1;
  }
  this_ptr->vertex_buffer = pCVar3;
  if (pCVar3 == (CVector3f *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x600;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of vertex memory");
  }
  pCVar4 = (CDemonCubeTriangle *)shape_memdbg_cpp_debugAllocTracked_FUN_0050f1f0
                     (this_ptr->triangle_count << 5,"..\\core\\dcube.cpp",0x601);
  this_ptr->triangle_buffer = pCVar4;
  if (pCVar4 == (CDemonCubeTriangle *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x602;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of tri memory");
  }
  pvVar5 = shape_memdbg_cpp_debugMalloc_FUN_0050f250
                     (this_ptr->triangle_count,"..\\core\\dcube.cpp",0x603);
  this_ptr->ground_type_memory = pvVar5;
  if (pvVar5 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x604;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of ground type memory");
  }
  pSVar6 = (SVoxelGrid *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x40,"..\\core\\dcube.cpp",0x605);
  this_ptr->voxel_buffer1 = pSVar6;
  if (pSVar6 == (SVoxelGrid *)0x0) {
    g_CurrentFilename = "..\\core\\dcube.cpp";
    g_CurrentLineNumber = 0x606;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of voxel memory");
  }
  pSVar6 = (SVoxelGrid *)shape_memdbg_cpp_debugMalloc_FUN_0050f250(0x40,"..\\core\\dcube.cpp",0x607);
  this_ptr->voxel_buffer2 = pSVar6;
  if (pSVar6 != (SVoxelGrid *)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dcube.cpp";
  g_CurrentLineNumber = 0x608;
  core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
