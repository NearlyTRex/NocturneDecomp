// Name: FUN_004bf4b0
// Address: 004bf4b0
// Address Range: [[004bf4b0, 004bfa35]]
// Convention: unknown
// Signature: void FUN_004bf4b0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bf4b0(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int *)(param_1 + 0x230) != 0) {
    unaff_ESI = FUN_005806a0();
  }
  piVar1 = 0x01DA62F0;
  *(uint *)(param_1 + 0x260) = 1;
  if (*piVar1 == 0) {
    FUN_005a35cc();
  }
  FUN_0040cdc0();
  FUN_004bd6d0();
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    _DAT_01d22c98 = FUN_005806a0();
  }
  FUN_00459e90();
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    iVar2 = FUN_005806a0();
    FUN_00441ff0(PTR_DAT_005f1690,"G%s : %3.2f ms\n" + 1,"@gFilterFX->process()" + 1,
                 ((double)(iVar2 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
                 (double)*(float *)(0x01D2130C + 0x314));
  }
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    _DAT_01d22c98 = FUN_005806a0();
  }
  FUN_00528e00();
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    iVar2 = FUN_005806a0();
    FUN_00441ff0(PTR_DAT_005f1690,"G%s : %3.2f ms\n" + 1,"gScript->process()",
                 ((double)(iVar2 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
                 (double)*(float *)(0x01D2130C + 0x314));
  }
  if (*(int *)(param_1 + 0xe8) != 0) {
    if (*(int *)(param_1 + 0x24c) == 0) {
      *(uint *)(param_1 + 0xe8) = 0;
      FUN_0055fd30();
      FUN_0053f940(0x01ED78C8,*(uint *)(0x01ED73E0 + 0xc),2);
      FUN_004b4430();
      *(uint *)(0x01ED73E0 + 0x10) = 0;
    }
    else {
      FUN_004032b0();
    }
  }
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    _DAT_01d22c98 = FUN_005806a0();
  }
  FUN_00539c50();
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    iVar2 = FUN_005806a0();
    FUN_00441ff0(PTR_DAT_005f1690,"G%s : %3.2f ms\n" + 1,"gSet->process()",
                 ((double)(iVar2 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
                 (double)*(float *)(0x01D2130C + 0x314));
  }
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    _DAT_01d22c98 = FUN_005806a0();
  }
  FUN_004ce7e0();
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    iVar2 = FUN_005806a0();
    FUN_00441ff0(PTR_DAT_005f1690,"G%s : %3.2f ms\n" + 1,"gGore->process()",
                 ((double)(iVar2 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
                 (double)*(float *)(0x01D2130C + 0x314));
  }
  FUN_005772e0();
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    _DAT_01d22c98 = FUN_005806a0();
  }
  FUN_004a1760();
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    iVar2 = FUN_005806a0();
    FUN_00441ff0(PTR_DAT_005f1690,"G%s : %3.2f ms\n" + 1,"gFire->process()",
                 ((double)(iVar2 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
                 (double)*(float *)(0x01D2130C + 0x314));
  }
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    _DAT_01d22c98 = FUN_005806a0();
  }
  FUN_0048c020();
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    iVar2 = FUN_005806a0();
    FUN_00441ff0(PTR_DAT_005f1690,"G%s : %3.2f ms\n" + 1,"gEventList->process()",
                 ((double)(iVar2 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
                 (double)*(float *)(0x01D2130C + 0x314));
  }
  FUN_005724e0();
  FUN_0057bda0();
  FUN_004bb100();
  FUN_004ac6b0();
  FUN_00411a90();
  if (*(int *)(0x01D1A05C + 0x40) == 0) {
    FUN_005353e0();
  }
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    _DAT_01d22c98 = FUN_005806a0();
  }
  FUN_004f70a0();
  if (*(int *)(0x01D2130C + 0x230) == 1) {
    iVar2 = FUN_005806a0();
    FUN_00441ff0(PTR_DAT_005f1690,"G%s : %3.2f ms\n" + 1,"gSit->process()",
                 ((double)(iVar2 - _DAT_01d22c98) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
                 (double)*(float *)(0x01D2130C + 0x314));
  }
  iVar2 = 0x01D2130C;
  *(uint *)(param_1 + 0x260) = 0;
  if (*(int *)(iVar2 + 0x230) != 0) {
    iVar2 = FUN_005806a0();
    FUN_00441ff0(PTR_DAT_005f1690,"simulate : %3.2f ms\n",
                 ((double)(iVar2 - unaff_ESI) * _DAT_005c3a70 * _DAT_005c3a78 * _DAT_005c3a80) /
                 (double)*(float *)(0x01D2130C + 0x314));
  }
  *(float *)(param_1 + 0x278) = *(float *)(param_1 + 0x314) + *(float *)(param_1 + 0x278);
  return;
}
