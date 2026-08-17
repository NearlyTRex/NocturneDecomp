// Name: engine_pod.cpp_CPod_computeAndStoreCRC_FUN_004f8eb0
// Address: 004f8eb0
// Address Range: [[004f8eb0, 004f90f0]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_computeAndStoreCRC_FUN_004f8eb0(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_computeAndStoreCRC_FUN_004f8eb0(CPod *this_ptr,char *pod_filename)

{
  uchar uVar1;
  int iVar2;
  int iVar3;
  _FILE *p_Var4;
  uint uVar5;
  uint current_crc;
  SIZE_T size;
  uchar *puVar6;
  CPodFile local_240;
  uint local_24;
  _FILE *local_20;
  int local_1c;
  SIZE_T local_18;
  _FILE *local_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (g_CEditorTools_PTR_005b6d50,"Computing CRC over entire pod: %s...",pod_filename);
  engine_pod_cpp_CPodFile_ctor_FUN_004f7a80(&local_240);
  iVar2 = engine_pod_cpp_CPodFile_FUN_004f7ae0(&local_240,pod_filename);
  if (iVar2 == 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 890;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Can't mount %s to check version",pod_filename);
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_004f80e0(&local_240);
  if (local_240.pod_format_version == 1) {
    local_1c = 0x54;
  }
  else if (local_240.pod_format_version == 2) {
    local_1c = 8;
  }
  else {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 901;
    core_main_c_displayErrorAndQuit_FUN_004c8440
              ("Invalid pod version for %s: %d",pod_filename,local_240.pod_format_version);
  }
  iVar3 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_0058d9a8,pod_filename);
  iVar2 = local_1c;
  p_Var4 = _fopen(pod_filename,"rb");
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
  p_Var4 = _fopen(pod_filename,"rb+");
  _fseek(p_Var4,local_1c + -4,0);
  _fwrite(&local_24,4,1,p_Var4);
  _fclose(p_Var4);
  engine_pod_cpp_CPodFile_dtor_FUN_004f7ac0(&local_240,0);
  return;
}
