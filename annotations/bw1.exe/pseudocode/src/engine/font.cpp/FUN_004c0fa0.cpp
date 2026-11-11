// Name: engine_font.cpp_FUN_004c0fa0
// Address: 004c0fa0
// Address Range: [[004c0fa0, 004c1516]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004c0fa0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_FUN_004c0fa0(int param_1,int param_2)

{
  char cVar1;
  float fVar2;
  uint *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  byte *puVar10;
  char *pcVar11;
  int iVar12;
  char *pcVar13;
  byte bVar14;
  uint auStack_458 [128];
  char acStack_258 [256];
  char acStack_158 [256];
  CInStreamFile CStack_58;
  int iStack_2c;
  void *pvStack_28;
  uint *puStack_24;
  uint *puStack_20;
  ulong uStack_1c;
  int iStack_18;
  uint uStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar14 = 0;
  *(uint *)(param_1 + 0x1ddc) = 0;
  *(uint *)(param_1 + 0x1dd8) = 0;
  if (*(int *)(param_1 + 0x1dcc) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x1dcc));
    *(uint *)(param_1 + 0x1dcc) = 0;
  }
  *(uint *)(param_1 + 0x1dd0) = 0;
  if (*(int *)(param_1 + 0x1dd4) != 0) {
    FUN_005c09f0(*(int *)(param_1 + 0x1dd4));
    *(uint *)(param_1 + 0x1dd4) = 0;
  }
  if (_DAT_01c50948 != 0) {
    if (param_2 != 0) {
      iVar8 = *(int *)(param_1 + 0x1a4);
      if (_DAT_02c8337c == 0) {
        iVar8 = iVar8 * 2;
      }
      uStack_1c = iVar8 * iVar8;
      puVar3 = (uint *)malloc(0x300);
      puStack_24 = puVar3;
      pvVar4 = malloc(uStack_1c);
      pvStack_28 = pvVar4;
      puStack_20 = (uint *)malloc(uStack_1c);
      if (((puVar3 == (uint *)0x0) || (pvVar4 == (void *)0x0)) ||
         (puStack_20 == (uint *)0x0)) {
        _DAT_01d1d400 = "..\\engine\\font.cpp";
        _DAT_01d1d404 = 0x184;
        core_main_c_FUN_005030e0("CBitFont::setAcceleration - Out of memory");
      }
      engine_dosio_cpp_splitPath_FUN_00479580
                ((char *)(param_1 + 4),(char *)0x0,(char *)0x0,acStack_158,(char *)0x0);
      engine_dosio_cpp_makePath_FUN_004795b0
                (acStack_258,(char *)0x0,(char *)0x0,acStack_158,(char *)0x5e08c3);
      unkclass_instream_cpp_CInStreamFile_ctor_FUN_005a08d0(&CStack_58);
      iVar5 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_005a0fd0
                        (&CStack_58,0x5e08c7,acStack_258,1);
      if (iVar5 == 0) {
        _DAT_01d1d404 = 0x1a3;
        _DAT_01d1d400 = "..\\engine\\font.cpp";
        core_main_c_FUN_005030e0("CBitFont::setAcceleration - No opacity file found: %s",acStack_258);
      }
      else {
        if (_DAT_02c8337c == 0) {
          uStack_14 = iVar8 / 2;
          iVar5 = 0;
          puVar3 = puStack_20;
          if (0 < (int)uStack_14) {
            do {
              unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10(&CStack_58,auStack_458,uStack_14)
              ;
              iVar12 = 0;
              puVar9 = puVar3;
              if (0 < iVar8) {
                do {
                  iVar6 = iVar12 / 2;
                  iVar12 = iVar12 + 1;
                  *(byte *)puVar9 = *(byte *)((int)auStack_458 + iVar6);
                  puVar9 = (uint *)((int)puVar9 + 1);
                } while (iVar12 < iVar8);
              }
              iVar12 = 0;
              puVar10 = (byte *)((int)puVar3 + iVar8);
              if (0 < iVar8) {
                do {
                  iVar6 = iVar12 / 2;
                  iVar12 = iVar12 + 1;
                  *puVar10 = *(byte *)((int)auStack_458 + iVar6);
                  puVar10 = puVar10 + 1;
                } while (iVar12 < iVar8);
              }
              iVar5 = iVar5 + 1;
              puVar3 = (uint *)((byte *)((int)puVar3 + iVar8) + iVar8);
            } while (iVar5 < (int)uStack_14);
          }
        }
        else {
          unkaddr_0059f520_cpp_CInStreamFile_read_FUN_005a0c10(&CStack_58,puStack_20,iVar8 * iVar8);
        }
        unkaddr_0059f520_cpp_CInStreamFile_close_FUN_005a0dc0(&CStack_58);
      }
      pvVar4 = pvStack_28;
      memset(pvStack_28,0xff,uStack_1c);
      puVar3 = (uint *)(param_1 + 0x1b4);
      puVar9 = puStack_24;
      for (iVar5 = 0xc0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *puVar9 = *puVar3;
        puVar3 = puVar3 + (uint)bVar14 * -2 + 1;
        puVar9 = puVar9 + (uint)bVar14 * -2 + 1;
      }
      for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
        *(byte *)puVar9 = *(byte *)puVar3;
        puVar3 = (uint *)((int)puVar3 + (uint)bVar14 * -2 + 1);
        puVar9 = (uint *)((int)puVar9 + (uint)bVar14 * -2 + 1);
      }
      pcVar11 = (char *)(param_1 + 4);
      pcVar13 = (char *)(param_1 + 0x1dbc);
      *(uint *)(param_1 + 0x1db8) = 0;
      do {
        cVar1 = *pcVar11;
        *pcVar13 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar11[1];
        pcVar11 = pcVar11 + 2;
        pcVar13[1] = cVar1;
        pcVar13 = pcVar13 + 2;
      } while (cVar1 != '\0');
      engine_mini3d_cpp_FUN_00512200(param_1 + 0x1db4,iVar8,pvVar4,puStack_24,puStack_20);
      pvVar4 = malloc(0x7d20);
      *(void **)(param_1 + 0x1dcc) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d1d400 = "..\\engine\\font.cpp";
        _DAT_01d1d404 = 0x1e5;
        core_main_c_FUN_005030e0("Out of memory loading opacity mapped font : ",acStack_258);
      }
      *(uint *)(param_1 + 0x1dd0) = *(int *)(param_1 + 0x1dcc) + 0x1fU & 0xffffffe0;
      pvVar4 = malloc(2000);
      *(void **)(param_1 + 0x1dd4) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d1d400 = "..\\engine\\font.cpp";
        _DAT_01d1d404 = 0x1ed;
        core_main_c_FUN_005030e0("Out of memory loading opacity mapped font : ",param_1 + 4);
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
      unkclass_instream_cpp_CInStreamFile_dtor_FUN_005a0a50(&CStack_58,0);
    }
    *(int *)(param_1 + 0x420c) = param_2;
    engine_font_cpp_FUN_004c1520(param_1,0x3f8ccccd);
  }
  return;
}
