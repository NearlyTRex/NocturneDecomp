// Name: crt_time.c_parse_timezone_spec_FUN_00607348
// Address: 00607348
// Address Range: [[00607348, 00607462]]
// Convention: __cdecl
// Signature: char * crt_time.c_parse_timezone_spec_FUN_00607348(char * tz_string, char * name_buffer, int * offset_seconds)

#include "nocturne.h"

char * __cdecl
crt_time_c_parse_timezone_spec_FUN_00607348(char *tz_string,char *name_buffer,int *offset_seconds)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  int local_1c;
  int local_18;
  int local_14;
  
  pbVar5 = (byte *)tz_string;
  if (*tz_string == ':') {
    tz_string = tz_string + 1;
    pbVar5 = (byte *)tz_string;
  }
  for (; ((((bVar1 = *tz_string, bVar1 != 0 && (bVar1 != 0x2c)) && (bVar1 != 0x2d)) &&
          (bVar1 != 0x2b)) && ((bVar1 < 0x30 || (0x39 < bVar1))));
      tz_string = (char *)((byte *)tz_string + 1)) {
  }
  uVar4 = (int)tz_string - (int)pbVar5;
  if (0x80 < (int)uVar4) {
    uVar4 = 0x80;
  }
  pbVar6 = (byte *)name_buffer;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)pbVar6 = *(uint *)pbVar5;
    pbVar5 = pbVar5 + 4;
    pbVar6 = pbVar6 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar6 = *pbVar5;
    pbVar5 = pbVar5 + 1;
    pbVar6 = pbVar6 + 1;
  }
  bVar2 = false;
  name_buffer[uVar4] = '\0';
  if (bVar1 == 0x2d) {
    bVar2 = true;
  }
  else if (bVar1 != 0x2b) goto LAB_006073c8;
  tz_string = (char *)((byte *)tz_string + 1);
LAB_006073c8:
  if ((0x2f < (byte)*tz_string) && ((byte)*tz_string < 0x3a)) {
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    tz_string = crt_string_c_parse_uint_FUN_00607318(tz_string,&local_14);
    if (*tz_string == 0x3a) {
      tz_string = crt_string_c_parse_uint_FUN_00607318((char *)((byte *)tz_string + 1),&local_18);
      if (*tz_string == 0x3a) {
        tz_string = crt_string_c_parse_uint_FUN_00607318((char *)((byte *)tz_string + 1),&local_1c);
      }
    }
    local_1c = local_1c + (local_18 + local_14 * 0x3c) * 0x3c;
    *offset_seconds = local_1c;
    if (bVar2) {
      *offset_seconds = -local_1c;
    }
  }
  return (char *)(byte *)tz_string;
}
