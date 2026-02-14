// Name: engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
// Address: 004b3f50
// Address Range: [[004b3f50, 004b41b3]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem *this_ptr,char *filename_out,char *out_buffer,char *wildcard_pattern,char *dialog_title)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem *this_ptr,char *filename_out,char *out_buffer,char *wildcard_pattern,char *dialog_title)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  CPickList local_3c0;
  CCheckOutList local_18;
  
  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return 0;
  }
  local_18.count = 0;
  local_18.items = (CCheckOutItem *)0x0;
  iVar2 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_18);
  if (iVar2 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_18);
    return 0;
  }
  if (filename_out != (char *)0x0) {
    iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_18,filename_out);
    if (((-1 < iVar2) &&
        (iVar3 = stricmp
                           (local_18.items[iVar2].value,g_VersionControlSession.primary_username),
        iVar3 != 0)) || (iVar2 < 0)) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You do not currently have %s checked out",filename_out);
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_18);
      return 0;
    }
    do {
      cVar1 = *filename_out;
      *out_buffer = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = filename_out[1];
      filename_out = filename_out + 2;
      out_buffer[1] = cVar1;
      out_buffer = out_buffer + 2;
    } while (cVar1 != '\0');
LAB_004b3ff0:
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_18);
    return 1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3c0);
  if (0 < local_18.count) {
    iVar3 = 0;
    iVar2 = 0;
    do {
      iVar4 = stricmp
                        ((local_18.items)->value + iVar3,g_VersionControlSession.primary_username);
      if ((iVar4 == 0) &&
         (iVar4 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20
                            (dialog_title,(local_18.items)->name + iVar3,0), iVar4 != 0)) {
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_3c0.base,(local_18.items)->name + iVar3)
        ;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x168;
    } while (iVar2 < local_18.count);
  }
  if (local_3c0.base.item_count < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"You currently don't have any files checked out.");
  }
  else {
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      (&local_3c0,wildcard_pattern,-1,0);
    if (-1 < iVar2) {
      pcVar5 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_3c0.base,iVar2);
      do {
        cVar1 = *pcVar5;
        *out_buffer = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        out_buffer[1] = cVar1;
        out_buffer = out_buffer + 2;
      } while (cVar1 != '\0');
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3c0,0);
      goto LAB_004b3ff0;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3c0,0);
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_18);
  return 0;
}
