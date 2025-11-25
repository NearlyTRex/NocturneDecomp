// Name: engine_colquant.c_FUN_004406c0
// Address: 004406c0
// Address Range: [[004406c0, 00440b32]]
// Convention: unknown
// Signature: undefined engine_colquant.c_FUN_004406c0()
// Cross-references:
//   engine_palette.cpp_CPaletteManager_createOutputPalette_FUN_00545180 (00545180) at 00545431 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Subdividing_histogram_ar_00618d41
//   TerminatedCString s_s_6_6d_00618d79
//   double DOUBLE_00618d81 = 0.577350270000000
//   double DOUBLE_00618d89 = 0.590000000000000
//   double DOUBLE_00618d91 = 0.300000000000000
//   double DOUBLE_00618d99 = 0.110000000000000
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_colquant.c_FUN_00440b40
//   engine_colquant.c_FUN_00440c80
//   engine_colquant.c_FUN_00440dc0
//   engine_colquant.c_FUN_00440f00
//   engine_colquant.c_FUN_00441260
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20

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
  undefined1 uStack00000004;
  undefined1 uStack00000008;
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
    fVar12 = (float10)DOUBLE_00618d81;
    iVar7 = 0;
    do {
      iVar4 = _uStack00000004[0x801];
      fVar13 = (float10)*(byte *)(iVar4 + 1 + iVar7);
      bVar1 = *(byte *)(iVar4 + 2 + iVar7);
      fVar14 = (float10)bVar1;
      fVar13 = SQRT(fVar14 * fVar14 +
                    (float10)*(byte *)(iVar4 + iVar7) * (float10)*(byte *)(iVar4 + iVar7) +
                    fVar13 * fVar13) * fVar12;
      dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar4,(uint)bVar1));
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
      dVar3 = DOUBLE_00618d99;
      dVar2 = DOUBLE_00618d91;
      dVar15 = DOUBLE_00618d89;
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
          dVar15 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(_uStack00000004,piVar6));
          iVar7 = (int)((ulonglong)dVar15 >> 0x20);
          *(char *)(piVar5 + 0x2002) = (char)(int)ROUND(fVar12);
          fVar13 = (float10)*(double *)(iVar7 + 0x2010);
          dVar15 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44(iVar7,CONCAT31((int3)((ulonglong)dVar15 >> 8),
                                                              (char)(int)ROUND(fVar12))));
          iVar7 = (int)((ulonglong)dVar15 >> 0x20);
          uStack00000004 = (undefined1)(int)ROUND(fVar13);
          *(undefined1 *)((int)piVar5 + 0x8009) = uStack00000004;
          fVar12 = (float10)*(double *)(iVar7 + 0x2018);
          dVar15 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44(iVar7,CONCAT31((int3)((ulonglong)dVar15 >> 8),
                                                              uStack00000004)));
          uStack00000008 = (undefined1)(int)ROUND(fVar12);
          _uStack00000004 = (int *)((int)((ulonglong)dVar15 >> 0x20) + 0x20);
          *(undefined1 *)((int)piVar5 + 0x800a) = uStack00000008;
          piVar6 = (int *)CONCAT31((int3)((ulonglong)dVar15 >> 8),uStack00000008);
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
          if ((double)CONCAT44(iStack_134,iStack_138) < *(double *)(piVar6 + 0x1014)) {
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
      if ((double)CONCAT44(iStack_12c,iStack_130) !=
          *(double *)(_uStack00000004 + iVar7 * 0x10 + 0x1006)) break;
      iStack_13c = iVar4;
      engine_colquant_c_FUN_00440b40();
LAB_0044091a:
      uVar8 = uVar8 + 1;
    }
    if ((double)CONCAT44(iStack_12c,iStack_130) ==
        *(double *)(_uStack00000004 + iVar7 * 0x10 + 0x1008)) {
      iStack_13c = iVar4;
      engine_colquant_c_FUN_00440c80();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44(iStack_12c,iStack_130) ==
        *(double *)(_uStack00000004 + iVar7 * 0x10 + 0x100a)) {
      iStack_13c = iVar4;
      engine_colquant_c_FUN_00440dc0();
      goto LAB_0044091a;
    }
    if ((double)CONCAT44(iStack_12c,iStack_130) !=
        *(double *)(_uStack00000004 + iVar7 * 0x10 + 0x100c)) goto LAB_0044091a;
    iStack_13c = iVar4;
    engine_colquant_c_FUN_00440f00();
    uVar8 = uVar8 + 1;
  } while( true );
}


