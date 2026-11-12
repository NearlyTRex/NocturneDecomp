// Name: engine_pod.cpp_FUN_0051ad50
// Address: 0051ad50
// Address Range: [[0051ad50, 0051ae64]]
// Convention: unknown
// Signature: void engine_pod_cpp_FUN_0051ad50(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_pod_cpp_FUN_0051ad50(int param_1,int param_2)

{
  _FILE *file;
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_144 [78];
  
  bVar3 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x41c) <= param_2)) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x34f;
    core_main_c_FUN_004e4500("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  file = _fopen((char *)(param_1 + 4),(char *)0x5e25c0);
  if (file == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x354;
    core_main_c_FUN_004e4500("CPodFile::getAuditRecord - can't open %s",(char *)(param_1 + 4));
  }
  _fseek(file,param_2 * 0x138 + *(int *)(param_1 + 0x420),0);
  _fread(auStack_144,0x138,1,file);
  if ((file->_flag & 0x20) != 0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x369;
    core_main_c_FUN_004e4500("CPodFile::getAuditRecord - error reading %s",param_1 + 4);
  }
  _fclose(file);
  puVar2 = auStack_144;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
