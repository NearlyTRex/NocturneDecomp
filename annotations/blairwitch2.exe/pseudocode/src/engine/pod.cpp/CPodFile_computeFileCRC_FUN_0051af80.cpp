// Name: engine_pod.cpp_CPodFile_computeFileCRC_FUN_0051af80
// Address: 0051af80
// Address Range: [[0051af80, 0051b075]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_0051af80(CPodFile *this_ptr,int file_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_0051af80(CPodFile *this_ptr,int file_index)

{
  uint uVar1;
  _FILE *file;
  int iVar2;
  int iVar3;
  uint current_crc;
  
  if ((file_index < 0) || (this_ptr->file_count <= file_index)) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x3a5;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CPodFile::computeOneFileCRC - invalid index");
  }
  file = _fopen(this_ptr->filename,(char *)0x5e2753);
  if (file == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x3aa;
    core_main_c_displayErrorAndQuit_FUN_004e4500("CPodFile::computeOneFileCRC - can't open %s");
  }
  _fseek(file,this_ptr->directory_entries[file_index].offset,0);
  uVar1 = this_ptr->directory_entries[file_index].size;
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < (int)uVar1) {
    do {
      iVar2 = _fgetc(file);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00519cb0(current_crc,(uchar)iVar2);
    } while (iVar3 < (int)uVar1);
  }
  _fclose(file);
  return current_crc;
}
