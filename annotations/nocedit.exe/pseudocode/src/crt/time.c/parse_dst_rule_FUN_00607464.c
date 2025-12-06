// Name: crt_time.c_parse_dst_rule_FUN_00607464
// Address: 00607464
// Address Range: [[00607464, 00607569]]
// Convention: __cdecl
// Signature: char * crt_time.c_parse_dst_rule_FUN_00607464(char * rule_string, dst_rule * rule)

#include "nocturne.h"

char * __cdecl crt_time_c_parse_dst_rule_FUN_00607464(char *rule_string,dst_rule *rule)

{
  char *pcVar1;
  int unaff_EBX;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  int iVar2;
  int unaff_retaddr;
  int local_c;
  
  iVar2 = -1;
  if (*rule_string == 'J') {
    iVar2 = 1;
    rule_string = rule_string + 1;
  }
  if (*rule_string == 'M') {
    rule_string = rule_string + 1;
    iVar2 = 0;
  }
  rule[1].seconds = iVar2;
  pcVar1 = crt_string_c_parse_uint_FUN_00607318(rule_string,&local_c);
  if (iVar2 == 0) {
    rule->month = unaff_ESI + -1;
    if (*pcVar1 == '.') {
      pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,(int *)&stack0xfffffff8);
      rule->day = unaff_EBX;
      if (*pcVar1 == '.') {
        pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,(int *)&stack0xfffffffc);
        rule->day_of_year = unaff_retaddr;
      }
    }
    rule->rule_type = 0;
  }
  else {
    rule->rule_type = unaff_ESI;
  }
  local_c = 0;
  if (*pcVar1 == '/') {
    pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,(int *)&stack0xfffffffc);
    if (*pcVar1 == ':') {
      pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,(int *)&stack0xfffffff0);
      if (*pcVar1 == ':') {
        pcVar1 = crt_string_c_parse_uint_FUN_00607318(pcVar1 + 1,&local_c);
      }
    }
  }
  rule->seconds = local_c;
  rule->minutes = 0;
  rule->hours = 2;
  return pcVar1;
}
