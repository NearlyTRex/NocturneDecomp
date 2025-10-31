// Name: sound_mp3.cpp_FUN_00532200
// Address: 00532200
// Address Range: [[00532200, 0053253d]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_FUN_00532200()
// Cross-references:
//   sound_mp3.cpp_MpegLoadMaybe_FUN_00534d40 (00534d40) at 00535953 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0067e728
//   undefined4 DAT_0067e72c
//   undefined4 DAT_0067e730
//   undefined4 DAT_0067e734
//   undefined4 DAT_0067e738

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_FUN_00532200(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4) */

void sound_mp3_cpp_FUN_00532200(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  undefined4 *in_stack_00000004;
  undefined4 *in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000010;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int local_50;
  int local_4c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
  local_4c = ((int *)*in_stack_00000010)[4] + *(int *)*in_stack_00000010 * 3;
  iVar8 = 0;
  puVar9 = in_stack_00000008;
  do {
    puVar9 = puVar9 + 0x12;
    puVar4 = in_stack_00000008 + iVar8 * 0x12;
    do {
      *puVar4 = 0;
      puVar4 = puVar4 + 1;
    } while (puVar4 != puVar9);
    iVar8 = iVar8 + 1;
  } while (iVar8 < 0x20);
  if ((*(int *)(in_stack_0000000c + 0x10) == 0) || (*(int *)(in_stack_0000000c + 0x14) != 2)) {
    local_58 = in_stack_00000008;
    iVar8 = 0;
    puVar9 = in_stack_00000004;
    do {
      puVar9 = puVar9 + 0x12;
      puVar3 = in_stack_00000004 + iVar8 * 0x12;
      puVar4 = local_58;
      do {
        uVar2 = *puVar3;
        puVar3 = puVar3 + 1;
        *puVar4 = uVar2;
        puVar4 = puVar4 + 1;
      } while (puVar3 != puVar9);
      iVar8 = iVar8 + 1;
      local_58 = local_58 + 0x12;
    } while (iVar8 < 0x20);
  }
  else if (*(int *)(in_stack_0000000c + 0x18) == 0) {
    local_4c = local_4c * 0x94;
    iVar8 = 0;
    local_38 = *(int *)(&DAT_0067e728 + local_4c);
    iVar14 = local_4c + 0x34;
    do {
      local_24 = 0;
      local_2c = iVar8 * 3;
      do {
        if (0 < local_38) {
          iVar10 = local_24 * local_38 + iVar8 * 3;
          iVar6 = local_38 + iVar10;
          iVar5 = local_2c;
          do {
            iVar11 = iVar10 / 0x12;
            iVar12 = iVar10 % 0x12;
            iVar7 = iVar5 / 0x12;
            iVar13 = iVar5 % 0x12;
            iVar10 = iVar10 + 1;
            iVar5 = iVar5 + 3;
            in_stack_00000008[iVar7 * 0x12 + iVar13] = in_stack_00000004[iVar11 * 0x12 + iVar12];
          } while (iVar10 < iVar6);
        }
        local_24 = local_24 + 1;
        local_2c = local_2c + 1;
      } while (local_24 < 3);
      iVar8 = *(int *)(&DAT_0067e728 + local_4c);
      piVar1 = (int *)(&DAT_0067e72c + local_4c);
      local_4c = local_4c + 4;
      local_38 = *piVar1 - iVar8;
    } while (local_4c != iVar14);
  }
  else {
    local_5c = in_stack_00000004 + 0x12;
    local_54 = in_stack_00000008;
    iVar8 = 0;
    do {
      puVar4 = in_stack_00000004 + iVar8 * 0x12;
      puVar9 = local_54;
      do {
        uVar2 = *puVar4;
        puVar4 = puVar4 + 1;
        *puVar9 = uVar2;
        puVar9 = puVar9 + 1;
      } while (puVar4 != local_5c);
      iVar8 = iVar8 + 1;
      local_54 = local_54 + 0x12;
      local_5c = local_5c + 0x12;
    } while (iVar8 < 2);
    local_4c = local_4c * 0x94;
    iVar8 = *(int *)(&DAT_0067e730 + local_4c);
    local_34 = *(int *)(&DAT_0067e734 + local_4c) - iVar8;
    local_50 = local_4c + 0xc;
    do {
      local_28 = 0;
      local_30 = iVar8 * 3;
      do {
        if (0 < local_34) {
          iVar5 = local_28 * local_34 + iVar8 * 3;
          iVar10 = local_34 + iVar5;
          iVar14 = local_30;
          do {
            iVar6 = iVar5 / 0x12;
            iVar11 = iVar5 % 0x12;
            iVar5 = iVar5 + 1;
            in_stack_00000008[(iVar14 / 0x12) * 0x12 + iVar14 % 0x12] =
                 in_stack_00000004[iVar6 * 0x12 + iVar11];
            iVar14 = iVar14 + 3;
          } while (iVar5 < iVar10);
        }
        local_28 = local_28 + 1;
        local_30 = local_30 + 1;
      } while (local_28 < 3);
      iVar8 = *(int *)(&DAT_0067e728 + local_50);
      piVar1 = (int *)(&DAT_0067e72c + local_50);
      local_50 = local_50 + 4;
      local_34 = *piVar1 - iVar8;
    } while (local_50 != local_4c + 0x34);
  }
  return;
}


