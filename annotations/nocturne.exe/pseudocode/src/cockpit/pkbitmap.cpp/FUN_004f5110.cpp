// Name: FUN_004f5110
// Address: 004f5110
// Address Range: [[004f5110, 004f5258]]
// Convention: unknown
// Signature: int FUN_004f5110(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_004f5110(int *param_1,uint param_2,int param_3,uint param_4,uint param_5,int param_6)

{
  int iVar1;
  int iVar2;
  byte auStack_178 [256];
  byte local_78 [100];
  int local_14;
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_2,"rb");
  if (iVar1 == 0) {
    _sprintf(local_78,"Unable to open PBG file %s",param_2);
    _DAT_01cc4804 = 0x598;
    _DAT_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    FUN_004c8440(local_78);
  }
  iVar2 = FUN_004f4f90(param_1,iVar1,param_4,param_5,param_6);
  local_14 = iVar2;
  _fclose(iVar1);
  iVar1 = 0;
  if (0 < *param_1) {
    do {
      iVar1 = iVar1 + 1;
      cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(iVar2,param_2);
      iVar2 = iVar2 + 0x24;
    } while (iVar1 < *param_1);
  }
  if (param_3 != 0) {
    iVar2 = 0;
    cockpit_ckptutil_c_loadACTToIndexedPalette_FUN_0042d3f0(param_2,auStack_178);
    iVar1 = local_14;
    if (0 < *param_1) {
      do {
        while ((-1 < param_6 && (iVar2 != param_6))) {
          iVar2 = iVar2 + 1;
          iVar1 = iVar1 + 0x24;
          if (*param_1 <= iVar2) {
            return local_14;
          }
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_applyPaletteToPackedData_FUN_004f4a50(iVar1,auStack_178);
        iVar2 = iVar2 + 1;
        iVar1 = iVar1 + 0x24;
      } while (iVar2 < *param_1);
    }
  }
  return local_14;
}