// Assembly code:
// 004406c0: PUSH EBX
//   Label: engine_colquant.c_FUN_004406c0
// 004406c1: PUSH ESI
// 004406c2: PUSH EDI
// 004406c3: PUSH EBP
// 004406c4: MOV EBP,ESP
// 004406c6: SUB ESP,0x14c
// 004406cc: AND ESP,0xfffffff8
// 004406cf: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004406d2: PUSH 0x2000
// 004406d7: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004406da: PUSH 0x0
// 004406dc: ADD EAX,0x4
// 004406df: PUSH EAX
// 004406e0: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004406e5: ADD ESP,0xc
// 004406e8: PUSH 0x2000
// 004406ed: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004406f0: PUSH 0x0
// 004406f2: ADD EAX,0x2008
// 004406f7: PUSH EAX
// 004406f8: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004406fd: ADD ESP,0xc
// 00440700: PUSH 0x4000
// 00440705: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440708: PUSH 0x0
// 0044070a: ADD EAX,0x4008
// 0044070f: PUSH EAX
// 00440710: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00440715: ADD ESP,0xc
// 00440718: PUSH 0x300
// 0044071d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440720: PUSH 0x0
// 00440722: ADD EAX,0x8008
// 00440727: PUSH EAX
// 00440728: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 0044072d: ADD ESP,0xc
// 00440730: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440733: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00440736: MOV dword ptr [EAX + 0x2004],EDX
// 0044073c: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0044073f: MOV dword ptr [EAX],EDX
// 00440741: TEST ESI,ESI
// 00440743: JLE 0x004407ca
//   XREF to: 004407ca (CONDITIONAL_JUMP)
// 00440749: FLD double ptr [0x00618d81]
//   XREF to: 00618d81 (READ)
// 0044074f: LEA ECX,[ESI*0x4 + 0x0]
// 00440756: XOR EBX,EBX
// 00440758: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00440758
//   XREF to: Stack[0x4] (READ)
// 0044075b: MOV EDX,dword ptr [EDX + 0x2004]
// 00440761: XOR EAX,EAX
// 00440763: MOV AL,byte ptr [EDX + EBX*0x1]
// 00440766: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044076d: XOR EAX,EAX
// 0044076f: MOV AL,byte ptr [EDX + EBX*0x1 + 0x1]
// 00440773: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0044077a: FILD word ptr [ESP + 0x144]
//   XREF to: Stack[-0x1c] (READ)
// 00440781: FMUL ST0
// 00440783: XOR EAX,EAX
// 00440785: FILD word ptr [ESP + 0x148]
//   XREF to: Stack[-0x18] (READ)
// 0044078c: MOV AL,byte ptr [EDX + EBX*0x1 + 0x2]
// 00440790: FMUL ST0
// 00440792: MOV dword ptr [ESP + 0x148],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00440799: FADDP
// 0044079b: FILD word ptr [ESP + 0x148]
//   XREF to: Stack[-0x18] (READ)
// 004407a2: FMUL ST0
// 004407a4: FADDP
// 004407a6: FSQRT
// 004407a8: FMUL ST1
// 004407aa: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004407af: FISTP dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (WRITE)
// 004407b6: MOV AL,byte ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (READ)
// 004407bd: ADD EBX,0x4
// 004407c0: MOV byte ptr [EDX + EBX*0x1 + -0x1],AL
// 004407c4: CMP EBX,ECX
// 004407c6: JL 0x00440758
//   XREF to: 00440758 (CONDITIONAL_JUMP)
// 004407c8: FSTP ST0
// 004407ca: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_004407ca
//   XREF to: Stack[0x4] (READ)
// 004407cd: PUSH 0x0
// 004407cf: MOV dword ptr [EAX + 0x4040],0x0
// 004407d9: PUSH EAX
// 004407da: MOV dword ptr [EAX + 0x4044],ESI
// 004407e0: CALL engine_colquant.c_FUN_00441260
//   XREF to: 00441260 (UNCONDITIONAL_CALL)
// 004407e5: ADD ESP,0x8
// 004407e8: PUSH ESI
// 004407e9: PUSH 0x618d41
//   XREF to: 00618d41 (DATA)
// 004407ee: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x150] (DATA)
// 004407f2: PUSH EAX
// 004407f3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004407f8: ADD ESP,0xc
// 004407fb: PUSH 0x16
// 004407fd: PUSH 0x0
// 004407ff: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x150] (DATA)
// 00440803: PUSH EAX
// 00440804: MOV EDI,0x40
// 00440809: XOR EBX,EBX
// 0044080b: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00440810: ADD ESP,0xc
// 00440813: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00440813
//   XREF to: Stack[0x4] (READ)
// 00440816: MOV EAX,dword ptr [EAX]
// 00440818: DEC EAX
// 00440819: CMP EBX,EAX
// 0044081b: JGE 0x00440964
//   XREF to: 00440964 (CONDITIONAL_JUMP)
// 00440821: PUSH EBX
// 00440822: PUSH 0x618d79
//   XREF to: 00618d79 (DATA)
// 00440827: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x150] (DATA)
// 0044082b: PUSH EAX
// 0044082c: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00440831: ADD ESP,0xc
// 00440834: PUSH 0x21
// 00440836: PUSH 0x0
// 00440838: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x150] (DATA)
// 0044083c: PUSH EAX
// 0044083d: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00440842: ADD ESP,0xc
// 00440845: TEST BL,0x7
// 00440848: JNZ 0x0044084f
//   XREF to: 0044084f (CONDITIONAL_JUMP)
// 0044084a: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0044084f: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0044084f
//   XREF to: Stack[0x4] (READ)
// 00440852: MOV EAX,dword ptr [EAX + 0x4010]
// 00440858: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x160] (DATA)
// 0044085b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044085e: MOV EAX,dword ptr [EAX + 0x4014]
// 00440864: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 00440868: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044086b: MOV EAX,dword ptr [EAX + 0x4038]
// 00440871: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 00440875: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440878: MOV ECX,0x1
// 0044087d: MOV EAX,dword ptr [EAX + 0x403c]
// 00440883: XOR ESI,ESI
// 00440885: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 00440889: CMP EBX,ECX
// 0044088b: JL 0x004408d1
//   XREF to: 004408d1 (CONDITIONAL_JUMP)
// 0044088d: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440890: ADD EDX,EDI
// 00440892: FLD double ptr [EDX + 0x4010]
//   Label: LAB_00440892
// 00440898: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x160] (DATA)
// 0044089b: FNSTSW AX
// 0044089d: SAHF
// 0044089e: JBE 0x004408c9
//   XREF to: 004408c9 (CONDITIONAL_JUMP)
// 004408a0: MOV EAX,dword ptr [EDX + 0x4010]
// 004408a6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x160] (DATA)
// 004408a9: MOV EAX,dword ptr [EDX + 0x4014]
// 004408af: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x15c] (WRITE)
// 004408b3: MOV EAX,dword ptr [EDX + 0x4038]
// 004408b9: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x158] (WRITE)
// 004408bd: MOV EAX,dword ptr [EDX + 0x403c]
// 004408c3: MOV ESI,ECX
// 004408c5: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x154] (WRITE)
// 004408c9: INC ECX
//   Label: LAB_004408c9
// 004408ca: ADD EDX,0x40
// 004408cd: CMP ECX,EBX
// 004408cf: JLE 0x00440892
//   XREF to: 00440892 (CONDITIONAL_JUMP)
// 004408d1: MOV ECX,ESI
//   Label: LAB_004408d1
// 004408d3: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004408d6: SHL ECX,0x6
// 004408d9: ADD ECX,EAX
// 004408db: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x158] (READ)
// 004408df: LEA EDX,[EBX + 0x1]
// 004408e2: FCOMP double ptr [ECX + 0x4018]
// 004408e8: FNSTSW AX
// 004408ea: SAHF
// 004408eb: JZ 0x00440920
//   XREF to: 00440920 (CONDITIONAL_JUMP)
// 004408ed: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x158] (READ)
// 004408f1: FCOMP double ptr [ECX + 0x4020]
// 004408f7: FNSTSW AX
// 004408f9: SAHF
// 004408fa: JZ 0x00440930
//   XREF to: 00440930 (CONDITIONAL_JUMP)
// 004408fc: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x158] (READ)
// 00440900: FCOMP double ptr [ECX + 0x4028]
// 00440906: FNSTSW AX
// 00440908: SAHF
// 00440909: JZ 0x00440940
//   XREF to: 00440940 (CONDITIONAL_JUMP)
// 0044090b: FLD double ptr [ESP + 0x8]
//   XREF to: Stack[-0x158] (READ)
// 0044090f: FCOMP double ptr [ECX + 0x4030]
// 00440915: FNSTSW AX
// 00440917: SAHF
// 00440918: JZ 0x00440950
//   XREF to: 00440950 (CONDITIONAL_JUMP)
// 0044091a: INC EBX
//   Label: LAB_0044091a
// 0044091b: JMP 0x00440813
//   XREF to: 00440813 (UNCONDITIONAL_JUMP)
// 00440920: PUSH EDX
//   Label: LAB_00440920
// 00440921: PUSH ESI
// 00440922: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440925: PUSH EAX
// 00440926: CALL engine_colquant.c_FUN_00440b40
//   XREF to: 00440b40 (UNCONDITIONAL_CALL)
// 0044092b: ADD ESP,0xc
// 0044092e: JMP 0x0044091a
//   XREF to: 0044091a (UNCONDITIONAL_JUMP)
// 00440930: PUSH EDX
//   Label: LAB_00440930
// 00440931: PUSH ESI
// 00440932: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440935: PUSH ESI
// 00440936: CALL engine_colquant.c_FUN_00440c80
//   XREF to: 00440c80 (UNCONDITIONAL_CALL)
// 0044093b: ADD ESP,0xc
// 0044093e: JMP 0x0044091a
//   XREF to: 0044091a (UNCONDITIONAL_JUMP)
// 00440940: PUSH EDX
//   Label: LAB_00440940
// 00440941: PUSH ESI
// 00440942: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440945: PUSH ECX
// 00440946: CALL engine_colquant.c_FUN_00440dc0
//   XREF to: 00440dc0 (UNCONDITIONAL_CALL)
// 0044094b: ADD ESP,0xc
// 0044094e: JMP 0x0044091a
//   XREF to: 0044091a (UNCONDITIONAL_JUMP)
// 00440950: PUSH EDX
//   Label: LAB_00440950
// 00440951: PUSH ESI
// 00440952: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440955: PUSH EDX
// 00440956: CALL engine_colquant.c_FUN_00440f00
//   XREF to: 00440f00 (UNCONDITIONAL_CALL)
// 0044095b: ADD ESP,0xc
// 0044095e: INC EBX
// 0044095f: JMP 0x00440813
//   XREF to: 00440813 (UNCONDITIONAL_JUMP)
// 00440964: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00440964
//   XREF to: Stack[0x4] (READ)
// 00440967: MOV ECX,dword ptr [EDX]
// 00440969: XOR EAX,EAX
// 0044096b: TEST ECX,ECX
// 0044096d: JLE 0x00440a1a
//   XREF to: 00440a1a (CONDITIONAL_JUMP)
// 00440973: FLD double ptr [0x00618d99]
//   XREF to: 00618d99 (READ)
// 00440979: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044097c: FLD double ptr [0x00618d91]
//   XREF to: 00618d91 (READ)
// 00440982: MOV ECX,EDX
// 00440984: FLD double ptr [0x00618d89]
//   XREF to: 00618d89 (READ)
// 0044098a: FILD word ptr [ECX + 0x4008]
//   Label: LAB_0044098a
// 00440990: FSTP double ptr [EDX + 0x2008]
// 00440996: ADD EDX,0x20
// 00440999: FILD word ptr [ECX + 0x400a]
// 0044099f: FSTP double ptr [EDX + 0x1ff0]
// 004409a5: FILD word ptr [ECX + 0x400c]
// 004409ab: MOV dword ptr [EDX + -0x1c],0x0
// 004409b2: MOV dword ptr [EDX + -0x18],0x0
// 004409b9: MOV dword ptr [EDX + -0x14],0x0
// 004409c0: MOV dword ptr [EDX + -0x10],0x0
// 004409c7: FLD double ptr [EDX + 0x1ff0]
// 004409cd: MOV dword ptr [EDX + -0xc],0x0
// 004409d4: FMUL ST2
// 004409d6: MOV dword ptr [EDX + -0x8],0x0
// 004409dd: FLD double ptr [EDX + 0x1fe8]
// 004409e3: FMUL ST4
// 004409e5: MOV dword ptr [EDX + -0x4],0x0
// 004409ec: FADDP
// 004409ee: FXCH
// 004409f0: FST double ptr [EDX + 0x1ff8]
// 004409f6: FMUL ST4
// 004409f8: MOV dword ptr [EDX],0x0
// 004409fe: FADDP
// 00440a00: INC EAX
// 00440a01: FSTP double ptr [EDX + 0x2000]
// 00440a07: MOV ESI,dword ptr [EBX]
// 00440a09: ADD ECX,0x40
// 00440a0c: CMP EAX,ESI
// 00440a0e: JL 0x0044098a
//   XREF to: 0044098a (CONDITIONAL_JUMP)
// 00440a14: FSTP ST0
// 00440a16: FSTP ST0
// 00440a18: FSTP ST0
// 00440a1a: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00440a1a
//   XREF to: Stack[0x4] (READ)
// 00440a1d: XOR EDI,EDI
// 00440a1f: MOV EDX,dword ptr [EAX]
// 00440a21: MOV dword ptr [ESP + 0x13c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00440a28: TEST EDX,EDX
// 00440a2a: JLE 0x00440a6e
//   XREF to: 00440a6e (CONDITIONAL_JUMP)
// 00440a2c: MOV EDX,dword ptr [EBP + 0x14]
//   Label: LAB_00440a2c
//   XREF to: Stack[0x4] (READ)
// 00440a2f: XOR EBX,EBX
// 00440a31: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00440a31
//   XREF to: Stack[0x4] (READ)
// 00440a34: MOV ECX,dword ptr [EAX]
// 00440a36: DEC ECX
// 00440a37: CMP EBX,ECX
// 00440a39: JGE 0x00440a56
//   XREF to: 00440a56 (CONDITIONAL_JUMP)
// 00440a3b: FLD double ptr [EDX + 0x2020]
// 00440a41: FCOMP double ptr [EDX + 0x2040]
// 00440a47: FNSTSW AX
// 00440a49: SAHF
// 00440a4a: JA 0x00440aef
//   XREF to: 00440aef (CONDITIONAL_JUMP)
// 00440a50: INC EBX
// 00440a51: ADD EDX,0x20
// 00440a54: JMP 0x00440a31
//   XREF to: 00440a31 (UNCONDITIONAL_JUMP)
// 00440a56: MOV EDX,dword ptr [ESP + 0x13c]
//   Label: LAB_00440a56
//   XREF to: Stack[-0x24] (READ)
// 00440a5d: INC EDX
// 00440a5e: MOV dword ptr [ESP + 0x13c],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 00440a65: MOV EAX,EDX
// 00440a67: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440a6a: CMP EAX,dword ptr [EDX]
// 00440a6c: JL 0x00440a2c
//   XREF to: 00440a2c (CONDITIONAL_JUMP)
// 00440a6e: MOV EBX,dword ptr [EBP + 0x14]
//   Label: LAB_00440a6e
//   XREF to: Stack[0x4] (READ)
// 00440a71: MOV EDX,EBX
// 00440a73: LEA ECX,[EBX + 0x2000]
// 00440a79: FLD double ptr [EDX + 0x2008]
//   Label: LAB_00440a79
// 00440a7f: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00440a84: ADD EBX,0x3
// 00440a87: FISTP dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (WRITE)
// 00440a8e: MOV AL,byte ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (READ)
// 00440a95: MOV byte ptr [EBX + 0x8005],AL
// 00440a9b: FLD double ptr [EDX + 0x2010]
// 00440aa1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00440aa6: FISTP dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (WRITE)
// 00440aad: MOV AL,byte ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (READ)
// 00440ab4: MOV byte ptr [EBX + 0x8006],AL
// 00440aba: FLD double ptr [EDX + 0x2018]
// 00440ac0: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00440ac5: FISTP dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (WRITE)
// 00440acc: MOV AL,byte ptr [ESP + 0x140]
//   XREF to: Stack[-0x20] (READ)
// 00440ad3: ADD EDX,0x20
// 00440ad6: MOV byte ptr [EBX + 0x8007],AL
// 00440adc: CMP EDX,ECX
// 00440ade: JNZ 0x00440a79
//   XREF to: 00440a79 (CONDITIONAL_JUMP)
// 00440ae0: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00440ae3: ADD EAX,0x8008
// 00440ae8: MOV ESP,EBP
// 00440aea: POP EBP
// 00440aeb: POP EDI
// 00440aec: POP ESI
// 00440aed: POP EBX
// 00440aee: RET
// 00440aef: MOV ECX,0x8
//   Label: LAB_00440aef
// 00440af4: LEA EDI,[ESP + 0x110]
//   XREF to: Stack[-0x50] (DATA)
// 00440afb: LEA ESI,[EDX + 0x2008]
// 00440b01: MOVSD.REP ES:EDI,ESI
// 00440b03: MOV ECX,0x8
// 00440b08: LEA EDI,[EDX + 0x2008]
// 00440b0e: LEA ESI,[EDX + 0x2028]
// 00440b14: MOVSD.REP ES:EDI,ESI
// 00440b16: MOV ECX,0x8
// 00440b1b: LEA ESI,[ESP + 0x110]
//   XREF to: Stack[-0x50] (DATA)
// 00440b22: LEA EDI,[EDX + 0x2028]
// 00440b28: MOVSD.REP ES:EDI,ESI
// 00440b2a: INC EBX
// 00440b2b: ADD EDX,0x20
// 00440b2e: JMP 0x00440a31
//   XREF to: 00440a31 (UNCONDITIONAL_JUMP)
