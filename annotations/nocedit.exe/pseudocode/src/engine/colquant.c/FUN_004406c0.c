// Name: engine_colquant.c_FUN_004406c0
// Address: 004406c0
// Address Range: [[004406c0, 00440b32]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_004406c0()

#include "nocturne.h"

int engine_colquant_c_FUN_004406c0(void)

{
  byte bVar1;
  double dVar2;
  double dVar3;
  int extraout_ECX;
  int iVar4;
  int *extraout_ECX_00;
  int *piVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  BADSPACEBASE *in_ESP;
  int *piVar9;
  int *piVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  double dVar15;
  byte uStack00000004;
  byte uStack00000008;
  int in_stack_0000000c;
  int in_stack_00000010;
  int iStack_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int aiStack_34 [9];
  int *piVar16;
  
  bVar11 = 0;
  crt_memory_c_memset_FUN_005fde40(_uStack00000004 + 1,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(_uStack00000004 + 0x802,0,0x2000);
  crt_memory_c_memset_FUN_005fde40(_uStack00000004 + 0x1002,0,0x4000);
  crt_memory_c_memset_FUN_005fde40(_uStack00000004 + 0x2002,0,0x300);
  _uStack00000004[0x801] = _uStack00000008;
  *_uStack00000004 = in_stack_00000010;
  if (0 < in_stack_0000000c) {
    fVar12 = (float10)0.57735027000000005;
    iVar7 = 0;
    do {
      iVar4 = _uStack00000004[0x801];
      fVar13 = (float10)*(byte *)(iVar4 + 1 + iVar7);
      bVar1 = *(byte *)(iVar4 + 2 + iVar7);
      fVar14 = (float10)bVar1;
      fVar13 = SQRT(fVar14 * fVar14 +
                    (float10)*(byte *)(iVar4 + iVar7) * (float10)*(byte *)(iVar4 + iVar7) +
                    fVar13 * fVar13) * fVar12;
      dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(iVar4,(uint)bVar1));
      iVar7 = iVar7 + 4;
      *(char *)((int)((ulonglong)dVar15 >> 0x20) + -1 + iVar7) = (char)(int)ROUND(fVar13);
    } while (iVar7 < extraout_ECX);
  }
  _uStack00000004[0x1010] = 0;
  _uStack00000004[0x1011] = in_stack_0000000c;
  engine_colquant_c_FUN_00441260();
  crt_stdio_c_sprintf_FUN_005fdbd0
            ((char *)&iStack_13c,"Subdividing histogram array for %d palette entries...\n\n",in_stack_0000000c);
  uVar8 = 0;
  engine_2d_c_drawText_FUN_00401fd0((char *)&iStack_138,0,0x16);
  do {
    while( true ) {
      dVar3 = 0.11;
      dVar2 = 0.29999999999999999;
      dVar15 = 0.58999999999999997;
      if (*_uStack00000004 + -1 <= (int)uVar8) {
        iVar7 = 0;
        piVar6 = _uStack00000004;
        piVar5 = _uStack00000004;
        if (0 < *_uStack00000004) {
          do {
            *(double *)(piVar5 + 0x802) = (double)(short)piVar6[0x1002];
            *(double *)(piVar5 + 0x804) = (double)*(short *)((int)piVar6 + 0x400a);
            iVar4 = piVar6[0x1003];
            piVar5[1] = 0;
            piVar5[2] = 0;
            piVar5[3] = 0;
            piVar5[4] = 0;
            piVar5[5] = 0;
            piVar5[6] = 0;
            piVar5[7] = 0;
            *(double *)(piVar5 + 0x806) = (double)(short)iVar4;
            piVar5[8] = 0;
            iVar7 = iVar7 + 1;
            *(double *)(piVar5 + 0x808) =
                 (double)(short)iVar4 * dVar3 +
                 *(double *)(piVar5 + 0x802) * dVar2 + *(double *)(piVar5 + 0x804) * dVar15;
            piVar6 = piVar6 + 0x10;
            piVar5 = piVar5 + 8;
          } while (iVar7 < *_uStack00000004);
        }
        piVar6 = _uStack00000004;
        piVar5 = _uStack00000004;
        piVar16 = (int *)0x0;
        if (0 < *_uStack00000004) {
          do {
            iVar7 = 0;
            piVar6 = _uStack00000004;
            while (iVar7 < *_uStack00000004 + -1) {
              if (*(double *)(piVar6 + 0x810) < *(double *)(piVar6 + 0x808)) {
                piVar9 = piVar6 + 0x802;
                piVar10 = aiStack_34;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                piVar9 = piVar6 + 0x80a;
                piVar10 = piVar6 + 0x802;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                piVar9 = aiStack_34;
                piVar10 = piVar6 + 0x80a;
                for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
                  *piVar10 = *piVar9;
                  piVar9 = piVar9 + (uint)bVar11 * -2 + 1;
                  piVar10 = piVar10 + (uint)bVar11 * -2 + 1;
                }
                iVar7 = iVar7 + 1;
                piVar6 = piVar6 + 8;
              }
              else {
                iVar7 = iVar7 + 1;
                piVar6 = piVar6 + 8;
              }
            }
            piVar6 = (int *)((int)piVar16 + 1);
            piVar16 = piVar6;
          } while ((int)piVar6 < *_uStack00000004);
        }
        do {
          fVar12 = (float10)*(double *)(_uStack00000004 + 0x802);
          dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(_uStack00000004,piVar6));
          iVar7 = (int)((ulonglong)dVar15 >> 0x20);
          *(char *)(piVar5 + 0x2002) = (char)(int)ROUND(fVar12);
          fVar13 = (float10)*(double *)(iVar7 + 0x2010);
          dVar15 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44 /* combine 2-byte values */(iVar7,CONCAT31 /* combine 2-byte values */((int3)((ulonglong)dVar15 >> 8),
                                                              (char)(int)ROUND(fVar12))));
          iVar7 = (int)((ulonglong)dVar15 >> 0x20);
          uStack00000004 = (byte)(int)ROUND(fVar13);
          *(byte *)((int)piVar5 + 0x8009) = uStack00000004;
          fVar12 = (float10)*(double *)(iVar7 + 0x2018);
          dVar15 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44 /* combine 2-byte values */(iVar7,CONCAT31 /* combine 2-byte values */((int3)((ulonglong)dVar15 >> 8),
                                                              uStack00000004)));
          uStack00000008 = (byte)(int)ROUND(fVar12);
          _uStack00000004 = (int *)((int)((ulonglong)dVar15 >> 0x20) + 0x20);
          *(byte *)((int)piVar5 + 0x800a) = uStack00000008;
          piVar6 = (int *)CONCAT31 /* combine 2-byte values */((int3)((ulonglong)dVar15 >> 8),uStack00000008);
          piVar5 = (int *)((int)piVar5 + 3);
        } while (_uStack00000004 != extraout_ECX_00);
        return (int)ROUND(fVar13) + 0x8008;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0((char *)&iStack_134,"%6.6d",uVar8);
      engine_2d_c_drawText_FUN_00401fd0((char *)&iStack_130,0,0x21);
      if ((uVar8 & 7) == 0) {
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      }
      iStack_138 = _uStack00000004[0x1004];
      iStack_134 = _uStack00000004[0x1005];
      iStack_130 = _uStack00000004[0x100e];
      iVar4 = 1;
      iStack_12c = _uStack00000004[0x100f];
      iVar7 = 0;
      piVar6 = _uStack00000004;
      if (0 < (int)uVar8) {
        do {
          if ((double)CONCAT44 /* combine 2-byte values */(iStack_134,iStack_138) < *(double *)(piVar6 + 0x1014)) {
            iStack_138 = piVar6[0x1014];
            iStack_134 = piVar6[0x1015];
            iStack_130 = piVar6[0x101e];
            iStack_12c = piVar6[0x101f];
            iVar7 = iVar4;
          }
          iVar4 = iVar4 + 1;
          piVar6 = piVar6 + 0x10;
        } while (iVar4 <= (int)uVar8);
      }
      iVar4 = uVar8 + 1;
      if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) !=
          *(double *)(_uStack00000004 + iVar7 * 0x10 + 0x1006)) break;
      iStack_13c = iVar4;
      engine_colquant_c_FUN_00440b40();
LAB_0044091a:
      uVar8 = uVar8 + 1;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) ==
        *(double *)(_uStack00000004 + iVar7 * 0x10 + 0x1008)) {
      iStack_13c = iVar4;
      engine_colquant_c_FUN_00440c80();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) ==
        *(double *)(_uStack00000004 + iVar7 * 0x10 + 0x100a)) {
      iStack_13c = iVar4;
      engine_colquant_c_FUN_00440dc0();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44 /* combine 2-byte values */(iStack_12c,iStack_130) !=
        *(double *)(_uStack00000004 + iVar7 * 0x10 + 0x100c)) goto LAB_0044091a;
    iStack_13c = iVar4;
    engine_colquant_c_FUN_00440f00();
    uVar8 = uVar8 + 1;
  } while( true );
}
