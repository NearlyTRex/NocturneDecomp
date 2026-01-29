// Name: crt_stdio.c_ConvertFormatSpec_FUN_00603238
// Address: 00603238
// Address Range: [[00603238, 0060389b]]
// Convention: __cdecl
// Signature: char * __cdecl crt_stdio_c_ConvertFormatSpec_FUN_00603238 (char *output_buffer,va_list_t *args,FormatSpec *spec_info)

#include "nocturne.h"

/* NOTE: Ghidra decompilation artifacts in this function:
   
   FLAG LOGIC INVERSION: Ghidra shows complex inverted flag tests like:
   if ((spec_info->flags & LONG_MODIFIER) == ~(FAR_PTR|NEAR_PTR|...))
   These should be read as simple negated tests:
   if (!(spec_info->flags & LONG_MODIFIER))
   ESP REGISTER CONFUSION: Ghidra incorrectly treats ESP as a user variable
   (in_ESP, BADSPACEBASE) causing decompiler uncertainty.
   VARIABLE MAPPING WARNINGS: "Variable defined which should be unmapped"
   warnings for value_64bit and mb_char_buffer - these can be ignored.
   
   The actual function signatures, variable types, and structure layout are
   correct. This is a printf format specifier conversion function that handles
   integers, strings, characters, and pointers with proper 64-bit support.
   Assembly analysis confirms the logic is straightforward despite the
   decompiler display issues. */

char * __cdecl
ConvertFormatSpec
          (char *output_buffer,va_list_t *args,FormatSpec *spec_info)

{
  byte bVar1;
  uint *puVar2;
  int *piVar3;
  wchar_t *pwVar4;
  ushort *puVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  int integer_value;
  int iVar9;
  ushort segment_es;
  ushort segment_ds;
  longlong value_64bit;
  char mb_char_buffer [2];
  ushort segment_storage;
  
  spec_info->output_length = 0;
  spec_info->padding_needed = 0;
  spec_info->content_length = 0;
  spec_info->prefix_length = 0;
  spec_info->suffix_length = 0;
  bVar1 = spec_info->conversion_char;
  spec_info->alternate_form_length = 0;
  if (bVar1 < 0x69) {
    if (0x57 < bVar1) {
      if (bVar1 < 0x59) goto LAB_006032b4;
      if (bVar1 == 100) goto LAB_0060330e;
    }
    goto LAB_006033d5;
  }
  if (bVar1 < 0x6a) {
LAB_0060330e:
    if ((spec_info->length_flags & BASIC_I64_FLAG) ==
        ~(BASIC_RESERVED|BASIC_NEAR_PTR_FLAG|BASIC_FAR_PTR_FLAG|BASIC_WIDE_FLAG|BASIC_CHAR_FLAG|
          BASIC_SHORT_FLAG|BASIC_LONG_FLAG|BASIC_I64_FLAG)) {
      if ((spec_info->flags & LONG_MODIFIER) ==
          ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
           ALTERNATE_FORM)) {
        puVar2 = (uint *)*args;
        *args = (va_list_t)(puVar2 + 1);
        integer_value = *puVar2;
        if ((spec_info->flags & SHORT_MODIFIER) !=
            ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
             ALTERNATE_FORM)) {
          integer_value = (int)(short)integer_value;
        }
      }
      else {
        puVar2 = (uint *)*args;
        *args = (va_list_t)(puVar2 + 1);
        integer_value = *puVar2;
      }
    }
    else {
      puVar2 = (uint *)*args;
      *args = (va_list_t)(puVar2 + 1);
      value_64bit._0_4_ = *puVar2;
      puVar2 = (uint *)*args;
      *args = (va_list_t)(puVar2 + 1);
      value_64bit._4_4_ = *puVar2;
    }
    if ((spec_info->length_flags & BASIC_I64_FLAG) ==
        ~(BASIC_RESERVED|BASIC_NEAR_PTR_FLAG|BASIC_FAR_PTR_FLAG|BASIC_WIDE_FLAG|BASIC_CHAR_FLAG|
          BASIC_SHORT_FLAG|BASIC_LONG_FLAG|BASIC_I64_FLAG)) {
      if (-1 < integer_value) goto LAB_006033ac;
    }
    else if ((value_64bit._4_4_ & 0x80000000) == 0) {
LAB_006033ac:
      if ((spec_info->flags & FORCE_SIGN) ==
          ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
           ALTERNATE_FORM)) {
        if ((spec_info->flags & SPACE_SIGN) !=
            ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
             ALTERNATE_FORM)) {
          iVar9 = spec_info->output_length;
          spec_info->output_length = iVar9 + 1;
          output_buffer[iVar9] = ' ';
        }
      }
      else {
        iVar9 = spec_info->output_length;
        spec_info->output_length = iVar9 + 1;
        output_buffer[iVar9] = '+';
      }
      goto LAB_006033d5;
    }
    iVar9 = spec_info->output_length;
    spec_info->output_length = iVar9 + 1;
    output_buffer[iVar9] = '-';
    if ((spec_info->length_flags & BASIC_I64_FLAG) ==
        ~(BASIC_RESERVED|BASIC_NEAR_PTR_FLAG|BASIC_FAR_PTR_FLAG|BASIC_WIDE_FLAG|BASIC_CHAR_FLAG|
          BASIC_SHORT_FLAG|BASIC_LONG_FLAG|BASIC_I64_FLAG)) {
      integer_value = -integer_value;
    }
    else {
      value_64bit._4_4_ = ~value_64bit._4_4_;
      value_64bit._0_4_ = ~(uint)value_64bit + 1;
      if ((uint)value_64bit == 0) {
        value_64bit._4_4_ = value_64bit._4_4_ + 1;
      }
    }
  }
  else if (bVar1 < 0x75) {
    if (bVar1 == 0x6f) goto LAB_006032b4;
  }
  else if ((bVar1 < 0x76) || (bVar1 == 0x78)) {
LAB_006032b4:
    if ((spec_info->length_flags & BASIC_I64_FLAG) ==
        ~(BASIC_RESERVED|BASIC_NEAR_PTR_FLAG|BASIC_FAR_PTR_FLAG|BASIC_WIDE_FLAG|BASIC_CHAR_FLAG|
          BASIC_SHORT_FLAG|BASIC_LONG_FLAG|BASIC_I64_FLAG)) {
      if ((spec_info->flags & LONG_MODIFIER) ==
          ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
           ALTERNATE_FORM)) {
        puVar2 = (uint *)*args;
        *args = (va_list_t)(puVar2 + 1);
        integer_value = *puVar2;
        if ((spec_info->flags & SHORT_MODIFIER) !=
            ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
             ALTERNATE_FORM)) {
          integer_value = integer_value & 0xffff;
        }
      }
      else {
        puVar2 = (uint *)*args;
        *args = (va_list_t)(puVar2 + 1);
        integer_value = *puVar2;
      }
    }
    else {
      puVar2 = (uint *)*args;
      *args = (va_list_t)(puVar2 + 1);
      value_64bit._0_4_ = *puVar2;
      puVar2 = (uint *)*args;
      *args = (va_list_t)(puVar2 + 1);
      value_64bit._4_4_ = *puVar2;
    }
  }
