// Name: engine_2d.c_FUN_004036c0
// Address: 004036c0
// Address Range: [[004036c0, 0040378b]]
// Convention: unknown
// Signature: int engine_2d_c_FUN_004036c0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_2d_c_FUN_004036c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_00713a38 == 0) {
    _DAT_01d1d400 = "..\\engine\\2d.c";
    _DAT_01d1d404 = 0x9e5;
    core_main_c_FUN_005030e0("unmapFrameBuffer - frame buffer was not mapped!");
  }
  DAT_0061b498 = _DAT_00713a38;
  DAT_0061b49c = _DAT_00713a3c;
  _DAT_01c4f008 = _DAT_00713a40;
  _DAT_01c4f00c = _DAT_00713a44;
  _DAT_01c4f010 = _DAT_00713a48;
  _DAT_01c4f014 = _DAT_00713a4c;
  DAT_0061b4a0 = _DAT_00713a50;
  iVar2 = _DAT_00713a50;
  if (0 < _DAT_00713a3c) {
    iVar1 = _DAT_00713a3c * 4;
    iVar2 = 0;
    iVar3 = _DAT_00713a54;
    do {
      *(int *)(&DAT_01c4354c + iVar2) = iVar3;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + _DAT_00713a58;
    } while (iVar2 < iVar1);
  }
  _DAT_00713a38 = 0;
  return iVar2;
}
