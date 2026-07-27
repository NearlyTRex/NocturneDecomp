// Name: core_setutil.cpp_C3DSCamera_load_FUN_005144e0
// Address: 005144e0
// Address Range: [[005144e0, 005147f0]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_005144e0(int param_1,undefined4 param_2)

#include "nocturne.h"

void __cdecl core_setutil_cpp_C3DSCamera_load_FUN_005144e0(int param_1,uint param_2)

{
  int iVar1;
  byte local_110 [256];
  
  core_setutil_cpp_FUN_00514470(param_1);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,param_2);
  }
  _fgets(local_110,0xff,param_2);
  sscanf(local_110,"%s\n",param_1);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,param_2);
  }
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x100,param_1 + 0x104,param_1 + 0x108);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,param_2);
  }
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x10c,param_1 + 0x114,param_1 + 0x110);
  if (10 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,param_2);
  }
  _fscanf(param_2,"%f\n",param_1 + 0x140);
  _fgets(local_110,0xff,param_2);
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x118,param_1 + 0x11c,param_1 + 0x120);
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x124,param_1 + 0x128,param_1 + 300);
  _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x130,param_1 + 0x134,param_1 + 0x138);
  iVar1 = 0x01E57284;
  if (*(int *)(0x01E57284 + 0x15a8c4) < 0x12) {
    *(uint *)(param_1 + 0x14c) = 1;
    *(uint *)(param_1 + 0x150) = *(uint *)(iVar1 + 0x15a848);
    *(uint *)(param_1 + 0x154) = *(uint *)(iVar1 + 0x15a84c);
    *(uint *)(param_1 + 0x158) = *(uint *)(iVar1 + 0x15a850);
    if ((uint *)(param_1 + 0x15c) != (uint *)(iVar1 + 0x15a854)) {
      *(uint *)(param_1 + 0x15c) = *(uint *)(iVar1 + 0x15a854);
      *(uint *)(param_1 + 0x160) = *(uint *)(iVar1 + 0x15a858);
      *(uint *)(param_1 + 0x164) = *(uint *)(iVar1 + 0x15a85c);
    }
    *(uint *)(param_1 + 0x168) = *(uint *)(iVar1 + 0x15a860);
    *(uint *)(param_1 + 0x16c) = *(uint *)(iVar1 + 0x15a864);
    *(uint *)(param_1 + 0x170) = *(uint *)(iVar1 + 0x15a868);
  }
  else {
    _fscanf(param_2,"%d\n",param_1 + 0x14c);
    if (*(int *)(param_1 + 0x14c) == 0) {
      core_dcamera_cpp_loadCameraFog_FUN_00447d10
                ((uint *)(param_1 + 0x150),param_2,*(uint *)(0x01E57284 + 0x15a8c4));
    }
  }
  if (0x16 < *(int *)(0x01E57284 + 0x15a8c4)) {
    _fgets(local_110,0xff,param_2);
    _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x178,param_1 + 0x17c,param_1 + 0x180);
    _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x184,param_1 + 0x188,param_1 + 0x18c);
  }
  if (*(int *)(0x01E57284 + 0x15a8c4) < 0x17) {
    return;
  }
  _fgets(local_110,0xff,param_2);
  _fscanf(param_2,"%d\n",param_1 + 0x174);
  return;
}
