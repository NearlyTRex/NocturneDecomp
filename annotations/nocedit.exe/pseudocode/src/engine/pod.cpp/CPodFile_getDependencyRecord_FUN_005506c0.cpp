// Name: engine_pod.cpp_CPodFile_getDependencyRecord_FUN_005506c0
// Address: 005506c0
// Address Range: [[005506c0, 005507e3]]
// Convention: __stack2_esi
// Signature: CPodDependencyRecord * __stack2_esi engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0 (CPodFile *this_ptr,int dependency_index,CPodDependencyRecord *output_record)

#include "nocturne.h"

CPodDependencyRecord * __stack2_esi
engine_pod_cpp_CPodFile_getDependencyRecord_FUN_005506c0
          (CPodFile *this_ptr,int dependency_index,CPodDependencyRecord *output_record)

{
  _FILE *file;
  int iVar1;
  uint *puVar2;
  CPodDependencyRecord *pCVar3;
  byte bVar4;
  uint local_114 [66];
  
  bVar4 = 0;
  if ((dependency_index < 0) || (this_ptr->dependency_count <= dependency_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x32e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::getDependencyRecord - invalid index.  Pod not mounted?");
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x332);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x333;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::getDependencyRecord - can't open %s",this_ptr->filename);
  }
  _fseek(file,dependency_index * 0x108 + this_ptr->dependency_records_offset,0);
  _fread(local_114,0x108,1,file);
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x341;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::getDependencyRecord - error reading %s",this_ptr->filename);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pod.cpp",0x346);
  puVar2 = local_114;
  pCVar3 = output_record;
  for (iVar1 = 0x42; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pCVar3->filename = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    pCVar3 = (CPodDependencyRecord *)((int)pCVar3 + (uint)bVar4 * -8 + 4);
  }
  return output_record;
}
