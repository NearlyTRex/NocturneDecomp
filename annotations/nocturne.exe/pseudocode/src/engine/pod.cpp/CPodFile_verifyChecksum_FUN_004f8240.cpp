// Name: engine_pod.cpp_CPodFile_verifyChecksum_FUN_004f8240
// Address: 004f8240
// Address Range: [[004f8240, 004f856e]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_004f8240(CPodFile *this_ptr)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_004f8240(CPodFile *this_ptr)

{
  char *filename;
  uchar uVar1;
  CPodDirectoryEntry *pCVar2;
  _FILE *p_Var3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  SIZE_T size;
  int iVar9;
  uint in_stack_fffffe68;
  uint local_28;
  SIZE_T local_24;
  _FILE *local_20;
  int local_1c;
  SIZE_T local_18;
  int local_14;
  
  if ((this_ptr->pod_format_version == 0) || (this_ptr->filename[0] == '\0')) {
    return 0;
  }
  if (1 < this_ptr->pod_format_version) {
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_00471660
              (g_CEditorTools_PTR_005b6d50,"Checking individual file CRCs");
    iVar9 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_00474c90((CPickList *)&stack0xfffffe68);
    if (0 < this_ptr->file_count) {
      iVar4 = 0;
      do {
        iVar5 = this_ptr->file_count + -1;
        pCVar2 = this_ptr->directory_entries;
        local_14 = *(int *)((int)&pCVar2->offset + iVar4) - pCVar2->offset;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760
                  (g_CEditorTools_PTR_005b6d50,(float)local_14,
                   (float)(int)((pCVar2[iVar5].offset + pCVar2[iVar5].size) - pCVar2->offset));
        pCVar2 = this_ptr->directory_entries;
        uVar6 = engine_pod_cpp_CPodFile_computeFileCRC_FUN_004f86a0(this_ptr,iVar9);
        if (uVar6 != *(uint *)((int)&pCVar2->checksum + iVar4)) {
          shape_edittool_cpp_CStrList_add_FUN_00473cb0
                    ((CStrList *)&stack0xfffffe68,
                     *(char **)((int)&this_ptr->directory_entries->name + iVar4));
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar9 < this_ptr->file_count);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004720c0
              (g_CEditorTools_PTR_005b6d50);
    if (in_stack_fffffe68 != 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                ((CPickList *)&stack0xfffffe68,"!!!CRC CHECK FAILED!! on these files:",-1,
                 in_stack_fffffe68);
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffe68,0);
      return 0;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)&stack0xfffffe68,0);
  }
  if (this_ptr->pod_format_version == 1) {
    local_1c = 0x54;
  }
  else if (this_ptr->pod_format_version == 2) {
    local_1c = 8;
  }
  else {
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 463;
    core_main_c_displayErrorAndQuit_FUN_004c8440("Invalid pod version!");
  }
  filename = this_ptr->filename;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (g_CEditorTools_PTR_005b6d50,"Verifying CRC for %s...");
  p_Var3 = _fopen(filename,"rb");
  uVar6 = 0;
  if (p_Var3 != (_FILE *)0x0) {
    _fseek(p_Var3,local_1c + -4,0);
    _fread(&local_28,4,1,p_Var3);
    _fclose(p_Var3);
    iVar4 = engine_dosio_cpp_getFileSize_FUN_004568c0(&DAT_0058d9a8,filename);
    iVar9 = local_1c;
    local_24 = iVar4 - local_1c;
    p_Var3 = _fopen(filename,"rb");
    local_20 = p_Var3;
    _fseek(p_Var3,iVar9,0);
    uVar6 = 0xffffffff;
    for (size = local_24; 0xffff < (int)size; size = size - 0x10000) {
      puVar8 = &DAT_01e428d0;
      _fread(&DAT_01e428d0,0x10000,1,p_Var3);
      uVar7 = 0;
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar7 = uVar7 + 1;
        uVar6 = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(uVar6,uVar1);
      } while (uVar7 < 0x10000);
    }
    puVar8 = &DAT_01e428d0;
    _fread(&DAT_01e428d0,size,1,p_Var3);
    uVar7 = 0;
    local_18 = size;
    if (size != 0) {
      do {
        uVar1 = *puVar8;
        puVar8 = puVar8 + 1;
        uVar6 = engine_pod_cpp_crc32UpdateByte_FUN_004f77d0(uVar6,uVar1);
        uVar7 = uVar7 + 1;
      } while (uVar7 < local_18);
    }
    _fclose(local_20);
    uVar6 = (uint)(uVar6 == local_28);
  }
  return uVar6;
}
