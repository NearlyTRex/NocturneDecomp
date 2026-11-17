// Name: crt_time.c__strftime_FUN_005c2784
// Address: 005c2784
// Address Range: [[005c2784, 005c2c12]]
// Convention: __cdecl
// Signature: uint __cdecl crt_time_c__strftime_FUN_005c2784(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)

#include "nocturne.h"

uint __cdecl _strftime(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)

{
  char cVar1;
  byte bVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char (*pacVar7) [4];
  char (*pacVar8) [4];
  byte bVar9;
  char local_a0 [132];
  uint local_1c;
  uint local_18;
  char *local_14;
  
  bVar9 = 0;
  local_1c = 0;
  local_18 = buffer_size;
  local_14 = (char *)0x0;
LAB_005c27ba:
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
          if (((bVar2 < 0x25) || (bVar2 < 0x26)) || (bVar2 != 0x41)) goto LAB_005c2b64;
          pacVar7 = (char (*) [4])g_WeekdayNamesLong[time_ptr->tm_wday];
          goto LAB_005c2b70;
        }
        if (bVar2 < 0x43) {
          pacVar7 = (char (*) [4])g_MonthNamesLong[time_ptr->tm_mon];
          goto LAB_005c2b70;
        }
        if (0x47 < bVar2) {
          if (bVar2 < 0x49) {
            FUN_005c2750(local_a0,time_ptr->tm_hour);
            pacVar7 = (char (*) [4])local_a0;
          }
          else {
            if (bVar2 != 0x49) goto LAB_005c2b64;
            iVar4 = time_ptr->tm_hour;
            if (0xc < iVar4) {
              iVar4 = iVar4 + -0xc;
            }
            if (iVar4 == 0) {
              iVar4 = 0xc;
            }
            FUN_005c2750(local_a0,iVar4);
            pacVar7 = (char (*) [4])local_a0;
          }
          goto LAB_005c2b70;
        }
        if (bVar2 != 0x44) goto LAB_005c2b64;
        local_14 = format_string;
        format_string = "%m/%d/%y";
        goto LAB_005c27ba;
      }
      if (bVar2 < 0x4e) {
        FUN_005c2750(local_a0,time_ptr->tm_min);
        pacVar7 = (char (*) [4])local_a0;
      }
      else if (bVar2 < 0x57) {
        if (bVar2 < 0x54) {
          if (bVar2 == 0x53) {
            FUN_005c2750(local_a0,time_ptr->tm_sec);
            pacVar7 = (char (*) [4])local_a0;
          }
          else {
LAB_005c2b64:
            local_a0[0] = *format_string;
            local_a0[1] = '\0';
            pacVar7 = (char (*) [4])local_a0;
          }
        }
        else {
          if (bVar2 < 0x55) goto LAB_005c2b09;
          if (bVar2 != 0x55) goto LAB_005c2b64;
          FUN_005c2750(local_a0,((time_ptr->tm_yday + 7) - time_ptr->tm_wday) / 7);
          pacVar7 = (char (*) [4])local_a0;
        }
      }
      else {
        if (bVar2 < 0x58) {
          FUN_005c2750
                    (local_a0,((6 - ((time_ptr->tm_yday % 7 - time_ptr->tm_wday) + 7) % 7) +
                              time_ptr->tm_yday) / 7);
          pacVar7 = (char (*) [4])local_a0;
          goto LAB_005c2b70;
        }
        if (bVar2 < 0x59) {
LAB_005c2b09:
          local_14 = format_string;
          format_string = "%H:%M:%S";
          goto LAB_005c27ba;
        }
        if (0x59 < bVar2) {
          if (bVar2 == 0x5a) goto LAB_005c2b53;
          goto LAB_005c2b64;
        }
        IntegerToString(time_ptr->tm_year + 0x76c,local_a0,10);
        pacVar7 = (char (*) [4])local_a0;
      }
    }
    else if (bVar2 < 0x62) {
      pacVar7 = g_WeekdayNamesShort + time_ptr->tm_wday;
    }
    else if (bVar2 < 0x6e) {
      if (bVar2 < 100) {
        if (0x62 < bVar2) {
          local_14 = format_string;
          format_string = "%a %b %d %H:%M:%S %Y";
          goto LAB_005c27ba;
        }
LAB_005c2952:
        pacVar7 = g_MonthNamesShort + time_ptr->tm_mon;
      }
      else if (bVar2 < 0x65) {
        FUN_005c2750(local_a0,time_ptr->tm_mday);
        pacVar7 = (char (*) [4])local_a0;
      }
      else {
        if (bVar2 < 0x6a) {
          if (bVar2 != 0x68) goto LAB_005c2b64;
          goto LAB_005c2952;
        }
        if (bVar2 < 0x6b) {
          IntegerToString(time_ptr->tm_yday + 0x65,local_a0,10);
          local_a0[0] = local_a0[0] + -1;
          pacVar7 = (char (*) [4])local_a0;
        }
        else {
          if (bVar2 != 0x6d) goto LAB_005c2b64;
          FUN_005c2750(local_a0,time_ptr->tm_mon + 1);
          pacVar7 = (char (*) [4])local_a0;
        }
      }
    }
    else if (bVar2 < 0x6f) {
      pacVar7 = (char (*) [4])&g_INT_005faaf4;
    }
    else if (bVar2 < 0x77) {
      if (bVar2 < 0x72) {
        if (bVar2 != 0x70) goto LAB_005c2b64;
        if (time_ptr->tm_hour < 0xc) {
          pacVar7 = (char (*) [4])&g_INT_005fab04;
        }
        else {
          pacVar7 = (char (*) [4])&g_INT_005fab08;
        }
      }
      else {
        if (bVar2 < 0x73) {
          local_14 = format_string;
          format_string = "%I:%M:%S %p";
          goto LAB_005c27ba;
        }
        if (bVar2 != 0x74) goto LAB_005c2b64;
        pacVar7 = (char (*) [4])&g_INT_005fab0c;
      }
    }
    else {
      if (bVar2 < 0x78) {
        local_a0[1] = '\0';
        local_a0[0] = (char)time_ptr->tm_wday + '0';
        pacVar7 = (char (*) [4])local_a0;
        goto LAB_005c2b70;
      }
      if (bVar2 < 0x79) {
        local_14 = format_string;
        format_string = "%a %b %d, %Y";
        goto LAB_005c27ba;
      }
      if (bVar2 < 0x7a) {
        FUN_005c2750(local_a0,time_ptr->tm_year % 100);
        pacVar7 = (char (*) [4])local_a0;
      }
      else {
        if (bVar2 != 0x7a) goto LAB_005c2b64;
LAB_005c2b53:
        FUN_005c9428();
        pacVar7 = (char (*) [4])(&PTR_s_EST_00626990)[time_ptr->tm_isdst];
      }
    }
  }
  else {
    local_a0[0] = cVar1;
    local_a0[1] = '\0';
    pacVar7 = (char (*) [4])local_a0;
  }
