// Name: engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230
// Address: 00550230
// Address Range: [[00550230, 0055058e]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230(CPodFile *this_ptr)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230(CPodFile *this_ptr)

{
  uchar data_byte;
  CPodDirectoryEntry *pCVar1;
  _FILE *p_Var3;
  int iVar4;
  _FILE *file;
  int iVar5;
  SIZE_T size;
  char *pcVar6;
  char *pcVar2;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar3;
  int iVar6;
  int iVar8;
  CPickList local_3c8;
  uint local_20;
  _FILE *local_1c;
  SIZE_T local_18;
  int local_14;
  CPodDirectoryEntry *pCVar2;
  uchar uVar1;
  
  if ((this_ptr->pod_format_version == 0) || (this_ptr->filename[0] == '\0')) {
    return 0;
  }
  if (this_ptr->pod_format_version == 200) {
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Checking individual file CRCs");
    iVar8 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_3c8);
    if (0 < this_ptr->file_count) {
      iVar6 = 0;
      do {
        iVar5 = this_ptr->file_count + -1;
        pCVar2 = this_ptr->directory_entries;
        local_14 = *(int *)((int)&pCVar2->offset + iVar6) - pCVar2->offset;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)local_14,
                   (float)(int)((pCVar2[iVar5].offset + pCVar2[iVar5].size) - pCVar2->offset));
        pCVar1 = this_ptr->directory_entries;
        uVar3 = engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(this_ptr,iVar8);
        if (uVar3 != *(uint *)((int)&pCVar1->checksum + iVar6)) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    (&local_3c8.base,*(char **)((int)&this_ptr->directory_entries->name + iVar6));
        }
        iVar8 = iVar8 + 1;
        iVar6 = iVar6 + 0x14;
      } while (iVar8 < this_ptr->file_count);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    if (local_3c8.base.item_count != 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                (&local_3c8,"!!!CRC CHECK FAILED!! on these files:",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3c8,0);
      return 0;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_3c8,0);
  }
  iVar8 = this_ptr->pod_format_version;
  iVar7 = -1;
  if (iVar8 == 1) {
    iVar7 = 0x54;
  }
  else if (iVar8 == 200) {
    iVar7 = 8;
  }
  else {
    if (iVar8 == 100) {
      return 0;
    }
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x2e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Invalid pod version for %s: %d",this_ptr->filename,iVar8);
  }
  pcVar2 = this_ptr->filename;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Verifying CRC for %s...",pcVar2);
  p_Var3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (pcVar2,(char *)0x0,"rb","..\\engine\\pod.cpp",0x2ef);
  if (p_Var3 == (_FILE *)0x0) {
    return 0;
  }
  _fseek(p_Var3,iVar7 + -4,0);
  _fread(&local_20,4,1,p_Var3);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var3,"..\\engine\\pod.cpp",0x2f3);
  iVar4 = engine_dosio_cpp_getFileSize_FUN_00481880(&s_EmptyChar_0064015e,pcVar2);
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (pcVar2,(char *)0x0,"rb","..\\engine\\pod.cpp",0xf2);
  uVar8 = 0xffffffff;
  local_1c = file;
  _fseek(file,iVar7,0);
  for (size = iVar4 - iVar7; 0xffff < (int)size; size = size - 0x10000) {
    pcVar6 = g_FileIOBuffer;
    _fread(g_FileIOBuffer,0x10000,1,file);
    uVar9 = 0;
    do {
      uVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
      uVar9 = uVar9 + 1;
      uVar8 = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uVar8,uVar1);
    } while (uVar9 < 0x10000);
  }
  pcVar2 = g_FileIOBuffer;
  _fread(g_FileIOBuffer,size,1,file);
  uVar3 = 0;
  local_18 = size;
  if (size != 0) {
    do {
      data_byte = *pcVar2;
      pcVar2 = pcVar2 + 1;
      uVar3 = uVar3 + 1;
      uVar8 = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uVar8,data_byte);
    } while (uVar3 < size);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\pod.cpp",0xfb);
  return (uint)(uVar8 == local_20);
}
