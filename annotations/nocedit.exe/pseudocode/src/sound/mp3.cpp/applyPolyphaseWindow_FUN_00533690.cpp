// Name: sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690
// Address: 00533690
// Address Range: [[00533690, 00533b95]]
// Convention: __cdecl
// Signature: void sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690(float * input_samples, float * output_samples, int mpeg_block_type)
// Cross-references:
//   sound_mp3.cpp_CMP3Decoder_synthesisPoly_FUN_00533ba0 (00533ba0) at 00533bdf [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0063b0a2 = 0.0872664630000000
//   double DOUBLE_0063b0aa = 0.261799388000000
//   double DOUBLE_0063b0b2 = 0.130899693899575
//   double DOUBLE_0063b0ba = 0.0436332312998582
//   double DOUBLE_0063b0c2 = 0.5
//   double DOUBLE_0063b0ca = -18
//   double DOUBLE_0063b0d2 = -6
//   double DOUBLE_0063b0da = 0.0000100000000000000
//   int g_Mp3SynthesisTablesInitialized = 0x1
//   double[4][36] g_Mp3WindowTables
//   undefined4 DAT_02f46690
//   undefined4 g_Mp3WindowTables[1][0]
//   undefined4 DAT_02f467b0
//   undefined4 DAT_02f46838
//   undefined4 DAT_02f4683c
//   undefined4 DAT_02f46840
//   undefined4 DAT_02f46844
//   undefined4 DAT_02f46848
//   undefined4 DAT_02f46850
//   undefined4 DAT_02f46898
//   undefined4 DAT_02f4689c
//   undefined4 DAT_02f468a0
//   undefined4 DAT_02f468a4
//   undefined4 g_Mp3WindowTables[2][0]
//   undefined4 DAT_02f468d0
//   undefined4 DAT_02f46928
//   undefined4 DAT_02f4692c
//   undefined4 DAT_02f46930
//   undefined4 DAT_02f46934
//   undefined4 g_Mp3WindowTables[3][0]
//   undefined4 DAT_02f469ec
//   undefined4 DAT_02f469f0
//   undefined4 DAT_02f469f4
//   undefined4 DAT_02f469f8
//   undefined4 DAT_02f46a00
//   undefined4 DAT_02f46a48
//   undefined4 DAT_02f46a4c
//   undefined4 DAT_02f46a50
//   undefined4 DAT_02f46a54
//   undefined4 DAT_02f46a58
//   undefined4 DAT_02f46a60
//   double[12][6] g_Mp3DctMatrix
//   undefined4 DAT_02f46b10
//   undefined4 DAT_02f46b18
//   undefined4 DAT_02f46b20
//   undefined4 DAT_02f46b28
//   undefined4 DAT_02f46b30
//   undefined4 DAT_02f46b38
//   undefined4 DAT_02f46b40
//   undefined4 DAT_02f46b48
//   undefined4 DAT_02f46b50
//   undefined4 DAT_02f46b58
//   undefined4 DAT_02f46b60
//   double[36][18] g_Mp3PolyCoefficients
//   undefined4 DAT_02f46d50
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl
sound_mp3_cpp_applyPolyphaseWindow_FUN_00533690
          (float *input_samples,float *output_samples,int mpeg_block_type)

