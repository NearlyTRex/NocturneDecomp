// Name: cockpit_pkbitmap.cpp_FUN_004f5110
// Address: 004f5110
// Address Range: [[004f5110, 004f5258]]
// Convention: unknown
// Signature: CPackedBitmap * cockpit_pkbitmap_cpp_FUN_004f5110(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

CPackedBitmap * cockpit_pkbitmap_cpp_FUN_004f5110(int *param_1,char *param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  _FILE *file_handle;
  CPackedBitmap *this_ptr;
  int iVar1;
  CPackedBitmap *unaff_EDI;
  uchar auStack_170 [248];
  byte local_78 [100];
  CPackedBitmap *local_14;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60("art",param_2,"rb");
  if (file_handle == (_FILE *)0x0) {
    _sprintf(local_78,"Unable to open PBG file %s",param_2);
    INT_01cc4804 = 0x598;
    PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_FUN_004c8440(local_78);
  }
  this_ptr = (CPackedBitmap *)
             cockpit_pkbitmap_cpp_FUN_004f4f90(param_1,file_handle,param_4,param_5,param_6);
  local_14 = this_ptr;
  _fclose(file_handle);
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(this_ptr,param_2);
      this_ptr = this_ptr + 1;
    } while (iVar1 < *param_1);
  }
  if (param_3 != 0) {
    iVar1 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(param_2,&stack0xfffffe88);
    if (0 < *param_1) {
      do {
        while ((-1 < param_6 && (iVar1 != param_6))) {
          iVar1 = iVar1 + 1;
          unaff_EDI = unaff_EDI + 1;
          if (*param_1 <= iVar1) {
            return local_14;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50
                  (unaff_EDI,auStack_170);
        iVar1 = iVar1 + 1;
        unaff_EDI = unaff_EDI + 1;
      } while (iVar1 < *param_1);
    }
  }
  return local_14;
}
