// Name: engine_pod.cpp_FUN_0053c4c0
// Address: 0053c4c0
// Address Range: [[0053c4c0, 0053c5b5]]
// Convention: unknown
// Signature: uint engine_pod_cpp_FUN_0053c4c0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint engine_pod_cpp_FUN_0053c4c0(int param_1,int param_2)

{
  int iVar1;
  uchar data_byte;
  int iVar2;
  int iVar3;
  uint current_crc;
  
  if ((param_2 < 0) || (*(int *)(param_1 + 0x410) <= param_2)) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x401;
    core_main_c_FUN_005030e0("CPodFile::computeOneFileCRC - invalid index");
  }
  iVar2 = _fopen(param_1 + 4,0x5ed99a);
  if (iVar2 == 0) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x406;
    core_main_c_FUN_005030e0("CPodFile::computeOneFileCRC - can't open %s",param_1 + 4);
  }
  _fseek(iVar2,*(uint *)(param_2 * 0x14 + 8 + *(int *)(param_1 + 0x414)),0);
  iVar1 = *(int *)(param_2 * 0x14 + 4 + *(int *)(param_1 + 0x414));
  iVar3 = 0;
  current_crc = 0xffffffff;
  if (0 < iVar1) {
    do {
      data_byte = _fgetc(iVar2);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0053b000(current_crc,data_byte);
    } while (iVar3 < iVar1);
  }
  _fclose(iVar2);
  return current_crc;
}