{
  double *pdVar1;
  double *pdVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  int aiStack_9c [22];
  int local_44;
  float *local_40;
  double (*local_3c) [18];
  double *local_38;
  double (*local_34) [36];
  undefined4 local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  float *local_18;
  int local_14;
  
  if (g_Mp3SynthesisTablesInitialized == 1) {
    iVar10 = 0;
    fVar12 = (float10)DOUBLE_0063b0a2;
    fVar13 = (float10)DOUBLE_0063b0c2;
    iVar11 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[0] + iVar11) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x24);
    iVar10 = 0;
    fVar12 = (float10)DOUBLE_0063b0a2;
    fVar13 = (float10)DOUBLE_0063b0c2;
    iVar11 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[1] + iVar11) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x12);
    iVar11 = 0x90;
    do {
      iVar10 = iVar11 + 8;
      *(undefined4 *)((int)g_Mp3WindowTables[1] + iVar11 + 4) = 0x3ff00000;
      *(undefined4 *)((int)g_Mp3WindowTables[1] + iVar11) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0xc0);
    iVar10 = 0x18;
    fVar12 = (float10)DOUBLE_0063b0aa;
    fVar13 = (float10)DOUBLE_0063b0ca;
    fVar14 = (float10)DOUBLE_0063b0c2;
    iVar11 = 0xc0;
    do {
      fVar15 = (float10)fsin(((float10)iVar10 + fVar14 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[1] + iVar11) = (double)fVar15;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x1e);
    iVar11 = 0xf0;
    do {
      iVar10 = iVar11 + 8;
      *(undefined4 *)((int)g_Mp3WindowTables[1] + iVar11) = 0;
      *(undefined4 *)((int)g_Mp3WindowTables[1] + iVar11 + 4) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x120);
    iVar11 = 0;
    do {
      iVar10 = iVar11 + 8;
      *(undefined4 *)((int)g_Mp3WindowTables[3] + iVar11) = 0;
      *(undefined4 *)((int)g_Mp3WindowTables[3] + iVar11 + 4) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x30);
    iVar10 = 6;
    fVar12 = (float10)DOUBLE_0063b0aa;
    fVar13 = (float10)DOUBLE_0063b0d2;
    fVar14 = (float10)DOUBLE_0063b0c2;
    iVar11 = 0x30;
    do {
      fVar15 = (float10)fsin(((float10)iVar10 + fVar14 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[3] + iVar11) = (double)fVar15;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0xc);
    iVar11 = 0x60;
    do {
      iVar10 = iVar11 + 8;
      *(undefined4 *)((int)g_Mp3WindowTables[3] + iVar11 + 4) = 0x3ff00000;
      *(undefined4 *)((int)g_Mp3WindowTables[3] + iVar11) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x90);
    iVar10 = 0x12;
    fVar12 = (float10)DOUBLE_0063b0a2;
    fVar13 = (float10)DOUBLE_0063b0c2;
    iVar11 = 0x90;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[3] + iVar11) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0x24);
    iVar10 = 0;
    fVar12 = (float10)DOUBLE_0063b0aa;
    fVar13 = (float10)DOUBLE_0063b0c2;
    iVar11 = 0;
    do {
      fVar14 = (float10)fsin(((float10)iVar10 + fVar13) * fVar12);
      iVar10 = iVar10 + 1;
      *(double *)((int)g_Mp3WindowTables[2] + iVar11) = (double)fVar14;
      iVar11 = iVar11 + 8;
    } while (iVar10 < 0xc);
    iVar11 = 0x60;
    do {
      iVar10 = iVar11 + 8;
      *(undefined4 *)((int)g_Mp3WindowTables[2] + iVar11) = 0;
      *(undefined4 *)((int)g_Mp3WindowTables[2] + iVar11 + 4) = 0;
      iVar11 = iVar10;
    } while (iVar10 != 0x120);
    local_24 = 0;
    iVar11 = 1;
    local_30 = 0xc;
    do {
      iVar8 = 1;
      fVar12 = (float10)DOUBLE_0063b0b2;
      iVar10 = local_24;
      do {
        fVar13 = (float10)fcos((float10)iVar8 * (float10)(iVar11 + 6) * fVar12);
        iVar8 = iVar8 + 2;
        *(double *)((int)g_Mp3DctMatrix[0] + iVar10) = (double)fVar13;
        iVar10 = iVar10 + 8;
      } while (iVar8 < 0xd);
      iVar11 = iVar11 + 2;
      local_24 = local_24 + 0x30;
    } while (iVar11 != 0x19);
    local_2c = 0x90;
    local_28 = 0x26;
    local_20 = 0;
    do {
      iVar10 = local_20 * 2 + 0x13;
      fVar12 = (float10)DOUBLE_0063b0ba;
      iVar11 = local_20 * 0x90;
      do {
        local_14 = iVar10 % 0x90;
        fVar13 = (float10)fcos((float10)(iVar10 % 0x90) * fVar12);
        iVar8 = iVar11 + 8;
        iVar10 = iVar10 + local_28;
        *(double *)((int)g_Mp3PolyCoefficients[0] + iVar11) = (double)fVar13;
        iVar11 = iVar8;
      } while (iVar8 != local_2c);
      local_20 = local_20 + 1;
      local_28 = local_28 + 4;
      local_2c = local_2c + 0x90;
    } while (local_20 < 0x24);
    g_Mp3SynthesisTablesInitialized = 0;
  }
  if (mpeg_block_type != 2) {
    iVar11 = 0;
    local_44 = 0;
    do {
      iVar10 = local_44;
      if ((float)DOUBLE_0063b0da < ABS(input_samples[iVar11])) {
        local_44 = local_44 + 1;
        aiStack_9c[iVar10] = iVar11;
      }
      iVar11 = iVar11 + 1;
    } while (iVar11 < 0x12);
    local_1c = 0;
    local_34 = g_Mp3WindowTables + mpeg_block_type;
    do {
      local_40 = output_samples + local_1c;
      local_3c = g_Mp3PolyCoefficients + local_1c;
      local_18 = input_samples;
      local_38 = g_Mp3WindowTables[mpeg_block_type] + local_1c;
      fVar3 = 0.0;
      iVar11 = local_44;
      if (0 < local_44) {
        do {
          iVar11 = iVar11 + -1;
          fVar3 = input_samples[aiStack_9c[iVar11]] *
                  (float)g_Mp3PolyCoefficients[local_1c][aiStack_9c[iVar11]] + fVar3;
        } while (0 < iVar11);
        fVar3 = fVar3 * (float)*local_38;
      }
      output_samples[local_1c] = fVar3;
      local_1c = local_1c + 1;
    } while (local_1c < 0x24);
    return;
  }
  crt_memory_c_memset_FUN_005fde40(output_samples,0,0x90);
  iVar10 = 0;
  iVar11 = 0;
  pfVar9 = output_samples;
  do {
    iVar8 = iVar11 + 8;
    pdVar1 = (double *)((int)g_Mp3DctMatrix[0] + iVar11);
    iVar4 = iVar11 + 0x10;
    iVar5 = iVar11 + 0x18;
    iVar6 = iVar11 + 0x20;
    iVar7 = iVar11 + 0x28;
    pdVar2 = (double *)((int)g_Mp3WindowTables[2] + iVar10);
    iVar10 = iVar10 + 8;
    iVar11 = iVar11 + 0x30;
    pfVar9[6] = (input_samples[0xf] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar7) +
                input_samples[0xc] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar6) +
                input_samples[9] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar5) +
                input_samples[6] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar4) +
                *input_samples * (float)*pdVar1 +
                input_samples[3] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar8)) *
                (float)*pdVar2 + pfVar9[6];
    pfVar9 = pfVar9 + 1;
  } while (iVar10 != 0x60);
  iVar11 = 0;
  iVar10 = 0;
  pfVar9 = output_samples;
  do {
    iVar8 = iVar11 + 8;
    pdVar1 = (double *)((int)g_Mp3DctMatrix[0] + iVar11);
    iVar4 = iVar11 + 0x10;
    iVar5 = iVar11 + 0x18;
    iVar6 = iVar11 + 0x20;
    iVar7 = iVar11 + 0x28;
    pdVar2 = (double *)((int)g_Mp3WindowTables[2] + iVar10);
    iVar10 = iVar10 + 8;
    iVar11 = iVar11 + 0x30;
    pfVar9[0xc] = (input_samples[0x10] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar7) +
                  input_samples[0xd] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar6) +
                  input_samples[10] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar5) +
                  input_samples[7] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar4) +
                  input_samples[1] * (float)*pdVar1 +
                  input_samples[4] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar8)) *
                  (float)*pdVar2 + pfVar9[0xc];
    pfVar9 = pfVar9 + 1;
  } while (iVar10 != 0x60);
  iVar11 = 0;
  iVar10 = 0;
  do {
    iVar8 = iVar11 + 8;
    pdVar1 = (double *)((int)g_Mp3DctMatrix[0] + iVar11);
    iVar4 = iVar11 + 0x10;
    iVar5 = iVar11 + 0x18;
    iVar6 = iVar11 + 0x20;
    iVar7 = iVar11 + 0x28;
    pdVar2 = (double *)((int)g_Mp3WindowTables[2] + iVar10);
    iVar10 = iVar10 + 8;
    iVar11 = iVar11 + 0x30;
    output_samples[0x12] =
         (input_samples[0x11] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar7) +
         input_samples[0xe] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar6) +
         input_samples[0xb] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar5) +
         input_samples[8] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar4) +
         input_samples[2] * (float)*pdVar1 +
         input_samples[5] * (float)*(double *)((int)g_Mp3DctMatrix[0] + iVar8)) * (float)*pdVar2 +
         output_samples[0x12];
    output_samples = output_samples + 1;
  } while (iVar10 != 0x60);
  return;
}