LAB_006033d5:
  bVar1 = spec_info->conversion_char;
  iVar9 = 10;
  if (bVar1 < 100) {
    if (bVar1 < 0x47) {
      if (bVar1 < 0x45) {
        if (bVar1 == 0x43) {
          puVar5 = (ushort *)*args;
          *args = (va_list_t)(puVar5 + 2);
          iVar9 = WideCharToSingleByte
                            ((wchar_t)output_buffer,(char *)(uint)*puVar5);
          if (iVar9 != -1) {
            spec_info->output_length = iVar9;
            return output_buffer;
          }
          spec_info->output_length = 0;
          return output_buffer;
        }
        goto LAB_0060387a;
      }
      if (bVar1 < 0x46) goto LAB_006034c9;
LAB_00603493:
      if ((spec_info->flags & SHORT_MODIFIER) !=
          ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
           ALTERNATE_FORM)) {
        piVar3 = (int *)*args;
        *args = (va_list_t)(piVar3 + 1);
        FormatFixedPoint(output_buffer,*piVar3,spec_info);
        iVar9 = strlen_far(output_buffer,segment_ds,-1);
        spec_info->content_length = iVar9;
        return output_buffer;
      }
LAB_006034c9:
      FloatingPointStub(output_buffer,args,spec_info);
      CalculateZeroPadding(spec_info);
      return output_buffer + 1;
    }
    if (bVar1 < 0x48) goto LAB_006034c9;
    if (bVar1 < 0x53) {
      if (bVar1 == 0x50) {
LAB_00603702:
        if (spec_info->width == 0) {
          if ((spec_info->flags & FAR_PTR) ==
              ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
               ALTERNATE_FORM)) {
            spec_info->width = 8;
          }
          else {
            spec_info->width = 0xd;
          }
        }
        spec_info->flags =
             spec_info->flags &
             (FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|ALTERNATE_FORM);
        piVar3 = (int *)*args;
        *args = (va_list_t)(piVar3 + 1);
        iVar9 = *piVar3;
        pcVar7 = output_buffer;
        if ((spec_info->flags & FAR_PTR) !=
            ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
             ALTERNATE_FORM)) {
          *args = (va_list_t)(piVar3 + 2);
          FormatHexWithPadding(piVar3[1] & 0xffff,output_buffer,4);
          output_buffer[4] = ':';
          pcVar7 = output_buffer + 5;
        }
        FormatHexWithPadding(iVar9,pcVar7,8);
        if (spec_info->conversion_char == 'P') {
          strupr(output_buffer);
        }
        iVar9 = strlen_far(output_buffer,segment_ds,-1);
        spec_info->output_length = iVar9;
        return output_buffer;
      }
      goto LAB_0060387a;
    }
    if (bVar1 < 0x54) {
LAB_006034f3:
      *output_buffer = '\0';
      if ((spec_info->flags & FAR_PTR) ==
          ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
           ALTERNATE_FORM)) {
        if ((spec_info->flags & NEAR_PTR) ==
            ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
             ALTERNATE_FORM)) {
          piVar3 = (int *)*args;
          *args = (va_list_t)(piVar3 + 1);
          pwVar4 = (wchar_t *)*piVar3;
        }
        else {
          piVar3 = (int *)*args;
          *args = (va_list_t)(piVar3 + 1);
          pwVar4 = (wchar_t *)*piVar3;
        }
        segment_storage = segment_ds;
        if (pwVar4 != (wchar_t *)0x0) {
          output_buffer = (char *)pwVar4;
        }
      }
      else {
        piVar3 = (int *)*args;
        *args = (va_list_t)(piVar3 + 2);
        if (((wchar_t *)*piVar3 != (wchar_t *)0x0) ||
           (segment_storage = segment_ds, *(ushort *)(piVar3 + 1) != 0)) {
          output_buffer = (char *)*piVar3;
          segment_storage = *(ushort *)(piVar3 + 1);
        }
      }
      if (spec_info->conversion_char == 'S') {
        if ((spec_info->flags & SHORT_MODIFIER) ==
            ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
             ALTERNATE_FORM)) {
          iVar9 = WideStringToMultiByteLen
                            ((wchar_t *)output_buffer,segment_storage,spec_info->precision);
          goto LAB_0060359a;
        }
        iVar9 = spec_info->precision;
      }
      else {
        if ((spec_info->flags & LONG_MODIFIER) !=
            ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
             ALTERNATE_FORM)) {
          iVar9 = WideStringToMultiByteLen
                            ((wchar_t *)output_buffer,segment_storage,spec_info->precision);
          goto LAB_0060359a;
        }
        iVar9 = spec_info->precision;
      }
      iVar9 = strlen_far(output_buffer,segment_storage,iVar9);
