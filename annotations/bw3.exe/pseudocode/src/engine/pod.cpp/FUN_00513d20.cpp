// Name: engine_pod.cpp_FUN_00513d20
// Address: 00513d20
// Address Range: [[00513d20, 00513fe8]]
// Convention: unknown
// Signature: bool engine_pod_cpp_FUN_00513d20(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool engine_pod_cpp_FUN_00513d20(int *param_1)

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
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047ed50
              (g_CEditorToolsPtr,"Checking individual file CRCs");
    iVar2 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004831c0(&CStack_3e0);
    if (0 < param_1[0x104]) {
      iVar5 = 0;
      do {
        iVar4 = (param_1[0x104] + -1) * 0x14;
        iVar1 = param_1[0x105];
        iStack_14 = *(int *)(iVar1 + iVar5 + 8) - *(int *)(iVar1 + 8);
        shape_edittool_cpp_FUN_0047ee50
                  (g_CEditorToolsPtr,(float)iStack_14,
                   (float)((*(int *)(iVar4 + 8 + iVar1) + *(int *)(iVar4 + 4 + iVar1)) -
                          *(int *)(iVar1 + 8)));
        iVar1 = param_1[0x105];
        iVar4 = engine_pod_cpp_FUN_00514220(param_1,iVar2);
        if (iVar4 != *(int *)(iVar1 + iVar5 + 0x10)) {
          shape_edittool_cpp_CStrList_add_FUN_00482070
                    (&CStack_3e0.base,*(char **)(iVar5 + param_1[0x105]));
        }
        iVar2 = iVar2 + 1;
        iVar5 = iVar5 + 0x14;
      } while (iVar2 < param_1[0x104]);
    }
    shape_edittool_cpp_FUN_0047f970(g_CEditorToolsPtr);
    if (CStack_3e0.base.item_count != 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00483450
                (&CStack_3e0,"!!!CRC CHECK FAILED!! on these files:",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&CStack_3e0,0);
      return false;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004832b0(&CStack_3e0,0);
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
    _DAT_01d71de0 = "..\\engine\\pod.cpp";
    _DAT_01d71de4 = 0x388;
    core_main_c_FUN_004e4330("Invalid pod version for %s: %d",param_1 + 1,iVar2);
  }
  param_1 = param_1 + 1;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047cfa0
            (g_CEditorToolsPtr,"Verifying CRC for %s...");
  iVar2 = _fopen(param_1,0x5cc61e);
  if (iVar2 == 0) {
    return false;
  }
  _fseek(iVar2,iVar5 + -4,0);
  _fread(&uStack_20,4,1,iVar2);
  _fclose(iVar2);
  iStack_1c = engine_dosio_cpp_getFileSize_FUN_004657f0((char *)0x5cc4c6,(char *)param_1);
  iStack_1c = iStack_1c - iVar5;
  uVar3 = _fopen(param_1,0x5cc4c7);
  uStack_18 = uVar3;
  _fseek(uVar3,iVar5,0);
  iVar2 = iStack_1c;
  iVar5 = 0;
  current_crc = 0xffffffff;
  if (0 < iStack_1c) {
    do {
      data_byte = _fgetc(uVar3);
      iVar5 = iVar5 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00512d60(current_crc,data_byte);
    } while (iVar5 < iVar2);
  }
  _fclose(uStack_18);
  return current_crc == uStack_20;
}
