// Name: crt_time.c__strftime_FUN_005a5674
// Address: 005a5674
// Address Range: [[005a5674, 005a5b02]]
// Convention: __cdecl
// Signature: uint __cdecl crt_time_c__strftime_FUN_005a5674(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)

#include "nocturne.h"

uint __cdecl _strftime(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  char local_a0 [132];
  uint local_1c;
  uint local_18;
  char *local_14;
  
  bVar8 = 0;
  local_1c = 0;
  local_18 = buffer_size;
  local_14 = (char *)0x0;
LAB_005a56aa:
  while (cVar1 = *format_string, cVar1 == '\0') {
    if (local_14 == (char *)0x0) {
      if (local_1c < buffer_size) {
        dest_buffer[local_1c] = '\0';
      }
      else {
        local_1c = 0;
      }
      return local_1c;
    }
    format_string = local_14 + 1;
    local_14 = (char *)0x0;
  }
  if (cVar1 == '%') {
    bVar2 = format_string[1];
    format_string = format_string + 1;
    if (bVar2 < 0x61) {
      if (bVar2 < 0x4d) {
        if (bVar2 < 0x42) {
          if (((bVar2 < 0x25) || (bVar2 < 0x26)) || (bVar2 != 0x41)) goto LAB_005a5a54;
          pcVar6 = (&PTR_s_Sunday_006075f8)[time_ptr->tm_wday];
          goto LAB_005a5a60;
        }
        if (bVar2 < 0x43) {
          pcVar6 = (&PTR_s_January_00607644)[time_ptr->tm_mon];
          goto LAB_005a5a60;
        }
        if (0x47 < bVar2) {
          if (bVar2 < 0x49) {
            FUN_005a5640(local_a0,time_ptr->tm_hour);
            pcVar6 = local_a0;
          }
          else {
            if (bVar2 != 0x49) goto LAB_005a5a54;
            iVar3 = time_ptr->tm_hour;
            if (0xc < iVar3) {
              iVar3 = iVar3 + -0xc;
            }
            if (iVar3 == 0) {
              iVar3 = 0xc;
            }
            FUN_005a5640(local_a0,iVar3);
            pcVar6 = local_a0;
          }
          goto LAB_005a5a60;
        }
        if (bVar2 != 0x44) goto LAB_005a5a54;
        local_14 = format_string;
        format_string = "%m/%d/%y";
        goto LAB_005a56aa;
      }
      if (bVar2 < 0x4e) {
        FUN_005a5640(local_a0,time_ptr->tm_min);
        pcVar6 = local_a0;
      }
      else if (bVar2 < 0x57) {
        if (bVar2 < 0x54) {
          if (bVar2 == 0x53) {
            FUN_005a5640(local_a0,time_ptr->tm_sec);
            pcVar6 = local_a0;
          }
          else {
LAB_005a5a54:
            local_a0[0] = *format_string;
            local_a0[1] = 0;
            pcVar6 = local_a0;
          }
        }
        else {
          if (bVar2 < 0x55) goto LAB_005a59f9;
          if (bVar2 != 0x55) goto LAB_005a5a54;
          FUN_005a5640(local_a0,((time_ptr->tm_yday + 7) - time_ptr->tm_wday) / 7);
          pcVar6 = local_a0;
        }
      }
      else {
        if (bVar2 < 0x58) {
          FUN_005a5640
                    (local_a0,((6 - ((time_ptr->tm_yday % 7 - time_ptr->tm_wday) + 7) % 7) +
                              time_ptr->tm_yday) / 7);
          pcVar6 = local_a0;
          goto LAB_005a5a60;
        }
        if (bVar2 < 0x59) {
LAB_005a59f9:
          local_14 = format_string;
          format_string = "%H:%M:%S";
          goto LAB_005a56aa;
        }
        if (0x59 < bVar2) {
          if (bVar2 == 0x5a) goto LAB_005a5a43;
          goto LAB_005a5a54;
        }
        FUN_005acc88(time_ptr->tm_year + 0x76c,local_a0,10);
        pcVar6 = local_a0;
      }
    }
    else if (bVar2 < 0x62) {
      pcVar6 = &DAT_006075dc + time_ptr->tm_wday * 4;
    }
    else if (bVar2 < 0x6e) {
      if (bVar2 < 100) {
        if (0x62 < bVar2) {
          local_14 = format_string;
          format_string = "%a %b %d %H:%M:%S %Y";
          goto LAB_005a56aa;
        }
LAB_005a5842:
        pcVar6 = &DAT_00607614 + time_ptr->tm_mon * 4;
      }
      else if (bVar2 < 0x65) {
        FUN_005a5640(local_a0,time_ptr->tm_mday);
        pcVar6 = local_a0;
      }
      else {
        if (bVar2 < 0x6a) {
          if (bVar2 != 0x68) goto LAB_005a5a54;
          goto LAB_005a5842;
        }
        if (bVar2 < 0x6b) {
          FUN_005acc88(time_ptr->tm_yday + 0x65,local_a0,10);
          local_a0[0] = local_a0[0] + -1;
          pcVar6 = local_a0;
        }
        else {
          if (bVar2 != 0x6d) goto LAB_005a5a54;
          FUN_005a5640(local_a0,time_ptr->tm_mon + 1);
          pcVar6 = local_a0;
        }
      }
    }
    else if (bVar2 < 0x6f) {
      pcVar6 = &DAT_005da7b0;
    }
    else if (bVar2 < 0x77) {
      if (bVar2 < 0x72) {
        if (bVar2 != 0x70) goto LAB_005a5a54;
        if (time_ptr->tm_hour < 0xc) {
          pcVar6 = &DAT_005da7c0;
        }
        else {
          pcVar6 = &DAT_005da7c4;
        }
      }
      else {
        if (bVar2 < 0x73) {
          local_14 = format_string;
          format_string = "%I:%M:%S %p";
          goto LAB_005a56aa;
        }
        if (bVar2 != 0x74) goto LAB_005a5a54;
        pcVar6 = &DAT_005da7c8;
      }
    }
    else {
      if (bVar2 < 0x78) {
        local_a0[1] = 0;
        local_a0[0] = (char)time_ptr->tm_wday + '0';
        pcVar6 = local_a0;
        goto LAB_005a5a60;
      }
      if (bVar2 < 0x79) {
        local_14 = format_string;
        format_string = "%a %b %d, %Y";
        goto LAB_005a56aa;
      }
      if (bVar2 < 0x7a) {
        FUN_005a5640(local_a0,time_ptr->tm_year % 100);
        pcVar6 = local_a0;
      }
      else {
        if (bVar2 != 0x7a) goto LAB_005a5a54;
LAB_005a5a43:
        FUN_005ac558();
        pcVar6 = (&PTR_DAT_00607d34)[time_ptr->tm_isdst];
      }
    }
  }
  else {
    local_a0[0] = cVar1;
    local_a0[1] = 0;
    pcVar6 = local_a0;
  }
LAB_005a5a60:
  format_string = format_string + 1;
  uVar4 = 0xffffffff;
  pcVar7 = pcVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  } while (cVar1 != '\0');
  uVar5 = ~uVar4 - 1;
  if (local_18 < ~uVar4 - 1) {
    uVar5 = local_18;
  }
  pcVar7 = dest_buffer + local_1c;
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(uint *)pcVar7 = *(uint *)pcVar6;
    pcVar6 = pcVar6 + (uint)bVar8 * -8 + 4;
    pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pcVar7 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar8 * -2 + 1;
    pcVar7 = pcVar7 + (uint)bVar8 * -2 + 1;
  }
  local_18 = local_18 - uVar5;
  local_1c = local_1c + uVar5;
  goto LAB_005a56aa;
}
