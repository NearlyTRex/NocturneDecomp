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
  uint *puVar3;
  undefined6 *puVar4;
  int iVar5;
  int iVar6;
  uint high2;
  int *piVar7;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int iVar8;
  uint *puVar9;
  ushort in_ES;
  byte bVar10;
  ulonglong uVar11;
  scanf_state_t *in_stack_00000014;
  uint in_stack_ffffffcc;
  ulonglong local_30;
  uint uStack_2c;
  char local_20;
  uint local_1c;
  int local_18;
  int iStack_10;
  
  bVar10 = 0;
  iStack_10 = CONCAT22 /* combine 2-byte values */(iStack_10._2_2_,in_ES);
  iVar8 = 0;
  local_18 = 0;
  while( true ) {
    iVar5 = crt_stdio_c_scanf_getc_wrapper_FUN_00604930(state);
    local_20 = (char)iVar5;
    if ((g_CharacterClassificationTable[(byte)(local_20 + 1)] & 2U) == 0) break;
    local_18 = local_18 + 1;
  }
  if (((uint)args[4] & 2) != 0) goto LAB_00605798;
  pcVar2 = args[3];
  args[3] = pcVar2 + -1;
  if (pcVar2 != (va_list_t)0x0) {
    local_1c = 0x2b;
    if ((in_stack_00000014 != (scanf_state_t *)0x0) && ((iVar5 == 0x2b || (iVar5 == 0x2d)))) {
      local_18 = local_18 + 1;
      local_1c = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)args);
      if (local_1c == 0xffffffff) goto LAB_00605798;
    }
    if (base == 0) {
      if (local_1c == 0x30) {
        iVar5 = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)0x0);
        iVar8 = 1;
        if (iVar5 == -1) goto LAB_00605798;
        if ((iVar5 == 0x78) || (iVar5 == 0x58)) {
          unaff_EBP = local_18 + 2;
          local_1c = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)args);
          iVar8 = 0;
          if (local_1c == 0xffffffff) goto LAB_00605798;
          iVar5 = 0x10;
        }
        else {
          iVar5 = 8;
        }
      }
      else {
        iVar5 = 10;
      }
    }
    else {
      iVar5 = base;
      if ((base == 0x10) && (local_1c == 0x30)) {
        iVar6 = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)&DAT_00000010);
        iVar8 = 1;
        if (iVar6 == -1) goto LAB_00605798;
        if ((iVar6 == 0x78) || (iVar6 == 0x58)) {
          unaff_EBP = local_18 + 2;
          local_1c = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)args);
          iVar8 = 0;
          if (local_1c == 0xffffffff) goto LAB_00605798;
        }
      }
    }
    if ((*(byte *)(base + 0x10) & 0x40) == 0) {
      do {
        iVar6 = crt_stdio_c_char_to_digit_FUN_006058e8(local_1c);
        if (iVar5 <= iVar6) {
          if ((local_1c != 0x3a) || ((*(byte *)(is_signed + 0x10) & 0x80) == 0)) goto LAB_00605786;
          goto LAB_00605753;
        }
        in_stack_ffffffcc = is_signed;
        unaff_EBP = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)is_signed);
        iVar8 = iVar8 + 1;
      } while (unaff_EBP != -1);
    }
    else {
      do {
        iVar6 = crt_stdio_c_char_to_digit_FUN_006058e8(local_1c);
        if (iVar5 <= iVar6) {
          if ((local_18 != 0x3a) || ((*(byte *)(is_signed + 0x10) & 0x80) == 0)) goto LAB_00605786;
          goto LAB_0060569e;
        }
        uVar11 = crt_math_c_mul64_FUN_0060b2b8((uint)local_30,uStack_2c,0,local_1c);
        uStack_2c = (uint)(uVar11 >> 0x20);
        local_30 = CONCAT44 /* combine 2-byte values */(uStack_2c,in_stack_00000014);
        in_stack_ffffffcc = 0x605672;
        iStack_10 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(in_stack_00000014);
        iVar8 = iVar8 + 1;
      } while (iStack_10 != -1);
    }
    goto LAB_00605798;
  }
  goto LAB_00605786;
