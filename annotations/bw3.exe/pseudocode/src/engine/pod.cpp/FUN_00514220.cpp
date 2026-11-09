// Name: engine_pod.cpp_FUN_00514220
// Address: 00514220
// Address Range: [[00514220, 00514315]]
// Convention: unknown
// Signature: uint engine_pod_cpp_FUN_00514220(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_pod_cpp_FUN_00514220(int param_1,int param_2)

{
  int iVar1;
  uchar data_byte;
  int iVar2;
  int iVar3;
  uint current_crc;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x410) <= param_2)) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x401;
    core_main_c_FUN_004e4330("CPodFile::computeOneFileCRC - invalid index");
  }
  iVar2 = _fopen(param_1 + 4,0x5cc802);
  if (iVar2 == 0) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x406;
    core_main_c_FUN_004e4330("CPodFile::computeOneFileCRC - can't open %s",param_1 + 4);
  }
  _fseek(iVar2,*(uint *)(param_2 * 0x14 + 8 + *(int *)(param_1 + 0x414)),0);
  iVar1 = *(int *)(param_2 * 0x14 + 4 + *(int *)(param_1 + 0x414));
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < iVar1) {
    do {
      data_byte = _fgetc(iVar2);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00512d60(current_crc,data_byte);
    } while (iVar3 < iVar1);
  }
  _fclose(iVar2);
  return current_crc;
}
