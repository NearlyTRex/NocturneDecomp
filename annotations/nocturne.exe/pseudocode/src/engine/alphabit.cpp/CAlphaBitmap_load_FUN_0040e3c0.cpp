// Name: engine_alphabit.cpp_CAlphaBitmap_load_FUN_0040e3c0
// Address: 0040e3c0
// Address Range: [[0040e3c0, 0040e708]]
// Convention: __cdecl
// Signature: void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(int *param_1,undefined4 param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(int *param_1,uint param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  byte local_114 [256];
  int local_14;
  
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(param_1);
  param_1[3] = param_3;
  param_1[4] = param_4;
  iVar1 = malloc(param_3 * param_4);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "@..\\engine\\alphabit.cpp" + 1;
    _DAT_01cc4804 = 0x53;
    FUN_004c8440("CAlphaBitmap::load - Out of memory");
  }
  iVar1 = malloc(param_3 * param_4);
  param_1[1] = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\engine\\alphabit.cpp";
    _DAT_01cc4804 = 0x56;
    FUN_004c8440("CAlphaBitmap::load - Out of memory");
  }
  iVar1 = malloc(0x400);
  param_1[2] = iVar1;
  if (iVar1 == 0) {
    _DAT_01cc4800 = "..\\engine\\alphabit.cpp";
    _DAT_01cc4804 = 0x59;
    FUN_004c8440("CAlphaBitmap::load - Out of memory");
  }
  _sprintf(local_114,"%s.raw",param_2);
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60(&DAT_00578151,local_114,&DAT_0057814e);
  if (local_14 == 0) {
    _DAT_01cc4800 = "..\\engine\\alphabit.cpp";
    _DAT_01cc4804 = 0x5f;
    FUN_004c8440("CAlphaBitmap::load - Can't open %s",local_114);
  }
  iVar1 = local_14;
  _fread(*param_1,param_3,param_4,local_14);
  _fclose(iVar1);
  _sprintf(local_114,"%s.act",param_2);
  local_14 = engine_dosio_cpp_getFile_FUN_00456a60(&DAT_00578199,local_114,&DAT_00578196);
  if (local_14 == 0) {
    _DAT_01cc4800 = "..\\engine\\alphabit.cpp";
    _DAT_01cc4804 = 0x65;
    FUN_004c8440("CAlphaBitmap::load - Can't open %s",local_114);
  }
  iVar1 = 0;
  do {
    iVar2 = _fgetc(local_14);
    iVar3 = _fgetc(local_14);
    uVar4 = _fgetc(local_14);
    if (DAT_005b7624 == 0x20) {
      uVar5 = iVar3 << (DAT_01c00630 & 0x1f) | iVar2 << (DAT_01c00624 & 0x1f);
      uVar4 = uVar4 << (DAT_01c0063c & 0x1f);
    }
    else {
      uVar5 = iVar2 << 0x10 | iVar3 << 8;
    }
    iVar2 = iVar1 + 4;
    *(uint *)(iVar1 + param_1[2]) = uVar5 | uVar4;
    iVar1 = iVar2;
  } while (iVar2 != 0x400);
  _fclose(local_14);
  _sprintf(local_114,"%s.opa",param_2);
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60(&DAT_005781e1,local_114,&DAT_005781de);
  if (iVar1 == 0) {
    param_3 = param_3 * param_4;
    iVar1 = 0;
    if (0 < param_3) {
      do {
        while (*(int *)(param_1[2] + (uint)*(byte *)(*param_1 + iVar1) * 4) != 0) {
          *(byte *)(param_1[1] + iVar1) = 0xff;
          iVar1 = iVar1 + 1;
          if (param_3 <= iVar1) {
            return;
          }
        }
        *(byte *)(param_1[1] + iVar1) = 0;
        iVar1 = iVar1 + 1;
      } while (iVar1 < param_3);
    }
    return;
  }
  _fread(param_1[1],param_3,param_4,iVar1);
  _fclose(iVar1);
  return;
}
