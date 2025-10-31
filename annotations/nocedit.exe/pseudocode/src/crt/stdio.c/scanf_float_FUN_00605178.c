// Name: crt_stdio.c_scanf_float_FUN_00605178
// Address: 00605178
// Address Range: [[00605178, 0060547a]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_float_FUN_00605178(scanf_state_t * state, va_list_t * args)
// Cross-references:
//   crt_stdio.c_doscan_FUN_00604950 (00604950) at 00604b43 [UNCONDITIONAL_CALL]
// Globals:
//   char[256] g_CharacterClassificationTable
//   STRTOD_FUNC* PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410 = 0060ad30
// Function calls:
//   crt_math.c_double_to_float_FUN_0060b26c
//   crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30
//   crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_float_FUN_00605178(scanf_state_t *state,va_list_t *args)

{
  char *pcVar1;
  byte bVar2;
  undefined6 *puVar3;
  undefined4 *puVar4;
  int character;
  uint uVar5;
  float fVar6;
  char *pcVar7;
  float *pfVar8;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_EBP;
  char *pcVar9;
  int iVar10;
  int iVar11;
  undefined2 in_ES;
  int *in_stack_00000010;
  scanf_state_t *psVar12;
  scanf_state_t *in_stack_ffffff88;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined2 uStack_10;
  undefined1 uStack_e;
  undefined1 uStack_d;
  
  uStack_14._0_2_ = (undefined2)unaff_EBP;
  uStack_14._2_2_ = (short)((uint)unaff_EBP >> 0x10);
  pcVar9 = &stack0xffffff80;
  iVar10 = 0;
  local_24 = 0.0;
  uStack_10 = in_ES;
  while( true ) {
    character = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 2U) == 0) break;
    local_20 = local_20 + 1;
  }
  if ((state->flags & 2) != 0) goto LAB_006053ad;
  iVar11 = state->field_width;
  state->field_width = iVar11 + -1;
  pcVar9 = &stack0xffffff80;
  if (iVar11 != 0) {
    if ((character == 0x2b) || (pcVar9 = &stack0xffffff80, character == 0x2d)) {
      local_20 = local_20 + 1;
      pcVar9 = &stack0xffffff81;
      character = crt_stdio_c_scanf_getc_with_width_FUN_00605918
                            ((scanf_state_t *)CONCAT31((int3)((uint)state >> 8),(char)character));
      if (character == -1) goto LAB_006053ad;
    }
    if (((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) != 0) ||
       (character == 0x2e)) {
      uStack_14._0_2_ = 0;
      uStack_14._2_2_ = 0;
      local_20 = 0;
      if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) != 0) {
        local_20 = 1;
        do {
          *pcVar9 = (char)character;
          pcVar9 = pcVar9 + 1;
          if ((state->flags & 0x10) != 0) {
            uStack_14._2_2_ = (short)character + uStack_14._2_2_ * 10 + -0x30;
          }
          iVar10 = iVar10 + 1;
          character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
          if (character == -1) goto LAB_006053ad;
        } while ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) != 0);
      }
      pcVar7 = pcVar9;
      iVar11 = iVar10;
      if (character == 0x2e) {
        psVar12 = state;
        *pcVar9 = '.';
        pcVar9 = pcVar9 + 1;
        character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(psVar12);
        if (character == -1) goto LAB_006053ad;
        if ((local_1c == 0) &&
           ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) == 0))
        goto LAB_006053a3;
        iVar10 = iVar10 + 1;
        do {
          if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) == 0) break;
          iVar10 = iVar10 + 1;
          psVar12 = state;
          *pcVar9 = (char)character;
          pcVar9 = pcVar9 + 1;
          character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(psVar12);
        } while (character != -1);
        if ((state->flags & 0x10) != 0) {
          uStack_10 = 0;
          uStack_e = 0;
          pcVar7 = pcVar9;
          while( true ) {
            uStack_d = 0;
            pcVar1 = pcVar7 + -1;
            pcVar7 = pcVar7 + -1;
            if (*pcVar1 == '.') break;
            local_18 = 10;
            uVar5 = CONCAT12(*pcVar1 + -0x30,uStack_10) / 10;
            uStack_10 = (undefined2)uVar5;
            uStack_e = (undefined1)(uVar5 >> 0x10);
          }
          uStack_14._0_2_ = uStack_10;
        }
        pcVar7 = pcVar9;
        iVar11 = iVar10;
        if (character == -1) goto LAB_006053ad;
      }
      pcVar9 = pcVar7;
      iVar10 = iVar11;
      if (((state->flags & 0x10) == 0) && ((character == 0x65 || (character == 0x45)))) {
        iVar10 = iVar11 + 1;
        psVar12 = state;
        *pcVar7 = (char)character;
        pcVar9 = pcVar7 + 1;
        character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(psVar12);
        if (character == -1) goto LAB_006053ad;
        if ((character == 0x2b) || (character == 0x2d)) {
          iVar10 = iVar11 + 2;
          in_stack_ffffff88 = state;
          *pcVar9 = (char)character;
          pcVar9 = pcVar7 + 2;
          character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(in_stack_ffffff88);
          if (character == -1) goto LAB_006053ad;
        }
        if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) == 0) {
          iVar10 = 0;
        }
        else {
          do {
            iVar10 = iVar10 + 1;
            psVar12 = state;
            *pcVar9 = (char)character;
            pcVar9 = pcVar9 + 1;
            character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(psVar12);
            if (character == -1) goto LAB_006053ad;
          } while ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) != 0);
        }
      }
    }
  }
