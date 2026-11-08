// Name: FUN_00556240
// Address: 00556240
// Address Range: [[00556240, 005565e1]]
// Convention: unknown
// Signature: uint FUN_00556240(char *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00556240(char *param_1)

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
  if (((param_1 == (char *)0x0) || (*param_1 == '\0')) || (iVar2 = FUN_005586c0(), iVar2 == 0)) {
    return 0;
  }
  FUN_00555bf0(local_74);
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
  puVar5 = (uint *)(_DAT_02ceb91c * 0x60 + 0x2ceb920);
  puVar11 = local_74;
  for (iVar2 = 0x18; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  iVar2 = FUN_00556e30(local_74[0]);
  if (iVar2 == 0) {
    return 0;
  }
  FUN_00558e90();
  if (_DAT_02cf341c < 1) {
    _DAT_01d71de0 = "..\\sound\\sndmain.cpp";
    _DAT_01d71de4 = 0x24b;
    FUN_004e4330("SfxSlot::kill - must be locked!");
  }
  local_14 = 0;
  iVar6 = 0;
  iVar2 = _DAT_02ce7280;
  while (iVar2 != 0) {
    local_14 = local_14 + 1;
    if (0x46ff < iVar6 + 0x11c) {
      local_14 = 0xffffffff;
      break;
    }
    iVar2 = *(int *)(&DAT_02ce739c + iVar6);
    iVar6 = iVar6 + 0x11c;
  }
  if ((int)local_14 < 0) goto LAB_005564c3;
  iVar2 = local_14 * 0x11c;
  puVar7 = (uint *)(iVar2 + 0x2ce721c);
  puVar5 = local_74;
  puVar11 = puVar7;
  for (iVar6 = 0x18; iVar6 != 0; iVar6 = iVar6 + -1) {
    *puVar11 = *puVar5;
    puVar5 = puVar5 + (uint)bVar12 * -2 + 1;
    puVar11 = puVar11 + (uint)bVar12 * -2 + 1;
  }
  iVar6 = 0x2cebc24;
  iVar9 = 0;
  do {
    iVar3 = FUN_005a3260(iVar6,param_1);
    if (iVar3 == 0) {
      if (iVar6 != 0) {
        if (*(int *)(iVar6 + 0x160) != -1) goto LAB_0055639c;
        *(int *)(&DAT_02ce7284 + iVar2) = iVar6;
        goto LAB_005563a7;
      }
      break;
    }
    iVar9 = iVar9 + 1;
    iVar6 = iVar6 + 0x1b0;
  } while (iVar9 < 0x40);
  iVar6 = FUN_004657f0("sound",local_174);
  if (iVar6 < 0x200001) {
    FUN_00465e50(local_174,0,0,0,local_274);
    iVar6 = FUN_005a3260(local_274,&DAT_005d29cd);
    if ((iVar6 == 0) || (iVar6 = FUN_005a3260(local_274,&DAT_005d29d1), iVar6 == 0))
    goto LAB_0055639c;
    uVar4 = FUN_00551d20(local_174);
  }
  else {
LAB_0055639c:
    uVar4 = FUN_00552350(local_14,local_174);
  }
  *(uint *)(&DAT_02ce7284 + iVar2) = uVar4;
LAB_005563a7:
  iVar6 = *(int *)(&DAT_02ce7284 + iVar2);
  if (iVar6 == 0) {
    FUN_0055a560("startSfx - can't get sample %s\n",local_174);
  }
  else {
    *(int *)(iVar6 + 0x154) = *(int *)(iVar6 + 0x154) + 1;
    FUN_00555750(puVar7);
    *(uint *)(iVar2 + 0x2ce7324) = 0;
    *(uint *)(iVar2 + 0x2ce731c) = 0xbf800000;
    *(uint *)(iVar2 + 0x2ce7320) = 0;
    *(uint *)(iVar2 + 0x2ce7318) = *(uint *)(iVar2 + 0x2ce7254);
    puVar5 = puVar7;
    do {
      puVar11 = puVar5 + 1;
      puVar5[0x34] = 0xffffffff;
      puVar5 = puVar11;
    } while (puVar11 != (uint *)(iVar2 + 0x2ce723c));
    iVar3 = DAT_00604210 + 1;
    iVar6 = *(int *)(&DAT_02ce7284 + iVar2);
    *(uint *)(iVar2 + 0x2ce730c) = *(uint *)(*(int *)(&DAT_02ce7284 + iVar2) + 0x114);
    iVar9 = *(int *)(&DAT_02ce7284 + iVar2);
    DAT_00604210 = iVar3;
    *(uint *)(iVar2 + 0x2ce7310) = *(uint *)(iVar6 + 0x118);
    *(uint *)(iVar2 + 0x2ce7314) = *(uint *)(iVar9 + 0x11c);
    *(uint *)(iVar2 + 0x2ce7334) = 0xffffffff;
    if (0xfffffe < iVar3) {
      DAT_00604210 = 1;
    }
    iVar6 = DAT_00604210;
    *(int *)(&DAT_02ce7280 + iVar2) = DAT_00604210;
    iVar9 = FUN_00553960(*(uint *)(&DAT_02ce7284 + iVar2),0x4479c000,0x4479c000);
    if (iVar9 != 0) {
      FUN_00554430(puVar7,0);
      iVar9 = FUN_005586d0();
      if (iVar9 < 1) {
LAB_005565c4:
        FUN_00556fd0();
        return iVar6 << 6 | local_14;
      }
      iVar9 = (**(code **)(*_DAT_02cf3280 + 0x40))
                        (_DAT_02cf3280,*(uint *)(*(int *)(&DAT_02ce7284 + iVar2) + 0x158));
      *(int *)(&DAT_02ce727c + iVar2) = iVar9;
      if (iVar9 != 0) goto LAB_005565c4;
    }
  }
  FUN_00555270(puVar7);
LAB_005564c3:
  FUN_00556fd0();
  return 0;
}