LAB_0060569e:
  in_stack_ffffffcc = 0x6056a8;
  high2 = crt_stdio_c_scanf_getc_with_width_FUN_00605918(in_stack_00000014);
  iVar8 = iVar8 + 1;
  if (high2 == 0xffffffff) goto LAB_00605798;
  iVar6 = crt_stdio_c_char_to_digit_FUN_006058e8(high2);
  if (iVar5 <= iVar6) goto LAB_00605786;
  uVar11 = crt_math_c_mul64_FUN_0060b2b8((uint)in_stack_00000014,uStack_2c,0,high2);
  local_30 = uVar11 & 0xffffffff00000000;
  goto LAB_0060569e;
  while (iVar6 = crt_stdio_c_char_to_digit_FUN_006058e8(iVar6), iVar6 < iVar5) {
LAB_00605753:
    in_stack_ffffffcc = is_signed;
    iVar6 = crt_stdio_c_scanf_getc_with_width_FUN_00605918((scanf_state_t *)is_signed);
    iVar8 = iVar8 + 1;
    if (iVar6 == -1) goto LAB_00605798;
  }
LAB_00605786:
  in_stack_ffffffcc = is_signed;
  crt_stdio_c_scanf_ungetc_wrapper_FUN_0060493c(local_18,(scanf_state_t *)is_signed);
LAB_00605798:
  if ((*(byte *)(base + 0x10) & 0x40) == 0) {
    if (local_18 == 0x2d) {
      iStack_10 = -iStack_10;
    }
    if (0 < iVar8) {
      bVar10 = *(byte *)(base + 0x10);
      iVar8 = iVar8 + unaff_EBP;
      if ((bVar10 & 1) != 0) {
        if ((bVar10 & 4) == 0) {
          if ((bVar10 & 8) == 0) {
            puVar3 = *(uint **)is_signed;
            *(uint **)is_signed = puVar3 + 1;
            piVar7 = (int *)*puVar3;
          }
          else {
            puVar3 = *(uint **)is_signed;
            *(uint **)is_signed = puVar3 + 1;
            piVar7 = (int *)*puVar3;
          }
        }
        else {
          puVar4 = *(undefined6 **)is_signed;
          *(undefined6 **)is_signed = puVar4 + 1;
          piVar7 = (int *)*puVar4;
        }
        if ((*(byte *)(base + 0x10) & 0x10) != 0) {
          *(short *)piVar7 = (short)iStack_10;
          return iVar8;
        }
        *piVar7 = iStack_10;
      }
    }
  }
  else {
    if (local_18 == 0x2d) {
      in_stack_ffffffcc = ~in_stack_ffffffcc + 1;
    }
    if (0 < iVar8) {
      bVar1 = *(byte *)(base + 0x10);
      iVar8 = iVar8 + unaff_EBP;
      if ((bVar1 & 1) != 0) {
        if ((bVar1 & 4) == 0) {
          if ((bVar1 & 8) != 0) {
            puVar3 = *(uint **)is_signed;
            *(uint **)is_signed = puVar3 + 1;
            puVar9 = (uint *)*puVar3;
            *puVar9 = in_stack_ffffffcc;
            puVar9[(uint)bVar10 * -2 + 1] = *(uint *)((int)&stack0xffffffd0 + (uint)bVar10 * -8);
            return iVar8;
          }
          puVar3 = *(uint **)is_signed;
          *(uint **)is_signed = puVar3 + 1;
          puVar9 = (uint *)*puVar3;
        }
        else {
          puVar3 = *(uint **)is_signed;
          *(uint **)is_signed = puVar3 + 2;
          puVar9 = (uint *)*puVar3;
        }
        *puVar9 = in_stack_ffffffcc;
        puVar9[(uint)bVar10 * -2 + 1] = *(uint *)((int)&stack0xffffffd0 + (uint)bVar10 * -8);
        return iVar8;
      }
    }
  }
  return iVar8;
}
