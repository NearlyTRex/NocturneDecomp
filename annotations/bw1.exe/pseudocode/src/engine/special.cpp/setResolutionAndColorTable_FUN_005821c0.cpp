// Name: engine_special.cpp_setResolutionAndColorTable_FUN_005821c0
// Address: 005821c0
// Address Range: [[005821c0, 005822dc]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005821c0(int width,int height,int bits_per_pixel)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005821c0(int width,int height,int bits_per_pixel)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  _DAT_02c83380 = 0;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel = 0x10;
  }
  if ((_DAT_02c834ac == 0) && (iVar2 = engine_special_cpp_FUN_00581310(_DAT_02c834c0), iVar2 == 0))
  {
    return 0;
  }
  iVar2 = (*_DAT_02c83398)(width,height,bits_per_pixel,&DAT_01c4354c);
  if (iVar2 == 0) {
    _DAT_01c50948 = iVar2;
    return 0;
  }
  (*_DAT_02c833fc)(&DAT_01c4e9f8,&DAT_01c4dad0);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004ecf70();
  (*_DAT_02c833ec)(_DAT_02c834b4,_DAT_02c834b8,_DAT_02c834bc);
  _DAT_01c50948 = 1;
  _DAT_02c834c4 = bits_per_pixel;
  iVar2 = engine_special_cpp_FUN_00581f50();
  piVar1 = _DAT_01c4354c;
  if (iVar2 == 0) {
    return 1;
  }
  if (DAT_0061b4a0 == 0x10) {
    iVar2 = *_DAT_01c4354c;
    *(short *)_DAT_01c4354c = -0x5433;
    bVar3 = (short)*piVar1 != -0x5433;
    *(short *)piVar1 = (short)iVar2;
  }
  else {
    if (DAT_0061b4a0 != 0x20) goto LAB_0058229a;
    iVar2 = *_DAT_01c4354c;
    *_DAT_01c4354c = -0x55443323;
    bVar3 = *piVar1 != -0x55443323;
    *piVar1 = iVar2;
  }
  _DAT_02c83380 = (uint)bVar3;
LAB_0058229a:
  engine_special_cpp_unlockFrame_FUN_00581fa0(0);
  return 1;
}
