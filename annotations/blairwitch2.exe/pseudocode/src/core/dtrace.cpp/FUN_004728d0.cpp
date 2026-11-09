// Name: core_dtrace.cpp_FUN_004728d0
// Address: 004728d0
// Address Range: [[004728d0, 00472aa7]]
// Convention: unknown
// Signature: void core_dtrace_cpp_FUN_004728d0(CDemonRaytrace *param_1,_FILE *param_2)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_FUN_004728d0(CDemonRaytrace *param_1,_FILE *param_2)

{
  int iVar1;
  int iVar2;
  byte bVar3;
  int aiStackY_1014 [1014];
  float local_28 [3];
  int local_1c;
  uint local_18;
  int local_14;
  
  bVar3 = 0;
  core_dtrace_cpp_FUN_004725c0(param_1);
  _DAT_01c21e64 = 0;
  _fread(&local_14,4,1,param_2);
  if (local_14 < 1) {
    _DAT_01d046a0 = "..\\core\\dtrace.cpp";
    _DAT_01d046a4 = 0x148;
    core_main_c_FUN_004e4500("CDemonRaytrace::loadBinary - invalid version");
  }
  if (0x00000004 < local_14) {
    _DAT_01d046a0 = "..\\core\\dtrace.cpp";
    _DAT_01d046a4 = 0x14b;
    core_main_c_FUN_004e4500("CDemonRaytrace::loadBinary - file is newer than .exe!");
  }
  _fread(&param_1->field_0x40,4,1,param_2);
  _fread(&param_1->field_0x44,4,1,param_2);
  _fread(&param_1->field_0x48,4,1,param_2);
  _fread(&param_1->field_0x10,0xc,1,param_2);
  _fread(&param_1->field_0x1c,0xc,1,param_2);
  _fread(&param_1->field_0x28,0xc,1,param_2);
  local_28[0] = *(float *)&param_1->field_0x2c * _DAT_005d1b47;
  local_28[1] = *(float *)&param_1->field_0x30 * _DAT_005d1b47;
  local_28[2] = *(float *)&param_1->field_0x28 * _DAT_005d1b47;
  local_28[(uint)bVar3 * 0xfffffffe + 3] = local_28[(uint)bVar3 * -2];
  local_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       local_28[(uint)bVar3 * 0xfffffffe + (uint)bVar3 * 0xfffffffe + 1];
  if ((float *)&param_1->field_0x34 != local_28 + 2) {
    *(float *)&param_1->field_0x34 = local_28[2];
    *(int *)&param_1->field_0x38 = local_1c;
    *(uint *)&param_1->field_0x3c = local_18;
  }
  if (local_14 < 4) {
    _DAT_01d046a0 = "..\\core\\dtrace.cpp";
    _DAT_01d046a4 = 0x1e2;
    core_main_c_FUN_004e4500("Release build doesn't support old geometry");
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00472550(param_1);
    iVar2 = 0;
    for (iVar1 = 0;
        iVar1 < *(int *)&param_1->field_0x40 * *(int *)&param_1->field_0x44 *
                *(int *)&param_1->field_0x48; iVar1 = iVar1 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_004467a0
                ((CDemonCube *)(*(int *)&param_1->field_0x50 + iVar2),param_2);
      iVar2 = iVar2 + 0x34;
    }
  }
  if (((byte)param_2[0xc] & 0x20) == 0) {
    return;
  }
  _DAT_01d046a0 = "..\\core\\dtrace.cpp";
  _DAT_01d046a4 = 0x1ff;
  core_main_c_FUN_004e4500("CDemonRaytrace::loadBinary - error reading file");
  return;
}
