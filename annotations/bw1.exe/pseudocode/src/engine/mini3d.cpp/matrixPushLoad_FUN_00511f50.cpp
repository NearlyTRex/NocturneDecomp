// Name: engine_mini3d.cpp_matrixPushLoad_FUN_00511f50
// Address: 00511f50
// Address Range: [[00511f50, 00511fbe]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_00511f50(float *frame)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_matrixPushLoad_FUN_00511f50(float *frame)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
  
  bVar4 = 0;
  _DAT_01d22580 = _DAT_01d22580 + 1;
  if (9 < _DAT_01d22580) {
    _DAT_01d1d400 = "..\\engine\\mini3d.cpp";
    _DAT_01d1d404 = 0x498;
    core_main_c_FUN_005030e0("Matrix unbalance");
  }
  iVar1 = _DAT_01d22580 * 0x3c;
  pfVar3 = (float *)(&DAT_01d22584 + iVar1);
  for (iVar2 = 0xf; iVar2 != 0; iVar2 = iVar2 + -1) {
    *pfVar3 = *frame;
    frame = frame + (uint)bVar4 * -2 + 1;
    pfVar3 = pfVar3 + (uint)bVar4 * -2 + 1;
  }
  _DAT_01d2257c = (float *)(&DAT_01d22584 + iVar1);
  _DAT_01d24ffc = 1;
  return;
}
