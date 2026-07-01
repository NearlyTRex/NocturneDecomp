// Name: engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
// Address: 00550590
// Address Range: [[00550590, 005506ba]]
// Convention: __stack2_esi
// Signature: CPodAuditRecord * __stack2_esi engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590(CPodFile *this_ptr,int record_index,CPodAuditRecord *out_record)

#include "nocturne.h"

CPodAuditRecord * __stack2_esi engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590(CPodFile *this_ptr,int record_index,CPodAuditRecord *out_record)

{
  _FILE *file;
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint local_144 [78];
  
  bVar4 = 0;
  if ((record_index < 0) || (this_ptr->audit_count <= record_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 776;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::getAuditRecord - invalid index.  Pod not mounted?");
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",780);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 781;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::getAuditRecord - can't open %s",this_ptr->filename);
  }
  _fseek(file,record_index * 0x138 + this_ptr->total_file_size,0);
  _fread(local_144,0x138,1,file);
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 795;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::getAuditRecord - error reading %s",this_ptr->filename);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pod.cpp",800);
  puVar2 = local_144;
  puVar3 = (uint *)out_record;
  for (iVar1 = 0x4e; iVar1 != 0; iVar1 = iVar1 + -1) {
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    *puVar3 = *puVar2;
    puVar2 = puVar2;
    puVar3 = puVar3;
  }
  return out_record;
}
