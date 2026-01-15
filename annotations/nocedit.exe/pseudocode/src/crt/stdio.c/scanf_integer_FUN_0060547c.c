// Name: crt_stdio.c_scanf_integer_FUN_0060547c
// Address: 0060547c
// Address Range: [[0060547c, 006058e4]]
// Convention: __cdecl
// Signature: int crt_stdio.c_scanf_integer_FUN_0060547c(scanf_state_t * state, va_list_t * args, int base, int is_signed)

#include "nocturne.h"

int __cdecl
crt_stdio_c_scanf_integer_FUN_0060547c(scanf_state_t *state,va_list_t *args,int base,int is_signed)

{
  byte bVar1;
  va_list_t pcVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint *puVar8;
  byte bVar9;
  ulonglong uVar10;
  ulonglong local_3c;
  uint local_34;
  int local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar9 = 0;
  iVar7 = 0;
  local_3c = 0;
  local_18 = 0;
  local_1c = 0;
  while( true ) {
    local_24 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    iVar5 = local_24;
    if ((g_CharacterClassificationTable[(byte)((char)local_24 + 1)] & 2U) == 0) break;
    local_1c = local_1c + 1;
    local_24 = iVar5;
  }
  if ((state->flags & 2) == 0) {
    iVar4 = state->field_width;
    state->field_width = iVar4 + -1;
    local_24 = iVar5;
    if (iVar4 == 0) {
LAB_00605786:
      crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(local_24,state);
    }
    else {
      local_20 = 0x2b;
      if ((is_signed != 0) && ((local_24 == 0x2b || (local_24 == 0x2d)))) {
        local_1c = local_1c + 1;
        local_20 = local_24;
        local_24 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
        if (local_24 == -1) goto LAB_00605798;
      }
      if (base == 0) {
        if (local_24 == 0x30) {
          local_24 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
          iVar7 = 1;
          if (local_24 == -1) goto LAB_00605798;
          if ((local_24 == 0x78) || (local_24 == 0x58)) {
            iVar7 = local_1c + 2;
            local_24 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
            local_1c = iVar7;
            iVar7 = 0;
            if (local_24 == -1) goto LAB_00605798;
            base = 0x10;
          }
          else {
            base = 8;
          }
        }
        else {
          base = 10;
        }
      }
      else if ((base == 0x10) && (local_24 == 0x30)) {
        local_24 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
        iVar7 = 1;
        if (local_24 == -1) goto LAB_00605798;
        if ((local_24 == 0x78) || (local_24 == 0x58)) {
          iVar7 = local_1c + 2;
          local_24 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
          local_1c = iVar7;
          iVar7 = 0;
          if (local_24 == -1) goto LAB_00605798;
        }
      }
      if ((state->flags & 0x40) == 0) {
        do {
          iVar5 = local_24;
          iVar4 = crt_stdio_c_char_to_digit_FUN_006058e8(local_24);
          if (base <= iVar4) {
            if ((iVar5 != 0x3a) || ((state->flags & 0x80) == 0)) goto LAB_00605786;
            goto LAB_00605753;
          }
          local_18 = local_18 * base + iVar4;
          local_24 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
          iVar7 = iVar7 + 1;
        } while (local_24 != -1);
      }
      else {
        local_28 = 0;
        local_2c = base;
        do {
          uVar3 = crt_stdio_c_char_to_digit_FUN_006058e8(local_24);
          if (base <= (int)uVar3) {
            if ((local_24 != 0x3a) || ((state->flags & 0x80) == 0)) goto LAB_00605786;
            goto LAB_0060569e;
          }
          local_30 = 0;
          local_34 = uVar3;
          uVar10 = crt_math_c_multiply64_FUN_0060b2b8(local_3c,CONCAT44 /* combine 2-byte values */(local_28,local_2c));
          local_3c._4_4_ = (int)(uVar10 >> 0x20);
          local_3c._0_4_ = (uint)uVar10;
          local_3c = CONCAT44 /* combine 2-byte values */(local_3c._4_4_ + local_30 + (uint)CARRY4((uint)local_3c,local_34),
                              (uint)local_3c + local_34);
          local_24 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
          iVar7 = iVar7 + 1;
        } while (local_24 != -1);
      }
    }
  }
LAB_00605798:
  if ((state->flags & 0x40) == 0) {
    if (local_20 == 0x2d) {
      local_18 = -local_18;
    }
    if (0 < iVar7) {
      bVar9 = state->flags;
      iVar7 = iVar7 + local_1c;
      if ((bVar9 & 1) != 0) {
        if ((bVar9 & 4) == 0) {
          if ((bVar9 & 8) == 0) {
            pcVar2 = *args;
            *args = pcVar2 + 4;
            piVar6 = *(int **)pcVar2;
          }
          else {
            pcVar2 = *args;
            *args = pcVar2 + 4;
            piVar6 = *(int **)pcVar2;
          }
        }
        else {
          pcVar2 = *args;
          *args = pcVar2 + 8;
          piVar6 = (int *)*(undefined6 *)pcVar2;
        }
        if ((state->flags & 0x10) != 0) {
          *(short *)piVar6 = (short)local_18;
          return iVar7;
        }
        *piVar6 = local_18;
      }
    }
  }
  else {
    if (local_20 == 0x2d) {
      local_3c._0_4_ = ~(uint)local_3c + 1;
    }
    if (0 < iVar7) {
      bVar1 = state->flags;
      iVar7 = iVar7 + local_1c;
      if ((bVar1 & 1) != 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) != 0) {
            pcVar2 = *args;
            *args = pcVar2 + 4;
            puVar8 = *(uint **)pcVar2;
            *puVar8 = (uint)local_3c;
            puVar8[(uint)bVar9 * -2 + 1] = *(uint *)((int)&local_3c + (uint)bVar9 * -8 + 4);
            return iVar7;
          }
          pcVar2 = *args;
          *args = pcVar2 + 4;
          puVar8 = *(uint **)pcVar2;
        }
        else {
          pcVar2 = *args;
          *args = pcVar2 + 8;
          puVar8 = *(uint **)pcVar2;
        }
        *puVar8 = (uint)local_3c;
        puVar8[(uint)bVar9 * -2 + 1] = *(uint *)((int)&local_3c + (uint)bVar9 * -8 + 4);
        return iVar7;
      }
    }
  }
  return iVar7;
LAB_00605753:
  local_24 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
  iVar7 = iVar7 + 1;
  if (local_24 == -1) goto LAB_00605798;
  iVar5 = crt_stdio_c_char_to_digit_FUN_006058e8(local_24);
  if (base <= iVar5) goto LAB_00605786;
  local_18 = local_18 * base + iVar5;
  goto LAB_00605753;
LAB_0060569e:
  local_24 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(state);
  iVar7 = iVar7 + 1;
  if (local_24 == -1) goto LAB_00605798;
  uVar3 = crt_stdio_c_char_to_digit_FUN_006058e8(local_24);
  if (base <= (int)uVar3) goto LAB_00605786;
  local_30 = 0;
  local_34 = uVar3;
  uVar10 = crt_math_c_multiply64_FUN_0060b2b8(local_3c,CONCAT44 /* combine 2-byte values */(local_28,local_2c));
  local_3c._4_4_ = (int)(uVar10 >> 0x20);
  local_3c._0_4_ = (uint)uVar10;
  local_3c = CONCAT44 /* combine 2-byte values */(local_3c._4_4_ + local_30 + (uint)CARRY4((uint)local_3c,local_34),
                      (uint)local_3c + local_34);
  goto LAB_0060569e;
}
