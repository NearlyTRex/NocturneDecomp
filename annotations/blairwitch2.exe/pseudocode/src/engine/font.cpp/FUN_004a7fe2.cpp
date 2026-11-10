// Name: engine_font.cpp_FUN_004a7fe2
// Address: 004a7fe2
// Address Range: [[004a7fe2, 004a8530]]
// Convention: unknown
// Signature: void engine_font_cpp_FUN_004a7fe2(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_font_cpp_FUN_004a7fe2(void)

{
  char cVar1;
  float fVar2;
  int in_EAX;
  ulong size;
  uint *puVar3;
  void *pvVar4;
  byte *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *puVar11;
  uint *puVar12;
  char *pcVar13;
  int iVar14;
  char *pcVar15;
  byte in_CF;
  byte bVar16;
  int in_stack_00000458;
  int in_stack_0000045c;
  
  bVar16 = 0;
  if (in_EAX + 0x2d7b0000U != (uint)in_CF) {
    FUN_005b86a0();
    *(uint *)(in_stack_00000458 + 0x1dcc) = 0;
  }
  *(uint *)(in_stack_00000458 + 0x1dd0) = 0;
  if (*(int *)(in_stack_00000458 + 0x1dd4) != 0) {
    FUN_005b86a0();
    *(uint *)(in_stack_00000458 + 0x1dd4) = 0;
  }
  if (_DAT_01c37788 != 0) {
    if (in_stack_0000045c != 0) {
      iVar8 = *(int *)(in_stack_00000458 + 0x1a4);
      if (_DAT_0264bbac == 0) {
        iVar8 = iVar8 * 2;
      }
      size = iVar8 * iVar8;
      puVar3 = FUN_005b8580(0x300);
      pvVar4 = FUN_005b8580(size);
      puVar5 = FUN_005b8580(size);
      if (((puVar3 == (uint *)0x0) || (pvVar4 == (void *)0x0)) ||
         (puVar5 == (byte *)0x0)) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x17f;
        core_main_c_FUN_004e4500();
      }
      engine_dosio_cpp_splitPath_FUN_00461070
                ((char *)(in_stack_00000458 + 4),(char *)0x0,(char *)0x0,&stack0x00000300,
                 (char *)0x0);
      engine_dosio_cpp_makePath_FUN_004610a0
                (&stack0x00000200,(char *)0x0,(char *)0x0,&stack0x00000300,(char *)0x5d684a);
      unkclass_instream_cpp_CInStreamFile_ctor_FUN_0057cd50((CInStreamFile *)&stack0x00000400);
      iVar6 = support_trstream_cpp_FUN_0057d390();
      if (iVar6 == 0) {
        _DAT_01d046a4 = 0x19e;
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        core_main_c_FUN_004e4500();
      }
      else {
        if (_DAT_0264bbac == 0) {
          iVar6 = 0;
          if (0 < iVar8 / 2) {
            do {
              unkaddr_0057b9a0_cpp_FUN_0057cfe0();
              iVar14 = 0;
              puVar11 = puVar5;
              if (0 < iVar8) {
                do {
                  iVar7 = iVar14 / 2;
                  iVar14 = iVar14 + 1;
                  *puVar11 = (&stack0x00000000)[iVar7];
                  puVar11 = puVar11 + 1;
                } while (iVar14 < iVar8);
              }
              iVar14 = 0;
              puVar11 = puVar5 + iVar8;
              if (0 < iVar8) {
                do {
                  iVar7 = iVar14 / 2;
                  iVar14 = iVar14 + 1;
                  *puVar11 = (&stack0x00000000)[iVar7];
                  puVar11 = puVar11 + 1;
                } while (iVar14 < iVar8);
              }
              iVar6 = iVar6 + 1;
              puVar5 = puVar5 + iVar8 + iVar8;
            } while (iVar6 < iVar8 / 2);
          }
        }
        else {
          unkaddr_0057b9a0_cpp_FUN_0057cfe0();
        }
        unkaddr_0057b9a0_cpp_FUN_0057d180();
      }
      memset(pvVar4,0xff,size);
      puVar12 = (uint *)(in_stack_00000458 + 0x1b4);
      for (iVar8 = 0xc0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar3 = *puVar12;
        puVar12 = puVar12 + (uint)bVar16 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar16 * -2 + 1;
      }
      for (iVar8 = 0; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(byte *)puVar3 = *(byte *)puVar12;
        puVar12 = (uint *)((int)puVar12 + (uint)bVar16 * -2 + 1);
        puVar3 = (uint *)((int)puVar3 + (uint)bVar16 * -2 + 1);
      }
      pcVar13 = (char *)(in_stack_00000458 + 4);
      pcVar15 = (char *)(in_stack_00000458 + 0x1dbc);
      *(uint *)(in_stack_00000458 + 0x1db8) = 0;
      do {
        cVar1 = *pcVar13;
        *pcVar15 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar13[1];
        pcVar13 = pcVar13 + 2;
        pcVar15[1] = cVar1;
        pcVar15 = pcVar15 + 2;
      } while (cVar1 != '\0');
      engine_mini3d_cpp_FUN_004f33d0();
      pvVar4 = FUN_005b8580(0x7d20);
      *(void **)(in_stack_00000458 + 0x1dcc) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x1e0;
        core_main_c_FUN_004e4500();
      }
      *(uint *)(in_stack_00000458 + 0x1dd0) =
           *(int *)(in_stack_00000458 + 0x1dcc) + 0x1fU & 0xffffffe0;
      pvVar4 = FUN_005b8580(2000);
      *(void **)(in_stack_00000458 + 0x1dd4) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x1e8;
        core_main_c_FUN_004e4500();
      }
      iVar8 = in_stack_00000458 + 0x80;
      iVar6 = in_stack_00000458 + 0x200;
      *(uint *)(in_stack_00000458 + 0x1dd8) = 0;
      *(uint *)(in_stack_00000458 + 0x1ddc) = 0;
      do {
        if (*(int *)(iVar8 + 0x35e8) != 0) {
          iVar14 = *(int *)(iVar8 + 0x21e8) * 4 + in_stack_00000458;
          iVar9 = *(int *)(iVar8 + 0x1de8) - *(int *)(iVar14 + 0x194);
          iVar14 = *(int *)(iVar14 + 0x1a4);
          iVar10 = iVar9 % iVar14;
          fVar2 = 1.0 / (float)iVar14;
          iVar9 = iVar9 / iVar14;
          iVar14 = *(int *)(iVar8 + 0x35e8);
          iVar7 = *(int *)(iVar8 + 0x39e8);
          *(float *)(iVar6 + 0x25e8) = (float)iVar10 * fVar2;
          *(float *)(iVar6 + 0x25ec) = (float)iVar9 * fVar2;
          *(float *)(iVar6 + 0x25f0) = (float)(iVar14 + iVar10 + 1) * fVar2;
          *(float *)(iVar6 + 0x25f4) = (float)(iVar7 + iVar9 + 1) * fVar2;
        }
        iVar8 = iVar8 + 4;
        iVar6 = iVar6 + 0x10;
      } while (iVar8 != in_stack_00000458 + 0x400);
      unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0((CInStreamFile *)&stack0x00000400,0);
    }
    *(int *)(in_stack_00000458 + 0x420c) = in_stack_0000045c;
    engine_font_cpp_FUN_004a8540();
  }
  return;
}