// Assembly code:
// 00532200: PUSH EBX
//   Label: sound_mp3.cpp_FUN_00532200
// 00532201: PUSH ESI
// 00532202: PUSH EDI
// 00532203: PUSH EBP
// 00532204: SUB ESP,0x58
// 00532207: MOV ESI,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 0053220b: MOV EDI,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x8] (READ)
// 0053220f: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x10] (READ)
// 00532213: MOV ECX,dword ptr [ECX]
// 00532215: MOV EDX,dword ptr [ECX]
// 00532217: LEA EAX,[EDX*0x4 + 0x0]
// 0053221e: SUB EAX,EDX
// 00532220: MOV EDX,dword ptr [ECX + 0x10]
// 00532223: LEA EBX,[EDI + 0x48]
// 00532226: ADD EDX,EAX
// 00532228: XOR ECX,ECX
// 0053222a: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x68] (DATA)
// 0053222d: IMUL EAX,ECX,0x48
//   Label: LAB_0053222d
// 00532230: MOV EDX,EBX
// 00532232: ADD EAX,EDI
// 00532234: MOV dword ptr [EAX],0x0
//   Label: LAB_00532234
// 0053223a: ADD EAX,0x4
// 0053223d: CMP EAX,EDX
// 0053223f: JNZ 0x00532234
//   XREF to: 00532234 (CONDITIONAL_JUMP)
// 00532241: INC ECX
// 00532242: ADD EBX,0x48
// 00532245: CMP ECX,0x20
// 00532248: JL 0x0053222d
//   XREF to: 0053222d (CONDITIONAL_JUMP)
// 0053224a: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[0xc] (READ)
// 0053224e: CMP dword ptr [EAX + 0x10],0x0
// 00532252: JZ 0x0053225a
//   XREF to: 0053225a (CONDITIONAL_JUMP)
// 00532254: CMP dword ptr [EAX + 0x14],0x2
// 00532258: JZ 0x0053229d
//   XREF to: 0053229d (CONDITIONAL_JUMP)
// 0053225a: LEA EBP,[ESI + 0x48]
//   Label: LAB_0053225a
// 0053225d: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x58] (WRITE)
// 00532261: XOR EBX,EBX
// 00532263: MOV EDI,0x48
// 00532268: IMUL EAX,EBX,0x48
//   Label: LAB_00532268
// 0053226b: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 0053226f: MOV ECX,EBP
// 00532271: ADD EAX,ESI
// 00532273: ADD EDX,0x4
//   Label: LAB_00532273
// 00532276: FLD float ptr [EAX]
// 00532278: ADD EAX,0x4
// 0053227b: FSTP float ptr [EDX + -0x4]
// 0053227e: CMP EAX,ECX
// 00532280: JNZ 0x00532273
//   XREF to: 00532273 (CONDITIONAL_JUMP)
// 00532282: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x58] (READ)
// 00532286: INC EBX
// 00532287: ADD EAX,EDI
// 00532289: ADD EBP,0x48
// 0053228c: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00532290: CMP EBX,0x20
// 00532293: JL 0x00532268
//   XREF to: 00532268 (CONDITIONAL_JUMP)
// 00532295: ADD ESP,0x58
//   Label: LAB_00532295
// 00532298: POP EBP
// 00532299: POP EDI
// 0053229a: POP ESI
// 0053229b: POP EBX
// 0053229c: RET
// 0053229d: CMP dword ptr [EAX + 0x18],0x0
//   Label: LAB_0053229d
// 005322a1: JZ 0x0053241b
//   XREF to: 0053241b (CONDITIONAL_JUMP)
// 005322a7: MOV EBP,0x48
// 005322ac: LEA EAX,[ESI + 0x48]
// 005322af: MOV dword ptr [ESP + 0x14],EDI
//   XREF to: Stack[-0x54] (WRITE)
// 005322b3: XOR EBX,EBX
// 005322b5: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 005322b9: IMUL EAX,EBX,0x48
//   Label: LAB_005322b9
// 005322bc: MOV EDX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 005322c0: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x5c] (READ)
// 005322c4: ADD EAX,ESI
// 005322c6: ADD EDX,0x4
//   Label: LAB_005322c6
// 005322c9: FLD float ptr [EAX]
// 005322cb: ADD EAX,0x4
// 005322ce: FSTP float ptr [EDX + -0x4]
// 005322d1: CMP EAX,ECX
// 005322d3: JNZ 0x005322c6
//   XREF to: 005322c6 (CONDITIONAL_JUMP)
// 005322d5: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x54] (READ)
// 005322d9: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x5c] (READ)
// 005322dd: INC EBX
// 005322de: ADD ECX,EBP
// 005322e0: ADD EDX,EBP
// 005322e2: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 005322e6: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 005322ea: CMP EBX,0x2
// 005322ed: JL 0x005322b9
//   XREF to: 005322b9 (CONDITIONAL_JUMP)
// 005322ef: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 005322f2: LEA EAX,[EDX*0x8 + 0x0]
// 005322f9: ADD EAX,EDX
// 005322fb: SHL EAX,0x2
// 005322fe: ADD EAX,EDX
// 00532300: SHL EAX,0x2
// 00532303: MOV EDX,dword ptr [EAX + 0x67e730]
//   XREF to: 0067e730 (DATA)
// 00532309: MOV ECX,dword ptr [EAX + 0x67e734]
//   XREF to: 0067e734 (DATA)
// 0053230f: SUB ECX,EDX
// 00532311: MOV dword ptr [ESP + 0x34],ECX
//   XREF to: Stack[-0x34] (WRITE)
// 00532315: LEA ECX,[EAX + 0xc]
// 00532318: ADD EAX,0x34
// 0053231b: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 0053231f: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00532323: XOR EAX,EAX
//   Label: LAB_00532323
// 00532325: LEA EDX,[EDX + EDX*0x2]
// 00532328: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0053232c: MOV dword ptr [ESP + 0x2c],EDX
//   XREF to: Stack[-0x3c] (WRITE)
// 00532330: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x34] (READ)
// 00532334: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 00532338: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0053233c: MOV EDX,dword ptr [ESP + 0x34]
//   Label: LAB_0053233c
//   XREF to: Stack[-0x34] (READ)
// 00532340: TEST EDX,EDX
// 00532342: JLE 0x005323d2
//   XREF to: 005323d2 (CONDITIONAL_JUMP)
// 00532348: MOV EAX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 0053234c: IMUL EAX,EDX
// 0053234f: MOV ECX,dword ptr [ESP + 0x2c]
//   XREF to: Stack[-0x3c] (READ)
// 00532353: MOV EDX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x44] (READ)
// 00532357: ADD EAX,ECX
// 00532359: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 0053235d: ADD EDX,EAX
// 0053235f: MOV ECX,EAX
// 00532361: MOV dword ptr [ESP + 0x4c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00532365: MOV EBP,0x12
//   Label: LAB_00532365
// 0053236a: MOV EDX,ECX
// 0053236c: MOV EAX,ECX
// 0053236e: SAR EDX,0x1f
// 00532371: IDIV EBP
// 00532373: IMUL EAX,EAX,0x48
// 00532376: MOV EDX,ECX
// 00532378: MOV dword ptr [ESP + 0x54],0x12
//   XREF to: Stack[-0x14] (WRITE)
// 00532380: SAR EDX,0x1f
// 00532383: LEA EBP,[ESI + EAX*0x1]
// 00532386: MOV EAX,ECX
// 00532388: IDIV dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 0053238c: SHL EDX,0x2
// 0053238f: ADD EBP,EDX
// 00532391: MOV EAX,EBX
// 00532393: MOV dword ptr [ESP + 0x50],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 00532397: MOV EDX,EBX
// 00532399: MOV EBP,0x12
// 0053239e: SAR EDX,0x1f
// 005323a1: IDIV EBP
// 005323a3: IMUL EAX,EAX,0x48
// 005323a6: MOV EDX,EBX
// 005323a8: MOV dword ptr [ESP + 0x54],0x12
//   XREF to: Stack[-0x14] (WRITE)
// 005323b0: SAR EDX,0x1f
// 005323b3: LEA EBP,[EDI + EAX*0x1]
// 005323b6: MOV EAX,EBX
// 005323b8: IDIV dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 005323bc: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005323c0: INC ECX
// 005323c1: FLD float ptr [EAX]
// 005323c3: FSTP float ptr [EBP + EDX*0x4]
// 005323c7: MOV EBP,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x1c] (READ)
// 005323cb: ADD EBX,0x3
// 005323ce: CMP ECX,EBP
// 005323d0: JL 0x00532365
//   XREF to: 00532365 (CONDITIONAL_JUMP)
// 005323d2: MOV EDX,dword ptr [ESP + 0x40]
//   Label: LAB_005323d2
//   XREF to: Stack[-0x28] (READ)
// 005323d6: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x30] (READ)
// 005323da: INC EDX
// 005323db: INC EAX
// 005323dc: MOV dword ptr [ESP + 0x40],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 005323e0: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 005323e4: CMP EDX,0x3
// 005323e7: JL 0x0053233c
//   XREF to: 0053233c (CONDITIONAL_JUMP)
// 005323ed: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x50] (READ)
// 005323f1: MOV EBP,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x64] (READ)
// 005323f5: MOV EDX,dword ptr [EBX + 0x67e728]
//   XREF to: 0067e734 (DATA)
// 005323fb: MOV EAX,dword ptr [EBX + 0x67e72c]
//   XREF to: 0067e738 (DATA)
// 00532401: ADD EBX,0x4
// 00532404: SUB EAX,EDX
// 00532406: MOV dword ptr [ESP + 0x18],EBX
//   XREF to: Stack[-0x50] (WRITE)
// 0053240a: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0053240e: CMP EBX,EBP
// 00532410: JZ 0x00532295
//   XREF to: 00532295 (CONDITIONAL_JUMP)
// 00532416: JMP 0x00532323
//   XREF to: 00532323 (UNCONDITIONAL_JUMP)
// 0053241b: MOV ECX,dword ptr [ESP]
//   Label: LAB_0053241b
//   XREF to: Stack[-0x68] (DATA)
// 0053241e: LEA EAX,[ECX*0x8 + 0x0]
// 00532425: ADD EAX,ECX
// 00532427: SHL EAX,0x2
// 0053242a: ADD EAX,ECX
// 0053242c: SHL EAX,0x2
// 0053242f: XOR EDX,EDX
// 00532431: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 00532435: MOV ECX,dword ptr [EAX + 0x67e728]
//   XREF to: 0067e728 (DATA)
// 0053243b: ADD EAX,0x34
// 0053243e: MOV dword ptr [ESP + 0x30],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00532442: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00532446: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_00532446
//   XREF to: Stack[-0x38] (READ)
// 0053244a: LEA EDX,[EDX + EDX*0x2]
// 0053244d: XOR EBX,EBX
// 0053244f: MOV dword ptr [ESP + 0x28],EDX
//   XREF to: Stack[-0x40] (WRITE)
// 00532453: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00532457: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0053245b: MOV dword ptr [ESP + 0x44],EBX
//   XREF to: Stack[-0x24] (WRITE)
// 0053245f: MOV EBP,dword ptr [ESP + 0x30]
//   Label: LAB_0053245f
//   XREF to: Stack[-0x38] (READ)
// 00532463: TEST EBP,EBP
// 00532465: JLE 0x005324f5
//   XREF to: 005324f5 (CONDITIONAL_JUMP)
// 0053246b: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x24] (READ)
// 0053246f: IMUL EAX,EBP
// 00532472: MOV EBP,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x40] (READ)
// 00532476: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x48] (READ)
// 0053247a: ADD EAX,EBP
// 0053247c: MOV EBX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 00532480: ADD EDX,EAX
// 00532482: MOV ECX,EAX
// 00532484: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00532488: MOV EBP,0x12
//   Label: LAB_00532488
// 0053248d: MOV EDX,ECX
// 0053248f: MOV EAX,ECX
// 00532491: SAR EDX,0x1f
// 00532494: IDIV EBP
// 00532496: IMUL EAX,EAX,0x48
// 00532499: MOV EDX,ECX
// 0053249b: MOV dword ptr [ESP + 0x54],0x12
//   XREF to: Stack[-0x14] (WRITE)
// 005324a3: SAR EDX,0x1f
// 005324a6: LEA EBP,[ESI + EAX*0x1]
// 005324a9: MOV EAX,ECX
// 005324ab: IDIV dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 005324af: SHL EDX,0x2
// 005324b2: ADD EBP,EDX
// 005324b4: MOV EAX,EBX
// 005324b6: MOV dword ptr [ESP + 0x50],EBP
//   XREF to: Stack[-0x18] (WRITE)
// 005324ba: MOV EDX,EBX
// 005324bc: MOV EBP,0x12
// 005324c1: SAR EDX,0x1f
// 005324c4: IDIV EBP
// 005324c6: IMUL EAX,EAX,0x48
// 005324c9: MOV EDX,EBX
// 005324cb: MOV dword ptr [ESP + 0x54],0x12
//   XREF to: Stack[-0x14] (WRITE)
// 005324d3: SAR EDX,0x1f
// 005324d6: LEA EBP,[EDI + EAX*0x1]
// 005324d9: MOV EAX,EBX
// 005324db: IDIV dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x14] (READ)
// 005324df: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x18] (READ)
// 005324e3: INC ECX
// 005324e4: ADD EBX,0x3
// 005324e7: FLD float ptr [EAX]
// 005324e9: MOV EAX,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x20] (READ)
// 005324ed: FSTP float ptr [EBP + EDX*0x4]
// 005324f1: CMP ECX,EAX
// 005324f3: JL 0x00532488
//   XREF to: 00532488 (CONDITIONAL_JUMP)
// 005324f5: MOV ECX,dword ptr [ESP + 0x44]
//   Label: LAB_005324f5
//   XREF to: Stack[-0x24] (READ)
// 005324f9: MOV EDX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x2c] (READ)
// 005324fd: INC ECX
// 005324fe: INC EDX
// 005324ff: MOV dword ptr [ESP + 0x44],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00532503: MOV dword ptr [ESP + 0x3c],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 00532507: CMP ECX,0x3
// 0053250a: JL 0x0053245f
//   XREF to: 0053245f (CONDITIONAL_JUMP)
// 00532510: MOV EBP,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x4c] (READ)
// 00532514: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x60] (READ)
// 00532518: MOV EDX,dword ptr [EBP + 0x67e728]
//   XREF to: 0067e728 (DATA)
// 0053251e: MOV EAX,dword ptr [EBP + 0x67e72c]
//   XREF to: 0067e72c (DATA)
// 00532524: ADD EBP,0x4
// 00532527: SUB EAX,EDX
// 00532529: MOV dword ptr [ESP + 0x1c],EBP
//   XREF to: Stack[-0x4c] (WRITE)
// 0053252d: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 00532531: CMP EBP,ECX
// 00532533: JZ 0x00532295
//   XREF to: 00532295 (CONDITIONAL_JUMP)
// 00532539: JMP 0x00532446
//   XREF to: 00532446 (UNCONDITIONAL_JUMP)