LAB_006053a3:
  crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(character,state);
LAB_006053ad:
  if ((0 < iVar10) && (iVar10 = iVar10 + local_1c, (state->flags & 1) != 0)) {
    *pcVar9 = '\0';
    fVar6 = (float)CONCAT22(uStack_14._2_2_,(undefined2)uStack_14);
    if ((state->flags & 0x10) == 0) {
      (*PTR_crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410)
                ((double *)&stack0xffffff88,(double *)&local_28,(char *)in_stack_ffffff88);
      fVar6 = (float)CONCAT22(uStack_14._2_2_,(undefined2)uStack_14);
    }
    else if ((char)in_stack_ffffff88 == '-') {
      fVar6 = (float)-CONCAT22(uStack_14._2_2_,(undefined2)uStack_14);
    }
    if ((state->flags & 4) == 0) {
      if ((state->flags & 8) == 0) {
        puVar4 = (undefined4 *)*in_stack_00000010;
        *in_stack_00000010 = (int)(puVar4 + 1);
        pfVar8 = (float *)*puVar4;
      }
      else {
        puVar4 = (undefined4 *)*in_stack_00000010;
        *in_stack_00000010 = (int)(puVar4 + 1);
        pfVar8 = (float *)*puVar4;
      }
    }
    else {
      puVar3 = (undefined6 *)*in_stack_00000010;
      *in_stack_00000010 = (int)(puVar3 + 1);
      pfVar8 = (float *)*puVar3;
    }
    bVar2 = state->flags;
    if ((bVar2 & 0x10) == 0) {
      if (((bVar2 & 0x20) != 0) || ((bVar2 & 0x40) != 0)) {
        *pfVar8 = local_28;
        pfVar8[1] = local_24;
        return iVar10;
      }
      uStack_14 = fVar6;
      fVar6 = crt_math_c_double_to_float_FUN_0060b26c((uint)local_28,(uint)local_24);
    }
    *pfVar8 = fVar6;
  }
  return iVar10;
}


