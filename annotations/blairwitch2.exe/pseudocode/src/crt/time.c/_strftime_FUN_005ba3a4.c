// Name: crt_time.c__strftime_FUN_005ba3a4
// Address: 005ba3a4
// Address Range: [[005ba3a4, 005ba832]]
// Convention: __cdecl
// Signature: uint __cdecl crt_time_c__strftime_FUN_005ba3a4(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)

#include "nocturne.h"

uint __cdecl _strftime(char *dest_buffer,uint buffer_size,char *format_string,_tm *time_ptr)

{
  char cVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  byte bVar8;
  uint local_a0;
  uint local_1c;
  uint local_18;
  char *local_14;
  
  bVar8 = 0;
  local_1c = 0;
  local_18 = buffer_size;
  local_14 = (char *)0x0;
LAB_005ba3da:
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
          if (((bVar2 < 0x25) || (bVar2 < 0x26)) || (bVar2 != 0x41)) goto LAB_005ba784;
          piVar6 = (int *)g_CHAR_PTR_ARRAY_0061eed4[time_ptr->tm_wday];
          goto LAB_005ba790;
        }
        if (bVar2 < 0x43) {
          piVar6 = (int *)g_CHAR_PTR_ARRAY_0061ef20[time_ptr->tm_mon];
          goto LAB_005ba790;
        }
        if (0x47 < bVar2) {
          if (bVar2 < 0x49) {
            FUN_005ba370(&local_a0,time_ptr->tm_hour);
            piVar6 = &local_a0;
          }
          else {
            if (bVar2 != 0x49) goto LAB_005ba784;
            iVar3 = time_ptr->tm_hour;
            if (0xc < iVar3) {
              iVar3 = iVar3 + -0xc;
            }
            if (iVar3 == 0) {
              iVar3 = 0xc;
            }
            FUN_005ba370(&local_a0,iVar3);
            piVar6 = &local_a0;
          }
          goto LAB_005ba790;
        }
        if (bVar2 != 0x44) goto LAB_005ba784;
        local_14 = format_string;
        format_string = "%m/%d/%y";
        goto LAB_005ba3da;
      }
      if (bVar2 < 0x4e) {
        FUN_005ba370(&local_a0,time_ptr->tm_min);
        piVar6 = &local_a0;
      }
      else if (bVar2 < 0x57) {
        if (bVar2 < 0x54) {
          if (bVar2 == 0x53) {
            FUN_005ba370(&local_a0,time_ptr->tm_sec);
            piVar6 = &local_a0;
          }
          else {
LAB_005ba784:
            local_a0._0_1_ = *format_string;
            local_a0._1_1_ = 0;
            piVar6 = &local_a0;
          }
        }
        else {
          if (bVar2 < 0x55) goto LAB_005ba729;
          if (bVar2 != 0x55) goto LAB_005ba784;
          FUN_005ba370(&local_a0,((time_ptr->tm_yday + 7) - time_ptr->tm_wday) / 7);
          piVar6 = &local_a0;
        }
      }
      else {
        if (bVar2 < 0x58) {
          FUN_005ba370
                    (&local_a0,
                     ((6 - ((time_ptr->tm_yday % 7 - time_ptr->tm_wday) + 7) % 7) +
                     time_ptr->tm_yday) / 7);
          piVar6 = &local_a0;
          goto LAB_005ba790;
        }
        if (bVar2 < 0x59) {
LAB_005ba729:
          local_14 = format_string;
          format_string = "%H:%M:%S";
          goto LAB_005ba3da;
        }
        if (0x59 < bVar2) {
          if (bVar2 == 0x5a) goto LAB_005ba773;
          goto LAB_005ba784;
        }
        IntegerToString(time_ptr->tm_year + 0x76c,(char *)&local_a0,10);
        piVar6 = &local_a0;
      }
    }
    else if (bVar2 < 0x62) {
      piVar6 = (int *)(g_CHAR_ARRAY_0061eeb8 + time_ptr->tm_wday * 4);
    }
    else if (bVar2 < 0x6e) {
      if (bVar2 < 100) {
        if (0x62 < bVar2) {
          local_14 = format_string;
          format_string = "%a %b %d %H:%M:%S %Y";
          goto LAB_005ba3da;
        }
LAB_005ba572:
        piVar6 = (int *)(g_CHAR_ARRAY_0061eef0 + time_ptr->tm_mon * 4);
      }
      else if (bVar2 < 0x65) {
        FUN_005ba370(&local_a0,time_ptr->tm_mday);
        piVar6 = &local_a0;
      }
      else {
        if (bVar2 < 0x6a) {
          if (bVar2 != 0x68) goto LAB_005ba784;
          goto LAB_005ba572;
        }
        if (bVar2 < 0x6b) {
          IntegerToString(time_ptr->tm_yday + 0x65,(char *)&local_a0,10);
          local_a0._0_1_ = (char)local_a0 + -1;
          piVar6 = &local_a0;
        }
        else {
          if (bVar2 != 0x6d) goto LAB_005ba784;
          FUN_005ba370(&local_a0,time_ptr->tm_mon + 1);
          piVar6 = &local_a0;
        }
      }
    }
    else if (bVar2 < 0x6f) {
      piVar6 = &g_INT_005f192c;
    }
    else if (bVar2 < 0x77) {
      if (bVar2 < 0x72) {
        if (bVar2 != 0x70) goto LAB_005ba784;
        if (time_ptr->tm_hour < 0xc) {
          piVar6 = &g_INT_005f193c;
        }
        else {
          piVar6 = &g_INT_005f1940;
        }
      }
      else {
        if (bVar2 < 0x73) {
          local_14 = format_string;
          format_string = "%I:%M:%S %p";
          goto LAB_005ba3da;
        }
        if (bVar2 != 0x74) goto LAB_005ba784;
        piVar6 = &g_INT_005f1944;
      }
    }
    else {
      if (bVar2 < 0x78) {
        local_a0._1_1_ = 0;
        local_a0._0_1_ = (char)time_ptr->tm_wday + '0';
        piVar6 = &local_a0;
        goto LAB_005ba790;
      }
      if (bVar2 < 0x79) {
        local_14 = format_string;
        format_string = "%a %b %d, %Y";
        goto LAB_005ba3da;
      }
      if (bVar2 < 0x7a) {
        FUN_005ba370(&local_a0,time_ptr->tm_year % 100);
        piVar6 = &local_a0;
      }
      else {
        if (bVar2 != 0x7a) goto LAB_005ba784;
LAB_005ba773:
        FUN_005c1168();
        piVar6 = (int *)(&PTR_s_EST_0061f630)[time_ptr->tm_isdst];
      }
    }
  }
  else {
    local_a0._0_1_ = cVar1;
    local_a0._1_1_ = 0;
    piVar6 = &local_a0;
  }
LAB_005ba790:
  format_string = format_string + 1;
  uVar4 = 0xffffffff;
  piVar7 = piVar6;
  do {
    if (uVar4 == 0) break;
    uVar4 = uVar4 - 1;
    iVar3 = *piVar7;
    piVar7 = (int *)((int)piVar7 + (uint)bVar8 * -2 + 1);
  } while ((char)iVar3 != '\0');
  uVar5 = ~uVar4 - 1;
  if (local_18 < ~uVar4 - 1) {
    uVar5 = local_18;
  }
  piVar7 = (int *)(dest_buffer + local_1c);
  for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *piVar7 = *piVar6;
    piVar6 = piVar6 + (uint)bVar8 * -2 + 1;
    piVar7 = piVar7 + (uint)bVar8 * -2 + 1;
  }
  for (uVar4 = uVar5 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(char *)piVar7 = (char)*piVar6;
    piVar6 = (int *)((int)piVar6 + (uint)bVar8 * -2 + 1);
    piVar7 = (int *)((int)piVar7 + (uint)bVar8 * -2 + 1);
  }
  local_18 = local_18 - uVar5;
  local_1c = local_1c + uVar5;
  goto LAB_005ba3da;
}
