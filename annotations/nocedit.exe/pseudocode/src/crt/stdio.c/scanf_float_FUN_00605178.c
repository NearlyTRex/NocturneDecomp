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
  char *pcVar6;
  float *pfVar7;
  char *pcVar8;
  int iVar9;
  int iVar10;
  ushort in_ES;
  int *in_stack_00000014;
  char *in_stack_ffffff80;
  double local_30;
  int local_28;
  float local_24;
  float local_20;
  uint local_1c;
  ushort local_18;
  byte uStack_16;
  byte uStack_15;
  float fStack_10;
  
  fStack_10 = (float)CONCAT22(fStack_10._2_2_,in_ES);
  pcVar8 = &stack0xffffff80;
  iVar9 = 0;
  local_24 = 0.0;
  while( true ) {
    character = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 2U) == 0) break;
    local_24 = (float)((int)local_24 + 1);
  }
  if ((state->flags & 2) != 0) goto LAB_006053ad;
  iVar10 = state->field_width;
  state->field_width = iVar10 + -1;
  pcVar8 = &stack0xffffff80;
  if (iVar10 != 0) {
    if ((character == 0x2b) || (pcVar8 = &stack0xffffff80, character == 0x2d)) {
      in_stack_ffffff80 = (char *)CONCAT31((int3)((uint)in_stack_ffffff80 >> 8),(char)character);
      local_24 = (float)((int)local_24 + 1);
      pcVar8 = &stack0xffffff81;
      character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
      if (character == -1) goto LAB_006053ad;
    }
    if (((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) != 0) ||
       (character == 0x2e)) {
      local_1c._0_2_ = 0;
      local_1c._2_2_ = 0;
      local_28 = 0;
      if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) != 0) {
        local_28 = 1;
        do {
          *pcVar8 = (char)character;
          pcVar8 = pcVar8 + 1;
          if ((state->flags & 0x10) != 0) {
            local_1c._2_2_ = (short)character + local_1c._2_2_ * 10 + -0x30;
          }
          iVar9 = iVar9 + 1;
          character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
          if (character == -1) goto LAB_006053ad;
        } while ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) != 0);
      }
      pcVar6 = pcVar8;
      iVar10 = iVar9;
      if (character == 0x2e) {
        *pcVar8 = '.';
        pcVar8 = pcVar8 + 1;
        character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
        if (character == -1) goto LAB_006053ad;
        if ((local_28 == 0) &&
           ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) == 0))
        goto LAB_006053a3;
        iVar9 = iVar9 + 1;
        do {
          if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) == 0) break;
          iVar9 = iVar9 + 1;
          *pcVar8 = (char)character;
          pcVar8 = pcVar8 + 1;
          character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
        } while (character != -1);
        if ((state->flags & 0x10) != 0) {
          local_18 = 0;
          uStack_16 = 0;
          pcVar6 = pcVar8;
          while( true ) {
            uStack_15 = 0;
            pcVar1 = pcVar6 + -1;
            pcVar6 = pcVar6 + -1;
            if (*pcVar1 == '.') break;
            local_20 = 1.4013e-44;
            uVar5 = CONCAT12(*pcVar1 + -0x30,local_18) / 10;
            local_18 = (ushort)uVar5;
            uStack_16 = (byte)(uVar5 >> 0x10);
          }
          local_1c._0_2_ = local_18;
        }
        pcVar6 = pcVar8;
        iVar10 = iVar9;
        if (character == -1) goto LAB_006053ad;
      }
      pcVar8 = pcVar6;
      iVar9 = iVar10;
      if (((state->flags & 0x10) == 0) && ((character == 0x65 || (character == 0x45)))) {
        iVar9 = iVar10 + 1;
        *pcVar6 = (char)character;
        pcVar8 = pcVar6 + 1;
        character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
        if (character == -1) goto LAB_006053ad;
        if ((character == 0x2b) || (character == 0x2d)) {
          iVar9 = iVar10 + 2;
          *pcVar8 = (char)character;
          pcVar8 = pcVar6 + 2;
          character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
          if (character == -1) goto LAB_006053ad;
        }
        if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) == 0) {
          iVar9 = 0;
        }
        else {
          do {
            iVar9 = iVar9 + 1;
            *pcVar8 = (char)character;
            pcVar8 = pcVar8 + 1;
            character = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
            if (character == -1) goto LAB_006053ad;
          } while ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20U) != 0);
        }
      }
    }
  }
LAB_006053a3:
  crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(character,state);
LAB_006053ad:
  if ((0 < iVar9) && (iVar9 = iVar9 + (int)local_24, (state->flags & 1) != 0)) {
    *pcVar8 = '\0';
    if ((state->flags & 0x10) == 0) {
      (*PTR_crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410)
                ((double *)&stack0xffffff80,&local_30,in_stack_ffffff80);
    }
    else if ((char)in_stack_ffffff80 == '-') {
      local_1c = -CONCAT22(local_1c._2_2_,(ushort)local_1c);
    }
    if ((state->flags & 4) == 0) {
      if ((state->flags & 8) == 0) {
        puVar4 = (uint *)*in_stack_00000014;
        *in_stack_00000014 = (int)(puVar4 + 1);
        pfVar7 = (float *)*puVar4;
      }
      else {
        puVar4 = (uint *)*in_stack_00000014;
        *in_stack_00000014 = (int)(puVar4 + 1);
        pfVar7 = (float *)*puVar4;
      }
    }
    else {
      puVar3 = (undefined6 *)*in_stack_00000014;
      *in_stack_00000014 = (int)(puVar3 + 1);
      pfVar7 = (float *)*puVar3;
    }
    bVar2 = state->flags;
    if ((bVar2 & 0x10) == 0) {
      if (((bVar2 & 0x20) != 0) || ((bVar2 & 0x40) != 0)) {
        *pfVar7 = local_24;
        pfVar7[1] = local_20;
        return iVar9;
      }
      fStack_10 = crt_math_c_doubleToFloat_FUN_0060b26c((double)CONCAT44(local_20,local_24));
    }
    *pfVar7 = fStack_10;
  }
  return iVar9;
}
