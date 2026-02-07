// Name: crt_stdio.c_FormatEngine_FUN_00602950
// Address: 00602950
// Address Range: [[00602950, 00602d76]]
// Convention: __cdecl
// Signature: int __cdecl crt_stdio_c_FormatEngine_FUN_00602950 (void *output_context,char *format,va_list_t args,OUTPUT_CALLBACK callback)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

int __cdecl
FormatEngine
          (void *output_context,char *format,va_list_t args,OUTPUT_CALLBACK callback)

{
  byte bVar1;
  undefined6 *puVar2;
  uint *puVar3;
  ushort uVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  wchar_t *wide_string_offset;
  int iVar12;
  uint uVar13;
  uint extraout_EDX;
  FormatSpec local_88;
  int iStack_4c;
  va_list_t local_28;
  va_list_t local_24;
  uint *local_20;
  uint local_1c;
  uint local_18;
  
  local_18 = local_18 & 0xffffff00;
  local_88.flags =
       ~(FAR_PTR|NEAR_PTR|LONG_MODIFIER|SHORT_MODIFIER|LEFT_ALIGN|FORCE_SIGN|SPACE_SIGN|
        ALTERNATE_FORM);
  local_88.length_flags =
       ~(BASIC_RESERVED|BASIC_NEAR_PTR_FLAG|BASIC_FAR_PTR_FLAG|BASIC_WIDE_FLAG|BASIC_CHAR_FLAG|
         BASIC_SHORT_FLAG|BASIC_LONG_FLAG|BASIC_I64_FLAG);
  local_88.unknown_0x1C[0] = 'd';
  local_88.unknown_0x1C[1] = '\0';
  local_88.padding1 = '\0';
  local_88.format_char = '\0';
  local_88.padding_char = '\0';
  local_88.padding2[0] = '\0';
  bVar1 = *format;
  local_88.unknown_0x00 = (char  [4])output_context;
  do {
    if (bVar1 == 0) {
      return local_88._16_4_;
    }
LAB_006029a0:
    while( true ) {
      bVar1 = *format;
      format = (char *)((byte *)format + 1);
      if (bVar1 == 0x25) break;
      (*callback)(&local_88,(uint)bVar1);
LAB_00602d41:
      if (*format == 0) {
        iVar12._0_1_ = local_88.padding1;
        iVar12._1_1_ = local_88.format_char;
        iVar12._2_1_ = local_88.padding_char;
        iVar12._3_1_ = local_88.padding2[0];
        return iVar12;
      }
    }
    local_28.value[0] = *(char *(*) [1])args.value[0];
    pcVar5 = ScanFormatSpec(format,&local_28,&local_88);
    *(char *(*) [1])args.value[0] = local_28.value[0];
    local_88.conversion_char = *pcVar5;
    format = pcVar5 + 1;
    if (local_88.conversion_char == '\0') {
      uVar13._0_1_ = local_88.padding1;
      uVar13._1_1_ = local_88.format_char;
      uVar13._2_1_ = local_88.padding_char;
      uVar13._3_1_ = local_88.padding2[0];
      return uVar13;
    }
    if (local_88.conversion_char != 'n') {
      local_24.value[0] = *(char *(*) [1])args.value[0];
      wide_string_offset =
           (wchar_t *)
           ConvertFormatSpec
                     ((char *)&local_88.length_modifier_flags,&local_24,&local_88);
      *(char *(*) [1])args.value[0] = local_24.value[0];
      local_88.width =
           local_88.width -
           (local_88.output_length + local_88.padding_needed + local_88.content_length +
            local_88.prefix_length + local_88.suffix_length + local_88.alternate_form_length);
      local_1c = extraout_EDX;
      if (((local_88._30_2_ & 8) == 0) && (local_88.zerofill == ' ')) {
        while (0 < local_88.width) {
          (*callback)(&local_88,0x20);
          local_88.total_output_count = local_88.total_output_count + -1;
        }
      }
      local_20 = &local_88.length_modifier_flags;
      iVar11 = local_88.output_length;
      while (0 < iVar11) {
        (*callback)(&local_88,(uint)(byte)*local_20);
        local_18 = local_18 + 1;
        local_88.content_length = local_88.content_length + -1;
        iVar11 = local_88.content_length;
      }
      while( true ) {
        if (local_88.padding_needed < 1) break;
        (*callback)(&local_88,0x30);
        local_88.prefix_length = local_88.prefix_length + -1;
      }
      if (local_88.conversion_char == 's') {
        if ((local_88._30_2_ & 0x20) == 0) {
          while (0 < local_88.content_length) {
            (*callback)(&local_88,(uint)(byte)*wide_string_offset);
            local_88.suffix_length = local_88.suffix_length + -1;
            wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
          }
        }
        else {
          FormatWideString
                    (wide_string_offset,(ushort)local_1c,&local_88,callback);
        }
      }
      else if (local_88.conversion_char == 'S') {
        FormatWideString
                  (wide_string_offset,(ushort)local_1c,&local_88,callback);
      }
      else {
        while (0 < local_88.content_length) {
          (*callback)(&local_88,(uint)(byte)*wide_string_offset);
          local_88.suffix_length = local_88.suffix_length + -1;
          wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
        }
      }
      while (0 < local_88.prefix_length) {
        (*callback)(&local_88,0x30);
        local_88.alternate_form_length = local_88.alternate_form_length + -1;
      }
      while (0 < local_88.suffix_length) {
        (*callback)(&local_88,(uint)(byte)*wide_string_offset);
        local_88.length_modifier_flags = local_88.length_modifier_flags - 1;
        wide_string_offset = (wchar_t *)((int)wide_string_offset + 1);
      }
      while (0 < local_88.alternate_form_length) {
        (*callback)(&local_88,0x30);
        iStack_4c = iStack_4c + -1;
      }
      if ((local_88._30_2_ & 8) != 0) {
        while (0 < local_88.width) {
          (*callback)(&local_88,0x20);
          local_88.total_output_count = local_88.total_output_count + -1;
        }
      }
      goto LAB_00602d41;
    }
    if ((local_88._30_2_ & 0x20) == 0) {
      if ((local_88._30_2_ & 0x10) == 0) {
        if ((local_88._30_2_ & 0x80) == 0) {
          if ((local_88._30_2_ & 0x40) == 0) {
            puVar3 = *(uint **)args.value[0];
            *(uint **)args.value[0] = puVar3 + 1;
            *(uint *)*puVar3 = local_88._16_4_;
            if (*format == 0) {
              iVar11._0_1_ = local_88.padding1;
              iVar11._1_1_ = local_88.format_char;
              iVar11._2_1_ = local_88.padding_char;
              iVar11._3_1_ = local_88.padding2[0];
              return iVar11;
            }
          }
          else {
            puVar3 = *(uint **)args.value[0];
            *(uint **)args.value[0] = puVar3 + 1;
            *(uint *)*puVar3 = local_88._16_4_;
            if (*format == 0) {
              iVar10._0_1_ = local_88.padding1;
              iVar10._1_1_ = local_88.format_char;
              iVar10._2_1_ = local_88.padding_char;
              iVar10._3_1_ = local_88.padding2[0];
              return iVar10;
            }
          }
        }
        else {
          puVar2 = *(undefined6 **)args.value[0];
          *(undefined6 **)args.value[0] = puVar2 + 1;
          *(int *)*puVar2 = local_88._16_4_;
          if (*format == 0) {
            iVar9._0_1_ = local_88.padding1;
            iVar9._1_1_ = local_88.format_char;
            iVar9._2_1_ = local_88.padding_char;
            iVar9._3_1_ = local_88.padding2[0];
            return iVar9;
          }
        }
      }
      else {
        uVar4 = local_88._16_2_;
        if ((local_88._30_2_ & 0x80) == 0) {
          if ((local_88._30_2_ & 0x40) == 0) {
            puVar3 = *(uint **)args.value[0];
            *(uint **)args.value[0] = puVar3 + 1;
            *(ushort *)*puVar3 = uVar4;
            if (*format == 0) {
              iVar8._0_1_ = local_88.padding1;
              iVar8._1_1_ = local_88.format_char;
              iVar8._2_1_ = local_88.padding_char;
              iVar8._3_1_ = local_88.padding2[0];
              return iVar8;
            }
          }
          else {
            puVar3 = *(uint **)args.value[0];
            *(uint **)args.value[0] = puVar3 + 1;
            *(ushort *)*puVar3 = uVar4;
            if (*format == 0) {
              iVar7._0_1_ = local_88.padding1;
              iVar7._1_1_ = local_88.format_char;
              iVar7._2_1_ = local_88.padding_char;
              iVar7._3_1_ = local_88.padding2[0];
              return iVar7;
            }
          }
        }
        else {
          puVar2 = *(undefined6 **)args.value[0];
          *(undefined6 **)args.value[0] = puVar2 + 1;
          *(ushort *)*puVar2 = uVar4;
          if (*format == 0) {
            iVar6._0_1_ = local_88.padding1;
            iVar6._1_1_ = local_88.format_char;
            iVar6._2_1_ = local_88.padding_char;
            iVar6._3_1_ = local_88.padding2[0];
            return iVar6;
          }
        }
      }
      goto LAB_006029a0;
    }
    if ((local_88._30_2_ & 0x80) == 0) {
      if ((local_88._30_2_ & 0x40) == 0) {
        puVar3 = *(uint **)args.value[0];
        *(uint **)args.value[0] = puVar3 + 1;
        *(uint *)*puVar3 = local_88._16_4_;
        bVar1 = *format;
      }
      else {
        puVar3 = *(uint **)args.value[0];
        *(uint **)args.value[0] = puVar3 + 1;
        *(uint *)*puVar3 = local_88._16_4_;
        bVar1 = *format;
      }
    }
    else {
      puVar2 = *(undefined6 **)args.value[0];
      *(undefined6 **)args.value[0] = puVar2 + 1;
      *(int *)*puVar2 = local_88._16_4_;
      bVar1 = *format;
    }
  } while( true );
}
