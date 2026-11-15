// Name: engine_pod.cpp_CPodFile_verifyChecksum_FUN_0051aa80
// Address: 0051aa80
// Address Range: [[0051aa80, 0051ad48]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_0051aa80(CPodFile *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_0051aa80(CPodFile *this_ptr)

{
  char *filename;
  CPodDirectoryEntry *pCVar1;
  _FILE *p_Var2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *in_stack_fffffc20;
  CStrList *pCVar7;
  CStrList aCStack_3d8 [59];
  uint uStack_20;
  int iStack_1c;
  _FILE *p_Stack_18;
  int iStack_14;
  
  if ((this_ptr->pod_format_version == 0) || (this_ptr->filename[0] == '\0')) {
    return 0;
  }
  if (this_ptr->pod_format_version == 200) {
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_0047db40
              (g_CEditorToolsPtr,"Checking individual file CRCs");
    iVar6 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_00481fc0((CPickList *)&stack0xfffffc20);
    if (0 < this_ptr->file_count) {
      iVar4 = 0;
      do {
        iVar3 = this_ptr->file_count + -1;
        pCVar1 = this_ptr->directory_entries;
        iStack_14 = *(int *)((int)&pCVar1->offset + iVar4) - pCVar1->offset;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_0047dc40
                  (g_CEditorToolsPtr,(float)iStack_14,
                   (float)(int)((pCVar1[iVar3].offset + pCVar1[iVar3].size) - pCVar1->offset));
        pCVar1 = this_ptr->directory_entries;
        uVar5 = engine_pod_cpp_CPodFile_computeFileCRC_FUN_0051af80(this_ptr,iVar6);
        pCVar7 = aCStack_3d8;
        if (uVar5 != *(uint *)((int)&pCVar1->checksum + iVar4)) {
          shape_edittool_cpp_CStrList_add_FUN_00480e70
                    (aCStack_3d8,*(char **)((int)&this_ptr->directory_entries->name + iVar4));
          in_stack_fffffc20 = (byte *)pCVar7;
        }
        iVar6 = iVar6 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar6 < this_ptr->file_count);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_0047e760(g_CEditorToolsPtr);
    if (in_stack_fffffc20 != (byte *)0x0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00482250
                ((CPickList *)&stack0xfffffc20,"!!!CRC CHECK FAILED!! on these files:",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004820b0((CPickList *)&stack0xfffffc20,0);
      return 0;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004820b0((CPickList *)&stack0xfffffc20,0);
  }
  iVar6 = this_ptr->pod_format_version;
  iVar4 = -1;
  if (iVar6 == 1) {
    iVar4 = 0x54;
  }
  else if (iVar6 == 200) {
    iVar4 = 8;
  }
  else {
    if (iVar6 == 100) {
      return 0;
    }
    _DAT_01d046a0 = "..\\engine\\pod.cpp";
    _DAT_01d046a4 = 0x32c;
    core_main_c_displayErrorAndQuit_FUN_004e4500("Invalid pod version for %s: %d");
  }
  filename = this_ptr->filename;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0047be90
            (g_CEditorToolsPtr,"Verifying CRC for %s...",filename);
  p_Var2 = _fopen(filename,(char *)0x5e256f);
  if (p_Var2 == (_FILE *)0x0) {
    return 0;
  }
  _fseek(p_Var2,iVar4 + -4,0);
  _fread(&uStack_20,4,1,p_Var2);
  _fclose(p_Var2);
  iStack_1c = engine_dosio_cpp_getFileSize_FUN_00460aa0((char *)0x5e2403,filename);
  iStack_1c = iStack_1c - iVar4;
  p_Var2 = _fopen(filename,(char *)0x5e2404);
  p_Stack_18 = p_Var2;
  _fseek(p_Var2,iVar4,0);
  iVar6 = iStack_1c;
  iVar4 = 0;
  uVar5 = 0xffffffff;
  if (0 < iStack_1c) {
    do {
      iVar3 = _fgetc(p_Var2);
      iVar4 = iVar4 + 1;
      uVar5 = engine_pod_cpp_crc32UpdateByte_FUN_00519cb0(uVar5,(uchar)iVar3);
    } while (iVar4 < iVar6);
  }
  _fclose(p_Stack_18);
  return (uint)(uVar5 == uStack_20);
}
