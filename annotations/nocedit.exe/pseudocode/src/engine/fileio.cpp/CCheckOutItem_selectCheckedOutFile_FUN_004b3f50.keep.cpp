// Name: engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
// Address: 004b3f50
// MANUAL RECONSTRUCTION
// Address Range: [[004b3f50, 004b41b3]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem *this_ptr,char *preselected_filename,char *out_buffer,char *dialog_title,char *wildcard_pattern)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem *this_ptr,char *preselected_filename,char *out_buffer,char *dialog_title,char *wildcard_pattern)

{
  int iVar2;
  int iVar5;
  int iVar3;
  int iVar4;
  int iVar6;
  char *pcVar5;
  int iVar7;
  CPickList local_3c0;
  CCheckOutList local_18;

  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return 0;
  }
  local_18.count = 0;
  local_18.items = (CCheckOutItem *)0x0;
  iVar5 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_18);
  if (iVar5 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_18);
    return 0;
  }
  if (preselected_filename != (char *)0x0) {
    iVar5 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_18,preselected_filename);
    if (((-1 < iVar5) &&
        (iVar3 = _stricmp
                           (local_18.items[iVar5].value,g_VersionControlSession.primary_username),
        iVar3 != 0)) || (iVar5 < 0)) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You do not currently have %s checked out",preselected_filename);
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_18);
      return 0;
    }
    strcpy(out_buffer,preselected_filename);
LAB_004b3ff0:
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_18);
    return 1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3c0);
  if (0 < local_18.count) {
    iVar7 = 0;
    iVar5 = 0;
    do {
      iVar4 = _stricmp
                        ((local_18.items)->value + iVar7,g_VersionControlSession.primary_username);
      if ((iVar4 == 0) &&
         (iVar6 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (wildcard_pattern,(local_18.items)->name + iVar7,0), iVar6 != 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3c0.base,(local_18.items)->name + iVar7)
        ;
      }
      iVar5 = iVar5 + 1;
      iVar7 = iVar7 + 0x168;
    } while (iVar5 < local_18.count);
  }
  if (local_3c0.base.item_count < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"You currently don't have any files checked out.");
  }
  else {
    iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_3c0,dialog_title,-1,0);
    if (-1 < iVar5) {
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3c0.base,iVar5);
      strcpy(out_buffer,pcVar5);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3c0,0);
      goto LAB_004b3ff0;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3c0,0);
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_18);
  return 0;
}
