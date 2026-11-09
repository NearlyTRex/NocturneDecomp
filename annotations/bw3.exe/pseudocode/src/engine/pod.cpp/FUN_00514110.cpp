// Name: engine_pod.cpp_FUN_00514110
// Address: 00514110
// Address Range: [[00514110, 0051421d]]
// Convention: unknown
// Signature: void engine_pod_cpp_FUN_00514110(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_pod_cpp_FUN_00514110(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_114 [66];
  
  bVar3 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x424) <= param_2)) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x3d8;
    core_main_c_FUN_004e4330("CPodFile::getDependencyRecord - invalid index.  Pod not mounted?");
  }
  iVar1 = _fopen(param_1 + 4,0x5cc73e);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x3dd;
    core_main_c_FUN_004e4330("CPodFile::getDependencyRecord - can't open %s",param_1 + 4);
  }
  _fseek(iVar1,param_2 * 0x108 + *(int *)(param_1 + 0x428),0);
  _fread(auStack_114,0x108,1,iVar1);
  if ((*(byte *)(iVar1 + 0xc) & 0x20) != 0) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x3ee;
    core_main_c_FUN_004e4330("CPodFile::getDependencyRecord - error reading %s",param_1 + 4);
  }
  _fclose(iVar1);
  puVar2 = auStack_114;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
