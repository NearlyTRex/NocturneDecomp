// Name: engine_pod.cpp_CPodFile_computeFileCRC_FUN_0053c4c0
// Address: 0053c4c0
// Address Range: [[0053c4c0, 0053c5b5]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_0053c4c0(CPodFile *this_ptr,int file_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_0053c4c0(CPodFile *this_ptr,int file_index)

{
  uint uVar1;
  _FILE *file;
  int iVar2;
  int iVar3;
  uint current_crc;
  
  if ((file_index < 0) || (this_ptr->file_count <= file_index)) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x401;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CPodFile::computeOneFileCRC - invalid index");
  }
  file = _fopen(this_ptr->filename,(char *)0x5ed99a);
  if (file == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x406;
    core_main_c_displayErrorAndQuit_FUN_005030e0("CPodFile::computeOneFileCRC - can't open %s");
  }
  _fseek(file,this_ptr->directory_entries[file_index].offset,0);
  uVar1 = this_ptr->directory_entries[file_index].size;
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < (int)uVar1) {
    do {
      iVar2 = _fgetc(file);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0053b000(current_crc,(uchar)iVar2);
    } while (iVar3 < (int)uVar1);
  }
  _fclose(file);
  return current_crc;
}
