// Name: core_dtrace.cpp_FUN_004676c0
// Address: 004676c0
// Address Range: [[004676c0, 0046788b]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_004676c0(CDemonRaytrace *param_1,_FILE *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_004676c0(CDemonRaytrace *param_1,_FILE *param_2)

{
  int iVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  core_dtrace_cpp_FUN_004673a0(param_1);
  _DAT_01bc994c = 0;
  _fread(&local_14,4,1,param_2);
  if (local_14 < 1) {
    PTR_01cc4800 = "..\\core\\dtrace.cpp";
    INT_01cc4804 = 0x148;
    core_main_c_FUN_004c8440("CDemonRaytrace::loadBinary - invalid version");
  }
  if (0x00000004 < local_14) {
    PTR_01cc4800 = "..\\core\\dtrace.cpp";
    INT_01cc4804 = 0x14b;
    core_main_c_FUN_004c8440("CDemonRaytrace::loadBinary - file is newer than .exe!");
  }
  _fread(&param_1->grid_coord,4,1,param_2);
  _fread(&(param_1->grid_coord).y,4,1,param_2);
  _fread(&(param_1->grid_coord).z,4,1,param_2);
  _fread(&param_1->bbox_min,0xc,1,param_2);
  _fread(&param_1->bbox_max,0xc,1,param_2);
  _fread(&param_1->cell_size,0xc,1,param_2);
  local_20 = (param_1->cell_size).x / 8.0f;
  local_1c = (param_1->cell_size).y * 0.125f;
  local_18 = 0.125f * (param_1->cell_size).z;
  if (&param_1->adjusted_size != (CVector3f *)&local_20) {
    (param_1->adjusted_size).x = local_20;
    (param_1->adjusted_size).y = local_1c;
    (param_1->adjusted_size).z = local_18;
  }
  if (local_14 < 4) {
    PTR_01cc4800 = "..\\core\\dtrace.cpp";
    INT_01cc4804 = 0x1e2;
    core_main_c_FUN_004c8440("Release build doesn't support old geometry");
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330(param_1);
    iVar2 = 0;
    for (iVar1 = 0;
        iVar1 < (param_1->grid_coord).x * (param_1->grid_coord).y * (param_1->grid_coord).z;
        iVar1 = iVar1 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_0044aed0
                ((CDemonCube *)((int)&param_1->cube_data->voxel_buffer1 + iVar2),param_2);
      iVar2 = iVar2 + 0x34;
    }
  }
  if ((param_2->_flag & 0x20) == 0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\dtrace.cpp";
  INT_01cc4804 = 0x1ff;
  core_main_c_FUN_004c8440("CDemonRaytrace::loadBinary - error reading file");
  return;
}
