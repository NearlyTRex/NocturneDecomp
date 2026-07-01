// Name: cockpit_pkbitmap.cpp_parsePBGFile_FUN_0054b9b0
// Address: 0054b9b0
// Address Range: [[0054b9b0, 0054bb36]]
// Convention: __cdecl
// Signature: CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_parsePBGFile_FUN_0054b9b0(CPackedBitmapSet *bitmap_set_ptr,_FILE *file_handle,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

#include "nocturne.h"

CPackedBitmap * __cdecl cockpit_pkbitmap_cpp_parsePBGFile_FUN_0054b9b0(CPackedBitmapSet *bitmap_set_ptr,_FILE *file_handle,int frames_per_bitmap,int skip_data_load,int selected_bitmap_index)

{
  SIZE_T SVar1;
  int iVar2;
  uint uVar3;
  void *array_memory;
  CPackedBitmap *pCVar1;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  int iVar5;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  CPackedBitmap local_44;
  byte local_20 [4];
  uint local_1c;
  CPackedBitmap *local_18;
  CPackedBitmap *local_14;
  uint element_count;
  WatcomTypeInfo *type_info;
  
  bVar9 = 0;
  do {
    SVar1 = _fread(local_20,8,1,file_handle);
    if (SVar1 == 1) {
      iVar4 = 4;
      bVar7 = false;
      iVar2 = 0;
      bVar8 = true;
      pbVar5 = local_20;
      pbVar6 = (byte *)("PBM\032PBG\032" + 4);
      do {
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
        pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
        bVar7 = *pbVar5 < *pbVar6;
        bVar8 = *pbVar5 == *pbVar6;
        pbVar5 = pbVar5;
        pbVar6 = pbVar6;
      } while (bVar8);
      if (!bVar8) {
        iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
      }
      if ((iVar2 != 0) || (local_1c == 0)) goto LAB_0054b9f3;
      uVar3 = local_1c / (uint)frames_per_bitmap;
      type_info = &g_CPackedBitmapTypeInfo;
      element_count = uVar3;
      array_memory = shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                               (uVar3 * 0x24 + 4,"..\\cockpit\\pkbitmap.cpp",1378);
      pCVar1 = (CPackedBitmap *)__vec_new(array_memory,element_count,type_info);
      if (pCVar1 != (CPackedBitmap *)0x0) {
        iVar5 = 0;
        local_14 = pCVar1;
        if (0 < (int)uVar3) {
          do {
            iVar3 = skip_data_load;
            if ((-1 < selected_bitmap_index) && (iVar5 != selected_bitmap_index)) {
              iVar3 = 1;
            }
            cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690(local_14,file_handle,iVar3);
            iVar3 = 1;
            if (1 < frames_per_bitmap) {
              do {
                cockpit_pkbitmap_cpp_CPackedBitmap_ctor_FUN_0054a820(&local_44);
                cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_0054b690(&local_44,file_handle,1)
                ;
                cockpit_pkbitmap_cpp_CPackedBitmap_dtor_FUN_0054a890(&local_44,0);
                iVar3 = iVar3 + 1;
              } while (iVar3 < frames_per_bitmap);
            }
            iVar5 = iVar5 + 1;
            local_14 = local_14 + 1;
          } while (iVar5 < (int)uVar3);
        }
        bitmap_set_ptr->bitmap_count = uVar3;
        return pCVar1;
      }
    }
    else {
      g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
      g_CurrentLineNumber = 1363;
      core_main_c_displayErrorAndQuit_FUN_00506f10("IO error reading PBG (possibly corrupt file).");
LAB_0054b9f3:
      g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
      g_CurrentLineNumber = 1364;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Corrupt data detected reading PBG.");
    }
    g_CurrentFilename = "..\\cockpit\\pkbitmap.cpp";
    g_CurrentLineNumber = 1365;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory reading PBG");
  } while( true );
}
