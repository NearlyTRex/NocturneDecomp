// Name: shape_edittool.cpp_CEditorTools_showFileSelectionDialog_FUN_00470550
// Address: 00470550
// Address Range: [[00470550, 00470721]]
// Convention: __cdecl
// Signature: undefined4 __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,byte param_6)

#include "nocturne.h"

uint __cdecl shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_00470550(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,byte param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  byte local_684 [512];
  byte local_484 [512];
  int local_284 [92];
  byte local_114 [260];
  
  FUN_00474c90(local_284);
  shape_edittool_cpp_CStrList_populateFromFileSearch_FUN_004746b0(local_284,param_3,param_4);
  if (local_284[0] < 1) {
    uVar4 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("No files found");
    FUN_0046fcd0(param_1,uVar4);
    uVar4 = 0;
  }
  else {
    shape_edittool_cpp_CStrList_sortAll_FUN_00473fd0(local_284);
    iVar5 = -1;
    iVar2 = iVar5;
    if (((param_6 & 1) != 0) && (iVar3 = 0, 0 < local_284[0])) {
      do {
        shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_284,local_684,iVar3,0);
        shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_284,local_484,iVar3,1);
        makepath(local_114,0,0,local_684,local_484);
        iVar1 = _stricmp(local_114,param_5);
        iVar2 = iVar3;
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
        iVar2 = iVar5;
      } while (iVar3 < local_284[0]);
    }
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                      (local_284,param_2,iVar2);
    if (iVar2 < 0) {
      uVar4 = 0;
    }
    else {
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_284,local_684,iVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_00474090(local_284,local_484,iVar2,1);
      makepath(param_5,0,0,local_684,local_484);
      uVar4 = 1;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_00474cf0(local_284,0);
  return uVar4;
}
