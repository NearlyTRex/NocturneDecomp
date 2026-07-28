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
  int iVar2;
  _FILE *p_Var3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uchar *puVar8;
  SIZE_T size;
  int iVar9;
  CStrList local_198 [23];
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
              (0x01BCD074,"Checking individual file CRCs");
    iVar9 = 0;
    shape_edittool_cpp_FUN_00474c90(local_198);
    if (0 < *(int *)this_ptr->author_info) {
      iVar4 = 0;
      do {
        iVar5 = (*(int *)this_ptr->author_info + -1) * 0x14;
        iVar2 = *(int *)(this_ptr->author_info + 4);
        local_14 = *(int *)(iVar2 + iVar4 + 8) - *(int *)(iVar2 + 8);
        shape_edittool_cpp_CEditorTools_updatePercentage_FUN_00471760
                  (0x01BCD074,(float)local_14,
                   (float)((*(int *)(iVar5 + 8 + iVar2) + *(int *)(iVar5 + 4 + iVar2)) -
                          *(int *)(iVar2 + 8)));
        iVar2 = *(int *)(this_ptr->author_info + 4);
        iVar5 = engine_pod_cpp_CPodFile_computeFileCRC_FUN_004f86a0(this_ptr,iVar9);
        if (iVar5 != *(int *)(iVar4 + 0x10 + iVar2)) {
          shape_edittool_cpp_CStrList_add_FUN_00473cb0
                    (local_198,*(char **)(iVar4 + *(int *)(this_ptr->author_info + 4)));
        }
        iVar9 = iVar9 + 1;
        iVar4 = iVar4 + 0x14;
      } while (iVar9 < *(int *)this_ptr->author_info);
    }
    shape_edittool_cpp_FUN_004720c0(0x01BCD074);
    if (local_198[0].item_count != 0) {
      shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_00474d70
                (local_198,"!!!CRC CHECK FAILED!! on these files:",0xffffffff);
      shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)local_198,0);
      return 0;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_00474cf0((CPickList *)local_198,0);
  }
  if (this_ptr->pod_format_version == 1) {
    local_1c = 0x54;
  }
  else if (this_ptr->pod_format_version == 2) {
    local_1c = 8;
  }
  else {
    PTR_01cc4800 = "..\\engine\\pod.cpp";
    INT_01cc4804 = 0x1cf;
    core_main_c_FUN_004c8440("Invalid pod version!");
  }
  filename = this_ptr->filename;
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0046fff0
            (0x01BCD074,"Verifying CRC for %s...",filename);
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
