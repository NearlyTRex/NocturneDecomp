// Name: engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000
// Address: 00551000
// Address Range: [[00551000, 00551279]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000(CPod *this_ptr,char *pod_filename)

{
  uchar data_byte;
  int iVar2;
  int iVar1;
  _FILE *p_Var3;
  _FILE *file;
  SIZE_T size;
  char *pcVar4;
  char *pcVar2;
  uint current_crc;
  uint uVar5;
  uint uVar3;
  CPodFile local_44c;
  uint local_20;
  _FILE *local_1c;
  int local_18;
  SIZE_T local_14;
  uchar uVar1;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Computing CRC over entire pod: %s...",pod_filename);
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_44c);
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_44c,pod_filename);
  if (iVar2 == 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 1181;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't mount %s to check version",pod_filename);
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_00550090(&local_44c);
  local_18 = -1;
  if (local_44c.pod_format_version == 1) {
    local_18 = 0x54;
  }
  else if (local_44c.pod_format_version == 200) {
    local_18 = 8;
  }
  else {
    if (local_44c.pod_format_version == 100) goto LAB_00551212;
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 1198;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Invalid pod version for %s: %d",pod_filename,local_44c.pod_format_version);
  }
  iVar1 = engine_dosio_cpp_getFileSize_FUN_00481880(&s_EmptyChar_0064015e,pod_filename);
  size = iVar1 - local_18;
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (pod_filename,(char *)0x0,"rb","..\\engine\\pod.cpp",242);
  current_crc = 0xffffffff;
  local_1c = p_Var3;
  _fseek(p_Var3,local_18,0);
  for (; 0xffff < (int)size; size = size - 0x10000) {
    pcVar4 = g_FileIOBuffer;
    _fread(g_FileIOBuffer,0x10000,1,p_Var3);
    uVar5 = 0;
    do {
      uVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
      uVar5 = uVar5 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar5 < 0x10000);
  }
  pcVar2 = g_FileIOBuffer;
  _fread(g_FileIOBuffer,size,1,p_Var3);
  uVar3 = 0;
  local_14 = size;
  if (size != 0) {
    do {
      data_byte = *pcVar2;
      pcVar2 = pcVar2 + 1;
      uVar3 = uVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,data_byte);
    } while (uVar3 < size);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\pod.cpp",251);
  local_20 = current_crc;
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (pod_filename,(char *)0x0,"rb+","..\\engine\\pod.cpp",1208);
  _fseek(file,local_18 + -4,0);
  _fwrite(&local_20,4,1,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\pod.cpp",1211);
LAB_00551212:
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_44c,0);
  return;
}
