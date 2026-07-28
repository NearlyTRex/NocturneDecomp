// Name: crt_time.c__strftime_FUN_00566634
// Address: 00566634
// Address Range: [[00566634, 00566ac2]]
// Convention: __cdecl
// Signature: uint __cdecl crt_time_c__strftime_FUN_00566634(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)

#include "nocturne.h"

uint __cdecl _strftime(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)

{
  char cVar1;
  byte bVar2;
  int value;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char local_a0 [132];
  uint local_1c;
  uint local_18;
  char *local_14;
  
  bVar7 = 0;
  local_1c = 0;
  local_18 = buffer_size;
  local_14 = (char *)0x0;
LAB_0056666a:
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
          if (((bVar2 < 0x25) || (bVar2 < 0x26)) || (bVar2 != 0x41)) goto LAB_00566a14;
          pcVar5 = (&PTR_s_Sunday_005c1814)[time_ptr->tm_wday];
          goto LAB_00566a20;
        }
        if (bVar2 < 0x43) {
          pcVar5 = (&PTR_s_January_005c1860)[time_ptr->tm_mon];
          goto LAB_00566a20;
        }
        if (0x47 < bVar2) {
          if (bVar2 < 0x49) {
            formatTwoDigits(local_a0,time_ptr->tm_hour);
            pcVar5 = local_a0;
          }
          else {
            if (bVar2 != 0x49) goto LAB_00566a14;
            value = time_ptr->tm_hour;
            if (0xc < value) {
              value = value + -0xc;
            }
            if (value == 0) {
              value = 0xc;
            }
            formatTwoDigits(local_a0,value);
            pcVar5 = local_a0;
          }
          goto LAB_00566a20;
        }
        if (bVar2 != 0x44) goto LAB_00566a14;
        local_14 = format_string;
        format_string = "%m/%d/%y";
        goto LAB_0056666a;
      }
      if (bVar2 < 0x4e) {
        formatTwoDigits(local_a0,time_ptr->tm_min);
        pcVar5 = local_a0;
      }
      else if (bVar2 < 0x57) {
        if (bVar2 < 0x54) {
          if (bVar2 == 0x53) {
            formatTwoDigits(local_a0,time_ptr->tm_sec);
            pcVar5 = local_a0;
          }
          else {
LAB_00566a14:
            local_a0[0] = *format_string;
            local_a0[1] = 0;
            pcVar5 = local_a0;
          }
        }
        else {
          if (bVar2 < 0x55) goto LAB_005669b9;
          if (bVar2 != 0x55) goto LAB_00566a14;
          formatTwoDigits
                    (local_a0,((time_ptr->tm_yday + 7) - time_ptr->tm_wday) / 7);
          pcVar5 = local_a0;
        }
      }
      else {
        if (bVar2 < 0x58) {
          formatTwoDigits
                    (local_a0,((6 - ((time_ptr->tm_yday % 7 - time_ptr->tm_wday) + 7) % 7) +
                              time_ptr->tm_yday) / 7);
          pcVar5 = local_a0;
          goto LAB_00566a20;
        }
        if (bVar2 < 0x59) {
LAB_005669b9:
          local_14 = format_string;
          format_string = "%H:%M:%S";
          goto LAB_0056666a;
        }
        if (0x59 < bVar2) {
          if (bVar2 == 0x5a) goto LAB_00566a03;
          goto LAB_00566a14;
        }
        IntegerToString(time_ptr->tm_year + 0x76c,local_a0,10);
        pcVar5 = local_a0;
      }
    }
    else if (bVar2 < 0x62) {
      pcVar5 = &DAT_005c17f8 + time_ptr->tm_wday * 4;
    }
    else if (bVar2 < 0x6e) {
      if (bVar2 < 100) {
        if (0x62 < bVar2) {
          local_14 = format_string;
          format_string = "%a %b %d %H:%M:%S %Y";
          goto LAB_0056666a;
        }
LAB_00566802:
        pcVar5 = &DAT_005c1830 + time_ptr->tm_mon * 4;
      }
      else if (bVar2 < 0x65) {
        formatTwoDigits(local_a0,time_ptr->tm_mday);
        pcVar5 = local_a0;
      }
      else {
        if (bVar2 < 0x6a) {
          if (bVar2 != 0x68) goto LAB_00566a14;
          goto LAB_00566802;
        }
        if (bVar2 < 0x6b) {
          IntegerToString(time_ptr->tm_yday + 0x65,local_a0,10);
          local_a0[0] = local_a0[0] + -1;
          pcVar5 = local_a0;
        }
        else {
          if (bVar2 != 0x6d) goto LAB_00566a14;
          formatTwoDigits(local_a0,time_ptr->tm_mon + 1);
          pcVar5 = local_a0;
        }
      }
    }
    else if (bVar2 < 0x6f) {
      pcVar5 = "\n";
    }
    else if (bVar2 < 0x77) {
      if (bVar2 < 0x72) {
        if (bVar2 != 0x70) goto LAB_00566a14;
        if (time_ptr->tm_hour < 0xc) {
          pcVar5 = "AM";
        }
        else {
          pcVar5 = "PM";
        }
      }
      else {
        if (bVar2 < 0x73) {
          local_14 = format_string;
          format_string = "%I:%M:%S %p";
          goto LAB_0056666a;
        }
        if (bVar2 != 0x74) goto LAB_00566a14;
        pcVar5 = "\t";
      }
    }
    else {
      if (bVar2 < 0x78) {
        local_a0[1] = 0;
        local_a0[0] = (char)time_ptr->tm_wday + '0';
        pcVar5 = local_a0;
        goto LAB_00566a20;
      }
      if (bVar2 < 0x79) {
        local_14 = format_string;
        format_string = "%a %b %d, %Y";
        goto LAB_0056666a;
      }
      if (bVar2 < 0x7a) {
        formatTwoDigits(local_a0,time_ptr->tm_year % 100);
        pcVar5 = local_a0;
      }
      else {
        if (bVar2 != 0x7a) goto LAB_00566a14;
LAB_00566a03:
        tzset();
        pcVar5 = (&PTR_DAT_005c1f0c)[time_ptr->tm_isdst];
      }
    }
  }
  else {
    local_a0[0] = cVar1;
    local_a0[1] = 0;
    pcVar5 = local_a0;
  }
LAB_00566a20:
  format_string = format_string + 1;
  uVar3 = 0xffffffff;
  pcVar6 = pcVar5;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  uVar4 = ~uVar3 - 1;
  if (local_18 < ~uVar3 - 1) {
    uVar4 = local_18;
  }
  pcVar6 = dest_buffer + local_1c;
  for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(uint *)pcVar6 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -8 + 4;
    pcVar6 = pcVar6 + (uint)bVar7 * -8 + 4;
  }
  for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *pcVar6 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
  }
  local_18 = local_18 - uVar4;
  local_1c = local_1c + uVar4;
  goto LAB_0056666a;
}
