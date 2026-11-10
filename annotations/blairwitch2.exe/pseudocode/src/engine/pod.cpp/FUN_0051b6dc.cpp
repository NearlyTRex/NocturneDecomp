// Name: engine_pod.cpp_FUN_0051b6dc
// Address: 0051b6dc
// Address Range: [[0051b6dc, 0051b8c9]]
// Convention: unknown
// Signature: void engine_pod_cpp_FUN_0051b6dc(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_pod_cpp_FUN_0051b6dc(uint param_1,char *param_2)

{
  uchar data_byte;
  int iVar1;
  uint uVar2;
  int iVar3;
  uint current_crc;
  CPodFile CStack_44c;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"Computing CRC over entire pod: %s...",param_2);
  engine_pod_cpp_CPodFile_ctor_FUN_00519e50(&CStack_44c);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00519f00(&CStack_44c,param_2);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x4ee;
    core_main_c_FUN_004e4500("Can't mount %s to check version",param_2);
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_0051a8f0(&CStack_44c);
  iStack_18 = -1;
  if (CStack_44c.pod_format_version == 1) {
    iStack_18 = 0x54;
  }
  else if (CStack_44c.pod_format_version == 200) {
    iStack_18 = 8;
  }
  else {
    if (CStack_44c.pod_format_version == 100) goto LAB_0051b862;
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x4ff;
    core_main_c_FUN_004e4500
              ("Invalid pod version for %s: %d",param_2,CStack_44c.pod_format_version);
  }
  iStack_1c = engine_dosio_cpp_getFileSize_FUN_00460aa0((char *)0x5e2403,param_2);
  iStack_1c = iStack_1c - iStack_18;
  uVar2 = _fopen(param_2,0x5e2404);
  uStack_14 = uVar2;
  _fseek(uVar2,iStack_18,0);
  iVar1 = iStack_1c;
  current_crc = 0xffffffff;
  iVar3 = 0;
  if (0 < iStack_1c) {
    do {
      data_byte = _fgetc(uVar2);
      iVar3 = iVar3 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00519cb0(current_crc,data_byte);
    } while (iVar3 < iVar1);
  }
  _fclose(uStack_14);
  uStack_20 = current_crc;
  uVar2 = _fopen(param_2,0x5e28e1);
  _fseek(uVar2,iStack_18 + -4,0);
  _fwrite(&uStack_20,4,1,uVar2);
  _fclose(uVar2);
LAB_0051b862:
  engine_pod_cpp_CPodFile_dtor_FUN_00519ec0(&CStack_44c,0);
  return;
}
