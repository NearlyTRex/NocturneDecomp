// Name: cockpit_pkbitmap.cpp_FUN_00517400
// Address: 00517400
// Address Range: [[00517400, 00517548]]
// Convention: unknown
// Signature: CPackedBitmap * cockpit_pkbitmap_cpp_FUN_00517400(int *param_1,char *param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CPackedBitmap * cockpit_pkbitmap_cpp_FUN_00517400(int *param_1,char *param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  _FILE *p_Var1;
  CPackedBitmap *this_ptr;
  int iVar2;
  CPackedBitmap *unaff_EDI;
  uchar auStack_170 [248];
  char acStack_78 [100];
  CPackedBitmap *pCStack_14;
  
  p_Var1 = engine_dosio_cpp_FUN_00460c70((char *)0x5e1e81,param_2,(char *)0x5e1e7e);
  if (p_Var1 == (_FILE *)0x0) {
    _sprintf(acStack_78,"Unable to open PBG file %s");
    _DAT_01d046a4 = 0x5b4;
    _DAT_01d046a0 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_FUN_004e4500(acStack_78);
  }
  this_ptr = (CPackedBitmap *)
             cockpit_pkbitmap_cpp_parsePBGFile_FUN_00517280(param_1,p_Var1,param_4,param_5,param_6);
  pCStack_14 = this_ptr;
  _fclose(p_Var1);
  iVar2 = 0;
  if (0 < *param_1) {
    do {
      iVar2 = iVar2 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_00516270(this_ptr,param_2);
      this_ptr = this_ptr + 1;
    } while (iVar2 < *param_1);
  }
  if (param_3 != 0) {
    iVar2 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042c6f0(param_2,&stack0xfffffe88);
    if (0 < *param_1) {
      do {
        while ((-1 < param_6 && (iVar2 != param_6))) {
          iVar2 = iVar2 + 1;
          unaff_EDI = unaff_EDI + 1;
          if (*param_1 <= iVar2) {
            return pCStack_14;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_00516d00
                  (unaff_EDI,auStack_170);
        iVar2 = iVar2 + 1;
        unaff_EDI = unaff_EDI + 1;
      } while (iVar2 < *param_1);
    }
  }
  return pCStack_14;
}
