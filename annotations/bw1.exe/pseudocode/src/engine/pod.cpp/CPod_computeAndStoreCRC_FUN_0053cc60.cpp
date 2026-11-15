// Name: engine_pod.cpp_CPod_computeAndStoreCRC_FUN_0053cc60
// Address: 0053cc60
// Address Range: [[0053cc60, 0053ce49]]
// Convention: __cdecl
// Signature: void __cdecl engine_pod_cpp_CPod_computeAndStoreCRC_FUN_0053cc60(CPod *this_ptr,char *pod_filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_pod_cpp_CPod_computeAndStoreCRC_FUN_0053cc60(CPod *this_ptr,char *pod_filename)

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
  
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,"Computing CRC over entire pod: %s...");
  engine_pod_cpp_CPodFile_ctor_FUN_0053b1a0(&CStack_44c);
  iVar1 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0053b250(&CStack_44c,pod_filename,(char *)0x0);
  if (iVar1 == 0) {
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x55e;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Can't mount %s to check version");
  }
  engine_pod_cpp_CPodFile_cleanup_FUN_0053be30(&CStack_44c);
  iStack_18 = -1;
  if (CStack_44c.pod_format_version == 1) {
    iStack_18 = 0x54;
  }
  else if (CStack_44c.pod_format_version == 200) {
    iStack_18 = 8;
  }
  else {
    if (CStack_44c.pod_format_version == 100) goto LAB_0053cde2;
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x56f;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid pod version for %s: %d");
  }
  iStack_1c = engine_dosio_cpp_getFileSize_FUN_00478fb0((char *)0x5ed65e,pod_filename);
  iStack_1c = iStack_1c - iStack_18;
  p_Var2 = _fopen(pod_filename,(char *)0x5ed65f);
  p_Stack_14 = p_Var2;
  _fseek(p_Var2,iStack_18,0);
  iVar1 = iStack_1c;
  current_crc = 0xffffffff;
  iVar4 = 0;
  if (0 < iStack_1c) {
    do {
      iVar3 = _fgetc(p_Var2);
      iVar4 = iVar4 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0053b000(current_crc,(uchar)iVar3);
    } while (iVar4 < iVar1);
  }
  _fclose(p_Stack_14);
  uStack_20 = current_crc;
  p_Var2 = _fopen(pod_filename,"rb+");
  _fseek(p_Var2,iStack_18 + -4,0);
  _fwrite(&uStack_20,4,1,p_Var2);
  _fclose(p_Var2);
LAB_0053cde2:
  engine_pod_cpp_CPodFile_dtor_FUN_0053b210(&CStack_44c,0);
  return;
}
