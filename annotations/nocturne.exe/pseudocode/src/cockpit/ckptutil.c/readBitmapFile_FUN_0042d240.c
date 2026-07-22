// Name: cockpit_ckptutil.c_readBitmapFile_FUN_0042d240
// Address: 0042d240
// Address Range: [[0042d240, 0042d360]]
// Convention: __cdecl
// Signature: int __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(undefined4 param_1,int param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl cockpit_ckptutil_c_readBitmapFile_FUN_0042d240(uint param_1,int param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  byte local_60 [80];
  
  if (param_2 == 0) {
    param_2 = malloc(param_3);
    if (param_2 == 0) {
      _sprintf(local_60,"Unable to allocate %u bytes for bitmap file (%s).",param_3,param_1);
      _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
      _DAT_01cc4804 = 0xd2;
      FUN_004c8440(local_60);
    }
  }
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60("art",param_1,"rb");
  if (iVar1 == 0) {
    _sprintf(local_60,"Unable to open bitmap file (%s).",param_1);
    _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
    _DAT_01cc4804 = 0xdb;
    FUN_004c8440(local_60);
  }
  iVar2 = _fread(param_2,param_3,1,iVar1);
  if (iVar2 == 1) {
    _fclose(iVar1);
    return param_2;
  }
  _sprintf(local_60,"Unable to read bitmap file (%s).",param_1);
  _fclose(iVar1);
  _DAT_01cc4804 = 0xe3;
  _DAT_01cc4800 = "..\\cockpit\\ckptutil.c";
  FUN_004c8440(local_60);
  _fclose(iVar1);
  return param_2;
}
