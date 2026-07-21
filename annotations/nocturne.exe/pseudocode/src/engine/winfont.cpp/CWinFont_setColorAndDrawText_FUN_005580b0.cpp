// Name: engine_winfont.cpp_CWinFont_setColorAndDrawText_FUN_005580b0
// Address: 005580b0
// Address Range: [[005580b0, 005584cc]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005580b0(int *param_1,undefined4 param_2,LPCSTR param_3,int param_4,int param_5,int param_6,int param_7)

#include "nocturne.h"

void __cdecl engine_winfont_cpp_CWinFont_setColorAndDrawText_FUN_005580b0(int *param_1,uint param_2,LPCSTR param_3,int param_4,int param_5,int param_6,int param_7)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  LPCSTR pCVar8;
  ushort *puVar9;
  int *piVar10;
  byte bVar11;
  COLORREF local_34;
  COLORREF local_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar11 = 0;
  if (((param_6 == param_1[0x4b]) && (param_7 == param_1[0x4c])) &&
     (iVar4 = _strcmp(param_1 + 6,param_3), iVar4 == 0))
  goto LAB_00558202;
  param_1[0x4b] = param_6;
  local_28 = 0;
  param_1[0x4c] = param_7;
  if (param_6 < 0) {
    local_34 = engine_font_cpp_getDefaultTextColor_FUN_00491140();
    if (DAT_005b7624 == 0x10) {
      uVar3 = (local_34 >> (DAT_01c0063c & 0x1f)) << (DAT_01c00644 & 0x1f) & 0xff;
      local_34 = ((local_34 >> (DAT_01c00624 & 0x1f)) << (DAT_01c0062c & 0x1f) & 0xff) << 0x10 |
                 ((local_34 >> (DAT_01c00630 & 0x1f)) << (DAT_01c00638 & 0x1f) & 0xff) << 8;
      goto LAB_00558127;
    }
  }
  else {
    local_34 = (COLORREF)*(ushort *)(&DAT_01c00648 + param_6 * 3);
    uVar3 = (uint)*(byte *)(param_6 * 3 + 0x1c0064a) << 0x10;
LAB_00558127:
    local_34 = local_34 | uVar3;
  }
  if (param_7 != -1) {
    local_28 = (COLORREF)*(uint3 *)(&DAT_01c00648 + param_7 * 3);
  }
  pCVar8 = param_3;
  piVar10 = param_1 + 6;
  do {
    cVar1 = *pCVar8;
    *(char *)piVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pCVar8[1];
    pCVar8 = pCVar8 + 2;
    *(char *)((int)piVar10 + 1) = cVar1;
    piVar10 = (int *)((int)piVar10 + 2);
  } while (cVar1 != '\0');
  iVar4 = (**(code **)(*param_1 + 8))(param_1,param_3);
  param_1[0x46] = iVar4;
  iVar4 = (**(code **)(*param_1 + 0xc))(param_1,param_3);
  param_1[0x47] = iVar4;
  uVar3 = 0xffffffff;
  piVar10 = param_1 + 6;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    iVar4 = *piVar10;
    piVar10 = (int *)((int)piVar10 + (uint)bVar11 * -2 + 1);
  } while ((char)iVar4 != '\0');
  if (param_7 != -1) {
    SetTextColor((HDC)param_1[1],local_28);
    TextOutA((HDC)param_1[1],1,1,param_3,~uVar3 - 1);
  }
  SetTextColor((HDC)param_1[1],local_34);
  TextOutA((HDC)param_1[1],0,0,param_3,~uVar3 - 1);
LAB_00558202:
  if (param_1[0x48] + param_4 < DAT_005b761c) {
    iVar4 = param_1[0x48];
  }
  else {
    iVar4 = DAT_005b761c - param_4;
  }
  if (param_1[0x49] + param_5 < DAT_005b7620) {
    iStack_24 = param_1[0x49];
  }
  else {
    iStack_24 = DAT_005b7620 - param_5;
  }
  if (param_1[0x46] < iVar4) {
    iVar4 = param_1[0x46];
  }
  if (param_1[0x47] < iStack_24) {
    iStack_24 = param_1[0x47];
  }
  if (DAT_005b7624 == 0x10) {
    iStack_18 = 0;
    if (0 < iStack_24) {
      iStack_1c = param_5;
      do {
        iVar5 = iStack_1c + param_1[0x4d];
        if ((-1 < iVar5) && (iVar5 < DAT_005b7620)) {
          iVar6 = 0;
          if (0 < iVar4) {
            puVar9 = (ushort *)(*(int *)(&DAT_01bd2fa0 + iVar5 * 4) + param_4 * 2);
            do {
              uVar2 = *(ushort *)(param_1[5] + (iStack_18 * param_1[0x48] + iVar6) * 2);
              if (uVar2 != 0x7c1f) {
                *puVar9 = (ushort)((byte)((char)uVar2 << 3) >> (DAT_01c00644 & 0x1f)) <<
                          (DAT_01c0063c & 0x1f) |
                          (ushort)(((((int)(uint)uVar2 >> 10 & 0x1fU) << 3) >> (DAT_01c0062c & 0x1f)
                                   ) << (DAT_01c00624 & 0x1f)) |
                          (ushort)(((((int)(uint)uVar2 >> 5 & 0x1fU) << 3) >> (DAT_01c00638 & 0x1f))
                                  << (DAT_01c00630 & 0x1f));
              }
              iVar6 = iVar6 + 1;
              puVar9 = puVar9 + 1;
            } while (iVar6 < iVar4);
          }
        }
        iStack_1c = iStack_1c + 1;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iStack_24);
    }
  }
  else {
    iVar5 = 0;
    if (0 < iStack_24) {
      iStack_20 = param_5;
      do {
        iVar6 = iStack_20 + param_1[0x4d];
        if ((-1 < iVar6) && (iVar6 < DAT_005b7620)) {
          iVar7 = 0;
          if (0 < iVar4) {
            piVar10 = (int *)(param_4 * 4 + *(int *)(&DAT_01bd2fa0 + iVar6 * 4));
            do {
              iVar6 = *(int *)((param_1[0x48] * iVar5 + iVar7) * 4 + param_1[5]);
              if (iVar6 != 0xff00ff) {
                *piVar10 = iVar6;
              }
              iVar7 = iVar7 + 1;
              piVar10 = piVar10 + 1;
            } while (iVar7 < iVar4);
          }
        }
        iStack_20 = iStack_20 + 1;
        iVar5 = iVar5 + 1;
      } while (iVar5 < iStack_24);
    }
  }
  return;
}
