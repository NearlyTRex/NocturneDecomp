// Name: FUN_005506b0
// Address: 005506b0
// Address Range: [[005506b0, 00550a51]]
// Convention: unknown
// Signature: uint FUN_005506b0(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_005506b0(char *param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  uint *puVar11;
  byte bVar12;
  byte local_274 [256];
  char local_174 [256];
  uint local_74 [24];
  uint local_14;
  
  bVar12 = 0;
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (iVar2 = FUN_00552b20(), iVar2 == 0)) {
    return 0;
  }
  FUN_00550070(local_74);
  pcVar10 = local_174;
  pcVar8 = param_1;
  do {
    cVar1 = *pcVar8;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar8[1];
    pcVar8 = pcVar8 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  puVar5 = (uint *)(_DAT_0264161c * 0x60 + 0x2641620);
  puVar11 = local_74;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  iVar2 = FUN_005512a0(local_74[0]);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_005532f0();
  if (_DAT_0264901c < 1) {
    _DAT_01d046a0 = "..\\sound\\sndmain.cpp";
    _DAT_01d046a4 = 0x249;
    FUN_004e4500("SfxSlot::kill - must be locked!");
  }
  local_14 = 0;
  iVar6 = 0;
  iVar2 = _DAT_0263cf80;
  while (iVar2 != 0) {
    local_14 = local_14 + 1;
    if (0x46ff < iVar6 + 0x11c) {
      local_14 = 0xffffffff;
      break;
    }
    iVar2 = *(int *)(&DAT_0263d09c + iVar6);
    iVar6 = iVar6 + 0x11c;
  }
  if ((int)local_14 < 0) goto LAB_00550933;
  iVar2 = local_14 * 0x11c;
  puVar7 = (uint *)(iVar2 + 0x263cf1c);
  puVar5 = local_74;
  puVar11 = puVar7;
  for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  iVar6 = 0x2641924;
  iVar9 = 0;
  do {
    iVar3 = FUN_005b8130(iVar6,param_1);
    if (iVar3 == 0) {
      if (iVar6 != 0) {
        if (*(int *)(iVar6 + 0x160) != -1) goto LAB_0055080c;
        *(int *)(&DAT_0263cf84 + iVar2) = iVar6;
        goto LAB_00550817;
      }
      break;
    }
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 0x1ac;
  } while (iVar9 < 0x40);
  iVar6 = FUN_00460aa0("sound",local_174);
  if (iVar6 < 0x200001) {
    FUN_00461070(local_174,0,0,0,local_274);
    iVar6 = FUN_005b8130(local_274,&DAT_005e7ee9);
    if ((iVar6 == 0) || (iVar6 = FUN_005b8130(local_274,&DAT_005e7eed), iVar6 == 0))
    goto LAB_0055080c;
    uVar4 = FUN_0054c1c0(local_174);
  }
  else {
LAB_0055080c:
    uVar4 = FUN_0054c7f0(local_14,local_174);
  }
  *(uint *)(&DAT_0263cf84 + iVar2) = uVar4;
LAB_00550817:
  iVar6 = *(int *)(&DAT_0263cf84 + iVar2);
  if (iVar6 == 0) {
    FUN_005549c0("startSfx - can't get sample %s\n",local_174);
  }
  else {
    *(int *)(iVar6 + 0x154) = *(int *)(iVar6 + 0x154) + 1;
    FUN_0054fbe0(puVar7);
    *(uint *)(iVar2 + 0x263d024) = 0;
    *(uint *)(iVar2 + 0x263d01c) = 0xbf800000;
    *(uint *)(iVar2 + 0x263d020) = 0;
    *(uint *)(iVar2 + 0x263d018) = *(uint *)(iVar2 + 0x263cf54);
    puVar5 = puVar7;
    do {
      puVar11 = puVar5 + 1;
      puVar5[0x34] = 0xffffffff;
      puVar5 = puVar11;
    } while (puVar11 != (uint *)(iVar2 + 0x263cf3c));
    iVar3 = DAT_0061bc80 + 1;
    iVar6 = *(int *)(&DAT_0263cf84 + iVar2);
    *(uint *)(iVar2 + 0x263d00c) = *(uint *)(*(int *)(&DAT_0263cf84 + iVar2) + 0x114);
    iVar9 = *(int *)(&DAT_0263cf84 + iVar2);
    DAT_0061bc80 = iVar3;
    *(uint *)(iVar2 + 0x263d010) = *(uint *)(iVar6 + 0x118);
    *(uint *)(iVar2 + 0x263d014) = *(uint *)(iVar9 + 0x11c);
    *(uint *)(iVar2 + 0x263d034) = 0xffffffff;
    if (0xfffffe < iVar3) {
      DAT_0061bc80 = 1;
    }
    iVar6 = DAT_0061bc80;
    *(int *)(&DAT_0263cf80 + iVar2) = DAT_0061bc80;
    iVar9 = FUN_0054ddf0(*(uint *)(&DAT_0263cf84 + iVar2),0x4479c000,0x4479c000);
    if (iVar9 != 0) {
      FUN_0054e8c0(puVar7,0);
      iVar9 = FUN_00552b30();
      if (iVar9 < 1) {
LAB_00550a34:
        FUN_00551440();
        return iVar6 << 6 | local_14;
      }
      iVar9 = (**(code **)(*_DAT_02648e80 + 0x40))
                        (_DAT_02648e80,*(uint *)(*(int *)(&DAT_0263cf84 + iVar2) + 0x158));
      *(int *)(&DAT_0263cf7c + iVar2) = iVar9;
      if (iVar9 != 0) goto LAB_00550a34;
    }
  }
  FUN_0054f700(puVar7);
LAB_00550933:
  FUN_00551440();
  return 0;
}
