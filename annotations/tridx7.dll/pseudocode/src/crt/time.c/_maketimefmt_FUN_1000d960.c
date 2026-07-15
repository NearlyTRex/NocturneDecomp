// Name: crt_time.c__maketimefmt_FUN_1000d960
// Address: 1000d960
// Address Range: [[1000d960, 1000da52]]
// Convention: __cdecl
// Signature: uint __cdecl crt_time_c__maketimefmt_FUN_1000d960(LCID lcid,__lc_time_data *tdata)

#include "nocturne.h"

uint __cdecl _maketimefmt(LCID lcid,__lc_time_data *tdata)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  char *local_c;
  int local_8;
  int local_4;
  
  local_4 = 0;
  local_8 = 0;
  uVar2 = __getlocaleinfo(0,lcid,0x23,&local_4);
  uVar3 = __getlocaleinfo(0,lcid,0x25,&local_8);
  uVar4 = __getlocaleinfo(1,lcid,0x1e,&local_c);
  uVar4 = uVar2 | uVar3 | uVar4;
  if (uVar4 != 0) {
    return uVar4;
  }
  pcVar5 = (char *)malloc(0xd);
  tdata->ww_timefmt = pcVar5;
  if (local_4 == 0) {
    *pcVar5 = 'h';
    pcVar6 = pcVar5 + 1;
    if (local_8 == 0) goto LAB_1000d9fb;
    *pcVar6 = 'h';
  }
  else {
    *pcVar5 = 'H';
    pcVar6 = pcVar5 + 1;
    if (local_8 == 0) goto LAB_1000d9fb;
    *pcVar6 = 'H';
  }
  pcVar6 = pcVar5 + 2;
LAB_1000d9fb:
  cVar1 = *local_c;
  pcVar5 = local_c;
  while (cVar1 != '\0') {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
    *pcVar6 = cVar1;
    pcVar6 = pcVar6 + 1;
    cVar1 = *pcVar5;
  }
  *pcVar6 = 'm';
  pcVar5 = pcVar6 + 1;
  if (local_8 != 0) {
    *pcVar5 = 'm';
    pcVar5 = pcVar6 + 2;
  }
  cVar1 = *local_c;
  pcVar6 = local_c;
  while (cVar1 != '\0') {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
    *pcVar5 = cVar1;
    pcVar5 = pcVar5 + 1;
    cVar1 = *pcVar6;
  }
  *pcVar5 = 's';
  pcVar5[1] = 's';
  pcVar5[2] = '\0';
  free(local_c);
  return 0;
}
