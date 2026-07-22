// Name: FUN_004676c0
// Address: 004676c0
// Address Range: [[004676c0, 0046788b]]
// Convention: unknown
// Signature: void FUN_004676c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004676c0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  FUN_004673a0(param_1);
  _DAT_01bc994c = 0;
  _fread(&local_14,4,1,param_2);
  if (local_14 < 1) {
    _DAT_01cc4800 = "..\\core\\dtrace.cpp";
    _DAT_01cc4804 = 0x148;
    FUN_004c8440("CDemonRaytrace::loadBinary - invalid version");
  }
  if (0x00000004 < local_14) {
    _DAT_01cc4800 = "..\\core\\dtrace.cpp";
    _DAT_01cc4804 = 0x14b;
    FUN_004c8440("CDemonRaytrace::loadBinary - file is newer than .exe!");
  }
  _fread(param_1 + 0x40,4,1,param_2);
  _fread(param_1 + 0x44,4,1,param_2);
  _fread(param_1 + 0x48,4,1,param_2);
  _fread(param_1 + 0x10,0xc,1,param_2);
  _fread(param_1 + 0x1c,0xc,1,param_2);
  _fread((float *)(param_1 + 0x28),0xc,1,param_2);
  local_20 = *(float *)(param_1 + 0x28) / 8.0f;
  local_1c = *(float *)(param_1 + 0x2c) * 0.125f;
  local_18 = 0.125f * *(float *)(param_1 + 0x30);
  if ((float *)(param_1 + 0x34) != &local_20) {
    *(float *)(param_1 + 0x34) = local_20;
    *(float *)(param_1 + 0x38) = local_1c;
    *(float *)(param_1 + 0x3c) = local_18;
  }
  if (local_14 < 4) {
    _DAT_01cc4800 = "..\\core\\dtrace.cpp";
    _DAT_01cc4804 = 0x1e2;
    FUN_004c8440("Release build doesn't support old geometry");
  }
  else {
    core_dtrace_cpp_CDemonRaytrace_allocNewCubeList_FUN_00467330(param_1);
    iVar2 = 0;
    for (iVar1 = 0;
        iVar1 < *(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) * *(int *)(param_1 + 0x48);
        iVar1 = iVar1 + 1) {
      core_dcube_cpp_CDemonCube_load_FUN_0044aed0(*(int *)(param_1 + 0x50) + iVar2,param_2);
      iVar2 = iVar2 + 0x34;
    }
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) == 0) {
    return;
  }
  _DAT_01cc4800 = "..\\core\\dtrace.cpp";
  _DAT_01cc4804 = 0x1ff;
  FUN_004c8440("CDemonRaytrace::loadBinary - error reading file");
  return;
}
