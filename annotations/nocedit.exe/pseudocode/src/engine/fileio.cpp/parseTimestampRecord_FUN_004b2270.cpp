// Name: engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
// Address: 004b2270
// Address Range: [[004b2270, 004b2391]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_parseTimestampRecord_FUN_004b2270(char * input_string, STimestampRecord * output_record)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_parseTimestampRecord_FUN_004b2270
          (char *input_string,STimestampRecord *output_record)

{
  char cVar1;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  char acStack_220 [508];
  byte local_24 [4];
  uint local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
  local_8 = -1;
  crt_stdio_c_sscanf_FUN_0060013c
            (input_string,"%d: %d / %d / %d %d : %d : %d \"%[^\"]\"%n %n",local_24,&local_18,&local_20,&local_1c,
             &local_14,&local_10,&local_c,&stack0xfffffddc,&local_8,&local_8);
  if (unaff_EBX < 0) {
    return 0;
  }
  *(byte *)&output_record->record_start = 0;
  *(uint *)(output_record->field1_0x4 + 0xfc) = local_20;
  output_record->year = local_14 + -0x76c;
  output_record->month = local_1c + -1;
  output_record->time_3 = local_18;
  output_record->time_2 = local_10;
  output_record->time_1 = local_c;
  pcVar2 = acStack_220;
  pcVar3 = output_record->field8_0x11c + 0xc;
  output_record->chars_read = local_8;
  do {
    cVar1 = *pcVar2;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') {
      return 1;
    }
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  return 1;
}
