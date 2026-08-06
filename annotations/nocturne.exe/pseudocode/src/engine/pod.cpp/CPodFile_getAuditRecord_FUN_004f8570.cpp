// Name: engine_pod.cpp_CPodFile_getAuditRecord_FUN_004f8570
// Address: 004f8570
// Address Range: [[004f8570, 004f8659]]
// Convention: unknown
// Signature: void engine_pod_cpp_CPodFile_getAuditRecord_FUN_004f8570(int param_1,int param_2)

#include "nocturne.h"

void engine_pod_cpp_CPodFile_getAuditRecord_FUN_004f8570(int param_1,int param_2)

{
  _FILE *file;
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint auStack_144 [78];
  
  bVar3 = 0;
  if ((param_2 < 0) || (*(int *)(param_1 + 0x214) <= param_2)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 497;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  file = _fopen((char *)(param_1 + 4),"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 502;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CPodFile::getAuditRecord - can't open %s");
  }
  _fseek(file,param_2 * 0x138 + *(int *)(param_1 + 0x218),0);
  _fread(auStack_144,0x138,1,file);
  _fclose(file);
  puVar2 = auStack_144;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
