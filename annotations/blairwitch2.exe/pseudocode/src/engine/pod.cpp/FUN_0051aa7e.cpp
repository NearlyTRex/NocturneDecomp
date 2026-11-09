// Name: engine_pod.cpp_FUN_0051aa7e
// Address: 0051aa7e
// Address Range: [[0051aa7e, 0051ad48]]
// Convention: unknown
// Signature: bool engine_pod_cpp_FUN_0051aa7e(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool engine_pod_cpp_FUN_0051aa7e(int *param_1)

{
  int iVar1;
  uchar data_byte;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint current_crc;
  CPickList CStack_3e0;
  uint uStack_20;
  int iStack_1c;
  uint uStack_18;
  int iStack_14;
  
  if ((*param_1 == 0) || ((char)param_1[1] == '\0')) {
    return false;
  }
  if (*param_1 == 200) {
    shape_edittool_cpp_FUN_0047db40(g_CEditorToolsPtr,"Checking individual file CRCs");
    iVar2 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&CStack_3e0);
    if (0 < param_1[0x104]) {
      iVar5 = 0;
      do {
        iVar4 = (param_1[0x104] + -1) * 0x14;
        iVar1 = param_1[0x105];
        iStack_14 = *(int *)(iVar1 + iVar5 + 8) - *(int *)(iVar1 + 8);
        shape_edittool_cpp_FUN_0047dc40
                  (g_CEditorToolsPtr,(float)iStack_14,
                   (float)((*(int *)(iVar4 + 8 + iVar1) + *(int *)(iVar4 + 4 + iVar1)) -
                          *(int *)(iVar1 + 8)));
        iVar1 = param_1[0x105];
        iVar4 = engine_pod_cpp_FUN_0051af80(param_1,iVar2);
        if (iVar4 != *(int *)(iVar1 + iVar5 + 0x10)) {
          shape_edittool_cpp_CStrList_add_FUN_00480e70
                    ((CStrList *)&CStack_3e0,*(char **)(iVar5 + param_1[0x105]));
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x14;
      } while (iVar2 < param_1[0x104]);
    }
    shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
    if (CStack_3e0._0_4_ != 0) {
      shape_edittool_cpp_FUN_00482250(&CStack_3e0,"!!!CRC CHECK FAILED!! on these files:",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_3e0,0);
      return false;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_3e0,0);
  }
  iVar2 = *param_1;
  iVar5 = -1;
  if (iVar2 == 1) {
    iVar5 = 0x54;
  }
  else if (iVar2 == 200) {
    iVar5 = 8;
  }
  else {
    if (iVar2 == 100) {
      return false;
    }
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x32c;
    core_main_c_FUN_004e4500("Invalid pod version for %s: %d",param_1 + 1,iVar2);
  }
  param_1 = param_1 + 1;
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"Verifying CRC for %s...",param_1);
  iVar2 = _fopen(param_1,0x5e256f);
  if (iVar2 == 0) {
    return false;
  }
  _fseek(iVar2,iVar5 + -4,0);
  _fread(&uStack_20,4,1,iVar2);
  _fclose(iVar2);
  iStack_1c = engine_dosio_cpp_getFileSize_FUN_00460aa0((char *)0x5e2403,(char *)param_1);
  iStack_1c = iStack_1c - iVar5;
  uVar3 = _fopen(param_1,0x5e2404);
  uStack_18 = uVar3;
  _fseek(uVar3,iVar5,0);
  iVar2 = iStack_1c;
  iVar5 = 0;
  current_crc = 0xffffffff;
  if (0 < iStack_1c) {
    do {
      data_byte = _fgetc(uVar3);
      iVar5 = iVar5 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00519cb0(current_crc,data_byte);
    } while (iVar5 < iVar2);
  }
  _fclose(uStack_18);
  return current_crc == uStack_20;
}
