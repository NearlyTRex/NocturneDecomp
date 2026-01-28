// Name: engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
// Address: 005507f0
// Address Range: [[005507f0, 00550970]]
// Convention: __cdecl
// Signature: uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile *this_ptr,int file_index)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile *this_ptr,int file_index)

{
  uchar uVar1;
  FILE *file;
  uint uVar2;
  uint current_crc;
  char *pcVar3;
  SIZE_T size;
  
  if ((file_index < 0) || (this_ptr->file_count <= file_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x354;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::computeOneFileCRC - invalid index");
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x358);
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x359;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::computeOneFileCRC - can't open %s",this_ptr->filename);
  }
  crt_stdio_c_fseek_FUN_005ffacc(file,this_ptr->directory_entries[file_index].offset,0);
  current_crc = 0xffffffff;
  for (size = this_ptr->directory_entries[file_index].size; 0xffff < (int)size;
      size = size - 0x10000) {
    pcVar3 = g_FileIOBuffer;
    uVar2 = 0;
    crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,0x10000,1,file);
    do {
      uVar1 = *pcVar3;
      pcVar3 = (char *)((uchar *)pcVar3 + 1);
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar2 < 0x10000);
  }
  pcVar3 = g_FileIOBuffer;
  crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,size,1,file);
  uVar2 = 0;
  if (size != 0) {
    do {
      uVar1 = *pcVar3;
      pcVar3 = (char *)((uchar *)pcVar3 + 1);
      uVar2 = uVar2 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar2 < size);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pod.cpp",0x365);
  return current_crc;
}
