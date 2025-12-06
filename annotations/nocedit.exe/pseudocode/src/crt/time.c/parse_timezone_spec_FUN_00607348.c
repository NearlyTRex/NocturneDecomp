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
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  uint uVar4;
  int iVar5;
  int unaff_ESI;
  byte *pbVar6;
  int unaff_EDI;
  byte *pbVar7;
  int *in_stack_00000018;
  int local_14;
  
  pbVar6 = (byte *)tz_string;
  if (*tz_string == ':') {
    tz_string = tz_string + 1;
    pbVar6 = (byte *)tz_string;
  }
  for (; ((((bVar1 = *tz_string, bVar1 != 0 && (bVar1 != 0x2c)) && (bVar1 != 0x2d)) &&
          (bVar1 != 0x2b)) && ((bVar1 < 0x30 || (0x39 < bVar1))));
      tz_string = (char *)((byte *)tz_string + 1)) {
  }
  uVar4 = (int)tz_string - (int)pbVar6;
  if (0x80 < (int)uVar4) {
    uVar4 = 0x80;
  }
  pbVar7 = (byte *)name_buffer;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)pbVar7 = *(uint *)pbVar6;
    pbVar6 = pbVar6 + 4;
    pbVar7 = pbVar7 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pbVar7 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    pbVar7 = pbVar7 + 1;
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
    local_14 = 0;
    tz_string = crt_string_c_parse_uint_FUN_00607318(tz_string,&local_14);
    if (*tz_string == 0x3a) {
      tz_string = crt_string_c_parse_uint_FUN_00607318((char *)((byte *)tz_string + 1),&local_14);
      if (*tz_string == 0x3a) {
        tz_string = crt_string_c_parse_uint_FUN_00607318((char *)((byte *)tz_string + 1),&local_14);
      }
    }
    iVar5 = unaff_EBP + (unaff_EDI + unaff_ESI * 0x3c) * 0x3c;
    *in_stack_00000018 = iVar5;
    if (bVar2) {
      *in_stack_00000018 = -iVar5;
    }
  }
  return (char *)(byte *)tz_string;
}
