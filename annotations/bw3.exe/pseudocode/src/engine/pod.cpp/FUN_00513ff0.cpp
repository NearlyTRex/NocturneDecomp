// Name: engine_pod.cpp_FUN_00513ff0
// Address: 00513ff0
// Address Range: [[00513ff0, 00514104]]
// Convention: unknown
// Signature: void engine_pod_cpp_FUN_00513ff0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_pod_cpp_FUN_00513ff0(int param_1,int param_2)

{
  _FILE *file;
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_144 [78];
  
  bVar3 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x41c) <= param_2)) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x3ab;
    core_main_c_FUN_004e4330("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  file = _fopen((char *)(param_1 + 4),(char *)0x5cc66f);
  if (file == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x3b0;
    core_main_c_FUN_004e4330("CPodFile::getAuditRecord - can't open %s",(char *)(param_1 + 4));
  }
  _fseek(file,param_2 * 0x138 + *(int *)(param_1 + 0x420),0);
  _fread(auStack_144,0x138,1,file);
  if ((file->_flag & 0x20) != 0) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x3c5;
    core_main_c_FUN_004e4330("CPodFile::getAuditRecord - error reading %s",param_1 + 4);
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