LAB_0060359a:
      iVar8 = spec_info->precision;
      spec_info->content_length = iVar9;
      if (iVar8 < 0) {
        return (char *)(wchar_t *)output_buffer;
      }
      if (iVar9 <= iVar8) {
        return (char *)(wchar_t *)output_buffer;
      }
      spec_info->content_length = iVar8;
      return (char *)(wchar_t *)output_buffer;
    }
    if (bVar1 < 0x58) {
LAB_0060387a:
      spec_info->width = 0;
      *output_buffer = spec_info->conversion_char;
      spec_info->output_length = 1;
      return output_buffer;
    }
    if (0x58 < bVar1) {
      if (bVar1 == 99) {
        spec_info->output_length = 1;
        if ((spec_info->flags & LONG_MODIFIER) ==
            ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
             ALTERNATE_FORM)) {
          pcVar7 = *args;
          *args = pcVar7 + 4;
          *output_buffer = *pcVar7;
          return output_buffer;
        }
        puVar5 = (ushort *)*args;
        *args = (va_list_t)(puVar5 + 2);
        iVar8 = WideCharToSingleByte
                          ((wchar_t)mb_char_buffer,(char *)(uint)*puVar5);
        iVar9 = g_MultibyteLocaleActive;
        if (iVar8 == -1) {
          return output_buffer;
        }
        *output_buffer = mb_char_buffer[0];
        if (iVar9 == 0) {
          return output_buffer;
        }
        if ((g_LeadByteTable[(byte)mb_char_buffer[0]] & 1U) == 0) {
          return output_buffer;
        }
        output_buffer[1] = mb_char_buffer[1];
        spec_info->output_length = spec_info->output_length + 1;
        return output_buffer;
      }
      goto LAB_0060387a;
    }
