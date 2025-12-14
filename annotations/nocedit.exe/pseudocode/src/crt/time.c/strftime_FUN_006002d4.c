// Name: crt_time.c_strftime_FUN_006002d4
// Address: 006002d4
// Address Range: [[006002d4, 00600762]]
// Convention: __cdecl
// Signature: uint crt_time.c_strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, tm * time_ptr)

#include "nocturne.h"

uint __cdecl
crt_time_c_strftime_FUN_006002d4
          (char *dest_buffer,uint buffer_size,char *format_string,tm *time_ptr)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int value;
  uint uVar4;
  uint uVar5;
  BADSPACEBASE *in_ESP;
  char (*pacVar6) [4];
  char (*pacVar7) [4];
  byte bVar8;
  char local_a0 [4];
  char cStack_9c;
  uint local_1c;
  uint local_18;
  char *local_14;
  
  bVar8 = 0;
  local_1c = 0;
  local_18 = buffer_size;
  local_14 = (char *)0x0;
LAB_0060030a:
  while( true ) {
    pacVar6 = &local_a0;
    cVar1 = *format_string;
    if (cVar1 != '\0') break;
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
          if (((bVar2 < 0x25) || (bVar2 < 0x26)) || (bVar2 != 0x41)) goto LAB_006006b4;
          pacVar6 = (char (*) [4])g_WeekdayNamesLong[time_ptr->tm_wday];
          goto LAB_006006c0;
        }
        if (bVar2 < 0x43) {
          pacVar6 = (char (*) [4])g_MonthNamesLong[time_ptr->tm_mon];
          goto LAB_006006c0;
        }
        if (0x47 < bVar2) {
          if (bVar2 < 0x49) {
            crt_stdio_c_formatTwoDigits_FUN_006002a0(local_a0,time_ptr->tm_hour);
          }
          else {
            if (bVar2 != 0x49) goto LAB_006006b4;
            value = time_ptr->tm_hour;
            if (0xc < value) {
              value = value + -0xc;
            }
            if (value == 0) {
              value = 0xc;
            }
            crt_stdio_c_formatTwoDigits_FUN_006002a0(local_a0,value);
            pacVar6 = &local_a0;
          }
          goto LAB_006006c0;
        }
        if (bVar2 != 0x44) goto LAB_006006b4;
        local_14 = format_string;
        format_string = "%m/%d/%y";
        goto LAB_0060030a;
      }
      if (bVar2 < 0x4e) {
        crt_stdio_c_formatTwoDigits_FUN_006002a0(local_a0,time_ptr->tm_min);
        pacVar6 = &local_a0;
      }
      else if (bVar2 < 0x57) {
        if (bVar2 < 0x54) {
          if (bVar2 == 0x53) {
            crt_stdio_c_formatTwoDigits_FUN_006002a0(local_a0,time_ptr->tm_sec);
            pacVar6 = &local_a0;
          }
          else {
LAB_006006b4:
            local_a0[0] = *format_string;
            local_a0[1] = '\0';
            pacVar6 = &local_a0;
          }
        }
        else {
          if (bVar2 < 0x55) goto LAB_00600659;
          if (bVar2 != 0x55) goto LAB_006006b4;
          crt_stdio_c_formatTwoDigits_FUN_006002a0
                    (local_a0,((time_ptr->tm_yday + 7) - time_ptr->tm_wday) / 7);
          pacVar6 = &local_a0;
        }
      }
      else {
        if (bVar2 < 0x58) {
          crt_stdio_c_formatTwoDigits_FUN_006002a0
                    (local_a0,((6 - ((time_ptr->tm_yday % 7 - time_ptr->tm_wday) + 7) % 7) +
                              time_ptr->tm_yday) / 7);
          pacVar6 = &local_a0;
          goto LAB_006006c0;
        }
        if (bVar2 < 0x59) {
LAB_00600659:
          local_14 = format_string;
          format_string = "%H:%M:%S";
          goto LAB_0060030a;
        }
        if (0x59 < bVar2) {
          if (bVar2 == 0x5a) goto LAB_006006a3;
          goto LAB_006006b4;
        }
        crt_stdio_c_IntegerToString_FUN_00607d18(time_ptr->tm_year + 0x76c,local_a0,10);
        pacVar6 = &local_a0;
      }
    }
    else if (bVar2 < 0x62) {
      pacVar6 = g_WeekdayNamesShort + time_ptr->tm_wday;
    }
    else if (bVar2 < 0x6e) {
      if (bVar2 < 100) {
        if (0x62 < bVar2) {
          local_14 = format_string;
          format_string = "%a %b %d %H:%M:%S %Y";
          goto LAB_0060030a;
        }
LAB_006004a2:
        pacVar6 = g_MonthNamesShort + time_ptr->tm_mon;
      }
      else if (bVar2 < 0x65) {
        crt_stdio_c_formatTwoDigits_FUN_006002a0(local_a0,time_ptr->tm_mday);
        pacVar6 = &local_a0;
      }
      else {
        if (bVar2 < 0x6a) {
          if (bVar2 != 0x68) goto LAB_006006b4;
          goto LAB_006004a2;
        }
        if (bVar2 < 0x6b) {
          crt_stdio_c_IntegerToString_FUN_00607d18(time_ptr->tm_yday + 0x65,local_a0,10);
          cStack_9c = cStack_9c + -1;
          pacVar6 = &local_a0;
        }
        else {
          if (bVar2 != 0x6d) goto LAB_006006b4;
          crt_stdio_c_formatTwoDigits_FUN_006002a0(local_a0,time_ptr->tm_mon + 1);
          pacVar6 = &local_a0;
        }
      }
    }
    else if (bVar2 < 0x6f) {
      pacVar6 = (char (*) [4])&DAT_00658bf4;
    }
    else if (bVar2 < 0x77) {
      if (bVar2 < 0x72) {
        if (bVar2 != 0x70) goto LAB_006006b4;
        if (time_ptr->tm_hour < 0xc) {
          pacVar6 = (char (*) [4])&DAT_00658c04;
        }
        else {
          pacVar6 = (char (*) [4])&DAT_00658c08;
        }
      }
      else {
        if (bVar2 < 0x73) {
          local_14 = format_string;
          format_string = "%I:%M:%S %p";
          goto LAB_0060030a;
        }
        if (bVar2 != 0x74) goto LAB_006006b4;
        pacVar6 = (char (*) [4])&DAT_00658c0c;
      }
    }
    else {
      if (bVar2 < 0x78) {
        local_a0[1] = '\0';
        local_a0[0] = (char)time_ptr->tm_wday + '0';
        pacVar6 = &local_a0;
        goto LAB_006006c0;
      }
      if (bVar2 < 0x79) {
        local_14 = format_string;
        format_string = "%a %b %d, %Y";
        goto LAB_0060030a;
      }
      if (bVar2 < 0x7a) {
        crt_stdio_c_formatTwoDigits_FUN_006002a0(local_a0,time_ptr->tm_year % 100);
        pacVar6 = &local_a0;
      }
      else {
        if (bVar2 != 0x7a) goto LAB_006006b4;
LAB_006006a3:
        crt_time_c_tzset_FUN_006072f8();
        pacVar6 = (&PTR_s_EST_006851c0)[time_ptr->tm_isdst];
      }
    }
  }
  else {
    local_a0[0] = cVar1;
    local_a0[1] = '\0';
    pacVar6 = &local_a0;
  }
LAB_006006c0:
  format_string = format_string + 1;
  uVar4 = 0xffffffff;
  pacVar7 = pacVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    pcVar3 = *pacVar7;
    pacVar7 = (char (*) [4])((int)pacVar7 + (uint)bVar8 * -2 + 1);
  } while (*pcVar3 != '\0');
  uVar5 = ~uVar4 - 1;
  if (local_18 < ~uVar4 - 1) {
    uVar5 = local_18;
  }
  pacVar7 = (char (*) [4])(dest_buffer + local_1c);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *pacVar7 = *pacVar6;
    pacVar6 = pacVar6 + (uint)bVar8 * -2 + 1;
    pacVar7 = pacVar7 + (uint)bVar8 * -2 + 1;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    (*pacVar7)[0] = (*pacVar6)[0];
    pacVar6 = (char (*) [4])((int)pacVar6 + (uint)bVar8 * -2 + 1);
    pacVar7 = (char (*) [4])((int)pacVar7 + (uint)bVar8 * -2 + 1);
  }
  local_18 = local_18 - uVar5;
  local_1c = local_1c + uVar5;
  goto LAB_0060030a;
}
