// Name: cockpit_pkbitmap.cpp_parsePBGFile_FUN_005102b0
// Address: 005102b0
// Address Range: [[005102b0, 0051042c]]
// Convention: __cdecl
// Signature: CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_parsePBGFile_FUN_005102b0(CPackedBitmapSet *bitmap_set_ptr,_FILE *file_handle,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_parsePBGFile_FUN_005102b0(CPackedBitmapSet *bitmap_set_ptr,_FILE *file_handle,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

{
  SIZE_T SVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  int in_stack_00000018;
  char acStack_58 [4];
  byte abStack_20 [4];
  uint uStack_1c;
  CPackedBitmap *pCStack_18;
  CPackedBitmap *pCStack_14;
  
  bVar9 = 0;
  do {
    acStack_58[0] = -0x32;
    acStack_58[1] = '\x02';
    acStack_58[2] = 'Q';
    acStack_58[3] = '\0';
    SVar1 = _fread(abStack_20,8,1,file_handle);
    if (SVar1 == 1) {
      iVar4 = 4;
      bVar7 = false;
      iVar2 = 0;
      bVar8 = true;
      pbVar5 = abStack_20;
      pbVar6 = (byte *)0x6036fc;
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        bVar7 = *pbVar5 < *pbVar6;
        bVar8 = *pbVar5 == *pbVar6;
        pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
        pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
      } while (bVar8);
      if (!bVar8) {
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if ((iVar2 != 0) || (uStack_1c == 0)) goto LAB_005102f3;
      uVar3 = uStack_1c / (uint)frames_per_bitmap;
      operator_new_array();
      pCStack_18 = (CPackedBitmap *)__vec_new();
      if (pCStack_18 != (CPackedBitmap *)0x0) {
        iVar2 = 0;
        pCStack_14 = pCStack_18;
        if (0 < (int)uVar3) {
          do {
            iVar4 = skip_data_load;
            if ((-1 < selected_bitmap_index) && (iVar2 != selected_bitmap_index)) {
              iVar4 = 1;
            }
            cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0050ff60
                      (pCStack_14,file_handle,iVar4);
            iVar4 = 1;
            if (1 < in_stack_00000018) {
              do {
                cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_0050f170
                          ((CPackedBitmap *)&stack0xffffffa4);
                cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0050ff60
                          ((CPackedBitmap *)acStack_58,file_handle,1);
                builtin_strncpy(acStack_58,"\x01\x04Q",4);
                cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_0050f1e0
                          ((CPackedBitmap *)&stack0xffffffb4,0);
                iVar4 = iVar4 + 1;
              } while (iVar4 < frames_per_bitmap);
            }
            pCStack_14 = pCStack_14 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar2 < (int)uVar3);
        }
        bitmap_set_ptr->bitmap_count = uVar3;
        return pCStack_18;
      }
    }
    else {
      _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d71de4 = 0x573;
      core_main_c_FUN_004e4330();
LAB_005102f3:
      _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
      _DAT_01d71de4 = 0x574;
      core_main_c_FUN_004e4330();
    }
    _DAT_01d71de0 = "..\\cockpit\\pkbitmap.cpp";
    _DAT_01d71de4 = 0x575;
    core_main_c_FUN_004e4330();
  } while( true );
}
