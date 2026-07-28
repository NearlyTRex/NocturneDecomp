// Name: crt_time.c_parse_dst_rule_FUN_0056d774
// Address: 0056d774
// Address Range: [[0056d774, 0056d879]]
// Convention: unknown
// Signature: char * crt_time_c_parse_dst_rule_FUN_0056d774(char *param_1,int *param_2)

#include "nocturne.h"

char * parse_dst_rule(char *param_1,int *param_2)

{
  char *pcVar1;
  int iVar2;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  
  iVar2 = -1;
  if (*param_1 == 'J') {
    iVar2 = 1;
    param_1 = param_1 + 1;
  }
  if (*param_1 == 'M') {
    param_1 = param_1 + 1;
    iVar2 = 0;
  }
  param_2[8] = iVar2;
  pcVar1 = parse_uint(param_1,&local_c);
  if (iVar2 == 0) {
    param_2[4] = local_c + -1;
    if (*pcVar1 == '.') {
      pcVar1 = parse_uint(pcVar1 + 1,&local_c);
      param_2[3] = local_c;
      if (*pcVar1 == '.') {
        pcVar1 = parse_uint(pcVar1 + 1,&local_c);
        param_2[6] = local_c;
      }
    }
    param_2[7] = 0;
  }
  else {
    param_2[7] = local_c;
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
  *param_2 = local_18;
  param_2[1] = local_14;
  param_2[2] = local_10;
  return pcVar1;
}
