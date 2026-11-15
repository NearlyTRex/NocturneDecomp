// Name: engine_pod.cpp_FUN_0053bfc0
// Address: 0053bfc0
// Address Range: [[0053bfc0, 0053c288]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_FUN_0053bfc0(CPodFile *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_pod_cpp_FUN_0053bfc0(CPodFile *this_ptr)

{
  char *filename;
  CPodDirectoryEntry *pCVar1;
  _FILE *p_Var2;
  int iVar3;
  int iVar4;
  uint current_crc;
  int iVar5;
  CPickList CStack_3e0;
  uint uStack_20;
  int iStack_1c;
  _FILE *p_Stack_18;
  int iStack_14;
  
  if ((this_ptr->pod_format_version == 0) || (this_ptr->filename[0] == '\0')) {
    return 0;
  }
  if (this_ptr->pod_format_version == 200) {
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004961b0
              (g_CEditorToolsPtr,"Checking individual file CRCs");
    iVar5 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_0049a620(&CStack_3e0);
    if (0 < this_ptr->file_count) {
      iVar4 = 0;
      do {
        iVar3 = this_ptr->file_count + -1;
        pCVar1 = this_ptr->directory_entries;
        iStack_14 = *(int *)((int)&pCVar1->offset + iVar4) - pCVar1->offset;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004962b0
                  (g_CEditorToolsPtr,(float)iStack_14,
                   (float)(int)((pCVar1[iVar3].offset + pCVar1[iVar3].size) - pCVar1->offset));
        pCVar1 = this_ptr->directory_entries;
        iVar3 = engine_pod_cpp_FUN_0053c4c0(this_ptr,iVar5);
        if (iVar3 != *(int *)((int)&pCVar1->checksum + iVar4)) {
          shape_edittool_cpp_CStrList_add_FUN_004994d0
                    (&CStack_3e0.base,*(char **)((int)&this_ptr->directory_entries->name + iVar4));
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar5 < this_ptr->file_count);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_00496dd0(g_CEditorToolsPtr);
    if (CStack_3e0.base.item_count != 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_0049a8b0
                (&CStack_3e0,"!!!CRC CHECK FAILED!! on these files:",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_3e0,0);
      return 0;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_0049a710(&CStack_3e0,0);
  }
  iVar5 = this_ptr->pod_format_version;
  iVar4 = -1;
  if (iVar5 == 1) {
    iVar4 = 0x54;
  }
  else if (iVar5 == 200) {
    iVar4 = 8;
  }
  else {
    if (iVar5 == 100) {
      return 0;
    }
    _DAT_01d1d400 = "..\\engine\\pod.cpp";
    _DAT_01d1d404 = 0x388;
    core_main_c_displayErrorAndQuit_FUN_005030e0("Invalid pod version for %s: %d");
  }
  filename = this_ptr->filename;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_00494400
            (g_CEditorToolsPtr,"Verifying CRC for %s...");
  p_Var2 = _fopen(filename,(char *)0x5ed7b6);
  if (p_Var2 == (_FILE *)0x0) {
    return 0;
  }
  _fseek(p_Var2,iVar4 + -4,0);
  _fread(&uStack_20,4,1,p_Var2);
  _fclose(p_Var2);
  iStack_1c = engine_dosio_cpp_getFileSize_FUN_00478fb0((char *)0x5ed65e,filename);
  iStack_1c = iStack_1c - iVar4;
  p_Var2 = _fopen(filename,(char *)0x5ed65f);
  p_Stack_18 = p_Var2;
  _fseek(p_Var2,iVar4,0);
  iVar5 = iStack_1c;
  iVar4 = 0;
  current_crc = 0xffffffff;
  if (0 < iStack_1c) {
    do {
      iVar3 = _fgetc(p_Var2);
      iVar4 = iVar4 + 1;
      current_crc = engine_pod_cpp_crc32UpdateByte_FUN_0053b000(current_crc,(uchar)iVar3);
    } while (iVar4 < iVar5);
  }
  _fclose(p_Stack_18);
  return (uint)(current_crc == uStack_20);
}
