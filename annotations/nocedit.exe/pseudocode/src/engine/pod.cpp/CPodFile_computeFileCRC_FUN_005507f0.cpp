// Name: engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
// Address: 005507f0
// Address Range: [[005507f0, 00550970]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile *this_ptr,int file_index)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile *this_ptr,int file_index)

{
  uchar data_byte;
  _FILE *file;
  uint uVar2;
  char *pcVar1;
  uint current_crc;
  char *pcVar3;
  uint uVar3;
  SIZE_T size;
  uchar uVar1;
  
  if ((file_index < 0) || (this_ptr->file_count <= file_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 852;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::computeOneFileCRC - invalid index");
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",856);
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 857;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::computeOneFileCRC - can't open %s",this_ptr->filename);
  }
  _fseek(file,this_ptr->directory_entries[file_index].offset,0);
  current_crc = 0xffffffff;
  for (size = this_ptr->directory_entries[file_index].size; 0xffff < (int)size;
      size = size - 0x10000) {
    pcVar3 = g_FileIOBuffer;
    uVar2 = 0;
    _fread(g_FileIOBuffer,0x10000,1,file);
    do {
      uVar1 = *pcVar3;
      pcVar3 = pcVar3 + 1;
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar2 < 0x10000);
  }
  pcVar1 = g_FileIOBuffer;
  _fread(g_FileIOBuffer,size,1,file);
  uVar3 = 0;
  if (size != 0) {
    do {
      data_byte = *pcVar1;
      pcVar1 = pcVar1 + 1;
      uVar3 = uVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,data_byte);
    } while (uVar3 < size);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pod.cpp",869);
  return current_crc;
}
