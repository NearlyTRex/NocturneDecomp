// Name: engine_special.cpp_setResolutionAndColorTable_FUN_0055f770
// Address: 0055f770
// Address Range: [[0055f770, 0055f888]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_0055f770(int width,int height,int bits_per_pixel)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_0055f770(int width,int height,int bits_per_pixel)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  _DAT_0264bbb0 = 0;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel = 0x10;
  }
  if ((_DAT_0264bcdc == 0) && (iVar2 = engine_special_cpp_FUN_0055e8c0(_DAT_0264bcf0), iVar2 == 0))
  {
    return 0;
  }
  iVar2 = (*_DAT_0264bbc8)(width,height,bits_per_pixel,&DAT_01c2a38c);
  if (iVar2 == 0) {
    _DAT_01c37788 = iVar2;
    return 0;
  }
  (*_DAT_0264bc2c)(&DAT_01c35838,&DAT_01c34910);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004d0d10();
  (*_DAT_0264bc1c)(_DAT_0264bce4,_DAT_0264bce8,_DAT_0264bcec);
  _DAT_01c37788 = 1;
  _DAT_0264bcf4 = bits_per_pixel;
  engine_special_cpp_FUN_0055f500();
  piVar1 = _DAT_01c2a38c;
  if (DAT_006141c0 == 0x10) {
    iVar2 = *_DAT_01c2a38c;
    *(short *)_DAT_01c2a38c = -0x5433;
    bVar3 = (short)*piVar1 != -0x5433;
    *(short *)piVar1 = (short)iVar2;
  }
  else {
    if (DAT_006141c0 != 0x20) goto LAB_0055f846;
    iVar2 = *_DAT_01c2a38c;
    *_DAT_01c2a38c = -0x55443323;
    bVar3 = *piVar1 != -0x55443323;
    *piVar1 = iVar2;
  }
  _DAT_0264bbb0 = (uint)bVar3;
LAB_0055f846:
  engine_special_cpp_FUN_0055f550(0);
  return 1;
}
