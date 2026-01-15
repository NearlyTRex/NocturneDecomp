// Name: engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490
// Address: 0054f490
// Address Range: [[0054f490, 0054f590]]
// Convention: __cdecl
// Signature: uint engine_pod.cpp_crc32ComputeFileRange_FUN_0054f490(char * filename, int start_offset)

#include "nocturne.h"

uint __cdecl engine_pod_cpp_crc32ComputeFileRange_FUN_0054f490(char *filename,int start_offset)

{
  uchar uVar1;
  int iVar2;
  FILE *file;
  SIZE_T size;
  char *pcVar3;
  uint current_crc;
  uint uVar4;
  
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880(&s_EmptyString_0064015e,filename);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0xf2);
  size = iVar2 - start_offset;
  current_crc = 0xffffffff;
  crt_stdio_c_fseek_FUN_005ffacc(file,start_offset,0);
  for (; 0xffff < (int)size; size = size - 0x10000) {
    pcVar3 = g_FileIOBuffer;
    crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,0x10000,1,file);
    uVar4 = 0;
    do {
      uVar1 = *pcVar3;
      pcVar3 = (char *)((uchar *)pcVar3 + 1);
      uVar4 = uVar4 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar4 < 0x10000);
  }
  pcVar3 = g_FileIOBuffer;
  crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,size,1,file);
  uVar4 = 0;
  if (size != 0) {
    do {
      uVar1 = *pcVar3;
      pcVar3 = (char *)((uchar *)pcVar3 + 1);
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
      uVar4 = uVar4 + 1;
    } while (uVar4 < size);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pod.cpp",0xfb);
  return current_crc;
}
