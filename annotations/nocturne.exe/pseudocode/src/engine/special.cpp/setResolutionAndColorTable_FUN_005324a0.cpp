// Name: engine_special.cpp_setResolutionAndColorTable_FUN_005324a0
// Address: 005324a0
// Address Range: [[005324a0, 005325b3]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005324a0(int width,int height,int bits_per_pixel)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl engine_special_cpp_setResolutionAndColorTable_FUN_005324a0(int width,int height,int bits_per_pixel)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  
  _DAT_02dc9d70 = 0;
  if (bits_per_pixel < 0x10) {
    bits_per_pixel = 0x10;
  }
  if ((INT_02dc9e04 == 0) &&
     (iVar2 = engine_special_cpp_loadExternalRenderer_FUN_00531780(_DAT_02dc9e18), iVar2 == 0)) {
    return 0;
  }
  iVar2 = (*_DAT_02dc9d84)(width,height,bits_per_pixel,&DAT_01bd2fa0);
  if (iVar2 == 0) {
    _DAT_01c02594 = iVar2;
    return 0;
  }
  (*_DAT_02dc9ddc)(&DAT_01c00648,&DAT_01bff720);
  wincore_wddvmem_cpp_convertPaletteToDirectColor_FUN_004b63f0();
  (*_DAT_02dc9dcc)(_DAT_02dc9e0c,_DAT_02dc9e10,_DAT_02dc9e14);
  _DAT_01c02594 = 1;
  _DAT_02dc9e1c = bits_per_pixel;
  engine_special_cpp_lockFrame_FUN_005322e0();
  piVar1 = _DAT_01bd2fa0;
  if (DAT_005b7624 == 0x10) {
    iVar2 = *_DAT_01bd2fa0;
    *(short *)_DAT_01bd2fa0 = -0x5433;
    bVar3 = (short)*piVar1 != -0x5433;
    *(short *)piVar1 = (short)iVar2;
  }
  else {
    if (DAT_005b7624 != 0x20) goto LAB_00532576;
    iVar2 = *_DAT_01bd2fa0;
    *_DAT_01bd2fa0 = -0x55443323;
    bVar3 = *piVar1 != -0x55443323;
    *piVar1 = iVar2;
  }
  _DAT_02dc9d70 = (uint)bVar3;
LAB_00532576:
  engine_special_cpp_FUN_00532320();
  return 1;
}
