// Name: engine_pod.cpp_CPodFile_getDependencyRecord_FUN_00514110
// Address: 00514110
// Address Range: [[00514110, 0051421d]]
// Convention: __stack2_esi
// Signature: CPodDependencyRecord * __stack2_esi engine_pod_cpp_CPodFile_getDependencyRecord_FUN_00514110(CPodFile *this_ptr,int dependency_index,CPodDependencyRecord *output_record)

#include "nocturne.h"

CPodDependencyRecord * __stack2_esi engine_pod_cpp_CPodFile_getDependencyRecord_FUN_00514110(CPodFile *this_ptr,int dependency_index,CPodDependencyRecord *output_record)

{
  _FILE *file;
  int iVar1;
  uint *puVar2;
  CPodDependencyRecord *pCVar3;
  byte bVar4;
  uint auStack_114 [66];
  
  bVar4 = 0;
  if ((dependency_index < 0) || (this_ptr->dependency_count <= dependency_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 984;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CPodFile::getDependencyRecord - invalid index.  Pod not mounted?");
  }
  file = _fopen(this_ptr->filename,"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 989;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CPodFile::getDependencyRecord - can't open %s");
  }
  _fseek(file,dependency_index * 0x108 + this_ptr->dependency_records_offset,0);
  _fread(auStack_114,0x108,1,file);
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 1006;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CPodFile::getDependencyRecord - error reading %s");
  }
  _fclose(file);
  puVar2 = auStack_114;
  pCVar3 = output_record;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pCVar3->filename = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CPodDependencyRecord *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
  }
  return output_record;
}
