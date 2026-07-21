// Name: core_dcube.cpp_CDemonCube_load_FUN_0044aed0
// Address: 0044aed0
// Address Range: [[0044aed0, 0044afcd]]
// Convention: unknown
// Signature: undefined4 core_dcube_cpp_CDemonCube_load_FUN_0044aed0(undefined4 *param_1,undefined4 param_2)

#include "nocturne.h"

uint core_dcube_cpp_CDemonCube_load_FUN_0044aed0(uint *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  _fread(param_1 + 2,1,0xc,param_2);
  _fread(param_1 + 5,1,0xc,param_2);
  _fread(param_1 + 8,1,4,param_2);
  _fread(param_1 + 10,1,4,param_2);
  if (param_1[10] != 0) {
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_0044acb0(param_1);
  }
  uVar1 = _fread(param_1[9],param_1[8],0xc,param_2);
  iVar2 = 0;
  if (0 < (int)param_1[10]) {
    iVar4 = 0;
    do {
      iVar2 = iVar2 + 1;
      uVar1 = core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00448ec0
                        (param_1[0xb] + iVar4,param_2,param_1[9]);
      iVar4 = iVar4 + 0x20;
    } while (iVar2 < (int)param_1[10]);
  }
  if (param_1[10] != 0) {
    uVar1 = _fread(param_1[0xc],1,param_1[10],param_2);
  }
  if (param_1[10] != 0) {
    _fread(*param_1,1,0x40,param_2);
    puVar3 = (uint *)*param_1;
    puVar5 = (uint *)param_1[1];
    for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
      *puVar5 = *puVar3;
      puVar3 = puVar3 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)puVar3;
      puVar3 = (uint *)((int)puVar3 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    return 0x40;
  }
  return uVar1;
}
