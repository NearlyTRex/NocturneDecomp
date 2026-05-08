// Name: engine_fileio.cpp_parseTimestampRecord_FUN_004b2270
// Address: 004b2270
// MANUAL RECONSTRUCTION
// Address Range: [[004b2270, 004b2391]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_parseTimestampRecord_FUN_004b2270(char *input_string,STimestampRecord *output_record)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_parseTimestampRecord_FUN_004b2270(char *input_string,STimestampRecord *output_record)

{
  char local_224 [512];
  uint local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;

  local_8 = -1;
  sscanf
            (input_string,"%d: %d / %d / %d %d : %d : %d \"%[^\"]\"%n %n",&local_24,&local_18,&local_20,&local_1c,
             &local_14,&local_10,&local_c,local_224,&local_8,&local_8);
  if (local_8 < 0) {
    return 0;
  }
  output_record->filename[0] = '\0';
  output_record->record_number = local_24;
  output_record->year = local_18 + -0x76c;
  output_record->month = local_20 + -1;
  output_record->day = local_1c;
  output_record->hour = local_14;
  output_record->minute = local_10;
  output_record->second = local_c;
  strcpy(output_record->username, local_224);
  return 1;
}
