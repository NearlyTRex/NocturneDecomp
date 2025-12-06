// Name: engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0
// Address: 005507f0
// Address Range: [[005507f0, 00550970]]
// Convention: __cdecl
// Signature: uint engine_pod.cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile * this_ptr, int file_index)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(CPodFile *this_ptr,int file_index)

{
  uchar uVar1;
  FILE *pFVar2;
  uint uVar3;
  FILE *unaff_EBP;
  uint current_crc;
  FILE *unaff_ESI;
  char *pcVar4;
  FILE *unaff_EDI;
  SIZE_T size;
  
  if ((file_index < 0) || (this_ptr->file_count <= file_index)) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x354;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CPodFile::computeOneFileCRC - invalid index");
  }
  pFVar2 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (this_ptr->filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0x358);
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x359;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("CPodFile::computeOneFileCRC - can't open %s",this_ptr->filename,0);
  }
  crt_stdio_c_fseek_FUN_005ffacc(unaff_EBP,this_ptr->directory_entries[file_index].offset,0);
  current_crc = 0xffffffff;
  for (size = this_ptr->directory_entries[file_index].size; 0xffff < (int)size;
      size = size - 0x10000) {
    pcVar4 = g_FileIOBuffer;
    uVar3 = 0;
    crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,0x10000,1,unaff_EDI);
    do {
      uVar1 = *pcVar4;
      pcVar4 = (char *)((uchar *)pcVar4 + 1);
      uVar3 = uVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar3 < 0x10000);
  }
  pcVar4 = g_FileIOBuffer;
  crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,size,1,unaff_EDI);
  uVar3 = 0;
  if (size != 0) {
    do {
      uVar1 = *pcVar4;
      pcVar4 = (char *)((uchar *)pcVar4 + 1);
      uVar3 = uVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar3 < size);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_ESI,"..\\engine\\pod.cpp",0x365);
  return current_crc;
}
