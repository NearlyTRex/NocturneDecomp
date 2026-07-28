// Name: engine_pod.cpp_CPodFile_computeFileCRC_FUN_004f86a0
// Address: 004f86a0
// Address Range: [[004f86a0, 004f8805]]
// Convention: unknown
// Signature: uint engine_pod_cpp_CPodFile_computeFileCRC_FUN_004f86a0(int param_1,int param_2)

#include "nocturne.h"

uint engine_pod_cpp_CPodFile_computeFileCRC_FUN_004f86a0(int param_1,int param_2)

{
  uchar uVar1;
  _FILE *file;
  uint uVar2;
  uint current_crc;
  uchar *puVar3;
  SIZE_T size;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x208) <= param_2)) {
    PTR_01cc4800 = "..\\engine\\pod.cpp";
    INT_01cc4804 = 0x221;
    core_main_c_FUN_004c8440("CPodFile::computeOneFileCRC - invalid index");
  }
  file = _fopen((char *)(param_1 + 4),"rb");
  if (file == (_FILE *)0x0) {
    PTR_01cc4800 = "..\\engine\\pod.cpp";
    INT_01cc4804 = 0x226;
    core_main_c_FUN_004c8440("CPodFile::computeOneFileCRC - can't open %s",(char *)(param_1 + 4));
  }
  _fseek(file,*(long *)(param_2 * 0x14 + 8 + *(int *)(param_1 + 0x20c)),0);
  current_crc = 0xffffffff;
  for (size = *(SIZE_T *)(param_2 * 0x14 + *(int *)(param_1 + 0x20c) + 4); 0xffff < (int)size;
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
