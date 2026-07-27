// Name: cockpit_pkbitmap.cpp_CPackedBitmap_openPBMFile_FUN_004f4e40
// Address: 004f4e40
// Address Range: [[004f4e40, 004f4ee1]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_openPBMFile_FUN_004f4e40(uint param_1,uint param_2,int param_3)

{
  int iVar1;
  byte auStack_6c [100];
  
  cockpit_pkbitmap_cpp_FUN_004f3f50(param_1);
  cockpit_pkbitmap_cpp_CPackedBitmap_setFilename_FUN_004f3fc0(param_1,param_2);
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_1,"rb");
  if (iVar1 == 0) {
    _sprintf(auStack_6c,"Unable to open PBM file %s",param_1);
    INT_01cc4804 = 0x4ff;
    PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    core_main_c_FUN_004c8440(auStack_6c);
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(param_1,iVar1,0);
  _fclose(iVar1);
  if (param_3 == 0) {
    return;
  }
  cockpit_pkbitmap_cpp_CPackedBitmap_applyPalette_FUN_004f4ab0(param_1);
  return;
}
