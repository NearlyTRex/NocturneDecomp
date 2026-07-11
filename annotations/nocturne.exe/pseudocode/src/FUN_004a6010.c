// Name: FUN_004a6010
// Address: 004a6010
// Address Range: [[004a6010, 004a656b]]
// Convention: unknown
// Signature: void FUN_004a6010(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004a6010(int param_1)

{
  int *piVar1;
  int iVar2;
  int unaff_ESI;
  
  if (*(int *)(param_1 + 0x20c) != 0) {
    unaff_ESI = FUN_00558a30();
  }
  piVar1 = 0x01CEA280;
  *(uint *)(param_1 + 0x23c) = 1;
  if (*piVar1 == 0) {
    FUN_0056488c();
  }
  FUN_0040dd20();
  FUN_004a3880();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = FUN_00558a30();
  }
  FUN_0044c4a0();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = FUN_00558a30();
    FUN_0043ac60(PTR_DAT_005ad350,"G%s : %3.2f ms\n" + 1,"@gFilterFX->process()" + 1
                 ,((double)(iVar2 - _DAT_01c78b14) * _DAT_0058454a * _DAT_00584552 * _DAT_0058455a)
                  / (double)*(float *)(0x01C775EC + 0x264));
  }
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = FUN_00558a30();
  }
  FUN_004fe5b0();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = FUN_00558a30();
    FUN_0043ac60(PTR_DAT_005ad350,"G%s : %3.2f ms\n" + 1,"gScript->process()",
                 ((double)(iVar2 - _DAT_01c78b14) * _DAT_0058454a * _DAT_00584552 * _DAT_0058455a) /
                 (double)*(float *)(0x01C775EC + 0x264));
  }
  if (*(int *)(param_1 + 0xcc) != 0) {
    if (*(int *)(param_1 + 0x228) == 0) {
      *(uint *)(param_1 + 0xcc) = 0;
      FUN_0052ddf0();
      FUN_005125a0(0x01E57284,*(uint *)(0x01E56DA0 + 0xc),2);
      FUN_0049a890();
      *(uint *)(0x01E56DA0 + 0x10) = 0;
    }
    else {
      FUN_00403f50();
    }
  }
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = FUN_00558a30();
  }
  FUN_0050d040();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = FUN_00558a30();
    FUN_0043ac60(PTR_DAT_005ad350,"G%s : %3.2f ms\n" + 1,"gSet->process()",
                 ((double)(iVar2 - _DAT_01c78b14) * _DAT_0058454a * _DAT_00584552 * _DAT_0058455a) /
                 (double)*(float *)(0x01C775EC + 0x264));
  }
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = FUN_00558a30();
  }
  FUN_004b0030();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = FUN_00558a30();
    FUN_0043ac60(PTR_DAT_005ad350,"G%s : %3.2f ms\n" + 1,"gGore->process()",
                 ((double)(iVar2 - _DAT_01c78b14) * _DAT_0058454a * _DAT_00584552 * _DAT_0058455a) /
                 (double)*(float *)(0x01C775EC + 0x264));
  }
  FUN_00550860();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = FUN_00558a30();
  }
  FUN_0048a390();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = FUN_00558a30();
    FUN_0043ac60(PTR_DAT_005ad350,"G%s : %3.2f ms\n" + 1,"gFire->process()",
                 ((double)(iVar2 - _DAT_01c78b14) * _DAT_0058454a * _DAT_00584552 * _DAT_0058455a) /
                 (double)*(float *)(0x01C775EC + 0x264));
  }
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = FUN_00558a30();
  }
  FUN_0047aa50();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = FUN_00558a30();
    FUN_0043ac60(PTR_DAT_005ad350,"G%s : %3.2f ms\n" + 1,"gEventList->process()",
                 ((double)(iVar2 - _DAT_01c78b14) * _DAT_0058454a * _DAT_00584552 * _DAT_0058455a) /
                 (double)*(float *)(0x01C775EC + 0x264));
  }
  FUN_00549410();
  FUN_00554980();
  FUN_004a0550();
  FUN_00509140();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    _DAT_01c78b14 = FUN_00558a30();
  }
  FUN_004d92a0();
  if (*(int *)(0x01C775EC + 0x20c) == 1) {
    iVar2 = FUN_00558a30();
    FUN_0043ac60(PTR_DAT_005ad350,"G%s : %3.2f ms\n" + 1,"gSit->process()",
                 ((double)(iVar2 - _DAT_01c78b14) * _DAT_0058454a * _DAT_00584552 * _DAT_0058455a) /
                 (double)*(float *)(0x01C775EC + 0x264));
  }
  iVar2 = 0x01C775EC;
  *(uint *)(param_1 + 0x23c) = 0;
  if (*(int *)(iVar2 + 0x20c) != 0) {
    iVar2 = FUN_00558a30();
    FUN_0043ac60(PTR_DAT_005ad350,"simulate : %3.2f ms\n",
                 ((double)(iVar2 - unaff_ESI) * _DAT_0058454a * _DAT_00584552 * _DAT_0058455a) /
                 (double)*(float *)(0x01C775EC + 0x264));
  }
  *(float *)(param_1 + 0x250) = *(float *)(param_1 + 0x264) + *(float *)(param_1 + 0x250);
  return;
}
