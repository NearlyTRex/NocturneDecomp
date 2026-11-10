// Name: engine_font.cpp_FUN_004afbf0
// Address: 004afbf0
// Address Range: [[004afbf0, 004b0166]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004afbf0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_FUN_004afbf0(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte *puVar9;
  char *pcVar10;
  byte *puVar11;
  int iVar12;
  uint *puVar13;
  char *pcVar14;
  byte bVar15;
  byte auStack_458 [512];
  char acStack_258 [256];
  char acStack_158 [256];
  CInStreamFile CStack_58;
  int iStack_2c;
  void *pvStack_28;
  uint *puStack_24;
  byte *puStack_20;
  ulong uStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar15 = 0;
  *(uint *)(param_1 + 0x1ddc) = 0;
  *(uint *)(param_1 + 0x1dd8) = 0;
  if (*(int *)(param_1 + 0x1dcc) != 0) {
    FUN_005a3770(*(int *)(param_1 + 0x1dcc));
    *(uint *)(param_1 + 0x1dcc) = 0;
  }
  *(uint *)(param_1 + 0x1dd0) = 0;
  if (*(int *)(param_1 + 0x1dd4) != 0) {
    FUN_005a3770(*(int *)(param_1 + 0x1dd4));
    *(uint *)(param_1 + 0x1dd4) = 0;
  }
  if (_DAT_01c6cee8 != 0) {
    if (param_2 != 0) {
      iVar8 = *(int *)(param_1 + 0x1a4);
      if (_DAT_02cf5fd8 == 0) {
        iVar8 = iVar8 * 2;
      }
      uStack_1c = iVar8 * iVar8;
      puVar3 = FUN_005a3650(0x300);
      puStack_24 = puVar3;
      pvVar4 = FUN_005a3650(uStack_1c);
      pvStack_28 = pvVar4;
      puStack_20 = FUN_005a3650(uStack_1c);
      if (((puVar3 == (uint *)0x0) || (pvVar4 == (void *)0x0)) ||
         (puStack_20 == (byte *)0x0)) {
        _DAT_01d71de0 = "..\\engine\\font.cpp";
        _DAT_01d71de4 = 0x184;
        core_main_c_FUN_004e4330("CBitFont::setAcceleration - Out of memory");
      }
      engine_dosio_cpp_splitPath_FUN_00465e50
                ((char *)(param_1 + 4),(char *)0x0,(char *)0x0,acStack_158,(char *)0x0);
      engine_dosio_cpp_makePath_FUN_00465e80
                (acStack_258,(char *)0x0,(char *)0x0,acStack_158,(char *)0x5c1ee1);
      unkafter_turret_cpp_CInStreamFile_ctor_FUN_005738c0(&CStack_58);
      iVar5 = support_trstream_cpp_FUN_00573fc0(&CStack_58,0x5c1ee5,acStack_258,1);
      if (iVar5 == 0) {
        _DAT_01d71de4 = 0x1a3;
        _DAT_01d71de0 = "..\\engine\\font.cpp";
        core_main_c_FUN_004e4330("CBitFont::setAcceleration - No opacity file found: %s",acStack_258);
      }
      else {
        if (_DAT_02cf5fd8 == 0) {
          iStack_14 = iVar8 / 2;
          iVar5 = 0;
          puVar11 = puStack_20;
          if (0 < iStack_14) {
            do {
              unkafter_turret_cpp_FUN_00573c00(&CStack_58,auStack_458,iStack_14);
              iVar12 = 0;
              puVar9 = puVar11;
              if (0 < iVar8) {
                do {
                  iVar6 = iVar12 / 2;
                  iVar12 = iVar12 + 1;
                  *puVar9 = auStack_458[iVar6];
                  puVar9 = puVar9 + 1;
                } while (iVar12 < iVar8);
              }
              iVar12 = 0;
              puVar9 = puVar11 + iVar8;
              if (0 < iVar8) {
                do {
                  iVar6 = iVar12 / 2;
                  iVar12 = iVar12 + 1;
                  *puVar9 = auStack_458[iVar6];
                  puVar9 = puVar9 + 1;
                } while (iVar12 < iVar8);
              }
              iVar5 = iVar5 + 1;
              puVar11 = puVar11 + iVar8 + iVar8;
            } while (iVar5 < iStack_14);
          }
        }
        else {
          unkafter_turret_cpp_FUN_00573c00(&CStack_58,puStack_20,iVar8 * iVar8);
        }
        unkafter_turret_cpp_FUN_00573db0(&CStack_58);
      }
      pvVar4 = pvStack_28;
      memset(pvStack_28,0xff,uStack_1c);
      puVar3 = (uint *)(param_1 + 0x1b4);
      puVar13 = puStack_24;
      for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar13 = *puVar3;
        puVar3 = puVar3 + (uint)bVar15 * -2 + 1;
        puVar13 = puVar13 + (uint)bVar15 * -2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(byte *)puVar13 = *(byte *)puVar3;
        puVar3 = (uint *)((int)puVar3 + (uint)bVar15 * -2 + 1);
        puVar13 = (uint *)((int)puVar13 + (uint)bVar15 * -2 + 1);
      }
      pcVar10 = (char *)(param_1 + 4);
      pcVar14 = (char *)(param_1 + 0x1dbc);
      *(uint *)(param_1 + 0x1db8) = 0;
      do {
        cVar1 = *pcVar10;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      engine_mini3d_cpp_FUN_004ed9d0(param_1 + 0x1db4,iVar8,pvVar4,puStack_24,puStack_20);
      pvVar4 = FUN_005a3650(0x7d20);
      *(void **)(param_1 + 0x1dcc) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d71de0 = "..\\engine\\font.cpp";
        _DAT_01d71de4 = 0x1e5;
        core_main_c_FUN_004e4330("Out of memory loading opacity mapped font : ",acStack_258);
      }
      *(uint *)(param_1 + 0x1dd0) = *(int *)(param_1 + 0x1dcc) + 0x1fU & 0xffffffe0;
      pvVar4 = FUN_005a3650(2000);
      *(void **)(param_1 + 0x1dd4) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d71de0 = "..\\engine\\font.cpp";
        _DAT_01d71de4 = 0x1ed;
        core_main_c_FUN_004e4330("Out of memory loading opacity mapped font : ",param_1 + 4);
      }
      iVar8 = param_1 + 0x80;
      iVar5 = param_1 + 0x200;
      iStack_18 = param_1 + 0x400;
      *(uint *)(param_1 + 0x1dd8) = 0;
      *(uint *)(param_1 + 0x1ddc) = 0;
      do {
        if (*(int *)(iVar8 + 0x35e8) != 0) {
          iVar12 = *(int *)(iVar8 + 0x21e8) * 4 + param_1;
          iVar6 = *(int *)(iVar8 + 0x1de8) - *(int *)(iVar12 + 0x194);
          iVar12 = *(int *)(iVar12 + 0x1a4);
          iVar7 = iVar6 % iVar12;
          fVar2 = 1.0 / (float)iVar12;
          iVar6 = iVar6 / iVar12;
          iStack_2c = *(int *)(iVar8 + 0x35e8) + iVar7 + 1;
          iStack_c = *(int *)(iVar8 + 0x39e8) + iVar6 + 1;
          *(float *)(iVar5 + 0x25e8) = (float)iVar7 * fVar2;
          *(float *)(iVar5 + 0x25ec) = (float)iVar6 * fVar2;
          *(float *)(iVar5 + 0x25f0) = (float)iStack_2c * fVar2;
          *(float *)(iVar5 + 0x25f4) = (float)iStack_c * fVar2;
          iStack_10 = iStack_2c;
        }
        iVar8 = iVar8 + 4;
        iVar5 = iVar5 + 0x10;
      } while (iVar8 != iStack_18);
      unkafter_turret_cpp_CInStreamFile_dtor_FUN_00573a40(&CStack_58,0);
    }
    *(int *)(param_1 + 0x420c) = param_2;
    engine_font_cpp_FUN_004b0170(param_1,0x3f8ccccd);
  }
  return;
}
