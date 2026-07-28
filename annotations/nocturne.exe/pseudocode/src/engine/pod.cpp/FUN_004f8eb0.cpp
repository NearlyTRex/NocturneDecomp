// Name: engine_pod.cpp_FUN_004f8eb0
// Address: 004f8eb0
// Address Range: [[004f8eb0, 004f90f0]]
// Convention: unknown
// Signature: void engine_pod_cpp_FUN_004f8eb0(undefined4 param_1,char *param_2)

#include "nocturne.h"

void engine_pod_cpp_FUN_004f8eb0(uint param_1,char *param_2)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  _FILE *p_Var4;
  uint uVar5;
  uint current_crc;
  SIZE_T size;
  uchar *puVar6;
  int local_240 [135];
  uint local_24;
  _FILE *local_20;
  int local_1c;
  SIZE_T local_18;
  _FILE *local_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (0x01BCD074,"Computing CRC over entire pod: %s...",param_2);
  engine_pod_cpp_FUN_004f7a80(local_240);
  iVar2 = engine_pod_cpp_FUN_004f7ae0(local_240,param_2);
  if (iVar2 == 0) {
    PTR_01cc4800 = "..\\engine\\pod.cpp";
    INT_01cc4804 = 0x37a;
    core_main_c_FUN_004c8440("Can't mount %s to check version",param_2);
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0((CPodFile *)local_240);
  if (local_240[0] == 1) {
    local_1c = 0x54;
  }
  else if (local_240[0] == 2) {
    local_1c = 8;
  }
  else {
    PTR_01cc4800 = "..\\engine\\pod.cpp";
    INT_01cc4804 = 0x385;
    core_main_c_FUN_004c8440("Invalid pod version for %s: %d",param_2,local_240[0]);
  }
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_0058d9a8,param_2);
  iVar2 = local_1c;
  p_Var4 = _fopen(param_2,"rb");
  size = iVar3 - iVar2;
  local_20 = p_Var4;
  _fseek(p_Var4,iVar2,0);
  current_crc = 0xffffffff;
  local_14 = p_Var4;
  for (; 0xffff < (int)size; size = size - 0x10000) {
    puVar6 = &DAT_01e428d0;
    uVar5 = 0;
    _fread(&DAT_01e428d0,0x10000,1,local_14);
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
    } while (uVar5 < 0x10000);
  }
  uVar5 = 0;
  _fread(&DAT_01e428d0,size,1,local_14);
  puVar6 = &DAT_01e428d0;
  local_18 = size;
  if (size != 0) {
    do {
      uVar1 = *puVar6;
      puVar6 = puVar6 + 1;
      uVar5 = uVar5 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(current_crc,uVar1);
    } while (uVar5 < size);
  }
  _fclose(local_20);
  local_24 = current_crc;
  p_Var4 = _fopen(param_2,"rb+");
  _fseek(p_Var4,local_1c + -4,0);
  _fwrite(&local_24,4,1,p_Var4);
  _fclose(p_Var4);
  engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0((CPodFile *)local_240,0);
  return;
}
