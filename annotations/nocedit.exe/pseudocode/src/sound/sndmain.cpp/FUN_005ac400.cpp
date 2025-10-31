// Name: sound_sndmain.cpp_FUN_005ac400
// Address: 005ac400
// Address Range: [[005ac400, 005ac985]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005ac400()
// Cross-references:
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 005125ff [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0065100f
//   undefined4 DAT_00651017
//   int g_AudioSampleRate = 0x5622
//   undefined4 DAT_03f5d880
//   int g_MixBufferSize
//   void*[8] g_ChannelPrimaryBuffers
//   void*[8] g_ChannelSecondaryBuffersA
//   void*[8] g_ChannelSecondaryBuffersB
// Function calls:
//   crt_math.c_floor_FUN_005feb90
//   crt_math.c_round_FUN_005fe6b0
//   sound_sndmain.cpp_FUN_005ab6d0

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x005ac957) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 sound_sndmain.cpp_FUN_005ac400(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

longlong sound_sndmain_cpp_FUN_005ac400
                   (undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,
                   int param_5)

{
  float fVar1;
  float fVar2;
  double dVar3;
  void *pvVar4;
  void *pvVar5;
  float fVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  int iVar11;
  uint uVar12;
  float *pfVar13;
  undefined4 uVar14;
  int iVar15;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  int iVar16;
  float *pfVar17;
  uint uVar18;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  float *pfVar19;
  float *pfVar20;
  uint uVar21;
  int iVar22;
  undefined4 *puVar23;
  float10 extraout_ST0;
  float10 fVar24;
  float10 fVar25;
  float10 fVar26;
  float10 fVar27;
  float10 fVar28;
  float10 fVar29;
  float10 fVar30;
  float10 extraout_ST0_00;
  float10 fVar31;
  double dVar32;
  undefined8 uStack_48;
  float *local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_18;
  
  if ((((g_ChannelPrimaryBuffers[param_5] == (void *)0x0) ||
       (g_ChannelSecondaryBuffersA[param_5] == (void *)0x0)) ||
      (g_ChannelSecondaryBuffersB[param_5] == (void *)0x0)) || (g_MixBufferSize < 1)) {
    return (ulonglong)param_2 << 0x20;
  }
  iVar11 = sound_sndmain_cpp_FUN_005ab6d0();
  iVar15 = g_MixBufferSize;
  fVar31 = extraout_ST0;
  if (iVar11 != *(int *)(&DAT_03f5d880 + param_5 * 4)) {
    pvVar4 = g_ChannelSecondaryBuffersA[param_5];
    pvVar5 = g_ChannelSecondaryBuffersB[param_5];
    puVar23 = (undefined4 *)g_ChannelPrimaryBuffers[param_5];
    for (local_28 = 1; 1 << ((byte)local_28 & 0x1f) < g_MixBufferSize; local_28 = local_28 + 1) {
    }
    uVar21 = 0;
    if (0 < g_MixBufferSize) {
      do {
        iVar11 = 0;
        uVar12 = 0;
        uVar18 = uVar21;
        if (0 < local_28) {
          do {
            iVar11 = iVar11 + 1;
            uVar12 = uVar12 * 2 | uVar18 & 1;
            uVar18 = (int)uVar18 >> 1;
          } while (iVar11 < local_28);
        }
        *(undefined4 *)((int)pvVar4 + uVar12 * 4) = *puVar23;
        *(undefined4 *)(uVar12 * 4 + (int)pvVar5) = 0;
        uVar21 = uVar21 + 1;
        puVar23 = puVar23 + 1;
      } while ((int)uVar21 < iVar15);
    }
    local_2c = 2;
    if (1 < iVar15) {
      do {
        iVar11 = local_2c / 2;
        fVar24 = (float10)_DAT_00651017 / (float10)iVar11;
        fVar31 = (float10)fcos(fVar24);
        fVar25 = (float10)fsin(fVar24);
        fVar26 = (float10)_DAT_0065100f;
        fVar24 = fVar24 * fVar26;
        fVar27 = (float10)fsin(fVar24);
        fVar24 = (float10)fcos(fVar24);
        local_18 = 0;
        if (0 < iVar15) {
          do {
            iVar22 = 0;
            if (0 < iVar11) {
              fVar28 = (float10)(double)((float10)(double)fVar31 * fVar26);
              iVar16 = local_18 * 4;
              pfVar13 = (float *)((int)pvVar4 + iVar16);
              pfVar19 = (float *)((int)pvVar4 + iVar16 + iVar11 * 4);
              pfVar17 = (float *)((int)pvVar5 + iVar16);
              pfVar20 = (float *)((int)pvVar5 + iVar16 + iVar11 * 4);
              dVar32 = (double)fVar31;
              dVar3 = (double)fVar25;
              dVar9 = (double)fVar27;
              dVar10 = (double)fVar24;
              do {
                dVar8 = dVar3;
                dVar7 = dVar32;
                fVar29 = fVar28 * (float10)dVar7 - (float10)dVar10;
                dVar32 = (double)fVar29;
                fVar30 = fVar28 * (float10)dVar8 - (float10)dVar9;
                dVar3 = (double)fVar30;
                iVar22 = iVar22 + 1;
                fVar30 = fVar29 * (float10)*pfVar19 - fVar30 * (float10)*pfVar20;
                fVar29 = (float10)dVar3 * (float10)*pfVar19 + (float10)dVar32 * (float10)*pfVar20;
                *pfVar19 = (float)((float10)*pfVar13 - fVar30);
                *pfVar20 = (float)((float10)*pfVar17 - fVar29);
                *pfVar13 = (float)((float10)*pfVar13 + fVar30);
                *pfVar17 = (float)(fVar29 + (float10)*pfVar17);
                pfVar13 = pfVar13 + 1;
                pfVar19 = pfVar19 + 1;
                pfVar17 = pfVar17 + 1;
                pfVar20 = pfVar20 + 1;
                dVar9 = dVar8;
                dVar10 = dVar7;
              } while (iVar22 < iVar11);
            }
            local_18 = local_18 + local_2c;
          } while (local_18 < iVar15);
        }
        local_2c = local_2c * 2;
      } while (local_2c <= iVar15);
    }
    uVar14 = sound_sndmain_cpp_FUN_005ab6d0();
    *(undefined4 *)(&DAT_03f5d880 + param_5 * 4) = uVar14;
    fVar31 = extraout_ST0_00;
  }
  iVar15 = g_MixBufferSize / 2;
  pfVar13 = (float *)(iVar15 + 1);
  dVar32 = crt_math_c_floor_FUN_005feb90((double)fVar31);
  fVar31 = (float10)dVar32;
  uStack_48 = (double)CONCAT44(extraout_EDX,extraout_EAX);
  fVar25 = (float10)uStack_48;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,extraout_EAX));
  local_30 = (int)ROUND(fVar25);
  crt_math_c_floor_FUN_005feb90((double)fVar31);
  uStack_48 = (double)CONCAT44(extraout_EDX_00,extraout_EAX_00);
  fVar31 = (float10)uStack_48;
  dVar32 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX_00,extraout_EAX_00));
  pfVar19 = (float *)(int)ROUND(fVar31);
  pfVar17 = (float *)((ulonglong)dVar32 >> 0x20);
  if ((local_30 < (int)pfVar13) && (pfVar17 = pfVar19, 0 < (int)pfVar19)) {
    local_34 = pfVar19;
    if ((int)pfVar13 <= (int)pfVar19) {
      local_34 = pfVar13;
    }
    if (local_30 < 0) {
      local_30 = 0;
    }
    iVar11 = (int)local_34 - local_30;
    if ((iVar11 < 1) && (iVar11 = 1, pfVar19 = local_34, (int)pfVar13 <= (int)local_34)) {
      local_30 = iVar15;
    }
    iVar15 = 0;
    fVar6 = 0.0;
    if (0 < iVar11) {
      pfVar19 = (float *)((int)g_ChannelSecondaryBuffersB[param_5] + local_30 * 4);
      pfVar17 = (float *)((int)g_ChannelSecondaryBuffersA[param_5] + local_30 * 4);
      do {
        fVar1 = *pfVar17;
        fVar2 = *pfVar19;
        pfVar19 = pfVar19 + 1;
        pfVar17 = pfVar17 + 1;
        iVar15 = iVar15 + 1;
        fVar6 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) + fVar6;
      } while (iVar15 < iVar11);
    }
    return CONCAT44(pfVar19,SQRT((fVar6 / (float)iVar11) / (float)(int)pfVar13) *
                            (float)_DAT_0065100f);
  }
  return ZEXT48(pfVar17) << 0x20;
}


