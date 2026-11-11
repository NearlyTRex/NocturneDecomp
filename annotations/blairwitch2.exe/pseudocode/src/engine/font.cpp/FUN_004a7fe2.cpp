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
  uint *puVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  byte *puVar13;
  char *pcVar14;
  int iVar15;
  char *pcVar16;
  byte in_CF;
  byte bVar17;
  int in_stack_00000458;
  int in_stack_0000045c;
  
  bVar17 = 0;
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
      iVar9 = *(int *)(in_stack_00000458 + 0x1a4);
      if (_DAT_0264bbac == 0) {
        iVar9 = iVar9 * 2;
      }
      size = iVar9 * iVar9;
      puVar3 = (uint *)malloc(0x300);
      pvVar4 = malloc(size);
      puVar5 = (uint *)malloc(size);
      if (((puVar3 == (uint *)0x0) || (pvVar4 == (void *)0x0)) ||
         (puVar5 == (uint *)0x0)) {
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
      iVar6 = support_trstream_cpp_CInStreamFile_openInDirectory_FUN_0057d390
                        ((CInStreamFile *)&stack0x00000400,0x5d684e,&stack0x00000200);
      if (iVar6 == 0) {
        _DAT_01d046a4 = 0x19e;
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        core_main_c_FUN_004e4500();
      }
      else {
        if (_DAT_0264bbac == 0) {
          uVar7 = iVar9 / 2;
          iVar6 = 0;
          if (0 < (int)uVar7) {
            do {
              unkaddr_0057b9a0_cpp_CInStreamFile_read_FUN_0057cfe0
                        ((CInStreamFile *)&stack0x00000400,(uint *)&stack0x00000000,uVar7);
              iVar15 = 0;
              puVar12 = puVar5;
              if (0 < iVar9) {
                do {
                  iVar8 = iVar15 / 2;
                  iVar15 = iVar15 + 1;
                  *(byte *)puVar12 = (&stack0x00000000)[iVar8];
                  puVar12 = (uint *)((int)puVar12 + 1);
                } while (iVar15 < iVar9);
              }
              iVar15 = 0;
              puVar13 = (byte *)((int)puVar5 + iVar9);
              if (0 < iVar9) {
                do {
                  iVar8 = iVar15 / 2;
                  iVar15 = iVar15 + 1;
                  *puVar13 = (&stack0x00000000)[iVar8];
                  puVar13 = puVar13 + 1;
                } while (iVar15 < iVar9);
              }
              iVar6 = iVar6 + 1;
              puVar5 = (uint *)((byte *)((int)puVar5 + iVar9) + iVar9);
            } while (iVar6 < (int)uVar7);
          }
        }
        else {
          unkaddr_0057b9a0_cpp_CInStreamFile_read_FUN_0057cfe0
                    ((CInStreamFile *)&stack0x00000400,puVar5,iVar9 * iVar9);
        }
        unkaddr_0057b9a0_cpp_CInStreamFile_close_FUN_0057d180((CInStreamFile *)&stack0x00000400);
      }
      memset(pvVar4,0xff,size);
      puVar5 = (uint *)(in_stack_00000458 + 0x1b4);
      for (iVar9 = 0xc0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar3 = *puVar5;
        puVar5 = puVar5 + (uint)bVar17 * -2 + 1;
        puVar3 = puVar3 + (uint)bVar17 * -2 + 1;
      }
      for (iVar9 = 0; iVar9 != 0; iVar9 = iVar9 + -1) {
        *(byte *)puVar3 = *(byte *)puVar5;
        puVar5 = (uint *)((int)puVar5 + (uint)bVar17 * -2 + 1);
        puVar3 = (uint *)((int)puVar3 + (uint)bVar17 * -2 + 1);
      }
      pcVar14 = (char *)(in_stack_00000458 + 4);
      pcVar16 = (char *)(in_stack_00000458 + 0x1dbc);
      *(uint *)(in_stack_00000458 + 0x1db8) = 0;
      do {
        cVar1 = *pcVar14;
        *pcVar16 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar14[1];
        pcVar14 = pcVar14 + 2;
        pcVar16[1] = cVar1;
        pcVar16 = pcVar16 + 2;
      } while (cVar1 != '\0');
      engine_mini3d_cpp_FUN_004f33d0();
      pvVar4 = malloc(0x7d20);
      *(void **)(in_stack_00000458 + 0x1dcc) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x1e0;
        core_main_c_FUN_004e4500();
      }
      *(uint *)(in_stack_00000458 + 0x1dd0) =
           *(int *)(in_stack_00000458 + 0x1dcc) + 0x1fU & 0xffffffe0;
      pvVar4 = malloc(2000);
      *(void **)(in_stack_00000458 + 0x1dd4) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        _DAT_01d046a0 = "..\\engine\\font.cpp";
        _DAT_01d046a4 = 0x1e8;
        core_main_c_FUN_004e4500();
      }
      iVar9 = in_stack_00000458 + 0x80;
      iVar6 = in_stack_00000458 + 0x200;
      *(uint *)(in_stack_00000458 + 0x1dd8) = 0;
      *(uint *)(in_stack_00000458 + 0x1ddc) = 0;
      do {
        if (*(int *)(iVar9 + 0x35e8) != 0) {
          iVar15 = *(int *)(iVar9 + 0x21e8) * 4 + in_stack_00000458;
          iVar10 = *(int *)(iVar9 + 0x1de8) - *(int *)(iVar15 + 0x194);
          iVar15 = *(int *)(iVar15 + 0x1a4);
          iVar11 = iVar10 % iVar15;
          fVar2 = 1.0 / (float)iVar15;
          iVar10 = iVar10 / iVar15;
          iVar15 = *(int *)(iVar9 + 0x35e8);
          iVar8 = *(int *)(iVar9 + 0x39e8);
          *(float *)(iVar6 + 0x25e8) = (float)iVar11 * fVar2;
          *(float *)(iVar6 + 0x25ec) = (float)iVar10 * fVar2;
          *(float *)(iVar6 + 0x25f0) = (float)(iVar15 + iVar11 + 1) * fVar2;
          *(float *)(iVar6 + 0x25f4) = (float)(iVar8 + iVar10 + 1) * fVar2;
        }
        iVar9 = iVar9 + 4;
        iVar6 = iVar6 + 0x10;
      } while (iVar9 != in_stack_00000458 + 0x400);
      unkclass_instream_cpp_CInStreamFile_dtor_FUN_0057cec0((CInStreamFile *)&stack0x00000400,0);
    }
    *(int *)(in_stack_00000458 + 0x420c) = in_stack_0000045c;
    engine_font_cpp_FUN_004a8540();
  }
  return;
}
