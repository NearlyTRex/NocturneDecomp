// Name: core_bugs.cpp_FUN_0041f620
// Address: 0041f620
// Address Range: [[0041f620, 0041f78a]]
// Convention: unknown
// Signature: void core_bugs_cpp_FUN_0041f620(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_bugs_cpp_FUN_0041f620(int param_1)

{
  int iVar1;
  int iVar2;
  int unaff_EDI;
  int iVar3;
  float fVar4;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  iStack_28 = 0;
  iStack_2c = param_1;
  do {
    fVar4 = (float)iStack_28 * _DAT_005f3e28 + *(float *)(param_1 + 0x1e628);
    iStack_1c = iStack_28 * 0x30;
    iVar1 = 0;
    iVar3 = iStack_2c;
    do {
      iStack_3c = (int)ROUND(fVar4 * _DAT_005f3e10);
      iStack_38 = (int)ROUND((*(float *)(iVar3 + 0x174f4) + (float)_DAT_005cc959) * _DAT_005f3e10);
      iStack_34 = (int)ROUND(((float)iVar1 * _DAT_005f3e28 + *(float *)(param_1 + 0x1e62c)) *
                             _DAT_005f3e10);
      iStack_18 = iVar1;
      engine_special_cpp_FUN_0055d723
                ((SProjectedVertex *)(*(int *)DAT_0060b280 + iStack_1c),(CVector3i *)&iStack_3c);
      iVar3 = iVar3 + 4;
      iStack_1c = iStack_1c + 0x240;
      iVar1 = iVar1 + 1;
    } while (iVar1 < 0xc);
    iStack_28 = iStack_28 + 1;
    iStack_2c = iStack_2c + 0x30;
  } while (iStack_28 < 0xc);
  engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0046b7e0(DAT_0060b280,-1);
  iStack_24 = 0xc;
  do {
    iStack_20 = iStack_24;
    iVar2 = 1;
    iVar3 = iStack_24;
    iVar1 = iStack_24 + -0xb;
    do {
      iStack_30 = iStack_20 + iVar2;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970(DAT_0060b280,iStack_30,iVar3)
      ;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + 1;
      engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0046b970(DAT_0060b280,iStack_24,iVar1)
      ;
      iVar1 = iVar1 + 1;
    } while (iVar2 < 0xc);
    unaff_EDI = unaff_EDI + 0xc;
  } while (unaff_EDI != 0x90);
  return;
}
