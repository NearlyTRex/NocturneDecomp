// Name: crt_stdio.c_scanf_float_FUN_00605178
// Address: 00605178
// Address Range: [[00605178, 0060547a]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_float_FUN_00605178(scanf_state_t * state, va_list_t * args)

#include "nocturne.h"

int __cdecl crt_stdio_c_scanf_float_FUN_00605178(scanf_state_t *state,va_list_t *args)

{
  char *pcVar1;
  byte bVar2;
  undefined6 *puVar3;
  uint *puVar4;
  int character;
  uint uVar5;
  float fVar6;
  char *pcVar7;
  float *pfVar8;
  BADSPACEBASE *in_ESP;
  uint unaff_EBP;
  char *pcVar9;
  int iVar10;
  int iVar11;
  ushort in_ES;
  int *in_stack_00000010;
  scanf_state_t *psVar12;
  scanf_state_t *in_stack_ffffff88;
  float local_28;
  float local_24;
  int local_20;
  int local_1c;
  uint local_18;
  uint uStack_14;
  ushort uStack_10;
  byte uStack_e;
  byte uStack_d;
  
  uStack_14._0_2_ = (ushort)unaff_EBP;
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
                            ((scanf_state_t *)CONCAT31 /* combine 2-byte values */((int3)((uint)state >> 8),(char)character));
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
            uVar5 = CONCAT12 /* combine 2-byte values */(*pcVar1 + -0x30,uStack_10) / 10;
            uStack_10 = (ushort)uVar5;
            uStack_e = (byte)(uVar5 >> 0x10);
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
    fVar6 = (float)CONCAT22 /* combine 2-byte values */(uStack_14._2_2_,(ushort)uStack_14);
    if ((state->flags & 0x10) == 0) {
      (*PTR_crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410)
                ((double *)&stack0xffffff88,(double *)&local_28,(char *)in_stack_ffffff88);
      fVar6 = (float)CONCAT22 /* combine 2-byte values */(uStack_14._2_2_,(ushort)uStack_14);
    }
    else if ((char)in_stack_ffffff88 == '-') {
      fVar6 = (float)-CONCAT22 /* combine 2-byte values */(uStack_14._2_2_,(ushort)uStack_14);
    }
    if ((state->flags & 4) == 0) {
      if ((state->flags & 8) == 0) {
        puVar4 = (uint *)*in_stack_00000010;
        *in_stack_00000010 = (int)(puVar4 + 1);
        pfVar8 = (float *)*puVar4;
      }
      else {
        puVar4 = (uint *)*in_stack_00000010;
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
      fVar6 = crt_math_c_doubleToFloat_FUN_0060b26c((double)CONCAT44 /* combine 2-byte values */(local_24,local_28));
    }
    *pfVar8 = fVar6;
  }
  return iVar10;
}
