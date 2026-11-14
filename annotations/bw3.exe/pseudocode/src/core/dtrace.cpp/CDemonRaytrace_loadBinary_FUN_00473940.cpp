// Name: core_dtrace.cpp_CDemonRaytrace_loadBinary_FUN_00473940
// Address: 00473940
// Address Range: [[00473940, 00473b17]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_00473940(CDemonRaytrace *this_ptr,_FILE *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dtrace_cpp_CDemonRaytrace_loadBinary_FUN_00473940(CDemonRaytrace *this_ptr,_FILE *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1014 [1014];
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar3 = 0;
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00473630(this_ptr);
  _DAT_01c599bc = 0;
  _fread(&local_14,4,1,param_2);
  if (local_14 < 1) {
    _DAT_01d71de0 = "..\\core\\dtrace.cpp";
    _DAT_01d71de4 = 0x148;
    core_main_c_FUN_004e4330("CDemonRaytrace::loadBinary - invalid version");
  }
  if (0x00000004 < local_14) {
    _DAT_01d71de0 = "..\\core\\dtrace.cpp";
    _DAT_01d71de4 = 0x14b;
    core_main_c_FUN_004e4330("CDemonRaytrace::loadBinary - file is newer than .exe!");
  }
  _fread(&this_ptr->grid_coord,4,1,param_2);
  _fread(&(this_ptr->grid_coord).y,4,1,param_2);
  _fread(&(this_ptr->grid_coord).z,4,1,param_2);
  _fread(&this_ptr->bbox_min,0xc,1,param_2);
  _fread(&this_ptr->bbox_max,0xc,1,param_2);
  _fread(&this_ptr->cell_size,0xc,1,param_2);
  local_2c = (this_ptr->cell_size).x * _DAT_005bc9fd;
  local_28 = (this_ptr->cell_size).y * _DAT_005bc9fd;
  local_24 = (this_ptr->cell_size).z * _DAT_005bc9fd;
  local_20 = local_2c;
  (&stack0xffffffe4)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&this_ptr->adjusted_size != (CVector3f *)&stack0xffffffe0) {
    (this_ptr->adjusted_size).x = local_20;
    (this_ptr->adjusted_size).y = local_1c;
    (this_ptr->adjusted_size).z = local_18;
  }
  if (local_14 < 4) {
    _DAT_01d71de0 = "..\\core\\dtrace.cpp";
    _DAT_01d71de4 = 0x1e2;
    core_main_c_FUN_004e4330("Release build doesn't support old geometry");
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0(this_ptr);
    iVar2 = 0;
    for (iVar1 = 0;
        iVar1 < (this_ptr->grid_coord).x * (this_ptr->grid_coord).y * (this_ptr->grid_coord).z;
        iVar1 = iVar1 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_00453fa0
                ((CDemonCube *)((int)&this_ptr->cube_data->voxel_buffer1 + iVar2),param_2);
      iVar2 = iVar2 + 0x34;
    }
  }
  if ((param_2->_flag & 0x20) == 0) {
    return;
  }
  _DAT_01d71de0 = "..\\core\\dtrace.cpp";
  _DAT_01d71de4 = 0x1ff;
  core_main_c_FUN_004e4330("CDemonRaytrace::loadBinary - error reading file");
  return;
}
