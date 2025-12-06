// Name: crt_stdio.c_FormatEngine_FUN_00602950
// Address: 00602950
// Address Range: [[00602950, 00602d76]]
// Convention: __cdecl
// Signature: int crt_stdio.c_FormatEngine_FUN_00602950(void * output_context, char * format, va_list_t args, OUTPUT_CALLBACK callback)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Struct "FormatSpec": ignoring multiple overlapping fields */

int __cdecl
crt_stdio_c_FormatEngine_FUN_00602950
          (void *output_context,char *format,va_list_t args,OUTPUT_CALLBACK callback)

{
  byte bVar1;
  char cVar2;
  undefined6 *puVar3;
  uint *puVar4;
  ushort uVar5;
  char *pcVar6;
  wchar_t *wide_string_offset;
  int iVar7;
  uint extraout_EDX;
  BADSPACEBASE *in_ESP;
  FormatSpec local_84;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  va_list_t local_28;
  va_list_t local_24;
  uint local_20;
  uint *local_1c;
  uint local_18;
  
  local_18 = local_18 & 0xffffff00;
  local_84.extended_length_flags = 100;
  local_84.total_output_count = 0;
  bVar1 = *format;
  do {
    if (bVar1 == 0) {
      return local_84.total_output_count;
    }
LAB_006029a0:
    while( true ) {
      bVar1 = *format;
      format = (char *)((byte *)format + 1);
      if (bVar1 == 0x25) break;
      (*callback)(&stack0xffffff78,(uint)bVar1);
LAB_00602d41:
      if (*format == 0) {
        iVar7._0_1_ = local_84.padding1;
        iVar7._1_1_ = local_84.format_char;
        iVar7._2_1_ = local_84.padding_char;
        iVar7._3_1_ = local_84.padding2[0];
        return iVar7;
      }
    }
    local_28 = *(va_list_t *)args;
    pcVar6 = crt_stdio_c_ScanFormatSpec_FUN_00602d78
                       (format,&local_28,(FormatSpec *)&stack0xffffff78);
    *(va_list_t *)args = local_28;
    cVar2 = *pcVar6;
    format = pcVar6 + 1;
    local_84.format_char = cVar2;
    if (cVar2 == '\0') {
      return local_84.total_output_count;
    }
    if (cVar2 != 'n') {
      local_24 = *(va_list_t *)args;
      wide_string_offset =
           (wchar_t *)
           crt_stdio_c_ConvertFormatSpec_FUN_00603238
                     ((char *)&local_84.alternate_form_length,&local_24,
                      (FormatSpec *)&stack0xffffff78);
      *(uint *)args = local_20;
      local_84.width =
           local_84.width -
           (local_84._32_4_ + local_84.padding_needed + local_84.content_length +
            local_84.prefix_length + local_84.suffix_length + local_84.alternate_form_length);
      local_18 = extraout_EDX;
      if ((((byte)local_84.flags & LEFT_ALIGN) == 0) &&
         (local_84.zerofill == EXT_I64_MODIFIER >> 0x10)) {
        while (0 < local_84.width) {
          (*callback)(&local_84,0x20);
          local_84.extended_length_flags = local_84.extended_length_flags - 1;
        }
      }
      local_1c = &local_84.length_modifier_flags;
      for (; 0 < (int)local_84._32_4_; local_84._32_4_ = local_84._32_4_ + -1) {
        (*callback)(&local_84,(uint)(byte)*local_1c);
        local_1c = (uint *)((int)local_1c + 1);
      }
      while( true ) {
        if (local_84.padding_needed < 1) break;
        (*callback)(&local_84,0x30);
        local_84.length_modifier_flags = local_84.length_modifier_flags - 1;
      }
      if (local_84.conversion_char == 0x73) {
        if (((byte)local_84.flags & LONG_MODIFIER) == 0) {
          while (0 < local_84.content_length) {
            (*callback)(&local_84,(uint)(byte)*wide_string_offset);
            iStack_48 = iStack_48 + -1;
            wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
          }
        }
        else {
          crt_stdio_c_FormatWideString_FUN_006031c0
                    (wide_string_offset,(ushort)local_18,&local_84,callback);
        }
      }
      else if (local_84.conversion_char == 0x53) {
        crt_stdio_c_FormatWideString_FUN_006031c0
                  (wide_string_offset,(ushort)local_18,&local_84,callback);
      }
      else {
        while (0 < local_84.content_length) {
          (*callback)(&local_84,(uint)(byte)*wide_string_offset);
          iStack_48 = iStack_48 + -1;
          wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
        }
      }
      while (0 < local_84.prefix_length) {
        (*callback)(&local_84,0x30);
        iStack_44 = iStack_44 + -1;
      }
      while (0 < local_84.suffix_length) {
        (*callback)(&local_84,(uint)(byte)*wide_string_offset);
        iStack_40 = iStack_40 + -1;
        wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
      }
      while (0 < local_84.alternate_form_length) {
        (*callback)(&local_84,0x30);
        iStack_3c = iStack_3c + -1;
      }
      if (((byte)local_84.flags & LEFT_ALIGN) != 0) {
        while (0 < local_84.width) {
          (*callback)(&local_84,0x20);
          local_84.extended_length_flags = local_84.extended_length_flags - 1;
        }
      }
      goto LAB_00602d41;
    }
    if ((local_84.extended_length_flags & EXT_I64_MODIFIER) == 0) {
      if ((local_84.extended_length_flags & EXT_SHORT_MODIFIER) == 0) {
        if ((local_84.extended_length_flags & EXT_FAR_PTR_MODIFIER) == 0) {
          if ((local_84.extended_length_flags & EXT_LONG_MODIFIER) == 0) {
            puVar4 = *(uint **)args;
            *(uint **)args = puVar4 + 1;
            *(int *)*puVar4 = local_84.total_output_count;
            if (*format == 0) {
              return local_84.total_output_count;
            }
          }
          else {
            puVar4 = *(uint **)args;
            *(uint **)args = puVar4 + 1;
            *(int *)*puVar4 = local_84.total_output_count;
            if (*format == 0) {
              return local_84.total_output_count;
            }
          }
        }
        else {
          puVar3 = *(undefined6 **)args;
          *(undefined6 **)args = puVar3 + 1;
          *(int *)*puVar3 = local_84.total_output_count;
          if (*format == 0) {
            return local_84.total_output_count;
          }
        }
      }
      else {
        uVar5 = (ushort)local_84.total_output_count;
        if ((local_84.extended_length_flags & EXT_FAR_PTR_MODIFIER) == 0) {
          if ((local_84.extended_length_flags & EXT_LONG_MODIFIER) == 0) {
            puVar4 = *(uint **)args;
            *(uint **)args = puVar4 + 1;
            *(ushort *)*puVar4 = uVar5;
            if (*format == 0) {
              return local_84.total_output_count;
            }
          }
          else {
            puVar4 = *(uint **)args;
            *(uint **)args = puVar4 + 1;
            *(ushort *)*puVar4 = uVar5;
            if (*format == 0) {
              return local_84.total_output_count;
            }
          }
        }
        else {
          puVar3 = *(undefined6 **)args;
          *(undefined6 **)args = puVar3 + 1;
          *(ushort *)*puVar3 = uVar5;
          if (*format == 0) {
            return local_84.total_output_count;
          }
        }
      }
      goto LAB_006029a0;
    }
    if ((local_84.extended_length_flags & EXT_FAR_PTR_MODIFIER) == 0) {
      if ((local_84.extended_length_flags & EXT_LONG_MODIFIER) == 0) {
        puVar4 = *(uint **)args;
        *(uint **)args = puVar4 + 1;
        *(int *)*puVar4 = local_84.total_output_count;
        bVar1 = *format;
      }
      else {
        puVar4 = *(uint **)args;
        *(uint **)args = puVar4 + 1;
        *(int *)*puVar4 = local_84.total_output_count;
        bVar1 = *format;
      }
    }
    else {
      puVar3 = *(undefined6 **)args;
      *(undefined6 **)args = puVar3 + 1;
      *(int *)*puVar3 = local_84.total_output_count;
      bVar1 = *format;
    }
  } while( true );
}
