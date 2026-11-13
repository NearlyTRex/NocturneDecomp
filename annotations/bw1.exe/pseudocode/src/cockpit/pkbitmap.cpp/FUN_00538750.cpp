// Name: cockpit_pkbitmap.cpp_FUN_00538750
// Address: 00538750
// Address Range: [[00538750, 00538898]]
// Convention: unknown
// Signature: CPackedBitmap * cockpit_pkbitmap_cpp_FUN_00538750(CPackedBitmapSet *param_1,CPackedBitmap *param_2,undefined4 param_3,int param_4,int param_5,int param_6,char *param_7,int param_8)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPackedBitmap * cockpit_pkbitmap_cpp_FUN_00538750(CPackedBitmapSet *param_1,CPackedBitmap *param_2,uint param_3,int param_4,int param_5,int param_6,char *param_7,int param_8)

{
  _FILE *file_handle;
  CPackedBitmap *pCVar1;
  int iVar2;
  CPackedBitmap *this_ptr;
  uchar auStack_15c [228];
  char acStack_78 [104];
  
  file_handle = engine_dosio_cpp_FUN_00479180("art",param_2->filename,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(acStack_78,"Unable to open PBG file %s");
    _DAT_01d1d404 = 0x5b6;
    _DAT_01d1d400 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_FUN_005030e0(acStack_78);
  }
  pCVar1 = cockpit_pkbitmap_cpp_parsePBGFile_FUN_005385d0
                     (param_1,file_handle,param_4,param_5,param_6);
  _fclose(file_handle);
  iVar2 = 0;
  this_ptr = pCVar1;
  if (0 < param_1->bitmap_count) {
    do {
      iVar2 = iVar2 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_005375c0(this_ptr,param_7);
      this_ptr = this_ptr + 1;
    } while (iVar2 < param_1->bitmap_count);
  }
  if (param_8 != 0) {
    iVar2 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_00437400(param_7,&stack0xfffffe9c);
    if (0 < param_1->bitmap_count) {
      do {
        while ((-1 < param_6 && (iVar2 != param_6))) {
          iVar2 = iVar2 + 1;
          param_2 = param_2 + 1;
          if (param_1->bitmap_count <= iVar2) {
            return pCVar1;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00538050
                  (param_2,auStack_15c);
        iVar2 = iVar2 + 1;
        param_2 = param_2 + 1;
      } while (iVar2 < param_1->bitmap_count);
    }
  }
  return pCVar1;
}
