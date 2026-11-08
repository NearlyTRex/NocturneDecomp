// Name: FUN_004d8060
// Address: 004d8060
// Address Range: [[004d8060, 004d85e5]]
// Convention: unknown
// Signature: void FUN_004d8060(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004d8060(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int *)(param_1 + 0x228) != 0) {
    unaff_ESI = FUN_005b2420();
  }
  piVar1 = 0x01D51C20;
  *(uint *)(param_1 + 600) = 1;
  if (*piVar1 == 0) {
    FUN_005c084c();
  }
  FUN_0040cb80();
  FUN_004d60e0();
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    _DAT_01cd0c90 = FUN_005b2420();
  }
  FUN_0045df40();
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    iVar2 = FUN_005b2420();
    FUN_00445430(PTR_DAT_00611100,"G%s : %3.2f ms\n" + 1,"gFilterFX->process()",
                 ((double)(iVar2 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
                 (double)*(float *)(0x01CCF390 + 0x294));
  }
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    _DAT_01cd0c90 = FUN_005b2420();
  }
  FUN_005437f0();
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    iVar2 = FUN_005b2420();
    FUN_00445430(PTR_DAT_00611100,"G%s : %3.2f ms\n" + 1,"gScript->process()",
                 ((double)(iVar2 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
                 (double)*(float *)(0x01CCF390 + 0x294));
  }
  if (*(int *)(param_1 + 0xe0) != 0) {
    if (*(int *)(param_1 + 0x244) == 0) {
      *(uint *)(param_1 + 0xe0) = 0;
      FUN_0057cc00();
      FUN_00559f80(0x01E82168,*(uint *)(0x01E81C80 + 0xc),2);
      FUN_004cbf10();
      *(uint *)(0x01E81C80 + 0x10) = 0;
    }
    else {
      FUN_004032b0();
    }
  }
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    _DAT_01cd0c90 = FUN_005b2420();
  }
  FUN_005542c0();
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    iVar2 = FUN_005b2420();
    FUN_00445430(PTR_DAT_00611100,"G%s : %3.2f ms\n" + 1,"gSet->process()",
                 ((double)(iVar2 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
                 (double)*(float *)(0x01CCF390 + 0x294));
  }
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    _DAT_01cd0c90 = FUN_005b2420();
  }
  FUN_004e5e80();
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    iVar2 = FUN_005b2420();
    FUN_00445430(PTR_DAT_00611100,"G%s : %3.2f ms\n" + 1,"gGore->process()",
                 ((double)(iVar2 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
                 (double)*(float *)(0x01CCF390 + 0x294));
  }
  FUN_005a9a90();
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    _DAT_01cd0c90 = FUN_005b2420();
  }
  FUN_004b4dd0();
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    iVar2 = FUN_005b2420();
    FUN_00445430(PTR_DAT_00611100,"G%s : %3.2f ms\n" + 1,"gFire->process()",
                 ((double)(iVar2 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
                 (double)*(float *)(0x01CCF390 + 0x294));
  }
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    _DAT_01cd0c90 = FUN_005b2420();
  }
  FUN_004a1a40();
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    iVar2 = FUN_005b2420();
    FUN_00445430(PTR_DAT_00611100,"G%s : %3.2f ms\n" + 1,"gEventList->process()",
                 ((double)(iVar2 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
                 (double)*(float *)(0x01CCF390 + 0x294));
  }
  FUN_0059f4f0();
  FUN_005ae190();
  FUN_004d27b0();
  FUN_004be970();
  FUN_00415cd0();
  if (*(int *)(0x01CC8004 + 0x40) == 0) {
    FUN_0054fc20();
  }
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    _DAT_01cd0c90 = FUN_005b2420();
  }
  FUN_0051b8d0();
  if (*(int *)(0x01CCF390 + 0x228) == 1) {
    iVar2 = FUN_005b2420();
    FUN_00445430(PTR_DAT_00611100,"G%s : %3.2f ms\n" + 1,"gSit->process()",
                 ((double)(iVar2 - _DAT_01cd0c90) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
                 (double)*(float *)(0x01CCF390 + 0x294));
  }
  iVar2 = 0x01CCF390;
  *(uint *)(param_1 + 600) = 0;
  if (*(int *)(iVar2 + 0x228) != 0) {
    iVar2 = FUN_005b2420();
    FUN_00445430(PTR_DAT_00611100,"simulate : %3.2f ms\n",
                 ((double)(iVar2 - unaff_ESI) * _DAT_005e346c * _DAT_005e3474 * _DAT_005e347c) /
                 (double)*(float *)(0x01CCF390 + 0x294));
  }
  *(float *)(param_1 + 0x270) = *(float *)(param_1 + 0x294) + *(float *)(param_1 + 0x270);
  return;
}
