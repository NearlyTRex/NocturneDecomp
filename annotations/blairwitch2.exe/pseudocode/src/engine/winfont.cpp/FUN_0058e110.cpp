// Name: engine_winfont.cpp_FUN_0058e110
// Address: 0058e110
// Address Range: [[0058e110, 0058e449]]
// Convention: __cdecl
// Signature: void __cdecl engine_winfont_cpp_FUN_0058e110(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_winfont_cpp_FUN_0058e110(CWinFont *this_ptr,HDC device_context,char *text_string,int x,int y,int foreground_color,int background_color)

{
  char cVar1;
  ushort uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  ushort *puVar7;
  uint *puVar8;
  char *pcVar9;
  int iVar10;
  char *pcVar11;
  byte bVar12;
  int iStack_38;
  uint uStack_30;
  int iStack_28;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  
  bVar12 = 0;
  pcVar9 = text_string;
  pcVar11 = &this_ptr->field_0x6a5c;
  do {
    cVar1 = *pcVar9;
    *pcVar11 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar11[1] = cVar1;
    pcVar11 = pcVar11 + 2;
  } while (cVar1 != '\0');
  uVar3 = (**(code **)(*(int *)&this_ptr->field_0x6a44 + 8))(this_ptr,text_string);
  *(uint *)&this_ptr->field_0x6b5c = uVar3;
  uVar3 = (**(code **)(*(int *)&this_ptr->field_0x6a44 + 0xc))(this_ptr,text_string);
  *(uint *)&this_ptr->field_0x6b60 = uVar3;
  uVar6 = 0xffffffff;
  pcVar9 = &this_ptr->field_0x6a5c;
  do {
    if (uVar6 == 0) break;
    uVar6 = uVar6 - 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar9 + (uint)bVar12 * -2 + 1;
  } while (cVar1 != '\0');
  SetTextColor(*(HDC *)&this_ptr->field_0x6a48,0);
  TextOutA(*(HDC *)&this_ptr->field_0x6a48,0,0,text_string,~uVar6 - 1);
  if (*(int *)&this_ptr->field_0x6b64 + x < DAT_006141b8) {
    iVar10 = *(int *)&this_ptr->field_0x6b64;
  }
  else {
    iVar10 = DAT_006141b8 - x;
  }
  if (*(int *)&this_ptr->field_0x6b68 + y < DAT_006141bc) {
    iStack_20 = *(int *)&this_ptr->field_0x6b68;
  }
  else {
    iStack_20 = DAT_006141bc - y;
  }
  if (*(int *)&this_ptr->field_0x6b5c < iVar10) {
    iVar10 = *(int *)&this_ptr->field_0x6b5c;
  }
  if (*(int *)&this_ptr->field_0x6b60 < iStack_20) {
    iStack_20 = *(int *)&this_ptr->field_0x6b60;
  }
  iVar4 = foreground_color * 3;
  if (DAT_006141c0 == 0x10) {
    if (foreground_color < 0) {
      iVar4 = engine_font_cpp_FUN_004a96e0();
      uVar2 = (ushort)iVar4;
    }
    else {
      uVar2 = (ushort)((byte)(&DAT_01c3583a)[iVar4] / _DAT_01c35830 << (DAT_01c3582c & 0x1f)) |
              (ushort)((byte)(&DAT_01c35839)[iVar4] / _DAT_01c35824 << (DAT_01c35820 & 0x1f)) |
              (ushort)((byte)(&DAT_01c35838)[iVar4] / _DAT_01c35818 << (DAT_01c35814 & 0x1f));
    }
    iStack_28 = 0;
    if (0 < iStack_20) {
      iStack_38 = y;
      do {
        iVar4 = iStack_38 + *(int *)&this_ptr->field_0x6b78;
        if ((-1 < iVar4) && (iVar4 < DAT_006141bc)) {
          iVar5 = 0;
          if (0 < iVar10) {
            puVar7 = (ushort *)(x * 2 + *(int *)(&DAT_01c2a38c + iVar4 * 4));
            do {
              if (*(short *)(*(int *)&this_ptr->field_0x6a58 +
                            (iStack_28 * *(int *)&this_ptr->field_0x6b64 + iVar5) * 2) != 0x7c1f) {
                *puVar7 = uVar2;
              }
              iVar5 = iVar5 + 1;
              puVar7 = puVar7 + 1;
            } while (iVar5 < iVar10);
          }
        }
        iStack_38 = iStack_38 + 1;
        iStack_28 = iStack_28 + 1;
      } while (iStack_28 < iStack_20);
    }
  }
  else {
    if (foreground_color < 0) {
      uStack_30 = engine_font_cpp_FUN_004a96e0();
    }
    else {
      uVar6 = (uint)(byte)(&DAT_01c3583a)[iVar4];
      if (DAT_006141c0 == 0x20) {
        uStack_30 = (uint)(byte)(&DAT_01c35839)[iVar4] << (DAT_01c35820 & 0x1f) |
                    (uint)(byte)(&DAT_01c35838)[iVar4] << (DAT_01c35814 & 0x1f);
        uVar6 = uVar6 << (DAT_01c3582c & 0x1f);
      }
      else {
        uStack_30 = (uint)(byte)(&DAT_01c35838)[iVar4] << 0x10 |
                    (uint)(byte)(&DAT_01c35839)[iVar4] << 8;
      }
      uStack_30 = uStack_30 | uVar6;
    }
    iStack_18 = 0;
    if (0 < iStack_20) {
      iStack_1c = y;
      do {
        iVar4 = iStack_1c + *(int *)&this_ptr->field_0x6b78;
        if ((-1 < iVar4) && (iVar4 < DAT_006141bc)) {
          iVar5 = 0;
          if (0 < iVar10) {
            puVar8 = (uint *)(*(int *)(&DAT_01c2a38c + iVar4 * 4) + x * 4);
            do {
              if (*(int *)(*(int *)&this_ptr->field_0x6a58 +
                          (iStack_18 * *(int *)&this_ptr->field_0x6b64 + iVar5) * 4) != 0xff00ff) {
                *puVar8 = uStack_30;
              }
              iVar5 = iVar5 + 1;
              puVar8 = puVar8 + 1;
            } while (iVar5 < iVar10);
          }
        }
        iStack_1c = iStack_1c + 1;
        iStack_18 = iStack_18 + 1;
      } while (iStack_18 < iStack_20);
    }
  }
  return;
}
