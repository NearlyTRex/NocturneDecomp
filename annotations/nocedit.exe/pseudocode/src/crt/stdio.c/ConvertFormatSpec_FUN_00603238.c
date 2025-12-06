// Name: crt_stdio.c_ConvertFormatSpec_FUN_00603238
// Address: 00603238
// Address Range: [[00603238, 0060389b]]
// Convention: __cdecl
// Signature: char * crt_stdio.c_ConvertFormatSpec_FUN_00603238(char * output_buffer, va_list_t * args, FormatSpec * spec_info)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: value_64bit */
/* WARNING: Variable defined which should be unmapped: mb_char_buffer */
/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */
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
crt_stdio_c_ConvertFormatSpec_FUN_00603238
          (char *output_buffer,va_list_t *args,FormatSpec *spec_info)

{
  byte *pbVar1;
  byte bVar2;
  uint *puVar3;
  int *piVar4;
  wchar_t *pwVar5;
  ushort *puVar6;
  uint uVar7;
  FormatFlags FVar8;
  char *pcVar9;
  int iVar10;
  int integer_value;
  BADSPACEBASE *in_ESP;
  int iVar11;
  ushort segment_es;
  ushort segment_ds;
  longlong value_64bit;
  char mb_char_buffer [2];
  ushort segment_storage;
  
  *(uint *)((int)&spec_info->flags + 2) = 0;
  spec_info->padding_needed = 0;
  spec_info->content_length = 0;
  spec_info->prefix_length = 0;
  spec_info->suffix_length = 0;
  bVar2 = spec_info->conversion_char;
  spec_info->alternate_form_length = 0;
  if (bVar2 < 0x69) {
    if (0x57 < bVar2) {
      if (bVar2 < 0x59) goto LAB_006032b4;
      if (bVar2 == 100) goto LAB_0060330e;
    }
    goto LAB_006033d5;
  }
  if (bVar2 < 0x6a) {
LAB_0060330e:
    if ((spec_info->flags & 0x100) == 0) {
      if ((spec_info->flags & LONG_MODIFIER) == 0) {
        puVar3 = (uint *)*args;
        *args = (va_list_t)(puVar3 + 1);
        integer_value = *puVar3;
        if ((spec_info->flags & SHORT_MODIFIER) != 0) {
          integer_value = (int)(short)integer_value;
        }
      }
      else {
        puVar3 = (uint *)*args;
        *args = (va_list_t)(puVar3 + 1);
        integer_value = *puVar3;
      }
    }
    else {
      puVar3 = (uint *)*args;
      *args = (va_list_t)(puVar3 + 1);
      value_64bit._0_4_ = (FormatSpec *)*puVar3;
      puVar3 = (uint *)*args;
      *args = (va_list_t)(puVar3 + 1);
      value_64bit._4_4_ = *puVar3;
    }
    if ((spec_info->flags & 0x100) == 0) {
      if (-1 < integer_value) goto LAB_006033ac;
    }
    else if ((value_64bit._4_4_ & 0x80000000) == 0) {
LAB_006033ac:
      if ((spec_info->flags & FORCE_SIGN) == 0) {
        if ((spec_info->flags & SPACE_SIGN) != 0) {
          iVar11 = *(int *)((int)&spec_info->flags + 2);
          *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
          output_buffer[iVar11] = ' ';
        }
      }
      else {
        iVar11 = *(int *)((int)&spec_info->flags + 2);
        *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
        output_buffer[iVar11] = '+';
      }
      goto LAB_006033d5;
    }
    iVar11 = *(int *)((int)&spec_info->flags + 2);
    *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
    output_buffer[iVar11] = '-';
    if ((spec_info->flags & 0x100) == 0) {
      integer_value = -integer_value;
    }
    else {
      value_64bit._4_4_ = ~value_64bit._4_4_;
      value_64bit._0_4_ = (FormatSpec *)(~(uint)(FormatSpec *)value_64bit + 1);
      if ((FormatSpec *)value_64bit == (FormatSpec *)0x0) {
        value_64bit._4_4_ = value_64bit._4_4_ + 1;
      }
    }
  }
  else if (bVar2 < 0x75) {
    if (bVar2 == 0x6f) goto LAB_006032b4;
  }
  else if ((bVar2 < 0x76) || (bVar2 == 0x78)) {
LAB_006032b4:
    if ((spec_info->flags & 0x100) == 0) {
      if ((spec_info->flags & LONG_MODIFIER) == 0) {
        puVar3 = (uint *)*args;
        *args = (va_list_t)(puVar3 + 1);
        integer_value = *puVar3;
        if ((spec_info->flags & SHORT_MODIFIER) != 0) {
          integer_value = integer_value & 0xffff;
        }
      }
      else {
        puVar3 = (uint *)*args;
        *args = (va_list_t)(puVar3 + 1);
        integer_value = *puVar3;
      }
    }
    else {
      puVar3 = (uint *)*args;
      *args = (va_list_t)(puVar3 + 1);
      value_64bit._0_4_ = (FormatSpec *)*puVar3;
      puVar3 = (uint *)*args;
      *args = (va_list_t)(puVar3 + 1);
      value_64bit._4_4_ = *puVar3;
    }
  }
LAB_006033d5:
  bVar2 = spec_info->conversion_char;
  iVar11 = 10;
  if (bVar2 < 100) {
    if (bVar2 < 0x47) {
      if (bVar2 < 0x45) {
        if (bVar2 == 0x43) {
          puVar6 = (ushort *)*args;
          *args = (va_list_t)(puVar6 + 2);
          iVar11 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                             ((wchar_t)output_buffer,(char *)(uint)*puVar6);
          if (iVar11 != -1) {
            *(int *)((int)&spec_info->flags + 2) = iVar11;
            return output_buffer;
          }
          *(uint *)((int)&spec_info->flags + 2) = 0;
          return output_buffer;
        }
        goto LAB_0060387a;
      }
      if (bVar2 < 0x46) goto LAB_006034c9;
LAB_00603493:
      if ((spec_info->flags & SHORT_MODIFIER) != 0) {
        piVar4 = (int *)*args;
        *args = (va_list_t)(piVar4 + 1);
        crt_stdio_c_FormatFixedPoint_FUN_0060305c(output_buffer,*piVar4,spec_info);
        value_64bit._0_4_ = (FormatSpec *)0xffffffff;
        iVar11 = crt_string_c_strlen_far_FUN_00602f4c(output_buffer,segment_ds,-1);
        spec_info->content_length = iVar11;
        return output_buffer;
      }
LAB_006034c9:
      crt_stdio_c_FloatingPointStub_FUN_00603160(output_buffer,args,spec_info);
      value_64bit._0_4_ = spec_info;
      crt_stdio_c_CalculateZeroPadding_FUN_0060317c(spec_info);
      return output_buffer + 1;
    }
    if (bVar2 < 0x48) goto LAB_006034c9;
    if (bVar2 < 0x53) {
      if (bVar2 == 0x50) {
LAB_00603702:
        if (spec_info->width == 0) {
          if ((spec_info->flags & FAR_PTR) == 0) {
            spec_info->width = 8;
          }
          else {
            spec_info->width = 0xd;
          }
        }
        *(byte *)&spec_info->flags =
             (char)spec_info->flags &
             (FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|ALTERNATE_FORM);
        piVar4 = (int *)*args;
        *args = (va_list_t)(piVar4 + 1);
        iVar11 = *piVar4;
        pcVar9 = output_buffer;
        if ((spec_info->flags & FAR_PTR) != 0) {
          *args = (va_list_t)(piVar4 + 2);
          crt_stdio_c_FormatHexWithPadding_FUN_00602ff8(piVar4[1] & 0xffff,output_buffer,4);
          output_buffer[4] = ':';
          pcVar9 = output_buffer + 5;
        }
        crt_stdio_c_FormatHexWithPadding_FUN_00602ff8(iVar11,pcVar9,8);
        if (spec_info->conversion_char == 'P') {
          value_64bit._0_4_ = (FormatSpec *)output_buffer;
          crt_string_c_strupr_FUN_0060389c(output_buffer);
        }
        value_64bit._4_4_ = 0xffffffff;
        value_64bit._0_4_ = (FormatSpec *)(uint)segment_es;
        iVar11 = crt_string_c_strlen_far_FUN_00602f4c(output_buffer,segment_es,-1);
        *(int *)((int)&spec_info->flags + 2) = iVar11;
        return output_buffer;
      }
      goto LAB_0060387a;
    }
    if (bVar2 < 0x54) {
LAB_006034f3:
      *output_buffer = '\0';
      if ((spec_info->flags & FAR_PTR) == 0) {
        if ((spec_info->flags & NEAR_PTR) == 0) {
          piVar4 = (int *)*args;
          *args = (va_list_t)(piVar4 + 1);
          pwVar5 = (wchar_t *)*piVar4;
        }
        else {
          piVar4 = (int *)*args;
          *args = (va_list_t)(piVar4 + 1);
          pwVar5 = (wchar_t *)*piVar4;
        }
        if (pwVar5 != (wchar_t *)0x0) {
          output_buffer = (char *)pwVar5;
        }
      }
      else {
        piVar4 = (int *)*args;
        *args = (va_list_t)(piVar4 + 2);
        if (((wchar_t *)*piVar4 != (wchar_t *)0x0) || (*(ushort *)(piVar4 + 1) != 0)) {
          output_buffer = (char *)*piVar4;
          segment_ds = *(ushort *)(piVar4 + 1);
        }
      }
      if (spec_info->conversion_char == 'S') {
        if ((spec_info->flags & SHORT_MODIFIER) == 0) {
          iVar11 = crt_stdio_c_WideStringToMultiByteLen_FUN_00602f7c
                             ((wchar_t *)output_buffer,segment_ds,spec_info->precision);
          goto LAB_0060359a;
        }
        iVar11 = spec_info->precision;
      }
      else {
        if ((spec_info->flags & LONG_MODIFIER) != 0) {
          iVar11 = crt_stdio_c_WideStringToMultiByteLen_FUN_00602f7c
                             ((wchar_t *)output_buffer,segment_ds,spec_info->precision);
          goto LAB_0060359a;
        }
        iVar11 = spec_info->precision;
      }
      iVar11 = crt_string_c_strlen_far_FUN_00602f4c(output_buffer,segment_ds,iVar11);
LAB_0060359a:
      iVar10 = spec_info->precision;
      spec_info->content_length = iVar11;
      if (iVar10 < 0) {
        return (char *)(wchar_t *)output_buffer;
      }
      if (iVar11 <= iVar10) {
        return (char *)(wchar_t *)output_buffer;
      }
      spec_info->content_length = iVar10;
      return (char *)(wchar_t *)output_buffer;
    }
    if (bVar2 < 0x58) {
LAB_0060387a:
      spec_info->width = 0;
      *output_buffer = spec_info->conversion_char;
      *(uint *)((int)&spec_info->flags + 2) = 1;
      return output_buffer;
    }
    if (0x58 < bVar2) {
      if (bVar2 == 99) {
        FVar8 = spec_info->flags;
        *(uint *)((int)&spec_info->flags + 2) = 1;
        if ((FVar8 & LONG_MODIFIER) == 0) {
          pcVar9 = *args;
          *args = pcVar9 + 4;
          *output_buffer = *pcVar9;
          return output_buffer;
        }
        puVar6 = (ushort *)*args;
        *args = (va_list_t)(puVar6 + 2);
        iVar10 = crt_stdio_c_WideCharToSingleByte_FUN_0060acf0
                           ((wchar_t)mb_char_buffer,(char *)(uint)*puVar6);
        iVar11 = g_MultibyteLocaleActive;
        if (iVar10 == -1) {
          return output_buffer;
        }
        segment_storage._0_1_ = (byte)segment_ds;
        *output_buffer = (byte)segment_storage;
        if (iVar11 == 0) {
          return output_buffer;
        }
        if ((g_LeadByteTable[(byte)segment_storage] & 1U) == 0) {
          return output_buffer;
        }
        segment_storage._1_1_ = (char)(segment_ds >> 8);
        output_buffer[1] = segment_storage._1_1_;
        pbVar1 = (byte *)((int)&spec_info->flags + 2);
        *(int *)pbVar1 = *(int *)pbVar1 + 1;
        return output_buffer;
      }
      goto LAB_0060387a;
    }
LAB_006035c5:
    if (((spec_info->flags & ALTERNATE_FORM) != 0) &&
       (((uVar7 = integer_value, (spec_info->flags & 0x100) != 0 &&
         (uVar7 = value_64bit._4_4_, (FormatSpec *)value_64bit != (FormatSpec *)0x0)) ||
        (uVar7 != 0)))) {
      iVar11 = *(int *)((int)&spec_info->flags + 2);
      *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
      output_buffer[iVar11] = '0';
      iVar11 = *(int *)((int)&spec_info->flags + 2);
      *(int *)((int)&spec_info->flags + 2) = iVar11 + 1;
      output_buffer[iVar11] = spec_info->conversion_char;
    }
    iVar11 = 0x10;
LAB_00603607:
    if ((spec_info->conversion_char == 'o') &&
       (iVar11 = 8, (spec_info->flags & ALTERNATE_FORM) != 0)) {
      iVar10 = *(int *)((int)&spec_info->flags + 2);
      *(int *)((int)&spec_info->flags + 2) = iVar10 + 1;
      output_buffer[iVar10] = '0';
    }
  }
  else if (100 < bVar2) {
    if (bVar2 < 0x6f) {
      if (bVar2 < 0x66) goto LAB_006034c9;
      if (bVar2 < 0x67) goto LAB_00603493;
      if (bVar2 < 0x68) goto LAB_006034c9;
      if (bVar2 != 0x69) goto LAB_0060387a;
    }
    else {
      if (bVar2 < 0x70) goto LAB_00603607;
      if (bVar2 < 0x73) {
        if (bVar2 == 0x70) goto LAB_00603702;
        goto LAB_0060387a;
      }
      if (bVar2 < 0x74) goto LAB_006034f3;
      if (bVar2 < 0x75) goto LAB_0060387a;
      if (0x75 < bVar2) {
        if (bVar2 != 0x78) goto LAB_0060387a;
        goto LAB_006035c5;
      }
    }
  }
  pcVar9 = output_buffer + *(int *)((int)&spec_info->flags + 2);
  if ((spec_info->flags & 0x100) == 0) {
    if ((spec_info->precision == 0) && (integer_value == 0)) {
      *pcVar9 = '\0';
      iVar11 = 0;
      goto LAB_006036cd;
    }
    crt_stdlib_c_utoa_FUN_0060ae50
              (integer_value,output_buffer + *(int *)((int)&spec_info->flags + 2),iVar11);
    if (spec_info->conversion_char == 'X') {
      value_64bit._0_4_ = (FormatSpec *)output_buffer;
      crt_string_c_strupr_FUN_0060389c(output_buffer);
    }
  }
  else {
    if (((spec_info->precision == 0) && ((FormatSpec *)value_64bit == (FormatSpec *)0x0)) &&
       (value_64bit._4_4_ == 0)) {
      *pcVar9 = '\0';
      iVar11 = 0;
      goto LAB_006036cd;
    }
    crt_stdlib_c_i64toa_FUN_0060ad40
              (&value_64bit,output_buffer + *(int *)((int)&spec_info->flags + 2),iVar11);
    if (spec_info->conversion_char == 'X') {
      value_64bit._0_4_ = (FormatSpec *)output_buffer;
      crt_string_c_strupr_FUN_0060389c(output_buffer);
    }
  }
  value_64bit._4_4_ = 0xffffffff;
  value_64bit._0_4_ = (FormatSpec *)(uint)segment_es;
  iVar11 = crt_string_c_strlen_far_FUN_00602f4c(pcVar9,segment_es,-1);
LAB_006036cd:
  spec_info->content_length = iVar11;
  if (iVar11 < spec_info->precision) {
    spec_info->padding_needed = spec_info->precision - iVar11;
  }
  if (spec_info->precision != -1) {
    return pcVar9;
  }
  _mb_char_buffer = spec_info;
  value_64bit._4_4_ = 0x6036f0;
  crt_stdio_c_CalculateZeroPadding_FUN_0060317c(spec_info);
  return pcVar9;
}
