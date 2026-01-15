// Name: engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000
// Address: 00551000
// Address Range: [[00551000, 00551279]]
// Convention: __cdecl
// Signature: void engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000(CPod * this_ptr, char * pod_filename)

#include "nocturne.h"

void __cdecl engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000(CPod *this_ptr,char *pod_filename)

{
  uchar uVar1;
  int iVar2;
  FILE *pFVar3;
  SIZE_T size;
  char *pcVar4;
  uint current_crc;
  uint uVar5;
  CPodFile local_44c;
  uint local_20;
  FILE *local_1c;
  int local_18;
  SIZE_T local_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Computing CRC over entire pod: %s...");
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_44c);
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_44c,pod_filename);
  if (iVar2 == 0) {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x49d;
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
    g_CurrentLineNumber = 0x4ae;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Invalid pod version for %s: %d",pod_filename,local_44c.pod_format_version);
  }
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880(&s_EmptyString_0064015e,pod_filename);
  size = iVar2 - local_18;
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (pod_filename,(char *)0x0,"rb","..\\engine\\pod.cpp",0xf2);
  current_crc = 0xffffffff;
  local_1c = pFVar3;
  crt_stdio_c_fseek_FUN_005ffacc(pFVar3,local_18,0);
  for (; 0xffff < (int)size; size = size - 0x10000) {
    pcVar4 = g_FileIOBuffer;
    crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,0x10000,1,pFVar3);
    uVar5 = 0;
    do {
      uVar1 = *pcVar4;
      pcVar4 = (char *)((uchar *)pcVar4 + 1);
      uVar5 = uVar5 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar5 < 0x10000);
  }
  pcVar4 = g_FileIOBuffer;
  crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,size,1,pFVar3);
  uVar5 = 0;
  local_14 = size;
  if (size != 0) {
    do {
      uVar1 = *pcVar4;
      pcVar4 = (char *)((uchar *)pcVar4 + 1);
      uVar5 = uVar5 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(current_crc,uVar1);
    } while (uVar5 < size);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\pod.cpp",0xfb);
  local_20 = current_crc;
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (pod_filename,(char *)0x0,"rb+","..\\engine\\pod.cpp",0x4b8);
  crt_stdio_c_fseek_FUN_005ffacc(pFVar3,local_18 + -4,0);
  crt_stdio_c_fwrite_FUN_005fdc00(&local_20,4,1,pFVar3);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\engine\\pod.cpp",0x4bb);
LAB_00551212:
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_44c);
  return;
}
