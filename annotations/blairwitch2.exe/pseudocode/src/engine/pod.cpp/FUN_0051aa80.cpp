// Name: engine_pod.cpp_FUN_0051aa80
// Address: 0051aa80
// Address Range: [[0051aa80, 0051ad48]]
// Convention: unknown
// Signature: bool engine_pod_cpp_FUN_0051aa80(int *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool engine_pod_cpp_FUN_0051aa80(int *param_1)

{
  _FILE *p_Var1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint current_crc;
  int iVar5;
  CPickList CStack_3e0;
  uint uStack_20;
  int iStack_1c;
  _FILE *p_Stack_18;
  int iStack_14;
  
  if ((*param_1 == 0) || ((char)param_1[1] == '\0')) {
    return false;
  }
  if (*param_1 == 200) {
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40
              (g_CEditorToolsPtr,"Checking individual file CRCs");
    iVar5 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_00481fc0(&CStack_3e0);
    if (0 < param_1[0x104]) {
      iVar4 = 0;
      do {
        iVar3 = (param_1[0x104] + -1) * 0x14;
        iVar2 = param_1[0x105];
        iStack_14 = *(int *)(iVar2 + iVar4 + 8) - *(int *)(iVar2 + 8);
        shape_edittool_cpp_FUN_0047dc40
                  (g_CEditorToolsPtr,(float)iStack_14,
                   (float)((*(int *)(iVar3 + 8 + iVar2) + *(int *)(iVar3 + 4 + iVar2)) -
                          *(int *)(iVar2 + 8)));
        iVar2 = param_1[0x105];
        iVar3 = engine_pod_cpp_FUN_0051af80(param_1,iVar5);
        if (iVar3 != *(int *)(iVar2 + iVar4 + 0x10)) {
          shape_edittool_cpp_CStrList_add_FUN_00480e70
                    (&CStack_3e0.base,*(char **)(iVar4 + param_1[0x105]));
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar5 < param_1[0x104]);
    }
    shape_edittool_cpp_FUN_0047e760(g_CEditorToolsPtr);
    if (CStack_3e0.base.item_count != 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                (&CStack_3e0,"!!!CRC CHECK FAILED!! on these files:",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_3e0,0);
      return false;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0(&CStack_3e0,0);
  }
  iVar5 = *param_1;
  iVar4 = -1;
  if (iVar5 == 1) {
    iVar4 = 0x54;
  }
  else if (iVar5 == 200) {
    iVar4 = 8;
  }
  else {
    if (iVar5 == 100) {
      return false;
    }
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x32c;
    core_main_c_FUN_004e4500("Invalid pod version for %s: %d",param_1 + 1,iVar5);
  }
  param_1 = param_1 + 1;
  shape_edittool_cpp_FUN_0047be90(g_CEditorToolsPtr,"Verifying CRC for %s...",param_1);
  p_Var1 = _fopen((char *)param_1,(char *)0x5e256f);
  if (p_Var1 == (_FILE *)0x0) {
    return false;
  }
  _fseek(p_Var1,iVar4 + -4,0);
  _fread(&uStack_20,4,1,p_Var1);
  _fclose(p_Var1);
  iStack_1c = engine_dosio_cpp_getFileSize_FUN_00460aa0((char *)0x5e2403,(char *)param_1);
  iStack_1c = iStack_1c - iVar4;
  p_Var1 = _fopen((char *)param_1,(char *)0x5e2404);
  p_Stack_18 = p_Var1;
  _fseek(p_Var1,iVar4,0);
  iVar5 = iStack_1c;
  iVar4 = 0;
  current_crc = 0xffffffff;
  if (0 < iStack_1c) {
    do {
      iVar2 = _fgetc(p_Var1);
      iVar4 = iVar4 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_00519cb0(current_crc,(uchar)iVar2);
    } while (iVar4 < iVar5);
  }
  _fclose(p_Stack_18);
  return current_crc == uStack_20;
}
