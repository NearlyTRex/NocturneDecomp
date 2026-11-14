// Name: engine_font.cpp_FUN_004a7fd0
// Address: 004a7fd0
// Address Range: [[004a7fd0, 004a8530]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004a7fd0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_font_cpp_FUN_004a7fd0(void)

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
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_00000018;
  uint in_stack_0000001c;
  uint uStack_454;
  char acStack_254 [256];
  char acStack_154 [256];
  byte auStack_54 [44];
  void *pvStack_28;
  uint *puStack_24;
  byte *puStack_20;
  ulong uStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar15 = 0;
  if (*(int *)(in_stack_00000004 + 0x1dcc) != 0) {
    FUN_005b86a0(*(int *)(in_stack_00000004 + 0x1dcc));
    *(uint *)(in_stack_00000004 + 0x1dcc) = 0;
  }
  *(uint *)(in_stack_00000004 + 0x1dd0) = 0;
  if (*(int *)(in_stack_00000004 + 0x1dd4) != 0) {
    FUN_005b86a0(*(int *)(in_stack_00000004 + 0x1dd4));
    *(uint *)(in_stack_00000004 + 0x1dd4) = 0;
  }
  if (_DAT_01c37788 != 0) {
    if (in_stack_00000008 != 0) {
      iVar8 = *(int *)(in_stack_00000004 + 0x1a4);
      if (_DAT_0264bbac == 0) {
        iVar8 = iVar8 * 2;
      }
      uStack_1c = iVar8 * iVar8;
      puVar3 = (uint *)malloc(0x300);
      puStack_24 = puVar3;
      pvVar4 = malloc(uStack_1c);
      pvStack_28 = pvVar4;
      puStack_20 = (byte *)malloc(uStack_1c);
      if (((puVar3 == (uint *)0x0) || (pvVar4 == (void *)0x0)) ||
         (puStack_20 == (byte *)0x0)) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x17f;
        core_main_c_FUN_004e4500("CBitFont::setAcceleration - Out of memory");
      }
      engine_dosio_cpp_splitPath_FUN_00461070
                ((char *)(in_stack_00000004 + 4),(char *)0x0,(char *)0x0,acStack_154,(char *)0x0);
      engine_dosio_cpp_makePath_FUN_004610a0
                (acStack_254,(char *)0x0,(char *)0x0,acStack_154,(char *)0x5d684a);
      support_trstream_cpp_CInStreamFile_ctor_FUN_0057cd50((CInStreamFile *)auStack_54);
      iVar5 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                        ((CInStreamFile *)auStack_54,(char *)0x5d684e,acStack_254);
      if (iVar5 == 0) {
        _DAT_01d046a4 = 0x19e;
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        core_main_c_FUN_004e4500("CBitFont::setAcceleration - No opacity file found: %s",acStack_254);
      }
      else {
        if (_DAT_0264bbac == 0) {
          iStack_14 = iVar8 / 2;
          iVar5 = 0;
          puVar11 = puStack_20;
          if (0 < iStack_14) {
            do {
              support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
                        ((CInStreamFile *)auStack_54,&uStack_454,iStack_14);
              iVar12 = 0;
              puVar9 = puVar11;
              if (0 < iVar8) {
                do {
                  iVar6 = iVar12 / 2;
                  iVar12 = iVar12 + 1;
                  *puVar9 = *(byte *)((int)&uStack_454 + iVar6);
                  puVar9 = puVar9 + 1;
                } while (iVar12 < iVar8);
              }
              iVar12 = 0;
              puVar9 = puVar11 + iVar8;
              if (0 < iVar8) {
                do {
                  iVar6 = iVar12 / 2;
                  iVar12 = iVar12 + 1;
                  *puVar9 = *(byte *)((int)&uStack_454 + iVar6);
                  puVar9 = puVar9 + 1;
                } while (iVar12 < iVar8);
              }
              iVar5 = iVar5 + 1;
              puVar11 = puVar11 + iVar8 + iVar8;
            } while (iVar5 < iStack_14);
          }
        }
        else {
          support_trstream_cpp_CInStreamFile_read_FUN_0057cfe0
                    ((CInStreamFile *)auStack_54,puStack_20,iVar8 * iVar8);
        }
        support_trstream_cpp_CInStreamFile_close_FUN_0057d180((CInStreamFile *)auStack_54);
      }
      pvVar4 = pvStack_28;
      memset(pvStack_28,0xff,uStack_1c);
      puVar3 = (uint *)(in_stack_00000004 + 0x1b4);
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
      pcVar10 = (char *)(in_stack_00000004 + 4);
      pcVar14 = (char *)(in_stack_00000004 + 0x1dbc);
      *(uint *)(in_stack_00000004 + 0x1db8) = 0;
      do {
        cVar1 = *pcVar10;
        *pcVar14 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar10[1];
        pcVar10 = pcVar10 + 2;
        pcVar14[1] = cVar1;
        pcVar14 = pcVar14 + 2;
      } while (cVar1 != '\0');
      engine_mini3d_cpp_loadTexture_FUN_004f33d0
                (in_stack_00000004 + 0x1db4,iVar8,(int)pvVar4,(int)puStack_24,(int)puStack_20);
      pvVar4 = malloc(0x7d20);
      *(void **)(in_stack_00000018 + 0x1dcc) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x1e0;
        uStack_454 = 0x4a826d;
        core_main_c_FUN_004e4500();
      }
      *(uint *)(in_stack_00000018 + 0x1dd0) =
           *(int *)(in_stack_00000018 + 0x1dcc) + 0x1fU & 0xffffffe0;
      pvVar4 = malloc(2000);
      *(void **)(in_stack_00000018 + 0x1dd4) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x1e8;
        uStack_454 = 0x4a845e;
        core_main_c_FUN_004e4500();
      }
      iVar8 = in_stack_00000018 + 0x80;
      iVar5 = in_stack_00000018 + 0x200;
      *(uint *)(in_stack_00000018 + 0x1dd8) = 0;
      *(uint *)(in_stack_00000018 + 0x1ddc) = 0;
      do {
        if (*(int *)(iVar8 + 0x35e8) != 0) {
          iVar12 = *(int *)(iVar8 + 0x21e8) * 4 + in_stack_00000018;
          iVar6 = *(int *)(iVar8 + 0x1de8) - *(int *)(iVar12 + 0x194);
          iVar12 = *(int *)(iVar12 + 0x1a4);
          iVar7 = iVar6 % iVar12;
          fVar2 = 1.0 / (float)iVar12;
          iVar6 = iVar6 / iVar12;
          iStack_18 = *(int *)(iVar8 + 0x35e8) + iVar7 + 1;
          iVar12 = *(int *)(iVar8 + 0x39e8);
          *(float *)(iVar5 + 0x25e8) = (float)iVar7 * fVar2;
          *(float *)(iVar5 + 0x25ec) = (float)iVar6 * fVar2;
          *(float *)(iVar5 + 0x25f0) = (float)iStack_18 * fVar2;
          *(float *)(iVar5 + 0x25f4) = (float)(iVar12 + iVar6 + 1) * fVar2;
        }
        iVar8 = iVar8 + 4;
        iVar5 = iVar5 + 0x10;
      } while (iVar8 != in_stack_00000018 + 0x400);
      uStack_454 = 0x4a8311;
      support_trstream_cpp_CInStreamFile_dtor_FUN_0057cec0((CInStreamFile *)(auStack_54 + 0x14),0);
    }
    *(uint *)(in_stack_00000018 + 0x420c) = in_stack_0000001c;
    engine_font_cpp_FUN_004a8540();
  }
  return;
}
