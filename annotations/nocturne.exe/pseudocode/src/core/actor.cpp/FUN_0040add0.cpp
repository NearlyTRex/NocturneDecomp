// Name: core_actor.cpp_FUN_0040add0
// Address: 0040add0
// Address Range: [[0040add0, 0040b08e]]
// Convention: unknown
// Signature: void core_actor_cpp_FUN_0040add0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_actor_cpp_FUN_0040add0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  float local_9c [30];
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  uint uStack_14;
  
  __arrinit(local_9c,10,&g_CVectorTypeInfo_005993b0);
  iStack_18 = (**(code **)(*(int *)(param_1 + 0x14c) + 0x4c))(param_1,local_9c);
  pfVar6 = local_9c;
  iVar4 = 0;
  if (0 < iStack_18) {
    do {
      uStack_14 = (uint)DAT_01bff320;
      iStack_24 = (int)ROUND(*pfVar6 * _DAT_005992b0);
      iStack_20 = (int)ROUND(pfVar6[1] * _DAT_005992b0);
      iStack_1c = (int)ROUND(pfVar6[2] * _DAT_005992b0);
      engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*0x01B4D738 + 0xea5d0,&iStack_24);
      iVar5 = *0x01B4D738;
      if ((*(byte *)(iVar5 + 0xea5e3) & 0x80) == 0) {
        iVar3 = *(int *)(iVar5 + 0xea5e0) >> 0x10;
        _DAT_01c00c70 = uStack_14;
        iVar5 = *(int *)(iVar5 + 0xea5e4) >> 0x10;
        if ((((-1 < iVar3) && (-1 < iVar5)) && (iVar3 < DAT_005b761c)) && (iVar5 < DAT_005b7620)) {
          engine_2d_c_plotPixel_FUN_00401530(iVar3,iVar5);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + -1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + -1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + -1;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_005b761c)) && (iVar2 < DAT_005b7620)) {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + 1;
        iVar2 = iVar5 + 1;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + -2;
        iVar2 = iVar5 + 2;
        if ((((-1 < iVar1) && (-1 < iVar2)) && (iVar1 < DAT_005b761c)) && (iVar2 < DAT_005b7620)) {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar1 = iVar3 + 2;
        iVar2 = iVar5 + -2;
        if (((-1 < iVar1) && (-1 < iVar2)) && ((iVar1 < DAT_005b761c && (iVar2 < DAT_005b7620)))) {
          engine_2d_c_plotPixel_FUN_00401530(iVar1,iVar2);
        }
        iVar3 = iVar3 + 2;
        iVar5 = iVar5 + 2;
        if (((-1 < iVar3) && (-1 < iVar5)) && ((iVar3 < DAT_005b761c && (iVar5 < DAT_005b7620)))) {
          engine_2d_c_plotPixel_FUN_00401530(iVar3,iVar5);
        }
      }
      iVar4 = iVar4 + 1;
      pfVar6 = pfVar6 + 3;
    } while (iVar4 < iStack_18);
  }
  return;
}
