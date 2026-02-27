// Name: crt_stdio.c_scanf_float_FUN_00605178
// Address: 00605178
// Address Range: [[00605178, 0060547a]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_scanf_float_FUN_00605178(scanf_state_t *state,va_list_t *args)

#include "nocturne.h"

int __cdecl scanf_float(scanf_state_t *state,va_list_t *args)

{
  char *pcVar1;
  byte bVar2;
  int character;
  uint uVar3;
  float fVar4;
  char *pcVar5;
  float *pfVar6;
  char *pcVar7;
  int iVar8;
  int iVar9;
  ulonglong local_80;
  float local_30;
  float local_2c;
  int local_28;
  int local_24;
  uint local_20;
  uint local_1c;
  ushort local_18;
  byte uStack_16;
  byte uStack_15;
  
  pcVar7 = (char *)&local_80;
  iVar8 = 0;
  local_24 = 0;
  while( true ) {
    character = scanf_getc_wrapper(state);
    if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 2) == 0) break;
    local_24 = local_24 + 1;
  }
  if ((state->flags & 2) != 0) goto LAB_006053ad;
  iVar9 = state->field_width;
  state->field_width = iVar9 + -1;
  pcVar7 = (char *)&local_80;
  if (iVar9 != 0) {
    if ((character == 0x2b) || (pcVar7 = (char *)&local_80, character == 0x2d)) {
      local_24 = local_24 + 1;
      pcVar7 = (char *)((int)&local_80 + 1);
      local_80._0_1_ = (char)character;
      character = scanf_getc_with_width(state);
      if (character == -1) goto LAB_006053ad;
    }
    if (((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20) != 0) ||
       (character == 0x2e)) {
      local_1c._0_2_ = 0;
      local_1c._2_2_ = 0;
      local_28 = 0;
      if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20) != 0) {
        local_28 = 1;
        do {
          *pcVar7 = (char)character;
          pcVar7 = pcVar7 + 1;
          if ((state->flags & 0x10) != 0) {
            local_1c._2_2_ = (short)character + local_1c._2_2_ * 10 + -0x30;
          }
          iVar8 = iVar8 + 1;
          character = scanf_getc_with_width(state);
          if (character == -1) goto LAB_006053ad;
        } while ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20) != 0);
      }
      pcVar5 = pcVar7;
      iVar9 = iVar8;
      if (character == 0x2e) {
        *pcVar7 = '.';
        pcVar7 = pcVar7 + 1;
        character = scanf_getc_with_width(state);
        if (character == -1) goto LAB_006053ad;
        if ((local_28 == 0) &&
           ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20) == 0))
        goto LAB_006053a3;
        iVar8 = iVar8 + 1;
        do {
          if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20) == 0) break;
          iVar8 = iVar8 + 1;
          *pcVar7 = (char)character;
          pcVar7 = pcVar7 + 1;
          character = scanf_getc_with_width(state);
        } while (character != -1);
        if ((state->flags & 0x10) != 0) {
          local_18 = 0;
          uStack_16 = 0;
          pcVar5 = pcVar7;
          while( true ) {
            uStack_15 = 0;
            pcVar1 = pcVar5 + -1;
            pcVar5 = pcVar5 + -1;
            if (*pcVar1 == '.') break;
            local_20 = 10;
            uVar3 = CONCAT12(*pcVar1 + -0x30,local_18) / 10;
            local_18 = (ushort)uVar3;
            uStack_16 = (byte)(uVar3 >> 0x10);
          }
          local_1c._0_2_ = local_18;
        }
        pcVar5 = pcVar7;
        iVar9 = iVar8;
        if (character == -1) goto LAB_006053ad;
      }
      pcVar7 = pcVar5;
      iVar8 = iVar9;
      if (((state->flags & 0x10) == 0) && ((character == 0x65 || (character == 0x45)))) {
        iVar8 = iVar9 + 1;
        *pcVar5 = (char)character;
        pcVar7 = pcVar5 + 1;
        character = scanf_getc_with_width(state);
        if (character == -1) goto LAB_006053ad;
        if ((character == 0x2b) || (character == 0x2d)) {
          iVar8 = iVar9 + 2;
          *pcVar7 = (char)character;
          pcVar7 = pcVar5 + 2;
          character = scanf_getc_with_width(state);
          if (character == -1) goto LAB_006053ad;
        }
        if ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20) == 0) {
          iVar8 = 0;
        }
        else {
          do {
            iVar8 = iVar8 + 1;
            *pcVar7 = (char)character;
            pcVar7 = pcVar7 + 1;
            character = scanf_getc_with_width(state);
            if (character == -1) goto LAB_006053ad;
          } while ((g_CharacterClassificationTable[(byte)((char)character + 1)] & 0x20) != 0);
        }
      }
    }
  }
LAB_006053a3:
  scanf_ungetc_wrapper(character,state);
LAB_006053ad:
  if ((0 < iVar8) && (iVar8 = iVar8 + local_24, (state->flags & 1) != 0)) {
    *pcVar7 = '\0';
    fVar4 = (float)CONCAT22(local_1c._2_2_,(ushort)local_1c);
    if ((state->flags & 0x10) == 0) {
      (*PTR_crt_stdio_c_ReportFloatingPointNotLoaded_FUN_0060ad30_00685410)
                ((double *)&local_80,(char *)&local_30);
      fVar4 = (float)CONCAT22(local_1c._2_2_,(ushort)local_1c);
    }
    else if ((char)local_80 == '-') {
      fVar4 = (float)-CONCAT22(local_1c._2_2_,(ushort)local_1c);
    }
    if ((state->flags & 4) == 0) {
      if ((state->flags & 8) == 0) {
        pcVar7 = args->value[0];
        args->value[0] = pcVar7 + 4;
        pfVar6 = *(float **)pcVar7;
      }
      else {
        pcVar7 = args->value[0];
        args->value[0] = pcVar7 + 4;
        pfVar6 = *(float **)pcVar7;
      }
    }
    else {
      pcVar7 = args->value[0];
      args->value[0] = pcVar7 + 8;
      pfVar6 = (float *)*(undefined6 *)pcVar7;
    }
    bVar2 = state->flags;
    if ((bVar2 & 0x10) == 0) {
      if (((bVar2 & 0x20) != 0) || ((bVar2 & 0x40) != 0)) {
        *pfVar6 = local_30;
        pfVar6[1] = local_2c;
        return iVar8;
      }
      local_1c = fVar4;
      fVar4 = doubleToFloat((double)CONCAT44(local_2c,local_30));
    }
    *pfVar6 = fVar4;
  }
  return iVar8;
}