// Assembly code:
// 00605178: PUSH EBX
//   Label: crt_stdio.c_scanf_float_FUN_00605178
// 00605179: PUSH ESI
// 0060517a: PUSH EDI
// 0060517b: PUSH ES
// 0060517c: PUSH EBP
// 0060517d: SUB ESP,0x6c
// 00605180: MOV EBP,dword ptr [ESP + 0x84]
//   XREF to: Stack[0x4] (READ)
// 00605187: XOR EDI,EDI
// 00605189: MOV ESI,ESP
// 0060518b: MOV dword ptr [ESP + 0x5c],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 0060518f: PUSH EBP
//   Label: LAB_0060518f
// 00605190: CALL crt_stdio.c_scanf_getc_wrapper_FUN_00604930
//   XREF to: 00604930 (UNCONDITIONAL_CALL)
// 00605195: ADD ESP,0x4
// 00605198: MOV CL,AL
// 0060519a: MOV EBX,EAX
// 0060519c: INC CL
// 0060519e: AND ECX,0xff
// 006051a4: TEST byte ptr [ECX + 0x6849c4],0x2
//   XREF to: 006849c4 (DATA)
// 006051ab: JZ 0x006051b3
//   XREF to: 006051b3 (CONDITIONAL_JUMP)
// 006051ad: INC dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (READ_WRITE)
// 006051b1: JMP 0x0060518f
//   XREF to: 0060518f (UNCONDITIONAL_JUMP)
// 006051b3: TEST byte ptr [EBP + 0x10],0x2
//   Label: LAB_006051b3
// 006051b7: JNZ 0x006053ad
//   XREF to: 006053ad (CONDITIONAL_JUMP)
// 006051bd: MOV ECX,dword ptr [EBP + 0xc]
// 006051c0: LEA EDX,[ECX + -0x1]
// 006051c3: MOV dword ptr [EBP + 0xc],EDX
// 006051c6: TEST ECX,ECX
// 006051c8: JZ 0x006053a3
//   XREF to: 006053a3 (CONDITIONAL_JUMP)
// 006051ce: CMP EAX,0x2b
// 006051d1: JZ 0x006051d8
//   XREF to: 006051d8 (CONDITIONAL_JUMP)
// 006051d3: CMP EAX,0x2d
// 006051d6: JNZ 0x006051f8
//   XREF to: 006051f8 (CONDITIONAL_JUMP)
// 006051d8: MOV ECX,dword ptr [ESP + 0x5c]
//   Label: LAB_006051d8
//   XREF to: Stack[-0x24] (READ)
// 006051dc: PUSH EBP
// 006051dd: MOV byte ptr [ESI],BL
//   XREF to: Stack[-0x80] (DATA)
// 006051df: INC ECX
// 006051e0: INC ESI
// 006051e1: MOV dword ptr [ESP + 0x60],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 006051e5: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 006051ea: ADD ESP,0x4
// 006051ed: MOV EBX,EAX
// 006051ef: CMP EAX,-0x1
// 006051f2: JZ 0x006053ad
//   XREF to: 006053ad (CONDITIONAL_JUMP)
// 006051f8: MOV AL,BL
//   Label: LAB_006051f8
// 006051fa: INC AL
// 006051fc: AND EAX,0xff
// 00605201: TEST byte ptr [EAX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 00605208: JNZ 0x00605213
//   XREF to: 00605213 (CONDITIONAL_JUMP)
// 0060520a: CMP EBX,0x2e
// 0060520d: JNZ 0x006053a3
//   XREF to: 006053a3 (CONDITIONAL_JUMP)
// 00605213: XOR EAX,EAX
//   Label: LAB_00605213
// 00605215: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00605219: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0060521d: MOV AL,BL
// 0060521f: INC AL
// 00605221: AND EAX,0xff
// 00605226: TEST byte ptr [EAX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 0060522d: JZ 0x00605275
//   XREF to: 00605275 (CONDITIONAL_JUMP)
// 0060522f: MOV dword ptr [ESP + 0x58],0x1
//   XREF to: Stack[-0x28] (WRITE)
// 00605237: MOV byte ptr [ESI],BL
//   Label: LAB_00605237
//   XREF to: Stack[-0x7f] (DATA)
// 00605239: MOV AL,byte ptr [EBP + 0x10]
// 0060523c: INC ESI
// 0060523d: TEST AL,0x10
// 0060523f: JZ 0x00605250
//   XREF to: 00605250 (CONDITIONAL_JUMP)
// 00605241: IMUL EAX,dword ptr [ESP + 0x66],0xa
//   XREF to: Stack[-0x1a] (READ)
// 00605246: ADD EBX,EAX
// 00605248: SUB EBX,0x30
// 0060524b: MOV word ptr [ESP + 0x66],BX
//   XREF to: Stack[-0x1a] (WRITE)
// 00605250: PUSH EBP
//   Label: LAB_00605250
// 00605251: INC EDI
// 00605252: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 00605257: ADD ESP,0x4
// 0060525a: MOV EBX,EAX
// 0060525c: CMP EAX,-0x1
// 0060525f: JZ 0x006053ad
//   XREF to: 006053ad (CONDITIONAL_JUMP)
// 00605265: INC AL
// 00605267: AND EAX,0xff
// 0060526c: TEST byte ptr [EAX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 00605273: JNZ 0x00605237
//   XREF to: 00605237 (CONDITIONAL_JUMP)
// 00605275: CMP EBX,0x2e
//   Label: LAB_00605275
// 00605278: JNZ 0x0060531f
//   XREF to: 0060531f (CONDITIONAL_JUMP)
// 0060527e: PUSH EBP
// 0060527f: MOV byte ptr [ESI],BL
//   XREF to: Stack[-0x7e] (DATA)
// 00605281: INC ESI
// 00605282: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 00605287: ADD ESP,0x4
// 0060528a: MOV EBX,EAX
// 0060528c: CMP EAX,-0x1
// 0060528f: JZ 0x006053ad
//   XREF to: 006053ad (CONDITIONAL_JUMP)
// 00605295: CMP dword ptr [ESP + 0x58],0x0
//   XREF to: Stack[-0x28] (READ)
// 0060529a: JNZ 0x006052b2
//   XREF to: 006052b2 (CONDITIONAL_JUMP)
// 0060529c: MOV AL,BL
// 0060529e: INC AL
// 006052a0: AND EAX,0xff
// 006052a5: TEST byte ptr [EAX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 006052ac: JZ 0x006053a3
//   XREF to: 006053a3 (CONDITIONAL_JUMP)
// 006052b2: INC EDI
//   Label: LAB_006052b2
// 006052b3: MOV AL,BL
//   Label: LAB_006052b3
// 006052b5: INC AL
// 006052b7: AND EAX,0xff
// 006052bc: TEST byte ptr [EAX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 006052c3: JZ 0x006052d9
//   XREF to: 006052d9 (CONDITIONAL_JUMP)
// 006052c5: PUSH EBP
// 006052c6: INC EDI
// 006052c7: MOV byte ptr [ESI],BL
//   XREF to: Stack[-0x7d] (DATA)
// 006052c9: INC ESI
// 006052ca: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 006052cf: ADD ESP,0x4
// 006052d2: MOV EBX,EAX
// 006052d4: CMP EAX,-0x1
// 006052d7: JNZ 0x006052b3
//   XREF to: 006052b3 (CONDITIONAL_JUMP)
// 006052d9: TEST byte ptr [EBP + 0x10],0x10
//   Label: LAB_006052d9
// 006052dd: JZ 0x00605316
//   XREF to: 00605316 (CONDITIONAL_JUMP)
// 006052df: XOR EDX,EDX
// 006052e1: MOV ECX,ESI
// 006052e3: MOV dword ptr [ESP + 0x68],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 006052e7: MOV AL,byte ptr [ECX + -0x1]
//   Label: LAB_006052e7
//   XREF to: Stack[-0x7d] (READ)
// 006052ea: DEC ECX
// 006052eb: CMP AL,0x2e
// 006052ed: JZ 0x0060530d
//   XREF to: 0060530d (CONDITIONAL_JUMP)
// 006052ef: SUB AL,0x30
// 006052f1: MOV dword ptr [ESP + 0x60],0xa
//   XREF to: Stack[-0x20] (WRITE)
// 006052f9: MOV byte ptr [ESP + 0x6a],AL
//   XREF to: Stack[-0x16] (WRITE)
// 006052fd: XOR EDX,EDX
// 006052ff: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 00605303: DIV dword ptr [ESP + 0x60]
//   XREF to: Stack[-0x20] (READ)
// 00605307: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0060530b: JMP 0x006052e7
//   XREF to: 006052e7 (UNCONDITIONAL_JUMP)
// 0060530d: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_0060530d
//   XREF to: Stack[-0x18] (READ)
// 00605311: MOV word ptr [ESP + 0x64],AX
//   XREF to: Stack[-0x1c] (WRITE)
// 00605316: CMP EBX,-0x1
//   Label: LAB_00605316
// 00605319: JZ 0x006053ad
//   XREF to: 006053ad (CONDITIONAL_JUMP)
// 0060531f: TEST byte ptr [EBP + 0x10],0x10
//   Label: LAB_0060531f
// 00605323: JNZ 0x006053a3
//   XREF to: 006053a3 (CONDITIONAL_JUMP)
// 00605329: CMP EBX,0x65
// 0060532c: JZ 0x00605337
//   XREF to: 00605337 (CONDITIONAL_JUMP)
// 0060532e: CMP EBX,0x45
// 00605331: JNZ 0x006053a3
//   XREF to: 006053a3 (CONDITIONAL_JUMP)
// 00605337: PUSH EBP
//   Label: LAB_00605337
// 00605338: INC EDI
// 00605339: MOV byte ptr [ESI],BL
//   XREF to: Stack[-0x7c] (DATA)
// 0060533b: INC ESI
// 0060533c: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 00605341: ADD ESP,0x4
// 00605344: MOV EBX,EAX
// 00605346: CMP EAX,-0x1
// 00605349: JZ 0x006053ad
//   XREF to: 006053ad (CONDITIONAL_JUMP)
// 0060534b: CMP EAX,0x2b
// 0060534e: JZ 0x00605355
//   XREF to: 00605355 (CONDITIONAL_JUMP)
// 00605350: CMP EAX,0x2d
// 00605353: JNZ 0x00605369
//   XREF to: 00605369 (CONDITIONAL_JUMP)
// 00605355: PUSH EBP
//   Label: LAB_00605355
// 00605356: INC EDI
// 00605357: MOV byte ptr [ESI],BL
//   XREF to: Stack[-0x7b] (DATA)
// 00605359: INC ESI
// 0060535a: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 0060535f: ADD ESP,0x4
// 00605362: MOV EBX,EAX
// 00605364: CMP EAX,-0x1
// 00605367: JZ 0x006053ad
//   XREF to: 006053ad (CONDITIONAL_JUMP)
// 00605369: MOV AL,BL
//   Label: LAB_00605369
// 0060536b: INC AL
// 0060536d: AND EAX,0xff
// 00605372: TEST byte ptr [EAX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 00605379: JNZ 0x0060537f
//   XREF to: 0060537f (CONDITIONAL_JUMP)
// 0060537b: XOR EDI,EDI
// 0060537d: JMP 0x006053a3
//   XREF to: 006053a3 (UNCONDITIONAL_JUMP)
// 0060537f: PUSH EBP
//   Label: LAB_0060537f
// 00605380: INC EDI
// 00605381: MOV byte ptr [ESI],BL
//   XREF to: Stack[-0x7a] (DATA)
// 00605383: INC ESI
// 00605384: CALL crt_stdio.c_scanf_getc_with_width_FUN_00605918
//   XREF to: 00605918 (UNCONDITIONAL_CALL)
// 00605389: ADD ESP,0x4
// 0060538c: MOV EBX,EAX
// 0060538e: CMP EAX,-0x1
// 00605391: JZ 0x006053ad
//   XREF to: 006053ad (CONDITIONAL_JUMP)
// 00605393: INC AL
// 00605395: AND EAX,0xff
// 0060539a: TEST byte ptr [EAX + 0x6849c4],0x20
//   XREF to: 006849c4 (DATA)
// 006053a1: JNZ 0x0060537f
//   XREF to: 0060537f (CONDITIONAL_JUMP)
// 006053a3: PUSH EBP
//   Label: LAB_006053a3
// 006053a4: PUSH EBX
// 006053a5: CALL crt_stdio.c_scanf_ungetc_wrapper_FUN_0060493c
//   XREF to: 0060493c (UNCONDITIONAL_CALL)
// 006053aa: ADD ESP,0x8
// 006053ad: TEST EDI,EDI
//   Label: LAB_006053ad
// 006053af: JLE 0x00605470
//   XREF to: 00605470 (CONDITIONAL_JUMP)
// 006053b5: ADD EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0x24] (READ)
// 006053b9: TEST byte ptr [EBP + 0x10],0x1
// 006053bd: JZ 0x00605470
//   XREF to: 00605470 (CONDITIONAL_JUMP)
// 006053c3: MOV byte ptr [ESI],0x0
//   XREF to: Stack[-0x7a] (DATA)
// 006053c6: TEST byte ptr [EBP + 0x10],0x10
// 006053ca: JZ 0x006053d8
//   XREF to: 006053d8 (CONDITIONAL_JUMP)
// 006053cc: CMP byte ptr [ESP],0x2d
//   XREF to: Stack[-0x80] (DATA)
// 006053d0: JNZ 0x006053eb
//   XREF to: 006053eb (CONDITIONAL_JUMP)
// 006053d2: NEG dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 006053d6: JMP 0x006053eb
//   XREF to: 006053eb (UNCONDITIONAL_JUMP)
// 006053d8: LEA EAX,[ESP + 0x50]
//   Label: LAB_006053d8
//   XREF to: Stack[-0x30] (DATA)
// 006053dc: PUSH EAX
// 006053dd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x80] (DATA)
// 006053e1: PUSH EAX
// 006053e2: CALL dword ptr [PTR_crt_stdio.c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410]
//   XREF to: 0060ad30 (COMPUTED_CALL)
//   XREF to: 00685410 (READ)
// 006053e8: ADD ESP,0x8
// 006053eb: MOV CH,byte ptr [EBP + 0x10]
//   Label: LAB_006053eb
// 006053ee: TEST CH,0x4
// 006053f1: JZ 0x00605406
//   XREF to: 00605406 (CONDITIONAL_JUMP)
// 006053f3: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x8] (READ)
// 006053fa: MOV EBX,dword ptr [EAX]
// 006053fc: ADD EBX,0x8
// 006053ff: MOV dword ptr [EAX],EBX
// 00605401: LES EBX,[EBX + -0x8]
// 00605404: JMP 0x00605437
//   XREF to: 00605437 (UNCONDITIONAL_JUMP)
// 00605406: TEST CH,0x8
//   Label: LAB_00605406
// 00605409: JZ 0x00605422
//   XREF to: 00605422 (CONDITIONAL_JUMP)
// 0060540b: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[0x8] (READ)
// 00605412: MOV EDX,dword ptr [EAX]
// 00605414: ADD EDX,0x4
// 00605417: MOV dword ptr [EAX],EDX
// 00605419: MOV AX,DS
// 0060541b: MOV ES,AX
// 0060541d: MOV EBX,dword ptr [EDX + -0x4]
// 00605420: JMP 0x00605437
//   XREF to: 00605437 (UNCONDITIONAL_JUMP)
// 00605422: MOV EAX,dword ptr [ESP + 0x88]
//   Label: LAB_00605422
//   XREF to: Stack[0x8] (READ)
// 00605429: MOV ESI,dword ptr [EAX]
// 0060542b: ADD ESI,0x4
// 0060542e: MOV dword ptr [EAX],ESI
// 00605430: MOV AX,DS
// 00605432: MOV ES,AX
// 00605434: MOV EBX,dword ptr [ESI + -0x4]
// 00605437: MOV AH,byte ptr [EBP + 0x10]
//   Label: LAB_00605437
// 0060543a: TEST AH,0x10
// 0060543d: JZ 0x00605445
//   XREF to: 00605445 (CONDITIONAL_JUMP)
// 0060543f: MOV EAX,dword ptr [ESP + 0x64]
//   XREF to: Stack[-0x1c] (READ)
// 00605443: JMP 0x0060546d
//   XREF to: 0060546d (UNCONDITIONAL_JUMP)
// 00605445: TEST AH,0x20
//   Label: LAB_00605445
// 00605448: JNZ 0x0060544f
//   XREF to: 0060544f (CONDITIONAL_JUMP)
// 0060544a: TEST AH,0x40
// 0060544d: JZ 0x00605460
//   XREF to: 00605460 (CONDITIONAL_JUMP)
// 0060544f: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_0060544f
//   XREF to: Stack[-0x30] (READ)
// 00605453: MOV dword ptr ES:[EBX],EAX
// 00605456: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x2c] (READ)
// 0060545a: MOV dword ptr ES:[EBX + 0x4],EAX
// 0060545e: JMP 0x00605470
//   XREF to: 00605470 (UNCONDITIONAL_JUMP)
// 00605460: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_00605460
//   XREF to: Stack[-0x30] (READ)
// 00605464: MOV EDX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x2c] (READ)
// 00605468: CALL crt_math.c_double_to_float_FUN_0060b26c
//   XREF to: 0060b26c (UNCONDITIONAL_CALL)
// 0060546d: MOV dword ptr ES:[EBX],EAX
//   Label: LAB_0060546d
// 00605470: MOV EAX,EDI
//   Label: LAB_00605470
// 00605472: ADD ESP,0x6c
// 00605475: POP EBP
// 00605476: POP ES
// 00605477: POP EDI
// 00605478: POP ESI
// 00605479: POP EBX
// 0060547a: RET
