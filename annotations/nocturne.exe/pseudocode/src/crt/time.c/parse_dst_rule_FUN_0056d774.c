// Name: crt_time.c_parse_dst_rule_FUN_0056d774
// Address: 0056d774
// Address Range: [[0056d774, 0056d879]]
// Convention: __cdecl
// Signature: char * __cdecl crt_time_c_parse_dst_rule_FUN_0056d774(char *rule_string,dst_rule *rule)

#include "nocturne.h"

char * __cdecl parse_dst_rule(char *rule_string,dst_rule *rule)

{
  char *pcVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
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
  pcVar1 = parse_uint(rule_string,&local_c);
  if (iVar2 == 0) {
    rule->month = local_c + -1;
    if (*pcVar1 == '.') {
      pcVar1 = parse_uint(pcVar1 + 1,&local_c);
      rule->day = local_c;
      if (*pcVar1 == '.') {
        pcVar1 = parse_uint(pcVar1 + 1,&local_c);
        rule->day_of_year = local_c;
      }
    }
    rule->rule_type = 0;
  }
  else {
    rule->rule_type = local_c;
  }
  local_10 = 2;
  local_18 = 0;
  local_14 = 0;
  if (*pcVar1 == '/') {
    pcVar1 = parse_uint(pcVar1 + 1,&local_10);
    if (*pcVar1 == ':') {
      pcVar1 = parse_uint(pcVar1 + 1,&local_14);
      if (*pcVar1 == ':') {
        pcVar1 = parse_uint(pcVar1 + 1,&local_18);
      }
    }
  }
  rule->seconds = local_18;
  rule->minutes = local_14;
  rule->hours = local_10;
  return pcVar1;
}
