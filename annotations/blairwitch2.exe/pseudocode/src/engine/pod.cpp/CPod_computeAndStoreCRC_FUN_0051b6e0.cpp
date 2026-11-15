// Name: engine_pod.cpp_CPod_computeAndStoreCRC_FUN_0051b6e0
// Address: 0051b6e0
// Address Range: [[0051b6e0, 0051b8c9]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_computeAndStoreCRC_FUN_0051b6e0(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_computeAndStoreCRC_FUN_0051b6e0(CPod *this_ptr,char *pod_filename)

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
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047be90
            (g_CEditorToolsPtr,"Computing CRC over entire pod: %s...",pod_filename);
  engine_pod_cpp_CPodFile_ctor_FUN_00519e50(&CStack_44c);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_00519f00(&CStack_44c,pod_filename);
  if (iVar1 == 0) {
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x4ee;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Can't mount %s to check version");
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
    core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid pod version for %s: %d");
  }
  iStack_1c = engine_dosio_cpp_getFileSize_FUN_00460aa0((char *)0x5e2403,pod_filename);
  iStack_1c = iStack_1c - iStack_18;
  p_Var2 = _fopen(pod_filename,(char *)0x5e2404);
  p_Stack_14 = p_Var2;
  _fseek(p_Var2,iStack_18,0);
  iVar1 = iStack_1c;
  current_crc = 0xffffffff;
  iVar4 = 0;
  if (0 < iStack_1c) {
    do {
      iVar3 = _fgetc(p_Var2);
      iVar4 = iVar4 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00519cb0(current_crc,(uchar)iVar3);
    } while (iVar4 < iVar1);
  }
  _fclose(p_Stack_14);
  uStack_20 = current_crc;
  p_Var2 = _fopen(pod_filename,(char *)0x5e28e1);
  _fseek(p_Var2,iStack_18 + -4,0);
  _fwrite(&uStack_20,4,1,p_Var2);
  _fclose(p_Var2);
LAB_0051b862:
  engine_pod_cpp_CPodFile_dtor_FUN_00519ec0(&CStack_44c,0);
  return;
}
