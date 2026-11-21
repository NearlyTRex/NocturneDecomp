// Name: engine_pod.cpp_CPodFile_getAuditRecord_FUN_0053c290
// Address: 0053c290
// Address Range: [[0053c290, 0053c3a4]]
// Convention: __stack2_esi
// Signature: CPodAuditRecord * __stack2_esi engine_pod_cpp_CPodFile_getAuditRecord_FUN_0053c290(CPodFile *this_ptr,int record_index,CPodAuditRecord *out_record)

#include "nocturne.h"

CPodAuditRecord * __stack2_esi engine_pod_cpp_CPodFile_getAuditRecord_FUN_0053c290(CPodFile *this_ptr,int record_index,CPodAuditRecord *out_record)

{
  _FILE *file;
  int iVar1;
  uint *puVar2;
  CPodAuditRecord *pCVar3;
  byte bVar4;
  uint auStack_144 [78];
  
  bVar4 = 0;
  if ((record_index < 0) || (this_ptr->audit_count <= record_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 939;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  file = _fopen(this_ptr->filename,"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 944;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CPodFile::getAuditRecord - can't open %s");
  }
  _fseek(file,record_index * 0x138 + this_ptr->audit_records_offset,0);
  _fread(auStack_144,0x138,1,file);
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 965;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CPodFile::getAuditRecord - error reading %s");
  }
  _fclose(file);
  puVar2 = auStack_144;
  pCVar3 = out_record;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pCVar3->user_name = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CPodAuditRecord *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
  }
  return out_record;
}
