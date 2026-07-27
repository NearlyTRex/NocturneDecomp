// Name: engine_2d.c_unmapFrameBuffer_FUN_00404360
// Address: 00404360
// Address Range: [[00404360, 0040442b]]
// Convention: unknown
// Signature: int engine_2d_c_unmapFrameBuffer_FUN_00404360(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int engine_2d_c_unmapFrameBuffer_FUN_00404360(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (DAT_006b023c == 0) {
    PTR_01cc4800 = "..\\engine\\2d.c";
    INT_01cc4804 = 0x9e8;
    core_main_c_FUN_004c8440("unmapFrameBuffer - frame buffer was not mapped!");
  }
  DAT_005b761c = DAT_006b023c;
  DAT_005b7620 = DAT_006b0240;
  _DAT_01c00c58 = DAT_006b0244;
  _DAT_01c00c5c = DAT_006b0248;
  _DAT_01c00c60 = DAT_006b024c;
  _DAT_01c00c64 = DAT_006b0250;
  DAT_005b7624 = DAT_006b0254;
  iVar2 = DAT_006b0254;
  if (0 < DAT_006b0240) {
    iVar1 = DAT_006b0240 * 4;
    iVar2 = 0;
    iVar3 = DAT_006b0258;
    do {
      *(int *)(&DAT_01bd2fa0 + iVar2) = iVar3;
      iVar2 = iVar2 + 4;
      iVar3 = iVar3 + DAT_006b025c;
    } while (iVar2 < iVar1);
  }
  DAT_006b023c = 0;
  return iVar2;
}