// Assembly code:
// 005ac400: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005ac400
// 005ac401: PUSH ESI
// 005ac402: PUSH EDI
// 005ac403: PUSH EBP
// 005ac404: MOV EBP,ESP
// 005ac406: SUB ESP,0xb4
// 005ac40c: AND ESP,0xfffffff8
// 005ac40f: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ac412: SHL EBX,0x2
// 005ac415: CMP dword ptr [EBX + 0x3f692b0],0x0
//   XREF to: 03f692b0 (DATA)
// 005ac41c: JZ 0x005ac439
//   XREF to: 005ac439 (CONDITIONAL_JUMP)
// 005ac41e: CMP dword ptr [EBX + 0x3f692d4],0x0
//   XREF to: 03f692d4 (DATA)
// 005ac425: JZ 0x005ac439
//   XREF to: 005ac439 (CONDITIONAL_JUMP)
// 005ac427: CMP dword ptr [EBX + 0x3f692f4],0x0
//   XREF to: 03f692f4 (DATA)
// 005ac42e: JZ 0x005ac439
//   XREF to: 005ac439 (CONDITIONAL_JUMP)
// 005ac430: CMP dword ptr [0x03f69280],0x1
//   XREF to: 03f69280 (READ)
// 005ac437: JGE 0x005ac450
//   XREF to: 005ac450 (CONDITIONAL_JUMP)
// 005ac439: XOR EDI,EDI
//   Label: LAB_005ac439
// 005ac43b: MOV dword ptr [ESP + 0x88],EDI
//   XREF to: Stack[-0x40] (WRITE)
// 005ac442: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x40] (READ)
// 005ac449: MOV ESP,EBP
// 005ac44b: POP EBP
// 005ac44c: POP EDI
// 005ac44d: POP ESI
// 005ac44e: POP EBX
// 005ac44f: RET
// 005ac450: CALL sound_sndmain.cpp_FUN_005ab6d0
//   Label: LAB_005ac450
//   XREF to: 005ab6d0 (UNCONDITIONAL_CALL)
// 005ac455: CMP EAX,dword ptr [EBX + 0x3f5d880]
//   XREF to: 03f5d880 (DATA)
// 005ac45b: JZ 0x005ac7a7
//   XREF to: 005ac7a7 (CONDITIONAL_JUMP)
// 005ac461: MOV ESI,dword ptr [0x03f69280]
//   XREF to: 03f69280 (READ)
// 005ac467: MOV EDX,dword ptr [EBX + 0x3f692d4]
//   XREF to: 03f692d4 (DATA)
// 005ac46d: MOV ECX,dword ptr [EBX + 0x3f692f4]
//   XREF to: 03f692f4 (DATA)
// 005ac473: MOV EDI,dword ptr [EBX + 0x3f692b0]
//   XREF to: 03f692b0 (DATA)
// 005ac479: MOV dword ptr [ESP + 0xa8],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 005ac480: MOV dword ptr [ESP + 0xa4],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 005ac487: MOV dword ptr [ESP + 0xa0],ESI
//   XREF to: Stack[-0x28] (WRITE)
// 005ac48e: XOR EBX,EBX
// 005ac490: MOV ESI,0x1
// 005ac495: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x28] (READ)
// 005ac49c: MOV dword ptr [ESP + 0x94],EBX
//   XREF to: Stack[-0x34] (WRITE)
// 005ac4a3: MOV dword ptr [ESP + 0x9c],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 005ac4aa: MOV CL,byte ptr [ESP + 0x9c]
//   Label: LAB_005ac4aa
//   XREF to: Stack[-0x2c] (READ)
// 005ac4b1: MOV EAX,0x1
// 005ac4b6: SHL EAX,CL
// 005ac4b8: CMP EAX,EDX
// 005ac4ba: JGE 0x005ac4c5
//   XREF to: 005ac4c5 (CONDITIONAL_JUMP)
// 005ac4bc: INC dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x2c] (READ_WRITE)
// 005ac4c3: JMP 0x005ac4aa
//   XREF to: 005ac4aa (UNCONDITIONAL_JUMP)
// 005ac4c5: XOR ESI,ESI
//   Label: LAB_005ac4c5
// 005ac4c7: TEST EDX,EDX
// 005ac4c9: JLE 0x005ac532
//   XREF to: 005ac532 (CONDITIONAL_JUMP)
// 005ac4cb: MOV EBX,dword ptr [ESP + 0x9c]
//   Label: LAB_005ac4cb
//   XREF to: Stack[-0x2c] (READ)
// 005ac4d2: MOV EDX,ESI
// 005ac4d4: XOR ECX,ECX
// 005ac4d6: XOR EAX,EAX
// 005ac4d8: TEST EBX,EBX
// 005ac4da: JLE 0x005ac4f3
//   XREF to: 005ac4f3 (CONDITIONAL_JUMP)
// 005ac4dc: MOV EBX,EDX
//   Label: LAB_005ac4dc
// 005ac4de: ADD EAX,EAX
// 005ac4e0: AND EBX,0x1
// 005ac4e3: INC ECX
// 005ac4e4: OR EAX,EBX
// 005ac4e6: MOV EBX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x2c] (READ)
// 005ac4ed: SAR EDX,0x1
// 005ac4ef: CMP ECX,EBX
// 005ac4f1: JL 0x005ac4dc
//   XREF to: 005ac4dc (CONDITIONAL_JUMP)
// 005ac4f3: FLD float ptr [EDI]
//   Label: LAB_005ac4f3
// 005ac4f5: MOV EDX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x20] (READ)
// 005ac4fc: SHL EAX,0x2
// 005ac4ff: MOV EBX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x34] (READ)
// 005ac506: FSTP float ptr [EDX + EAX*0x1]
// 005ac509: MOV EDX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x24] (READ)
// 005ac510: LEA ECX,[ESI*0x4 + 0x0]
// 005ac517: ADD EAX,EDX
// 005ac519: TEST EBX,EBX
// 005ac51b: JNZ 0x005ac957
//   XREF to: 005ac957 (CONDITIONAL_JUMP)
// 005ac521: MOV dword ptr [EAX],EBX
//   Label: LAB_005ac521
// 005ac523: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x28] (READ)
// 005ac52a: INC ESI
// 005ac52b: ADD EDI,0x4
// 005ac52e: CMP ESI,EAX
// 005ac530: JL 0x005ac4cb
//   XREF to: 005ac4cb (CONDITIONAL_JUMP)
// 005ac532: MOV EDX,0x2
//   Label: LAB_005ac532
// 005ac537: MOV ECX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x28] (READ)
// 005ac53e: MOV dword ptr [ESP + 0x98],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 005ac545: CMP ECX,EDX
// 005ac547: JL 0x005ac798
//   XREF to: 005ac798 (CONDITIONAL_JUMP)
// 005ac54d: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_005ac54d
//   XREF to: Stack[-0x30] (READ)
// 005ac554: MOV EDX,EAX
// 005ac556: SAR EDX,0x1f
// 005ac559: SUB EAX,EDX
// 005ac55b: SAR EAX,0x1
// 005ac55d: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ac564: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x98] (WRITE)
// 005ac568: FILD dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x18] (READ)
// 005ac56f: FDIVR double ptr [0x00651017]
//   XREF to: 00651017 (READ)
// 005ac575: FLD ST0
// 005ac577: FSINCOS
// 005ac579: FXCH ST2
// 005ac57b: FLD double ptr [0x0065100f]
//   XREF to: 0065100f (READ)
// 005ac581: FXCH
// 005ac583: FMUL ST1
// 005ac585: FLD ST0
// 005ac587: FSIN
// 005ac589: FXCH
// 005ac58b: FCOS
// 005ac58d: FXCH ST4
// 005ac58f: FSTP double ptr [ESP + 0x7c]
//   XREF to: Stack[-0x4c] (WRITE)
// 005ac593: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x4c] (READ)
// 005ac597: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 005ac59b: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x48] (READ)
// 005ac5a2: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 005ac5a6: FLD double ptr [ESP + 0x18]
//   XREF to: Stack[-0xb0] (READ)
// 005ac5aa: FMULP ST2
// 005ac5ac: MOV EDX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x28] (READ)
// 005ac5b3: FXCH ST3
// 005ac5b5: FSTP double ptr [ESP + 0x7c]
//   XREF to: Stack[-0x4c] (WRITE)
// 005ac5b9: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x4c] (READ)
// 005ac5bd: FXCH
// 005ac5bf: FSTP double ptr [ESP]
//   XREF to: Stack[-0xc8] (DATA)
// 005ac5c2: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 005ac5c6: MOV EAX,dword ptr [ESP + 0x80]
//   XREF to: Stack[-0x48] (READ)
// 005ac5cd: FXCH
// 005ac5cf: FSTP double ptr [ESP + 0x8]
//   XREF to: Stack[-0xc0] (WRITE)
// 005ac5d3: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xa4] (WRITE)
// 005ac5d7: XOR EAX,EAX
// 005ac5d9: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb8] (WRITE)
// 005ac5dd: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ac5e4: TEST EDX,EDX
// 005ac5e6: JLE 0x005ac779
//   XREF to: 005ac779 (CONDITIONAL_JUMP)
// 005ac5ec: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005ac5ec
//   XREF to: Stack[-0xb0] (READ)
// 005ac5f0: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x8c] (WRITE)
// 005ac5f4: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0xac] (READ)
// 005ac5f8: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 005ac5fc: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0xa8] (READ)
// 005ac600: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 005ac604: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0xa4] (READ)
// 005ac608: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 005ac60c: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0xc8] (DATA)
// 005ac60f: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 005ac613: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0xc4] (READ)
// 005ac617: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 005ac61b: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0xc0] (READ)
// 005ac61f: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x98] (READ)
// 005ac623: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 005ac627: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0xbc] (READ)
// 005ac62b: XOR ESI,ESI
// 005ac62d: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 005ac631: TEST EDI,EDI
// 005ac633: JLE 0x005ac753
//   XREF to: 005ac753 (CONDITIONAL_JUMP)
// 005ac639: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0xb8] (READ)
// 005ac63d: MOV ECX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x1c] (READ)
// 005ac644: MOV EDX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x24] (READ)
// 005ac64b: LEA EBX,[EDI*0x4 + 0x0]
// 005ac652: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x20] (READ)
// 005ac659: MOV dword ptr [ESP + 0xb0],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 005ac660: MOV EBX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x24] (READ)
// 005ac667: MOV EDI,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x18] (READ)
// 005ac66e: SHL ECX,0x2
// 005ac671: ADD EBX,EDI
// 005ac673: MOV EDI,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x20] (READ)
// 005ac67a: ADD EDX,ECX
// 005ac67c: ADD EDI,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x18] (READ)
// 005ac683: ADD EAX,ECX
// 005ac685: ADD EDI,ECX
// 005ac687: ADD EBX,ECX
// 005ac689: MOV ECX,EDI
// 005ac68b: FLD ST0
//   Label: LAB_005ac68b
// 005ac68d: FMUL double ptr [ESP + 0x3c]
//   XREF to: Stack[-0x8c] (READ)
// 005ac691: FLD ST1
// 005ac693: FMUL double ptr [ESP + 0x54]
//   XREF to: Stack[-0x74] (READ)
// 005ac697: FXCH
// 005ac699: FSUB double ptr [ESP + 0x44]
//   XREF to: Stack[-0x84] (READ)
// 005ac69d: FLD float ptr [ECX]
// 005ac69f: FXCH
// 005ac6a1: FST double ptr [ESP + 0x34]
//   XREF to: Stack[-0x94] (WRITE)
// 005ac6a5: FMUL ST1
// 005ac6a7: FXCH ST2
// 005ac6a9: FSUB double ptr [ESP + 0x5c]
//   XREF to: Stack[-0x6c] (READ)
// 005ac6ad: FLD float ptr [EBX]
// 005ac6af: FLD double ptr [ESP + 0x34]
//   XREF to: Stack[-0x94] (READ)
// 005ac6b3: FMUL ST1
// 005ac6b5: FXCH ST2
// 005ac6b7: FST double ptr [ESP + 0x4c]
//   XREF to: Stack[-0x7c] (WRITE)
// 005ac6bb: FMULP
// 005ac6bd: FLD double ptr [ESP + 0x4c]
//   XREF to: Stack[-0x7c] (READ)
// 005ac6c1: FMULP ST3
// 005ac6c3: FLD float ptr [EAX]
// 005ac6c5: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x8c] (READ)
// 005ac6c9: ADD EDX,0x4
// 005ac6cc: ADD EAX,0x4
// 005ac6cf: MOV dword ptr [ESP + 0x44],EDI
//   XREF to: Stack[-0x84] (WRITE)
// 005ac6d3: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x88] (READ)
// 005ac6d7: ADD EBX,0x4
// 005ac6da: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x80] (WRITE)
// 005ac6de: MOV EDI,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x94] (READ)
// 005ac6e2: ADD ECX,0x4
// 005ac6e5: MOV dword ptr [ESP + 0x3c],EDI
//   XREF to: Stack[-0x8c] (WRITE)
// 005ac6e9: MOV EDI,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x90] (READ)
// 005ac6ed: INC ESI
// 005ac6ee: MOV dword ptr [ESP + 0x40],EDI
//   XREF to: Stack[-0x88] (WRITE)
// 005ac6f2: FXCH
// 005ac6f4: FSUBP ST4,ST0
// 005ac6f6: MOV EDI,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x74] (READ)
// 005ac6fa: FXCH ST2
// 005ac6fc: FADDP
// 005ac6fe: FXCH
// 005ac700: FSUB ST0,ST2
// 005ac702: MOV dword ptr [ESP + 0x5c],EDI
//   XREF to: Stack[-0x6c] (WRITE)
// 005ac706: FSTP float ptr [ECX + -0x4]
// 005ac709: MOV EDI,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x70] (READ)
// 005ac70d: FLD float ptr [EDX + -0x4]
// 005ac710: MOV dword ptr [ESP + 0x60],EDI
//   XREF to: Stack[-0x68] (WRITE)
// 005ac714: FSUB ST0,ST1
// 005ac716: MOV EDI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x7c] (READ)
// 005ac71a: FSTP float ptr [EBX + -0x4]
// 005ac71d: FLD float ptr [EAX + -0x4]
// 005ac720: MOV dword ptr [ESP + 0x54],EDI
//   XREF to: Stack[-0x74] (WRITE)
// 005ac724: FLD ST0
// 005ac726: MOV EDI,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x78] (READ)
// 005ac72a: FADDP ST3,ST0
// 005ac72c: MOV dword ptr [ESP + 0x58],EDI
//   XREF to: Stack[-0x70] (WRITE)
// 005ac730: FXCH ST2
// 005ac732: FSTP ST2
// 005ac734: FXCH
// 005ac736: FSTP float ptr [EAX + -0x4]
// 005ac739: FLD float ptr [EDX + -0x4]
// 005ac73c: FADD ST1,ST0
// 005ac73e: MOV EDI,dword ptr [ESP + 0x30]
//   XREF to: Stack[-0x98] (READ)
// 005ac742: FXCH
// 005ac744: FSTP ST1
// 005ac746: FSTP float ptr [EDX + -0x4]
// 005ac749: CMP ESI,EDI
// 005ac74b: JL 0x005ac68b
//   XREF to: 005ac68b (CONDITIONAL_JUMP)
// 005ac751: FSTP ST0
// 005ac753: MOV EAX,dword ptr [ESP + 0x98]
//   Label: LAB_005ac753
//   XREF to: Stack[-0x30] (READ)
// 005ac75a: MOV ECX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x1c] (READ)
// 005ac761: ADD ECX,EAX
// 005ac763: MOV EBX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x28] (READ)
// 005ac76a: MOV dword ptr [ESP + 0xac],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ac771: CMP ECX,EBX
// 005ac773: JL 0x005ac5ec
//   XREF to: 005ac5ec (CONDITIONAL_JUMP)
// 005ac779: MOV ESI,dword ptr [ESP + 0x98]
//   Label: LAB_005ac779
//   XREF to: Stack[-0x30] (READ)
// 005ac780: ADD ESI,ESI
// 005ac782: MOV EDI,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x28] (READ)
// 005ac789: MOV dword ptr [ESP + 0x98],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 005ac790: CMP ESI,EDI
// 005ac792: JLE 0x005ac54d
//   XREF to: 005ac54d (CONDITIONAL_JUMP)
// 005ac798: CALL sound_sndmain.cpp_FUN_005ab6d0
//   Label: LAB_005ac798
//   XREF to: 005ab6d0 (UNCONDITIONAL_CALL)
// 005ac79d: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ac7a0: MOV dword ptr [EDX*0x4 + 0x3f5d880],EAX
//   XREF to: 03f5d880 (DATA)
// 005ac7a7: MOV EAX,[0x03f69280]
//   Label: LAB_005ac7a7
//   XREF to: 03f69280 (READ)
// 005ac7ac: MOV EDX,EAX
// 005ac7ae: SAR EDX,0x1f
// 005ac7b1: SUB EAX,EDX
// 005ac7b3: SAR EAX,0x1
// 005ac7b5: LEA EDI,[EAX + 0x1]
// 005ac7b8: MOV dword ptr [ESP + 0xb0],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005ac7bf: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ac7c2: FILD dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x18] (READ)
// 005ac7c9: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x18] (WRITE)
// 005ac7d0: FMUL float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x18] (READ)
// 005ac7d7: FILD dword ptr [0x00681b1c]
//   XREF to: 00681b1c (READ)
// 005ac7dd: FDIVP
// 005ac7df: SUB ESP,0x8
// 005ac7e2: FSTP double ptr [ESP]
//   XREF to: Stack[-0xd0] (DATA)
// 005ac7e5: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005ac7ea: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005ac7f1: MOV dword ptr [ESP + 0x88],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 005ac7f8: FLD double ptr [ESP + 0x84]
//   XREF to: Stack[-0x4c] (READ)
// 005ac7ff: ADD ESP,0x8
// 005ac802: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ac805: FMUL float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x18] (READ)
// 005ac80c: FILD dword ptr [0x00681b1c]
//   XREF to: 00681b1c (READ)
// 005ac812: FDIVP
// 005ac814: FXCH
// 005ac816: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005ac81b: FISTP dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x38] (WRITE)
// 005ac822: SUB ESP,0x8
// 005ac825: FSTP double ptr [ESP]
//   XREF to: Stack[-0xd0] (DATA)
// 005ac828: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005ac82d: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 005ac834: MOV dword ptr [ESP + 0x88],EDX
//   XREF to: Stack[-0x48] (WRITE)
// 005ac83b: FLD double ptr [ESP + 0x84]
//   XREF to: Stack[-0x4c] (READ)
// 005ac842: ADD ESP,0x8
// 005ac845: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005ac84a: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x38] (READ)
// 005ac851: FISTP dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x3c] (WRITE)
// 005ac858: CMP EDI,EAX
// 005ac85a: JLE 0x005ac961
//   XREF to: 005ac961 (CONDITIONAL_JUMP)
// 005ac860: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x3c] (READ)
// 005ac867: TEST EDX,EDX
// 005ac869: JLE 0x005ac961
//   XREF to: 005ac961 (CONDITIONAL_JUMP)
// 005ac86f: CMP EDI,EDX
// 005ac871: JG 0x005ac87a
//   XREF to: 005ac87a (CONDITIONAL_JUMP)
// 005ac873: MOV dword ptr [ESP + 0x8c],EDI
//   XREF to: Stack[-0x3c] (WRITE)
// 005ac87a: CMP dword ptr [ESP + 0x90],0x0
//   Label: LAB_005ac87a
//   XREF to: Stack[-0x38] (READ)
// 005ac882: JL 0x005ac978
//   XREF to: 005ac978 (CONDITIONAL_JUMP)
// 005ac888: MOV ESI,dword ptr [ESP + 0x8c]
//   Label: LAB_005ac888
//   XREF to: Stack[-0x3c] (READ)
// 005ac88f: SUB ESI,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x38] (READ)
// 005ac896: CMP ESI,0x1
// 005ac899: JGE 0x005ac8b6
//   XREF to: 005ac8b6 (CONDITIONAL_JUMP)
// 005ac89b: MOV EDX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x3c] (READ)
// 005ac8a2: MOV ESI,0x1
// 005ac8a7: CMP EDI,EDX
// 005ac8a9: JG 0x005ac8b6
//   XREF to: 005ac8b6 (CONDITIONAL_JUMP)
// 005ac8ab: MOV EAX,EDI
// 005ac8ad: SUB EAX,ESI
// 005ac8af: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 005ac8b6: XOR ECX,ECX
//   Label: LAB_005ac8b6
// 005ac8b8: XOR EBX,EBX
// 005ac8ba: MOV dword ptr [ESP + 0x28],ECX
//   XREF to: Stack[-0xa0] (WRITE)
// 005ac8be: MOV dword ptr [ESP + 0x2c],ECX
//   XREF to: Stack[-0x9c] (WRITE)
// 005ac8c2: TEST ESI,ESI
// 005ac8c4: JLE 0x005ac914
//   XREF to: 005ac914 (CONDITIONAL_JUMP)
// 005ac8c6: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ac8c9: MOV EDX,dword ptr [EAX*0x4 + 0x3f692d4]
//   XREF to: 03f692d4 (DATA)
// 005ac8d0: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 005ac8d7: MOV EDX,dword ptr [EAX*0x4 + 0x3f692f4]
//   XREF to: 03f692f4 (DATA)
// 005ac8de: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0x38] (READ)
// 005ac8e5: FLD double ptr [ESP + 0x28]
//   XREF to: Stack[-0xa0] (READ)
// 005ac8e9: SHL EAX,0x2
// 005ac8ec: MOV ECX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x44] (READ)
// 005ac8f3: ADD EDX,EAX
// 005ac8f5: ADD ECX,EAX
// 005ac8f7: FLD float ptr [ECX]
//   Label: LAB_005ac8f7
// 005ac8f9: FMUL ST0
// 005ac8fb: FLD float ptr [EDX]
// 005ac8fd: FMUL ST0
// 005ac8ff: FADDP
// 005ac901: FSQRT
// 005ac903: ADD EDX,0x4
// 005ac906: ADD ECX,0x4
// 005ac909: INC EBX
// 005ac90a: FADDP
// 005ac90c: CMP EBX,ESI
// 005ac90e: JL 0x005ac8f7
//   XREF to: 005ac8f7 (CONDITIONAL_JUMP)
// 005ac910: FSTP double ptr [ESP + 0x28]
//   XREF to: Stack[-0xa0] (WRITE)
// 005ac914: MOV dword ptr [ESP + 0xb0],ESI
//   Label: LAB_005ac914
//   XREF to: Stack[-0x18] (WRITE)
// 005ac91b: FILD dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x18] (READ)
// 005ac922: FDIVR double ptr [ESP + 0x28]
//   XREF to: Stack[-0xa0] (READ)
// 005ac926: MOV dword ptr [ESP + 0xb0],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005ac92d: FILD dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x18] (READ)
// 005ac934: FDIVP
// 005ac936: FSQRT
// 005ac938: FMUL double ptr [0x0065100f]
//   XREF to: 0065100f (READ)
// 005ac93e: FST double ptr [ESP + 0x28]
//   XREF to: Stack[-0xa0] (WRITE)
// 005ac942: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0x40] (WRITE)
// 005ac949: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x40] (READ)
// 005ac950: MOV ESP,EBP
// 005ac952: POP EBP
// 005ac953: POP EDI
// 005ac954: POP ESI
// 005ac955: POP EBX
// 005ac956: RET
// 005ac957: MOV EDX,EBX
//   Label: LAB_005ac957
// 005ac959: MOV EBX,dword ptr [ECX + EDX*0x1]
// 005ac95c: JMP 0x005ac521
//   XREF to: 005ac521 (UNCONDITIONAL_JUMP)
// 005ac961: XOR ESI,ESI
//   Label: LAB_005ac961
// 005ac963: MOV dword ptr [ESP + 0x88],ESI
//   XREF to: Stack[-0x40] (WRITE)
// 005ac96a: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x40] (READ)
// 005ac971: MOV ESP,EBP
// 005ac973: POP EBP
// 005ac974: POP EDI
// 005ac975: POP ESI
// 005ac976: POP EBX
// 005ac977: RET
// 005ac978: XOR ESI,ESI
//   Label: LAB_005ac978
// 005ac97a: MOV dword ptr [ESP + 0x90],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 005ac981: JMP 0x005ac888
//   XREF to: 005ac888 (UNCONDITIONAL_JUMP)
