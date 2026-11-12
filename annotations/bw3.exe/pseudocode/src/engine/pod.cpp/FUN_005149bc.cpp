// Name: engine_pod.cpp_FUN_005149bc
// Address: 005149bc
// Address Range: [[005149bc, 00514ba9]]
// Convention: unknown
// Signature: void engine_pod_cpp_FUN_005149bc(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_pod_cpp_FUN_005149bc(uint param_1,char *param_2)

{
  int iVar1;
  _FILE *p_Var2;
  int iVar3;
  int iVar4;
  uint current_crc;
  CPodFile CStack_44c;
  uint uStack_20;
  int iStack_1c;
  int iStack_18;
  _FILE *p_Stack_14;
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,"Computing CRC over entire pod: %s...");
  engine_pod_cpp_CPodFile_ctor_FUN_00512f00(&CStack_44c);
  iVar1 = engine_pod_cpp_FUN_00512fb0(&CStack_44c,param_2,0);
  if (iVar1 == 0) {
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x55e;
    core_main_c_FUN_004e4330("Can't mount %s to check version",param_2);
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_00513b90(&CStack_44c);
  iStack_18 = -1;
  if (CStack_44c.pod_format_version == 1) {
    iStack_18 = 0x54;
  }
  else if (CStack_44c.pod_format_version == 200) {
    iStack_18 = 8;
  }
  else {
    if (CStack_44c.pod_format_version == 100) goto LAB_00514b42;
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x56f;
    core_main_c_FUN_004e4330
              ("Invalid pod version for %s: %d",param_2,CStack_44c.pod_format_version);
  }
  iStack_1c = engine_dosio_cpp_getFileSize_FUN_004657f0((char *)0x5cc4c6,param_2);
  iStack_1c = iStack_1c - iStack_18;
  p_Var2 = _fopen(param_2,(char *)0x5cc4c7);
  p_Stack_14 = p_Var2;
  _fseek(p_Var2,iStack_18,0);
  iVar1 = iStack_1c;
  current_crc = 0xffffffff;
  iVar4 = 0;
  if (0 < iStack_1c) {
    do {
      iVar3 = _fgetc(p_Var2);
      iVar4 = iVar4 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00512d60(current_crc,(uchar)iVar3);
    } while (iVar4 < iVar1);
  }
  _fclose(p_Stack_14);
  uStack_20 = current_crc;
  p_Var2 = _fopen(param_2,(char *)0x5cc94f);
  _fseek(p_Var2,iStack_18 + -4,0);
  _fwrite(&uStack_20,4,1,p_Var2);
  _fclose(p_Var2);
LAB_00514b42:
  engine_pod_cpp_CPodFile_dtor_FUN_00512f70(&CStack_44c,0);
  return;
}
