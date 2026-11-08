// Name: FUN_004bd570
// Address: 004bd570
// Address Range: [[004bd570, 004bdb0a]]
// Convention: unknown
// Signature: void FUN_004bd570(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004bd570(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int *)(param_1 + 0x228) != 0) {
    unaff_ESI = FUN_0058e9e0();
  }
  piVar1 = 0x01D34CB0;
  *(uint *)(param_1 + 600) = 1;
  if (*piVar1 == 0) {
    FUN_005b849c();
  }
  FUN_0040cee0();
  FUN_004bb2f0();
  FUN_004bb5b0();
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    _DAT_01cb8118 = FUN_0058e9e0();
  }
  FUN_00447de0();
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    iVar2 = FUN_0058e9e0();
    FUN_00436710(PTR_DAT_00609ed0,"G%s : %3.2f ms\n" + 1,"@gFilterFX->process()" + 1,
                 ((double)(iVar2 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
                 (double)*(float *)(0x01CB6900 + 0x284));
  }
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    _DAT_01cb8118 = FUN_0058e9e0();
  }
  FUN_005216e0();
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    iVar2 = FUN_0058e9e0();
    FUN_00436710(PTR_DAT_00609ed0,"G%s : %3.2f ms\n" + 1,"gScript->process()",
                 ((double)(iVar2 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
                 (double)*(float *)(0x01CB6900 + 0x284));
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    if (*(int *)(param_1 + 0x244) == 0) {
      *(uint *)(param_1 + 0xe0) = 0;
      FUN_0055a1d0();
      FUN_00538d10(0x01E661B8,*(uint *)(0x01E65CD0 + 0xc),2);
      FUN_004b3000();
      *(uint *)(0x01E65CD0 + 0x10) = 0;
    }
    else {
      FUN_004032b0();
    }
  }
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    _DAT_01cb8118 = FUN_0058e9e0();
  }
  FUN_00533010();
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    iVar2 = FUN_0058e9e0();
    FUN_00436710(PTR_DAT_00609ed0,"G%s : %3.2f ms\n" + 1,"gSet->process()",
                 ((double)(iVar2 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
                 (double)*(float *)(0x01CB6900 + 0x284));
  }
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    _DAT_01cb8118 = FUN_0058e9e0();
  }
  FUN_004c9670();
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    iVar2 = FUN_0058e9e0();
    FUN_00436710(PTR_DAT_00609ed0,"G%s : %3.2f ms\n" + 1,"gGore->process()",
                 ((double)(iVar2 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
                 (double)*(float *)(0x01CB6900 + 0x284));
  }
  FUN_00585e60();
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    _DAT_01cb8118 = FUN_0058e9e0();
  }
  FUN_0049c430();
  FUN_005a8180(0x026687B0,*(uint *)(0x01CB6900 + 0x284));
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    iVar2 = FUN_0058e9e0();
    FUN_00436710(PTR_DAT_00609ed0,"G%s : %3.2f ms\n" + 1,"gFire->process()",
                 ((double)(iVar2 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
                 (double)*(float *)(0x01CB6900 + 0x284));
  }
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    _DAT_01cb8118 = FUN_0058e9e0();
  }
  FUN_004893d0();
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    iVar2 = FUN_0058e9e0();
    FUN_00436710(PTR_DAT_00609ed0,"G%s : %3.2f ms\n" + 1,"gEventList->process()",
                 ((double)(iVar2 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
                 (double)*(float *)(0x01CB6900 + 0x284));
  }
  FUN_0057b970();
  FUN_0058a660();
  FUN_004b90d0();
  FUN_004a5f60();
  FUN_0059ac60();
  FUN_0052e940();
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    _DAT_01cb8118 = FUN_0058e9e0();
  }
  FUN_004fc940();
  if (*(int *)(0x01CB6900 + 0x228) == 1) {
    iVar2 = FUN_0058e9e0();
    FUN_00436710(PTR_DAT_00609ed0,"G%s : %3.2f ms\n" + 1,"gSit->process()",
                 ((double)(iVar2 - _DAT_01cb8118) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
                 (double)*(float *)(0x01CB6900 + 0x284));
  }
  iVar2 = 0x01CB6900;
  *(uint *)(param_1 + 600) = 0;
  if (*(int *)(iVar2 + 0x228) != 0) {
    iVar2 = FUN_0058e9e0();
    FUN_00436710(PTR_DAT_00609ed0,"simulate : %3.2f ms\n",
                 ((double)(iVar2 - unaff_ESI) * _DAT_005d8913 * _DAT_005d891b * _DAT_005d8923) /
                 (double)*(float *)(0x01CB6900 + 0x284));
  }
  *(float *)(param_1 + 0x270) = *(float *)(param_1 + 0x284) + *(float *)(param_1 + 0x270);
  return;
}