LAB_006035c5:
    if (((spec_info->flags & ALTERNATE_FORM) !=
         ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
          ALTERNATE_FORM)) &&
       (((uVar6 = integer_value,
         (spec_info->length_flags & BASIC_I64_FLAG) !=
         ~(BASIC_RESERVED|BASIC_NEAR_PTR_FLAG|BASIC_FAR_PTR_FLAG|BASIC_WIDE_FLAG|BASIC_CHAR_FLAG|
           BASIC_SHORT_FLAG|BASIC_LONG_FLAG|BASIC_I64_FLAG) &&
         (uVar6 = value_64bit._4_4_, (uint)value_64bit != 0)) || (uVar6 != 0)))) {
      iVar9 = spec_info->output_length;
      spec_info->output_length = iVar9 + 1;
      output_buffer[iVar9] = '0';
      iVar9 = spec_info->output_length;
      spec_info->output_length = iVar9 + 1;
      output_buffer[iVar9] = spec_info->conversion_char;
    }
    iVar9 = 0x10;
LAB_00603607:
    if ((spec_info->conversion_char == 'o') &&
       (iVar9 = 8,
       (spec_info->flags & ALTERNATE_FORM) !=
       ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
        ALTERNATE_FORM))) {
      iVar8 = spec_info->output_length;
      spec_info->output_length = iVar8 + 1;
      output_buffer[iVar8] = '0';
    }
  }
  else if (100 < bVar1) {
    if (bVar1 < 0x6f) {
      if (bVar1 < 0x66) goto LAB_006034c9;
      if (bVar1 < 0x67) goto LAB_00603493;
      if (bVar1 < 0x68) goto LAB_006034c9;
      if (bVar1 != 0x69) goto LAB_0060387a;
    }
    else {
      if (bVar1 < 0x70) goto LAB_00603607;
      if (bVar1 < 0x73) {
        if (bVar1 == 0x70) goto LAB_00603702;
        goto LAB_0060387a;
      }
      if (bVar1 < 0x74) goto LAB_006034f3;
      if (bVar1 < 0x75) goto LAB_0060387a;
      if (0x75 < bVar1) {
        if (bVar1 != 0x78) goto LAB_0060387a;
        goto LAB_006035c5;
      }
    }
  }
  pcVar7 = output_buffer + spec_info->output_length;
  if ((spec_info->length_flags & BASIC_I64_FLAG) ==
      ~(BASIC_RESERVED|BASIC_NEAR_PTR_FLAG|BASIC_FAR_PTR_FLAG|BASIC_WIDE_FLAG|BASIC_CHAR_FLAG|
        BASIC_SHORT_FLAG|BASIC_LONG_FLAG|BASIC_I64_FLAG)) {
    if ((spec_info->precision == 0) && (integer_value == 0)) {
      *pcVar7 = '\0';
      iVar9 = 0;
      goto LAB_006036cd;
    }
    utoa(integer_value,output_buffer + spec_info->output_length,iVar9);
    if (spec_info->conversion_char == 'X') {
      strupr(output_buffer);
    }
  }
  else {
    if (((spec_info->precision == 0) && ((uint)value_64bit == 0)) && (value_64bit._4_4_ == 0)) {
      *pcVar7 = '\0';
      iVar9 = 0;
      goto LAB_006036cd;
    }
    i64toa(&value_64bit,output_buffer + spec_info->output_length,iVar9);
    if (spec_info->conversion_char == 'X') {
      strupr(output_buffer);
    }
  }
  iVar9 = strlen_far(pcVar7,segment_ds,-1);
LAB_006036cd:
  spec_info->content_length = iVar9;
  if (iVar9 < spec_info->precision) {
    spec_info->padding_needed = spec_info->precision - iVar9;
  }
  if (spec_info->precision != -1) {
    return pcVar7;
  }
  CalculateZeroPadding(spec_info);
  return pcVar7;
}
