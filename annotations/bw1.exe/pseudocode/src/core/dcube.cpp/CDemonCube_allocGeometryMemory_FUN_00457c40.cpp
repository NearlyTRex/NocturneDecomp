// Name: core_dcube.cpp_CDemonCube_allocGeometryMemory_FUN_00457c40
// Address: 00457c40
// Address Range: [[00457c40, 00457d6f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00457c40(CDemonCube *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00457c40(CDemonCube *this_ptr)

{
  int iVar1;
  void *pvVar2;
  
  iVar1 = FUN_005c1268(*(int *)&this_ptr->field_0x20 * 0xc);
  *(int *)&this_ptr->field_0x24 = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x600;
    core_main_c_FUN_005030e0("CDemonCube::allocMemory - Out of vertex memory");
  }
  iVar1 = FUN_005c1268(*(int *)&this_ptr->field_0x28 << 5);
  *(int *)&this_ptr->field_0x2c = iVar1;
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x602;
    core_main_c_FUN_005030e0("CDemonCube::allocMemory - Out of tri memory");
  }
  pvVar2 = FUN_005c08d0(*(ulong *)&this_ptr->field_0x28);
  *(void **)&this_ptr->field_0x30 = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x604;
    core_main_c_FUN_005030e0("CDemonCube::allocMemory - Out of ground type memory");
  }
  pvVar2 = FUN_005c08d0(0x40);
  *(void **)this_ptr = pvVar2;
  if (pvVar2 == (void *)0x0) {
    _DAT_01d1d400 = "..\\core\\dcube.cpp";
    _DAT_01d1d404 = 0x606;
    core_main_c_FUN_005030e0("CDemonCube::allocMemory - Out of voxel memory");
  }
  pvVar2 = FUN_005c08d0(0x40);
  *(void **)&this_ptr->field_0x4 = pvVar2;
  if (pvVar2 != (void *)0x0) {
    return;
  }
  _DAT_01d1d400 = "..\\core\\dcube.cpp";
  _DAT_01d1d404 = 0x608;
  core_main_c_FUN_005030e0("CDemonCube::allocMemory - Out of voxel memory");
  return;
}
