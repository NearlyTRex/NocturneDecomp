// Name: cockpit_pkbmpset.cpp_FUN_00517a60
// Address: 00517a60
// Address Range: [[00517a60, 00517c31]]
// Convention: unknown
// Signature: void cockpit_pkbmpset_cpp_FUN_00517a60(CPackedBitmapSet *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void cockpit_pkbmpset_cpp_FUN_00517a60(CPackedBitmapSet *param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  ulong size;
  int iVar3;
  byte auStack_148 [100];
  byte auStack_e4 [100];
  byte auStack_80 [100];
  CPackedBitmapSet *pCStack_1c;
  uchar *puStack_18;
  _FILE *p_Stack_14;
  
  p_Stack_14 = engine_dosio_cpp_FUN_00460c70
                         ((char *)0x5e20a0,(char *)(param_1 + 8),(char *)0x5e209d);
  if (p_Stack_14 == (_FILE *)0x0) {
    FUN_005b7790(auStack_e4,"Unable to open %s in CPackedBitmapSet::reloadJoinedRAW",param_1 + 8);
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    _DAT_01d046a4 = 0x108;
    core_main_c_FUN_004e4500(auStack_e4);
  }
  size = *(int *)(param_1 + 0x1c) * *(int *)(param_1 + 0x20);
  puStack_18 = FUN_005b8580(size);
  if (puStack_18 == (uchar *)0x0) {
    FUN_005b7790(auStack_148,"Can't allocate %u bytes for RAW buffer in CPackedBitmapSet::loadJoinedRAW",size);
    _DAT_01d046a4 = 0x115;
    _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
    core_main_c_FUN_004e4500(auStack_148);
  }
  iVar2 = 0;
  if (0 < *(int *)param_1) {
    pCStack_1c = param_1 + 8;
    iVar3 = 0;
    do {
      if ((param_3 < 0) || (iVar2 == param_3)) {
        iVar1 = _fread(puStack_18,size,1,p_Stack_14);
        if (iVar1 != 1) {
          FUN_005b7790(auStack_80,"Error reading from %s in CPackedBitmapSet::loadJoinedRAW",pCStack_1c);
          _DAT_01d046a4 = 0x128;
          _DAT_01d046a0 = "..\\cockpit\\pkbmpset.cpp";
          core_main_c_FUN_004e4500(auStack_80);
        }
        cockpit_pkbitmap_cpp_CPackedBitmap_copyRawDataToCompressedRuns_FUN_005169b0
                  ((CPackedBitmap *)(*(int *)(param_1 + 4) + iVar3),puStack_18,
                   *(int *)(param_1 + 0x1c));
      }
      else {
        _fseek(p_Stack_14,size,1);
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar2 < *(int *)param_1);
  }
  FUN_005b86a0(puStack_18);
  _fclose(p_Stack_14);
  if (param_2 == 0) {
    return;
  }
  cockpit_pkbmpset_cpp_CPackedBitmapSet_loadStoredACTFile_FUN_00517f80(param_1);
  return;
}
