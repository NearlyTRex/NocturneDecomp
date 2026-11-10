// Name: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00446590
// Address: 00446590
// Address Range: [[00446590, 004466bf]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00446590(CDemonCube *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00446590(CDemonCube *this_ptr)

{
  CVector3f *pCVar1;
  CDemonCubeTriangle *pCVar2;
  void *pvVar3;
  SVoxelGrid *pSVar4;
  
  pCVar1 = (CVector3f *)FUN_005b8df8(this_ptr->vertex_count * 0xc);
  this_ptr->vertex_buffer = pCVar1;
  if (pCVar1 == (CVector3f *)0x0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x600;
    core_main_c_FUN_004e4500("CDemonCube::allocMemory - Out of vertex memory");
  }
  pCVar2 = (CDemonCubeTriangle *)FUN_005b8df8(this_ptr->triangle_count << 5);
  this_ptr->triangle_buffer = pCVar2;
  if (pCVar2 == (CDemonCubeTriangle *)0x0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x602;
    core_main_c_FUN_004e4500("CDemonCube::allocMemory - Out of tri memory");
  }
  pvVar3 = FUN_005b8580(this_ptr->triangle_count);
  this_ptr->ground_type_memory = pvVar3;
  if (pvVar3 == (void *)0x0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x604;
    core_main_c_FUN_004e4500("CDemonCube::allocMemory - Out of ground type memory");
  }
  pSVar4 = FUN_005b8580(0x40);
  this_ptr->voxel_buffer1 = pSVar4;
  if (pSVar4 == (SVoxelGrid *)0x0) {
    _DAT_01d046a0 = "..\\core\\dcube.cpp";
    _DAT_01d046a4 = 0x606;
    core_main_c_FUN_004e4500("CDemonCube::allocMemory - Out of voxel memory");
  }
  pSVar4 = FUN_005b8580(0x40);
  this_ptr->voxel_buffer2 = pSVar4;
  if (pSVar4 != (SVoxelGrid *)0x0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dcube.cpp";
  _DAT_01d046a4 = 0x608;
  core_main_c_FUN_004e4500("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
