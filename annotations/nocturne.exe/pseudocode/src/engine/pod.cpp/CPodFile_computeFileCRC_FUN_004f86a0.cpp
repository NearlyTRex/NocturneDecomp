// Name: engine_pod.cpp_CPodFile_computeFileCRC_FUN_004f86a0
// Address: 004f86a0
// Address Range: [[004f86a0, 004f8805]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_004f86a0(CPodFile *this_ptr,int file_index)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_004f86a0(CPodFile *this_ptr,int file_index)

{
  uchar uVar1;
  _FILE *file;
  uint uVar2;
  uint current_crc;
  uchar *puVar3;
  SIZE_T size;
  
  if ((file_index < 0) || (this_ptr->file_count <= file_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 545;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CPodFile::computeOneFileCRC - invalid index");
  }
  file = _fopen(this_ptr->filename,"rb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 550;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("CPodFile::computeOneFileCRC - can't open %s",this_ptr->filename);
  }
  _fseek(file,this_ptr->directory_entries[file_index].offset,0);
  current_crc = 0xffffffff;
  for (size = this_ptr->directory_entries[file_index].size; 0xffff < (int)size;
      size = size - 0x10000) {
    puVar3 = &DAT_01e428d0;
    uVar2 = 0;
    _fread(&DAT_01e428d0,0x10000,1,file);
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
    } while (uVar2 < 0x10000);
  }
  puVar3 = &DAT_01e428d0;
  _fread(&DAT_01e428d0,size,1,file);
  uVar2 = 0;
  if (size != 0) {
    do {
      uVar1 = *puVar3;
      puVar3 = puVar3 + 1;
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
    } while (uVar2 < size);
  }
  _fclose(file);
  return current_crc;
}
