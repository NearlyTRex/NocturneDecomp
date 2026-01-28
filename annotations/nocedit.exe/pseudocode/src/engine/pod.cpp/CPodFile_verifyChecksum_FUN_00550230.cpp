// Name: engine_pod.cpp_CPodFile_verifyChecksum_FUN_00550230
// Address: 00550230
// Address Range: [[00550230, 0055058e]]
// Convention: __cdecl
// Signature: int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230(CPodFile *this_ptr)

#include "nocturne.h"

int __cdecl engine_pod_cpp_CPodFile_verifyChecksum_FUN_00550230(CPodFile *this_ptr)

{
  uchar uVar1;
  CPodDirectoryEntry *pCVar2;
  FILE *pFVar3;
  int iVar4;
  int iVar5;
  SIZE_T size;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint in_stack_fffffc38;
  uint in_stack_fffffc3c;
  char **in_stack_fffffc40;
  CStrList_vtable *in_stack_fffffc44;
  uint in_stack_fffffc48;
  uint local_20;
  FILE *local_1c;
  SIZE_T local_18;
  int local_14;
  
  if ((this_ptr->pod_format_version == 0) || (this_ptr->filename[0] == '\0')) {
    return 0;
  }
  if (this_ptr->pod_format_version == 200) {
    shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
              (g_CEditorToolsPtr,"Checking individual file CRCs");
    iVar4 = 0;
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc38);
    if (0 < this_ptr->file_count) {
      iVar7 = 0;
      do {
        iVar5 = this_ptr->file_count + -1;
        pCVar2 = this_ptr->directory_entries;
        local_14 = *(int *)((int)&pCVar2->offset + iVar7) - pCVar2->offset;
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                  (g_CEditorToolsPtr,(float)local_14,
                   (float)(int)((pCVar2[iVar5].offset + pCVar2[iVar5].size) - pCVar2->offset));
        pCVar2 = this_ptr->directory_entries;
        uVar8 = engine_pod_cpp_CPodFile_computeFileCRC_FUN_005507f0(this_ptr,iVar4);
        if (uVar8 != *(uint *)((int)&pCVar2->checksum + iVar7)) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)&stack0xfffffc38,
                     *(char **)((int)&this_ptr->directory_entries->name_or_offset + iVar7));
        }
        iVar4 = iVar4 + 1;
        iVar7 = iVar7 + 0x14;
      } while (iVar4 < this_ptr->file_count);
    }
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    if (in_stack_fffffc38 != 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                ((CPickList *)&stack0xfffffc38,"!!!CRC CHECK FAILED!! on these files:",-1,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffc38,0,in_stack_fffffc38,in_stack_fffffc3c,
                 (uint)in_stack_fffffc40,(uint)in_stack_fffffc44,in_stack_fffffc48);
      return 0;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffffc38,0,0,in_stack_fffffc3c,(uint)in_stack_fffffc40,
               (uint)in_stack_fffffc44,in_stack_fffffc48);
  }
  iVar4 = this_ptr->pod_format_version;
  iVar7 = -1;
  if (iVar4 == 1) {
    iVar7 = 0x54;
  }
  else if (iVar4 == 200) {
    iVar7 = 8;
  }
  else {
    if (iVar4 == 100) {
      return 0;
    }
    g_CurrentFilename = "..\\engine\\pod.cpp";
    g_CurrentLineNumber = 0x2e6;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Invalid pod version for %s: %d",this_ptr->filename,iVar4);
  }
  pcVar6 = this_ptr->filename;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Verifying CRC for %s...");
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (pcVar6,(char *)0x0,"rb","..\\engine\\pod.cpp",0x2ef);
  if (pFVar3 == (FILE *)0x0) {
    return 0;
  }
  crt_stdio_c_fseek_FUN_005ffacc(pFVar3,iVar7 + -4,0);
  crt_stdio_c_fread_FUN_005fd990(&local_20,4,1,pFVar3);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar3,"..\\engine\\pod.cpp",0x2f3);
  iVar4 = engine_dosio_c_getFileSize_FUN_00481880(&s_EmptyString_0064015e,pcVar6);
  pFVar3 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (pcVar6,(char *)0x0,"rb","..\\engine\\pod.cpp",0xf2);
  uVar8 = 0xffffffff;
  local_1c = pFVar3;
  crt_stdio_c_fseek_FUN_005ffacc(pFVar3,iVar7,0);
  for (size = iVar4 - iVar7; 0xffff < (int)size; size = size - 0x10000) {
    pcVar6 = g_FileIOBuffer;
    crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,0x10000,1,pFVar3);
    uVar9 = 0;
    do {
      uVar1 = *pcVar6;
      pcVar6 = (char *)((uchar *)pcVar6 + 1);
      uVar9 = uVar9 + 1;
      uVar8 = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uVar8,uVar1);
    } while (uVar9 < 0x10000);
  }
  pcVar6 = g_FileIOBuffer;
  crt_stdio_c_fread_FUN_005fd990(g_FileIOBuffer,size,1,pFVar3);
  uVar9 = 0;
  local_18 = size;
  if (size != 0) {
    do {
      uVar1 = *pcVar6;
      pcVar6 = (char *)((uchar *)pcVar6 + 1);
      uVar9 = uVar9 + 1;
      uVar8 = engine_pod_cpp_crc32UpdateByte_FUN_0054f2e0(uVar8,uVar1);
    } while (uVar9 < size);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_1c,"..\\engine\\pod.cpp",0xfb);
  return (uint)(uVar8 == local_20);
}