// Assembly code:
// 00533690: PUSH EBX
//   Label: sound_mp3.cpp_applyPolyphaseWindow_FUN_00533690
// 00533691: PUSH ESI
// 00533692: PUSH EDI
// 00533693: PUSH EBP
// 00533694: MOV EBP,ESP
// 00533696: SUB ESP,0x8c
// 0053369c: CMP dword ptr [0x0067e210],0x1
//   XREF to: 0067e210 (READ)
// 005336a3: JNZ 0x0053395f
//   XREF to: 0053395f (CONDITIONAL_JUMP)
// 005336a9: XOR EDX,EDX
// 005336ab: XOR ECX,ECX
// 005336ad: FLD double ptr [0x0063b0a2]
//   XREF to: 0063b0a2 (READ)
// 005336b3: FLD double ptr [0x0063b0c2]
//   XREF to: 0063b0c2 (READ)
// 005336b9: MOV dword ptr [EBP + -0x4],EDX
//   Label: LAB_005336b9
//   XREF to: Stack[-0x14] (WRITE)
// 005336bc: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005336bf: FADD ST0,ST1
// 005336c1: FMUL ST2
// 005336c3: FSIN
// 005336c5: ADD ECX,0x8
// 005336c8: INC EDX
// 005336c9: FSTP double ptr [ECX + 0x2f46680]
//   XREF to: 02f46688 (WRITE)
//   XREF to: 02f46690 (WRITE)
// 005336cf: CMP EDX,0x24
// 005336d2: JL 0x005336b9
//   XREF to: 005336b9 (CONDITIONAL_JUMP)
// 005336d4: FSTP ST0
// 005336d6: FSTP ST0
// 005336d8: XOR EDX,EDX
// 005336da: XOR ECX,ECX
// 005336dc: FLD double ptr [0x0063b0a2]
//   XREF to: 0063b0a2 (READ)
// 005336e2: FLD double ptr [0x0063b0c2]
//   XREF to: 0063b0c2 (READ)
// 005336e8: MOV dword ptr [EBP + -0x4],EDX
//   Label: LAB_005336e8
//   XREF to: Stack[-0x14] (WRITE)
// 005336eb: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005336ee: FADD ST0,ST1
// 005336f0: FMUL ST2
// 005336f2: FSIN
// 005336f4: ADD ECX,0x8
// 005336f7: INC EDX
// 005336f8: FSTP double ptr [ECX + 0x2f467a0]
//   XREF to: 02f467a8 (WRITE)
//   XREF to: 02f467b0 (WRITE)
// 005336fe: CMP EDX,0x12
// 00533701: JL 0x005336e8
//   XREF to: 005336e8 (CONDITIONAL_JUMP)
// 00533703: FSTP ST0
// 00533705: MOV EAX,0x90
// 0053370a: MOV EBX,0x3ff00000
// 0053370f: FSTP ST0
// 00533711: ADD EAX,0x8
//   Label: LAB_00533711
// 00533714: XOR ECX,ECX
// 00533716: MOV dword ptr [EAX + 0x2f467a4],EBX
//   XREF to: 02f4683c (WRITE)
//   XREF to: 02f46844 (WRITE)
// 0053371c: MOV dword ptr [EAX + 0x2f467a0],ECX
//   XREF to: 02f46838 (WRITE)
//   XREF to: 02f46840 (WRITE)
// 00533722: CMP EAX,0xc0
// 00533727: JNZ 0x00533711
//   XREF to: 00533711 (CONDITIONAL_JUMP)
// 00533729: MOV EDX,0x18
// 0053372e: MOV ECX,EAX
// 00533730: FLD double ptr [0x0063b0aa]
//   XREF to: 0063b0aa (READ)
// 00533736: FLD double ptr [0x0063b0ca]
//   XREF to: 0063b0ca (READ)
// 0053373c: FLD double ptr [0x0063b0c2]
//   XREF to: 0063b0c2 (READ)
// 00533742: MOV dword ptr [EBP + -0x4],EDX
//   Label: LAB_00533742
//   XREF to: Stack[-0x14] (WRITE)
// 00533745: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00533748: FADD ST0,ST1
// 0053374a: FADD ST0,ST2
// 0053374c: FMUL ST3
// 0053374e: FSIN
// 00533750: ADD ECX,0x8
// 00533753: INC EDX
// 00533754: FSTP double ptr [ECX + 0x2f467a0]
//   XREF to: 02f46840 (WRITE)
//   XREF to: 02f46848 (WRITE)
//   XREF to: 02f46850 (WRITE)
// 0053375a: CMP EDX,0x1e
// 0053375d: JL 0x00533742
//   XREF to: 00533742 (CONDITIONAL_JUMP)
// 0053375f: FSTP ST0
// 00533761: MOV EAX,0xf0
// 00533766: FSTP ST0
// 00533768: FSTP ST0
// 0053376a: ADD EAX,0x8
//   Label: LAB_0053376a
// 0053376d: XOR ESI,ESI
// 0053376f: MOV dword ptr [EAX + 0x2f467a0],ESI
//   XREF to: 02f46898 (WRITE)
//   XREF to: 02f468a0 (WRITE)
// 00533775: MOV dword ptr [EAX + 0x2f467a4],ESI
//   XREF to: 02f4689c (WRITE)
//   XREF to: 02f468a4 (WRITE)
// 0053377b: CMP EAX,0x120
// 00533780: JNZ 0x0053376a
//   XREF to: 0053376a (CONDITIONAL_JUMP)
// 00533782: XOR EAX,EAX
// 00533784: ADD EAX,0x8
//   Label: LAB_00533784
// 00533787: XOR EDX,EDX
// 00533789: MOV dword ptr [EAX + 0x2f469e0],EDX
//   XREF to: 02f469e8 (WRITE)
//   XREF to: 02f469f0 (WRITE)
// 0053378f: MOV dword ptr [EAX + 0x2f469e4],EDX
//   XREF to: 02f469ec (WRITE)
//   XREF to: 02f469f4 (WRITE)
// 00533795: CMP EAX,0x30
// 00533798: JNZ 0x00533784
//   XREF to: 00533784 (CONDITIONAL_JUMP)
// 0053379a: MOV EDX,0x6
// 0053379f: MOV ECX,EAX
// 005337a1: FLD double ptr [0x0063b0aa]
//   XREF to: 0063b0aa (READ)
// 005337a7: FLD double ptr [0x0063b0d2]
//   XREF to: 0063b0d2 (READ)
// 005337ad: FLD double ptr [0x0063b0c2]
//   XREF to: 0063b0c2 (READ)
// 005337b3: MOV dword ptr [EBP + -0x4],EDX
//   Label: LAB_005337b3
//   XREF to: Stack[-0x14] (WRITE)
// 005337b6: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005337b9: FADD ST0,ST1
// 005337bb: FADD ST0,ST2
// 005337bd: FMUL ST3
// 005337bf: FSIN
// 005337c1: ADD ECX,0x8
// 005337c4: INC EDX
// 005337c5: FSTP double ptr [ECX + 0x2f469e0]
//   XREF to: 02f469f8 (WRITE)
//   XREF to: 02f46a00 (WRITE)
// 005337cb: CMP EDX,0xc
// 005337ce: JL 0x005337b3
//   XREF to: 005337b3 (CONDITIONAL_JUMP)
// 005337d0: FSTP ST0
// 005337d2: MOV EAX,0x60
// 005337d7: MOV ESI,0x3ff00000
// 005337dc: FSTP ST0
// 005337de: FSTP ST0
// 005337e0: ADD EAX,0x8
//   Label: LAB_005337e0
// 005337e3: XOR EBX,EBX
// 005337e5: MOV dword ptr [EAX + 0x2f469e4],ESI
//   XREF to: 02f46a4c (WRITE)
//   XREF to: 02f46a54 (WRITE)
// 005337eb: MOV dword ptr [EAX + 0x2f469e0],EBX
//   XREF to: 02f46a48 (WRITE)
//   XREF to: 02f46a50 (WRITE)
// 005337f1: CMP EAX,0x90
// 005337f6: JNZ 0x005337e0
//   XREF to: 005337e0 (CONDITIONAL_JUMP)
// 005337f8: MOV EDX,0x12
// 005337fd: MOV ECX,EAX
// 005337ff: FLD double ptr [0x0063b0a2]
//   XREF to: 0063b0a2 (READ)
// 00533805: FLD double ptr [0x0063b0c2]
//   XREF to: 0063b0c2 (READ)
// 0053380b: MOV dword ptr [EBP + -0x4],EDX
//   Label: LAB_0053380b
//   XREF to: Stack[-0x14] (WRITE)
// 0053380e: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00533811: FADD ST0,ST1
// 00533813: FMUL ST2
// 00533815: FSIN
// 00533817: ADD ECX,0x8
// 0053381a: INC EDX
// 0053381b: FSTP double ptr [ECX + 0x2f469e0]
//   XREF to: 02f46a50 (WRITE)
//   XREF to: 02f46a58 (WRITE)
//   XREF to: 02f46a60 (WRITE)
// 00533821: CMP EDX,0x24
// 00533824: JL 0x0053380b
//   XREF to: 0053380b (CONDITIONAL_JUMP)
// 00533826: FSTP ST0
// 00533828: FSTP ST0
// 0053382a: XOR EDX,EDX
// 0053382c: XOR ECX,ECX
// 0053382e: FLD double ptr [0x0063b0aa]
//   XREF to: 0063b0aa (READ)
// 00533834: FLD double ptr [0x0063b0c2]
//   XREF to: 0063b0c2 (READ)
// 0053383a: MOV dword ptr [EBP + -0x4],EDX
//   Label: LAB_0053383a
//   XREF to: Stack[-0x14] (WRITE)
// 0053383d: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00533840: FADD ST0,ST1
// 00533842: FMUL ST2
// 00533844: FSIN
// 00533846: ADD ECX,0x8
// 00533849: INC EDX
// 0053384a: FSTP double ptr [ECX + 0x2f468c0]
//   XREF to: 02f468c8 (WRITE)
//   XREF to: 02f468d0 (WRITE)
// 00533850: CMP EDX,0xc
// 00533853: JL 0x0053383a
//   XREF to: 0053383a (CONDITIONAL_JUMP)
// 00533855: FSTP ST0
// 00533857: MOV EAX,0x60
// 0053385c: FSTP ST0
// 0053385e: ADD EAX,0x8
//   Label: LAB_0053385e
// 00533861: XOR EDI,EDI
// 00533863: MOV dword ptr [EAX + 0x2f468c0],EDI
//   XREF to: 02f46928 (WRITE)
//   XREF to: 02f46930 (WRITE)
// 00533869: MOV dword ptr [EAX + 0x2f468c4],EDI
//   XREF to: 02f4692c (WRITE)
//   XREF to: 02f46934 (WRITE)
// 0053386f: CMP EAX,0x120
// 00533874: JNZ 0x0053385e
//   XREF to: 0053385e (CONDITIONAL_JUMP)
// 00533876: MOV EBX,0xc
// 0053387b: MOV dword ptr [EBP + -0x14],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0053387e: MOV EDI,0x1
// 00533883: MOV dword ptr [EBP + -0x20],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00533886: MOV ECX,0x1
//   Label: LAB_00533886
// 0053388b: MOV EDX,dword ptr [EBP + -0x20]
//   XREF to: Stack[-0x30] (READ)
// 0053388e: ADD EDX,ECX
// 00533890: MOV EBX,dword ptr [EBP + -0x14]
//   XREF to: Stack[-0x24] (READ)
// 00533893: CMP EDX,ECX
// 00533895: JLE 0x005338c4
//   XREF to: 005338c4 (CONDITIONAL_JUMP)
// 00533897: FLD double ptr [0x0063b0b2]
//   XREF to: 0063b0b2 (READ)
// 0053389d: LEA ESI,[EDI + 0x6]
// 005338a0: MOV dword ptr [EBP + -0x4],ESI
//   Label: LAB_005338a0
//   XREF to: Stack[-0x14] (WRITE)
// 005338a3: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005338a6: FMUL ST1
// 005338a8: MOV dword ptr [EBP + -0x4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 005338ab: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 005338ae: FMULP
// 005338b0: FCOS
// 005338b2: ADD EBX,0x8
// 005338b5: ADD ECX,0x2
// 005338b8: FSTP double ptr [EBX + 0x2f46b00]
//   XREF to: 02f46b08 (DATA)
//   XREF to: 02f46b10 (DATA)
// 005338be: CMP ECX,EDX
// 005338c0: JL 0x005338a0
//   XREF to: 005338a0 (CONDITIONAL_JUMP)
// 005338c2: FSTP ST0
// 005338c4: MOV ESI,dword ptr [EBP + -0x14]
//   Label: LAB_005338c4
//   XREF to: Stack[-0x24] (READ)
// 005338c7: ADD ESI,0x30
// 005338ca: ADD EDI,0x2
// 005338cd: MOV dword ptr [EBP + -0x14],ESI
//   XREF to: Stack[-0x24] (WRITE)
// 005338d0: CMP EDI,0x19
// 005338d3: JNZ 0x00533886
//   XREF to: 00533886 (CONDITIONAL_JUMP)
// 005338d5: MOV EAX,0x90
// 005338da: MOV EDX,0x26
// 005338df: XOR EDI,EDI
// 005338e1: MOV dword ptr [EBP + -0x1c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005338e4: MOV dword ptr [EBP + -0x18],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005338e7: MOV dword ptr [EBP + -0x10],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 005338ea: IMUL EBX,dword ptr [EBP + -0x10],0x90
//   Label: LAB_005338ea
//   XREF to: Stack[-0x20] (READ)
// 005338f1: MOV EAX,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 005338f4: ADD EAX,EAX
// 005338f6: ADD EAX,0x13
// 005338f9: IMUL ECX,EAX,0x0
// 005338fc: MOV ESI,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 005338ff: MOV EDI,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 00533902: ADD ECX,EAX
// 00533904: FLD double ptr [0x0063b0ba]
//   XREF to: 0063b0ba (READ)
// 0053390a: MOV dword ptr [EBP + -0x4],0x90
//   Label: LAB_0053390a
//   XREF to: Stack[-0x14] (WRITE)
// 00533911: MOV EDX,ECX
// 00533913: MOV EAX,ECX
// 00533915: SAR EDX,0x1f
// 00533918: IDIV dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 0053391b: MOV dword ptr [EBP + -0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0053391e: FILD dword ptr [EBP + -0x4]
//   XREF to: Stack[-0x14] (READ)
// 00533921: FMUL ST1
// 00533923: FCOS
// 00533925: ADD EBX,0x8
// 00533928: ADD ECX,ESI
// 0053392a: FSTP double ptr [EBX + 0x2f46d40]
//   XREF to: 02f46d48 (DATA)
//   XREF to: 02f46d50 (DATA)
// 00533930: CMP EBX,EDI
// 00533932: JNZ 0x0053390a
//   XREF to: 0053390a (CONDITIONAL_JUMP)
// 00533934: FSTP ST0
// 00533936: MOV ESI,dword ptr [EBP + -0x18]
//   XREF to: Stack[-0x28] (READ)
// 00533939: MOV EDI,dword ptr [EBP + -0x10]
//   XREF to: Stack[-0x20] (READ)
// 0053393c: MOV EBX,dword ptr [EBP + -0x1c]
//   XREF to: Stack[-0x2c] (READ)
// 0053393f: ADD ESI,0x4
// 00533942: INC EDI
// 00533943: ADD EBX,0x90
// 00533949: MOV dword ptr [EBP + -0x18],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 0053394c: MOV dword ptr [EBP + -0x10],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 0053394f: MOV dword ptr [EBP + -0x1c],EBX
//   XREF to: Stack[-0x2c] (WRITE)
// 00533952: CMP EDI,0x24
// 00533955: JL 0x005338ea
//   XREF to: 005338ea (CONDITIONAL_JUMP)
// 00533957: XOR EDX,EDX
// 00533959: MOV dword ptr [0x0067e210],EDX
//   XREF to: 0067e210 (WRITE)
// 0053395f: CMP dword ptr [EBP + 0x1c],0x2
//   Label: LAB_0053395f
//   XREF to: Stack[0xc] (READ)
// 00533963: JZ 0x00533a40
//   XREF to: 00533a40 (CONDITIONAL_JUMP)
// 00533969: XOR EDX,EDX
// 0053396b: MOV dword ptr [EBP + -0x34],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0053396e: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533971: LEA EAX,[EDX*0x4 + 0x0]
//   Label: LAB_00533971
// 00533978: ADD EAX,EDI
// 0053397a: FLD float ptr [EAX]
// 0053397c: FABS
// 0053397e: FCOMP double ptr [0x0063b0da]
//   XREF to: 0063b0da (READ)
// 00533984: FNSTSW AX
// 00533986: SAHF
// 00533987: JBE 0x00533996
//   XREF to: 00533996 (CONDITIONAL_JUMP)
// 00533989: MOV EAX,dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ)
// 0053398c: INC dword ptr [EBP + -0x34]
//   XREF to: Stack[-0x44] (READ_WRITE)
// 0053398f: MOV dword ptr [EBP + EAX*0x4 + 0xffffff74],EDX
// 00533996: INC EDX
//   Label: LAB_00533996
// 00533997: CMP EDX,0x12
// 0053399a: JL 0x00533971
//   XREF to: 00533971 (CONDITIONAL_JUMP)
// 0053399c: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0053399f: LEA EAX,[EDX*0x8 + 0x0]
// 005339a6: ADD EAX,EDX
// 005339a8: MOV EDX,0x2f46688
//   XREF to: 02f46688 (DATA)
// 005339ad: SHL EAX,0x5
// 005339b0: XOR EBX,EBX
// 005339b2: ADD EDX,EAX
// 005339b4: MOV dword ptr [EBP + -0xc],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 005339b7: MOV dword ptr [EBP + -0x24],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 005339ba: MOV EAX,dword ptr [EBP + -0xc]
//   Label: LAB_005339ba
//   XREF to: Stack[-0x1c] (READ)
// 005339bd: MOV EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005339c0: SHL EAX,0x2
// 005339c3: ADD EDX,EAX
// 005339c5: MOV dword ptr [EBP + -0x30],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 005339c8: MOV ESI,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 005339cb: IMUL EAX,ESI,0x90
// 005339d1: MOV EDX,0x2f46d48
//   XREF to: 02f46d48 (DATA)
// 005339d6: ADD EDX,EAX
// 005339d8: MOV dword ptr [EBP + -0x2c],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 005339db: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005339de: MOV dword ptr [EBP + -0x8],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005339e1: MOV EDX,dword ptr [EBP + -0x24]
//   XREF to: Stack[-0x34] (READ)
// 005339e4: LEA EAX,[ESI*0x8 + 0x0]
// 005339eb: ADD EDX,EAX
// 005339ed: MOV dword ptr [EBP + -0x28],EDX
//   XREF to: Stack[-0x38] (WRITE)
// 005339f0: FLDZ
// 005339f2: MOV ECX,dword ptr [EBP + 0xffffffcc]
//   XREF to: Stack[-0x44] (READ)
// 005339f8: SUB ECX,0x1
// 005339fb: JL 0x00533a25
//   XREF to: 00533a25 (CONDITIONAL_JUMP)
// 005339fd: MOV EBX,dword ptr [EBP + 0xffffffd4]
//   XREF to: Stack[-0x3c] (READ)
// 00533a03: MOV ESI,dword ptr [EBP + 0xfffffff8]
//   XREF to: Stack[-0x18] (READ)
// 00533a09: MOV EAX,dword ptr [EBP + ECX*0x4 + 0xffffff74]
//   Label: LAB_00533a09
// 00533a10: FLD float ptr [ESI + EAX*0x4]
// 00533a13: FMUL double ptr [EBX + EAX*0x8]
// 00533a16: FADDP
// 00533a18: SUB ECX,0x1
// 00533a1b: JGE 0x00533a09
//   XREF to: 00533a09 (CONDITIONAL_JUMP)
// 00533a1d: MOV EBX,dword ptr [EBP + 0xffffffd8]
//   XREF to: Stack[-0x38] (READ)
// 00533a23: FMUL double ptr [EBX]
// 00533a25: MOV EBX,dword ptr [EBP + 0xffffffd0]
//   Label: LAB_00533a25
//   XREF to: Stack[-0x40] (READ)
// 00533a2b: FSTP float ptr [EBX]
// 00533a2d: MOV EDI,dword ptr [EBP + -0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00533a30: INC EDI
// 00533a31: MOV dword ptr [EBP + -0xc],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00533a34: CMP EDI,0x24
// 00533a37: JL 0x005339ba
//   XREF to: 005339ba (CONDITIONAL_JUMP)
// 00533a39: MOV ESP,EBP
// 00533a3b: POP EBP
// 00533a3c: POP EDI
// 00533a3d: POP ESI
// 00533a3e: POP EBX
// 00533a3f: RET
// 00533a40: PUSH 0x90
//   Label: LAB_00533a40
// 00533a45: PUSH 0x0
// 00533a47: MOV ESI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00533a4a: PUSH ESI
// 00533a4b: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533a4e: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 00533a53: ADD ESP,0xc
// 00533a56: MOV EDX,ESI
// 00533a58: XOR ECX,ECX
// 00533a5a: XOR EAX,EAX
// 00533a5c: FLD float ptr [EBX + 0xc]
//   Label: LAB_00533a5c
// 00533a5f: FMUL double ptr [EAX + 0x2f46b10]
//   XREF to: 02f46b10 (READ)
//   XREF to: 02f46b40 (READ)
// 00533a65: FLD float ptr [EBX]
// 00533a67: FMUL double ptr [EAX + 0x2f46b08]
//   XREF to: 02f46b08 (READ)
//   XREF to: 02f46b38 (READ)
// 00533a6d: FADDP
// 00533a6f: FLD float ptr [EBX + 0x18]
// 00533a72: FMUL double ptr [EAX + 0x2f46b18]
//   XREF to: 02f46b18 (READ)
//   XREF to: 02f46b48 (READ)
// 00533a78: FADDP
// 00533a7a: FLD float ptr [EBX + 0x24]
// 00533a7d: FMUL double ptr [EAX + 0x2f46b20]
//   XREF to: 02f46b20 (READ)
//   XREF to: 02f46b50 (READ)
// 00533a83: FADDP
// 00533a85: FLD float ptr [EBX + 0x30]
// 00533a88: FMUL double ptr [EAX + 0x2f46b28]
//   XREF to: 02f46b28 (READ)
//   XREF to: 02f46b58 (READ)
// 00533a8e: FADDP
// 00533a90: FLD float ptr [EBX + 0x3c]
// 00533a93: FMUL double ptr [EAX + 0x2f46b30]
//   XREF to: 02f46b30 (READ)
//   XREF to: 02f46b60 (READ)
// 00533a99: FADDP
// 00533a9b: FMUL double ptr [ECX + 0x2f468c8]
//   XREF to: 02f468c8 (READ)
// 00533aa1: ADD EDX,0x4
// 00533aa4: ADD ECX,0x8
// 00533aa7: FLD float ptr [EDX + 0x14]
// 00533aaa: FXCH
// 00533aac: FADD ST0,ST1
// 00533aae: ADD EAX,0x30
// 00533ab1: FSTP ST1
// 00533ab3: FSTP float ptr [EDX + 0x14]
// 00533ab6: CMP ECX,0x60
// 00533ab9: JNZ 0x00533a5c
//   XREF to: 00533a5c (CONDITIONAL_JUMP)
// 00533abb: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00533abe: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533ac1: XOR EAX,EAX
// 00533ac3: XOR EDX,EDX
// 00533ac5: FLD float ptr [EBX + 0x10]
//   Label: LAB_00533ac5
// 00533ac8: FMUL double ptr [EAX + 0x2f46b10]
//   XREF to: 02f46b10 (READ)
//   XREF to: 02f46b40 (READ)
// 00533ace: FLD float ptr [EBX + 0x4]
// 00533ad1: FMUL double ptr [EAX + 0x2f46b08]
//   XREF to: 02f46b08 (READ)
//   XREF to: 02f46b38 (READ)
// 00533ad7: FADDP
// 00533ad9: FLD float ptr [EBX + 0x1c]
// 00533adc: FMUL double ptr [EAX + 0x2f46b18]
//   XREF to: 02f46b18 (READ)
//   XREF to: 02f46b48 (READ)
// 00533ae2: FADDP
// 00533ae4: FLD float ptr [EBX + 0x28]
// 00533ae7: FMUL double ptr [EAX + 0x2f46b20]
//   XREF to: 02f46b20 (READ)
//   XREF to: 02f46b50 (READ)
// 00533aed: FADDP
// 00533aef: FLD float ptr [EBX + 0x34]
// 00533af2: FMUL double ptr [EAX + 0x2f46b28]
//   XREF to: 02f46b28 (READ)
//   XREF to: 02f46b58 (READ)
// 00533af8: FADDP
// 00533afa: FLD float ptr [EBX + 0x40]
// 00533afd: FMUL double ptr [EAX + 0x2f46b30]
//   XREF to: 02f46b30 (READ)
//   XREF to: 02f46b60 (READ)
// 00533b03: FADDP
// 00533b05: FMUL double ptr [EDX + 0x2f468c8]
//   XREF to: 02f468c8 (READ)
// 00533b0b: ADD ECX,0x4
// 00533b0e: ADD EDX,0x8
// 00533b11: FLD float ptr [ECX + 0x2c]
// 00533b14: FXCH
// 00533b16: FADD ST0,ST1
// 00533b18: ADD EAX,0x30
// 00533b1b: FSTP ST1
// 00533b1d: FSTP float ptr [ECX + 0x2c]
// 00533b20: CMP EDX,0x60
// 00533b23: JNZ 0x00533ac5
//   XREF to: 00533ac5 (CONDITIONAL_JUMP)
// 00533b25: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00533b28: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00533b2b: XOR EAX,EAX
// 00533b2d: XOR EDX,EDX
// 00533b2f: FLD float ptr [EBX + 0x14]
//   Label: LAB_00533b2f
// 00533b32: FMUL double ptr [EAX + 0x2f46b10]
//   XREF to: 02f46b10 (READ)
//   XREF to: 02f46b40 (READ)
// 00533b38: FLD float ptr [EBX + 0x8]
// 00533b3b: FMUL double ptr [EAX + 0x2f46b08]
//   XREF to: 02f46b08 (READ)
//   XREF to: 02f46b38 (READ)
// 00533b41: FADDP
// 00533b43: FLD float ptr [EBX + 0x20]
// 00533b46: FMUL double ptr [EAX + 0x2f46b18]
//   XREF to: 02f46b18 (READ)
//   XREF to: 02f46b48 (READ)
// 00533b4c: FADDP
// 00533b4e: FLD float ptr [EBX + 0x2c]
// 00533b51: FMUL double ptr [EAX + 0x2f46b20]
//   XREF to: 02f46b20 (READ)
//   XREF to: 02f46b50 (READ)
// 00533b57: FADDP
// 00533b59: FLD float ptr [EBX + 0x38]
// 00533b5c: FMUL double ptr [EAX + 0x2f46b28]
//   XREF to: 02f46b28 (READ)
//   XREF to: 02f46b58 (READ)
// 00533b62: FADDP
// 00533b64: FLD float ptr [EBX + 0x44]
// 00533b67: FMUL double ptr [EAX + 0x2f46b30]
//   XREF to: 02f46b30 (READ)
//   XREF to: 02f46b60 (READ)
// 00533b6d: FADDP
// 00533b6f: FMUL double ptr [EDX + 0x2f468c8]
//   XREF to: 02f468c8 (READ)
// 00533b75: ADD ECX,0x4
// 00533b78: ADD EDX,0x8
// 00533b7b: FLD float ptr [ECX + 0x44]
// 00533b7e: FXCH
// 00533b80: FADD ST0,ST1
// 00533b82: ADD EAX,0x30
// 00533b85: FSTP ST1
// 00533b87: FSTP float ptr [ECX + 0x44]
// 00533b8a: CMP EDX,0x60
// 00533b8d: JNZ 0x00533b2f
//   XREF to: 00533b2f (CONDITIONAL_JUMP)
// 00533b8f: MOV ESP,EBP
// 00533b91: POP EBP
// 00533b92: POP EDI
// 00533b93: POP ESI
// 00533b94: POP EBX
// 00533b95: RET