LAB_005c2b70:
  format_string = format_string + 1;
  uVar5 = 0xffffffff;
  pacVar8 = pacVar7;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    pcVar3 = *pacVar8;
    pacVar8 = (char (*) [4])((int)pacVar8 + (uint)bVar9 * -2 + 1);
  } while (*pcVar3 != '\0');
  uVar6 = ~uVar5 - 1;
  if (local_18 < ~uVar5 - 1) {
    uVar6 = local_18;
  }
  pacVar8 = (char (*) [4])(dest_buffer + local_1c);
  for (uVar5 = uVar6 >> 2; uVar5 != 0; uVar5 = uVar5 - 1) {
    *pacVar8 = *pacVar7;
    pacVar7 = pacVar7 + (uint)bVar9 * -2 + 1;
    pacVar8 = pacVar8 + (uint)bVar9 * -2 + 1;
  }
  for (uVar5 = uVar6 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
    (*pacVar8)[0] = (*pacVar7)[0];
    pacVar7 = (char (*) [4])((int)pacVar7 + (uint)bVar9 * -2 + 1);
    pacVar8 = (char (*) [4])((int)pacVar8 + (uint)bVar9 * -2 + 1);
  }
  local_18 = local_18 - uVar6;
  local_1c = local_1c + uVar6;
  goto LAB_005c27ba;
}
