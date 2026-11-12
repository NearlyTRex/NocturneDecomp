// Name: core_dtrace.cpp_FUN_00473940
// Address: 00473940
// Address Range: [[00473940, 00473b17]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_00473940(CDemonRaytrace *param_1,_FILE *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_00473940(CDemonRaytrace *param_1,_FILE *param_2)

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
  core_dtrace_cpp_CDemonRaytrace_freeNewCubeList_FUN_00473630(param_1);
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
  _fread(&param_1->grid_coord,4,1,param_2);
  _fread(&(param_1->grid_coord).y,4,1,param_2);
  _fread(&(param_1->grid_coord).z,4,1,param_2);
  _fread(&param_1->bbox_min,0xc,1,param_2);
  _fread(&param_1->bbox_max,0xc,1,param_2);
  _fread(&param_1->cell_size,0xc,1,param_2);
  local_2c = (param_1->cell_size).x * _DAT_005bc9fd;
  local_28 = (param_1->cell_size).y * _DAT_005bc9fd;
  local_24 = (param_1->cell_size).z * _DAT_005bc9fd;
  local_20 = local_2c;
  (&stack0xffffffe4)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffd8 + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffe8 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&param_1->adjusted_size != (CVector3f *)&stack0xffffffe0) {
    (param_1->adjusted_size).x = local_20;
    (param_1->adjusted_size).y = local_1c;
    (param_1->adjusted_size).z = local_18;
  }
  if (local_14 < 4) {
    _DAT_01d71de0 = "..\\core\\dtrace.cpp";
    _DAT_01d71de4 = 0x1e2;
    core_main_c_FUN_004e4330("Release build doesn't support old geometry");
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_004735c0(param_1);
    iVar2 = 0;
    for (iVar1 = 0;
        iVar1 < (param_1->grid_coord).x * (param_1->grid_coord).y * (param_1->grid_coord).z;
        iVar1 = iVar1 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_00453fa0
                ((CDemonCube *)((int)&param_1->cube_data->voxel_buffer1 + iVar2),param_2);
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
