// Name: crt_time.c_strftime_FUN_006002d4
// Address: 006002d4
// Address Range: [[006002d4, 00600762]]
// Convention: __cdecl
// Signature: uint crt_time.c_strftime_FUN_006002d4(char * dest_buffer, uint buffer_size, char * format_string, tm * time_ptr)
// Cross-references:
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b7548 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b78ec [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b6ed1 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b809e [UNCONDITIONAL_CALL]
//   shape_design.c_embedCopyrightWatermark_FUN_0046b9a0 (0046b9a0) at 0046bb1f [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420 (0049f420) at 0049f849 [UNCONDITIONAL_CALL]
//   shape_edittool.cpp_CStrList_insertSortedFileRecord_FUN_004a3360 (004a3360) at 004a346d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_a_b_d_H_M_S_Y_00658bd0
//   TerminatedCString s_m_d_y_00658be8
//   undefined1 DAT_00658bf4
//   TerminatedCString s_I_M_S_p_00658bf8
//   undefined1 DAT_00658c04
//   undefined1 DAT_00658c08
//   undefined1 DAT_00658c0c
//   TerminatedCString s_a_b_d_Y_00658c10
//   TerminatedCString s_H_M_S_00658c20
//   char[7][4] g_WeekdayNamesShort
//   char*[7] g_WeekdayNamesLong
//   char[12][4] g_MonthNamesShort
//   char*[12] g_MonthNamesLong
//   void* PTR_s_EST_006851c0 = 006850bc
// Function calls:
//   crt_stdio.c_formatTwoDigits_FUN_006002a0
//   crt_stdio.c_IntegerToString_FUN_00607d18
//   crt_time.c_tzset_FUN_006072f8

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
        pacVar6 = (char (*) [4])(&PTR_s_EST_006851c0)[time_ptr->tm_isdst];
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


// Assembly code:
// 006002d4: PUSH EBX
//   Label: crt_time.c_strftime_FUN_006002d4
// 006002d5: PUSH ESI
// 006002d6: PUSH EDI
// 006002d7: PUSH EBP
// 006002d8: SUB ESP,0x90
// 006002de: MOV EBP,dword ptr [ESP + 0xac]
//   XREF to: Stack[0xc] (READ)
// 006002e5: MOV EBX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[0x10] (READ)
// 006002ec: XOR EDX,EDX
// 006002ee: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x8] (READ)
// 006002f5: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 006002fc: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00600303: MOV dword ptr [ESP + 0x8c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 0060030a: MOV AH,byte ptr [EBP]
//   Label: LAB_0060030a
//   XREF to: 00658bd0 (READ)
//   XREF to: 00658be8 (READ)
//   XREF to: 00658bf8 (READ)
//   XREF to: 00658c10 (READ)
//   XREF to: 00658c20 (READ)
// 0060030d: MOV ESI,ESP
// 0060030f: TEST AH,AH
// 00600311: JNZ 0x00600330
//   XREF to: 00600330 (CONDITIONAL_JUMP)
// 00600313: MOV EDI,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0x14] (READ)
// 0060031a: TEST EDI,EDI
// 0060031c: JZ 0x0060072f
//   XREF to: 0060072f (CONDITIONAL_JUMP)
// 00600322: XOR EAX,EAX
// 00600324: LEA EBP,[EDI + 0x1]
// 00600327: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0060032e: JMP 0x0060030a
//   XREF to: 0060030a (UNCONDITIONAL_JUMP)
// 00600330: CMP AH,0x25
//   Label: LAB_00600330
// 00600333: JZ 0x00600345
//   XREF to: 00600345 (CONDITIONAL_JUMP)
// 00600335: MOV AL,AH
// 00600337: MOV byte ptr [ESP],AH
//   XREF to: Stack[-0xa0] (DATA)
// 0060033a: XOR AL,AH
// 0060033c: MOV byte ptr [ESP + 0x1],AL
//   XREF to: Stack[-0x9f] (WRITE)
// 00600340: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 00600345: MOV AL,byte ptr [EBP + 0x1]
//   Label: LAB_00600345
// 00600348: INC EBP
// 00600349: CMP AL,0x61
// 0060034b: JC 0x006003f1
//   XREF to: 006003f1 (CONDITIONAL_JUMP)
// 00600351: JBE 0x00600481
//   XREF to: 00600481 (CONDITIONAL_JUMP)
// 00600357: CMP AL,0x6e
// 00600359: JC 0x006003aa
//   XREF to: 006003aa (CONDITIONAL_JUMP)
// 0060035b: JBE 0x00600571
//   XREF to: 00600571 (CONDITIONAL_JUMP)
// 00600361: CMP AL,0x77
// 00600363: JC 0x00600386
//   XREF to: 00600386 (CONDITIONAL_JUMP)
// 00600365: JBE 0x006005ef
//   XREF to: 006005ef (CONDITIONAL_JUMP)
// 0060036b: CMP AL,0x79
// 0060036d: JC 0x00600648
//   XREF to: 00600648 (CONDITIONAL_JUMP)
// 00600373: JBE 0x0060066a
//   XREF to: 0060066a (CONDITIONAL_JUMP)
// 00600379: CMP AL,0x7a
// 0060037b: JZ 0x006006a3
//   XREF to: 006006a3 (CONDITIONAL_JUMP)
// 00600381: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 00600386: CMP AL,0x72
//   Label: LAB_00600386
// 00600388: JC 0x0060039d
//   XREF to: 0060039d (CONDITIONAL_JUMP)
// 0060038a: JBE 0x0060057b
//   XREF to: 0060057b (CONDITIONAL_JUMP)
// 00600390: CMP AL,0x74
// 00600392: JZ 0x006005bb
//   XREF to: 006005bb (CONDITIONAL_JUMP)
// 00600398: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 0060039d: CMP AL,0x70
//   Label: LAB_0060039d
// 0060039f: JZ 0x0060058c
//   XREF to: 0060058c (CONDITIONAL_JUMP)
// 006003a5: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 006003aa: CMP AL,0x64
//   Label: LAB_006003aa
// 006003ac: JC 0x006003d8
//   XREF to: 006003d8 (CONDITIONAL_JUMP)
// 006003ae: JBE 0x006004c2
//   XREF to: 006004c2 (CONDITIONAL_JUMP)
// 006003b4: CMP AL,0x6a
// 006003b6: JC 0x006003cb
//   XREF to: 006003cb (CONDITIONAL_JUMP)
// 006003b8: JBE 0x00600526
//   XREF to: 00600526 (CONDITIONAL_JUMP)
// 006003be: CMP AL,0x6d
// 006003c0: JZ 0x00600544
//   XREF to: 00600544 (CONDITIONAL_JUMP)
// 006003c6: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 006003cb: CMP AL,0x68
//   Label: LAB_006003cb
// 006003cd: JZ 0x006004a2
//   XREF to: 006004a2 (CONDITIONAL_JUMP)
// 006003d3: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 006003d8: CMP AL,0x62
//   Label: LAB_006003d8
// 006003da: JBE 0x006004a2
//   XREF to: 006004a2 (CONDITIONAL_JUMP)
// 006003e0: MOV dword ptr [ESP + 0x8c],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 006003e7: MOV EBP,0x658bd0
//   XREF to: 00658bd0 (DATA)
// 006003ec: JMP 0x0060030a
//   XREF to: 0060030a (UNCONDITIONAL_JUMP)
// 006003f1: CMP AL,0x4d
//   Label: LAB_006003f1
// 006003f3: JC 0x00600444
//   XREF to: 00600444 (CONDITIONAL_JUMP)
// 006003f5: JBE 0x0060055b
//   XREF to: 0060055b (CONDITIONAL_JUMP)
// 006003fb: CMP AL,0x57
// 006003fd: JC 0x00600420
//   XREF to: 00600420 (CONDITIONAL_JUMP)
// 006003ff: JBE 0x00600602
//   XREF to: 00600602 (CONDITIONAL_JUMP)
// 00600405: CMP AL,0x59
// 00600407: JC 0x00600659
//   XREF to: 00600659 (CONDITIONAL_JUMP)
// 0060040d: JBE 0x00600689
//   XREF to: 00600689 (CONDITIONAL_JUMP)
// 00600413: CMP AL,0x5a
// 00600415: JZ 0x006006a3
//   XREF to: 006006a3 (CONDITIONAL_JUMP)
// 0060041b: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 00600420: CMP AL,0x54
//   Label: LAB_00600420
// 00600422: JC 0x00600437
//   XREF to: 00600437 (CONDITIONAL_JUMP)
// 00600424: JBE 0x00600659
//   XREF to: 00600659 (CONDITIONAL_JUMP)
// 0060042a: CMP AL,0x55
// 0060042c: JZ 0x006005c5
//   XREF to: 006005c5 (CONDITIONAL_JUMP)
// 00600432: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 00600437: CMP AL,0x53
//   Label: LAB_00600437
// 00600439: JZ 0x006005a6
//   XREF to: 006005a6 (CONDITIONAL_JUMP)
// 0060043f: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 00600444: CMP AL,0x42
//   Label: LAB_00600444
// 00600446: JC 0x0060046a
//   XREF to: 0060046a (CONDITIONAL_JUMP)
// 00600448: JBE 0x006004b3
//   XREF to: 006004b3 (CONDITIONAL_JUMP)
// 0060044a: CMP AL,0x48
// 0060044c: JC 0x00600461
//   XREF to: 00600461 (CONDITIONAL_JUMP)
// 0060044e: JBE 0x006004e9
//   XREF to: 006004e9 (CONDITIONAL_JUMP)
// 00600454: CMP AL,0x49
// 00600456: JZ 0x006004ff
//   XREF to: 006004ff (CONDITIONAL_JUMP)
// 0060045c: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 00600461: CMP AL,0x44
//   Label: LAB_00600461
// 00600463: JZ 0x006004d8
//   XREF to: 006004d8 (CONDITIONAL_JUMP)
// 00600465: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 0060046a: CMP AL,AH
//   Label: LAB_0060046a
// 0060046c: JC 0x006006b4
//   XREF to: 006006b4 (CONDITIONAL_JUMP)
// 00600472: JBE 0x006006b4
//   XREF to: 006006b4 (CONDITIONAL_JUMP)
// 00600478: CMP AL,0x41
// 0060047a: JZ 0x00600493
//   XREF to: 00600493 (CONDITIONAL_JUMP)
// 0060047c: JMP 0x006006b4
//   XREF to: 006006b4 (UNCONDITIONAL_JUMP)
// 00600481: MOV EAX,dword ptr [EBX + 0x18]
//   Label: LAB_00600481
// 00600484: MOV ESI,0x684b44
//   XREF to: 00684b44 (DATA)
// 00600489: SHL EAX,0x2
// 0060048c: ADD ESI,EAX
// 0060048e: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 00600493: MOV ESI,dword ptr [EBX + 0x18]
//   Label: LAB_00600493
// 00600496: MOV ESI,dword ptr [ESI*0x4 + 0x684b60]
//   XREF to: 00684b60 (DATA)
// 0060049d: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006004a2: MOV ESI,dword ptr [EBX + 0x10]
//   Label: LAB_006004a2
// 006004a5: SHL ESI,0x2
// 006004a8: ADD ESI,0x684b7c
//   XREF to: 00684b7c (DATA)
// 006004ae: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006004b3: MOV ESI,dword ptr [EBX + 0x10]
//   Label: LAB_006004b3
// 006004b6: MOV ESI,dword ptr [ESI*0x4 + 0x684bac]
//   XREF to: 00684bac (DATA)
// 006004bd: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006004c2: MOV EDI,dword ptr [EBX + 0xc]
//   Label: LAB_006004c2
// 006004c5: PUSH EDI
// 006004c6: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 006004ca: PUSH EAX
// 006004cb: CALL crt_stdio.c_formatTwoDigits_FUN_006002a0
//   XREF to: 006002a0 (UNCONDITIONAL_CALL)
// 006004d0: ADD ESP,0x8
// 006004d3: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006004d8: MOV dword ptr [ESP + 0x8c],EBP
//   Label: LAB_006004d8
//   XREF to: Stack[-0x14] (WRITE)
// 006004df: MOV EBP,0x658be8
//   XREF to: 00658be8 (DATA)
// 006004e4: JMP 0x0060030a
//   XREF to: 0060030a (UNCONDITIONAL_JUMP)
// 006004e9: MOV ECX,dword ptr [EBX + 0x8]
//   Label: LAB_006004e9
// 006004ec: PUSH ECX
// 006004ed: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 006004f1: PUSH EAX
// 006004f2: CALL crt_stdio.c_formatTwoDigits_FUN_006002a0
//   XREF to: 006002a0 (UNCONDITIONAL_CALL)
// 006004f7: ADD ESP,0x8
// 006004fa: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006004ff: MOV EAX,dword ptr [EBX + 0x8]
//   Label: LAB_006004ff
// 00600502: CMP EAX,0xc
// 00600505: JLE 0x0060050a
//   XREF to: 0060050a (CONDITIONAL_JUMP)
// 00600507: SUB EAX,0xc
// 0060050a: TEST EAX,EAX
//   Label: LAB_0060050a
// 0060050c: JNZ 0x00600513
//   XREF to: 00600513 (CONDITIONAL_JUMP)
// 0060050e: MOV EAX,0xc
// 00600513: PUSH EAX
//   Label: LAB_00600513
// 00600514: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 00600518: PUSH EAX
// 00600519: CALL crt_stdio.c_formatTwoDigits_FUN_006002a0
//   XREF to: 006002a0 (UNCONDITIONAL_CALL)
// 0060051e: ADD ESP,0x8
// 00600521: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 00600526: PUSH 0xa
//   Label: LAB_00600526
// 00600528: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0060052c: PUSH EAX
// 0060052d: MOV EAX,dword ptr [EBX + 0x1c]
// 00600530: ADD EAX,0x65
// 00600533: PUSH EAX
// 00600534: CALL crt_stdio.c_IntegerToString_FUN_00607d18
//   XREF to: 00607d18 (UNCONDITIONAL_CALL)
// 00600539: ADD ESP,0xc
// 0060053c: DEC byte ptr [ESP]
//   XREF to: Stack[-0xa0] (DATA)
// 0060053f: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 00600544: MOV EAX,dword ptr [EBX + 0x10]
//   Label: LAB_00600544
// 00600547: INC EAX
// 00600548: PUSH EAX
// 00600549: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0060054d: PUSH EAX
// 0060054e: CALL crt_stdio.c_formatTwoDigits_FUN_006002a0
//   XREF to: 006002a0 (UNCONDITIONAL_CALL)
// 00600553: ADD ESP,0x8
// 00600556: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 0060055b: MOV EDX,dword ptr [EBX + 0x4]
//   Label: LAB_0060055b
// 0060055e: PUSH EDX
// 0060055f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 00600563: PUSH EAX
// 00600564: CALL crt_stdio.c_formatTwoDigits_FUN_006002a0
//   XREF to: 006002a0 (UNCONDITIONAL_CALL)
// 00600569: ADD ESP,0x8
// 0060056c: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 00600571: MOV ESI,0x658bf4
//   Label: LAB_00600571
//   XREF to: 00658bf4 (DATA)
// 00600576: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 0060057b: MOV dword ptr [ESP + 0x8c],EBP
//   Label: LAB_0060057b
//   XREF to: Stack[-0x14] (WRITE)
// 00600582: MOV EBP,0x658bf8
//   XREF to: 00658bf8 (DATA)
// 00600587: JMP 0x0060030a
//   XREF to: 0060030a (UNCONDITIONAL_JUMP)
// 0060058c: CMP dword ptr [EBX + 0x8],0xc
//   Label: LAB_0060058c
// 00600590: JGE 0x0060059c
//   XREF to: 0060059c (CONDITIONAL_JUMP)
// 00600592: MOV ESI,0x658c04
//   XREF to: 00658c04 (DATA)
// 00600597: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 0060059c: MOV ESI,0x658c08
//   Label: LAB_0060059c
//   XREF to: 00658c08 (DATA)
// 006005a1: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006005a6: MOV EAX,dword ptr [EBX]
//   Label: LAB_006005a6
// 006005a8: PUSH EAX
// 006005a9: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 006005ad: PUSH EAX
// 006005ae: CALL crt_stdio.c_formatTwoDigits_FUN_006002a0
//   XREF to: 006002a0 (UNCONDITIONAL_CALL)
// 006005b3: ADD ESP,0x8
// 006005b6: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006005bb: MOV ESI,0x658c0c
//   Label: LAB_006005bb
//   XREF to: 00658c0c (DATA)
// 006005c0: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006005c5: MOV EDX,dword ptr [EBX + 0x1c]
//   Label: LAB_006005c5
// 006005c8: MOV EDI,dword ptr [EBX + 0x18]
// 006005cb: ADD EDX,0x7
// 006005ce: SUB EDX,EDI
// 006005d0: MOV ECX,0x7
// 006005d5: MOV EAX,EDX
// 006005d7: SAR EDX,0x1f
// 006005da: IDIV ECX
// 006005dc: PUSH EAX
// 006005dd: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 006005e1: PUSH EAX
// 006005e2: CALL crt_stdio.c_formatTwoDigits_FUN_006002a0
//   XREF to: 006002a0 (UNCONDITIONAL_CALL)
// 006005e7: ADD ESP,0x8
// 006005ea: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006005ef: MOV AL,byte ptr [EBX + 0x18]
//   Label: LAB_006005ef
// 006005f2: XOR DH,DH
// 006005f4: ADD AL,0x30
// 006005f6: MOV byte ptr [ESP + 0x1],DH
//   XREF to: Stack[-0x9f] (WRITE)
// 006005fa: MOV byte ptr [ESP],AL
//   XREF to: Stack[-0xa0] (DATA)
// 006005fd: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 00600602: MOV EAX,dword ptr [EBX + 0x1c]
//   Label: LAB_00600602
// 00600605: MOV EDX,EAX
// 00600607: MOV ECX,0x7
// 0060060c: SAR EDX,0x1f
// 0060060f: IDIV ECX
// 00600611: SUB EDX,dword ptr [EBX + 0x18]
// 00600614: ADD EDX,ECX
// 00600616: MOV EAX,EDX
// 00600618: SAR EDX,0x1f
// 0060061b: IDIV ECX
// 0060061d: MOV EAX,0x6
// 00600622: MOV ECX,dword ptr [EBX + 0x1c]
// 00600625: SUB EAX,EDX
// 00600627: ADD EAX,ECX
// 00600629: MOV EDX,EAX
// 0060062b: MOV ECX,0x7
// 00600630: SAR EDX,0x1f
// 00600633: IDIV ECX
// 00600635: PUSH EAX
// 00600636: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0060063a: PUSH EAX
// 0060063b: CALL crt_stdio.c_formatTwoDigits_FUN_006002a0
//   XREF to: 006002a0 (UNCONDITIONAL_CALL)
// 00600640: ADD ESP,0x8
// 00600643: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 00600648: MOV dword ptr [ESP + 0x8c],EBP
//   Label: LAB_00600648
//   XREF to: Stack[-0x14] (WRITE)
// 0060064f: MOV EBP,0x658c10
//   XREF to: 00658c10 (DATA)
// 00600654: JMP 0x0060030a
//   XREF to: 0060030a (UNCONDITIONAL_JUMP)
// 00600659: MOV dword ptr [ESP + 0x8c],EBP
//   Label: LAB_00600659
//   XREF to: Stack[-0x14] (WRITE)
// 00600660: MOV EBP,0x658c20
//   XREF to: 00658c20 (DATA)
// 00600665: JMP 0x0060030a
//   XREF to: 0060030a (UNCONDITIONAL_JUMP)
// 0060066a: MOV EAX,dword ptr [EBX + 0x14]
//   Label: LAB_0060066a
// 0060066d: MOV EDX,EAX
// 0060066f: MOV ECX,0x64
// 00600674: SAR EDX,0x1f
// 00600677: IDIV ECX
// 00600679: PUSH EDX
// 0060067a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0060067e: PUSH EAX
// 0060067f: CALL crt_stdio.c_formatTwoDigits_FUN_006002a0
//   XREF to: 006002a0 (UNCONDITIONAL_CALL)
// 00600684: ADD ESP,0x8
// 00600687: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 00600689: PUSH 0xa
//   Label: LAB_00600689
// 0060068b: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xa0] (DATA)
// 0060068f: PUSH EAX
// 00600690: MOV EAX,dword ptr [EBX + 0x14]
// 00600693: ADD EAX,0x76c
// 00600698: PUSH EAX
// 00600699: CALL crt_stdio.c_IntegerToString_FUN_00607d18
//   XREF to: 00607d18 (UNCONDITIONAL_CALL)
// 0060069e: ADD ESP,0xc
// 006006a1: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006006a3: CALL crt_time.c_tzset_FUN_006072f8
//   Label: LAB_006006a3
//   XREF to: 006072f8 (UNCONDITIONAL_CALL)
// 006006a8: MOV ESI,dword ptr [EBX + 0x20]
// 006006ab: MOV ESI,dword ptr [ESI*0x4 + 0x6851c0]
//   XREF to: 006851c0 (DATA)
// 006006b2: JMP 0x006006c0
//   XREF to: 006006c0 (UNCONDITIONAL_JUMP)
// 006006b4: MOV AL,byte ptr [EBP]
//   Label: LAB_006006b4
// 006006b7: XOR CH,CH
// 006006b9: MOV byte ptr [ESP],AL
//   XREF to: Stack[-0xa0] (DATA)
// 006006bc: MOV byte ptr [ESP + 0x1],CH
//   XREF to: Stack[-0x9f] (WRITE)
// 006006c0: MOV EDI,ESI
//   Label: LAB_006006c0
// 006006c2: INC EBP
// 006006c3: PUSH ES
// 006006c4: MOV AX,DS
// 006006c6: MOV ES,AX
// 006006c8: SUB ECX,ECX
// 006006ca: DEC ECX
// 006006cb: XOR EAX,EAX
// 006006cd: SCASB.REPNE ES:EDI
//   XREF to: 00658bf4 (READ)
//   XREF to: 00658c04 (READ)
//   XREF to: 00658c08 (READ)
//   XREF to: 00658c0c (READ)
//   XREF to: 00684b44 (DATA)
//   XREF to: 00684b7c (DATA)
// 006006cf: NOT ECX
// 006006d1: DEC ECX
// 006006d2: POP ES
// 006006d3: MOV EDI,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 006006da: MOV EDX,ECX
// 006006dc: CMP ECX,EDI
// 006006de: JBE 0x006006e2
//   XREF to: 006006e2 (CONDITIONAL_JUMP)
// 006006e0: MOV EDX,EDI
// 006006e2: MOV EDI,dword ptr [ESP + 0xa4]
//   Label: LAB_006006e2
//   XREF to: Stack[0x4] (READ)
// 006006e9: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 006006f0: MOV ECX,EDX
// 006006f2: ADD EDI,EAX
// 006006f4: PUSH ES
// 006006f5: MOV AX,DS
// 006006f7: MOV ES,AX
// 006006f9: PUSH EDI
// 006006fa: MOV EAX,ECX
// 006006fc: SHR ECX,0x2
// 006006ff: MOVSD.REP ES:EDI,ESI
// 00600701: MOV CL,AL
// 00600703: AND CL,0x3
// 00600706: MOVSB.REP ES:EDI,ESI
// 00600708: POP EDI
// 00600709: POP ES
// 0060070a: MOV ECX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0x18] (READ)
// 00600711: MOV ESI,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 00600718: SUB ECX,EDX
// 0060071a: ADD ESI,EDX
// 0060071c: MOV dword ptr [ESP + 0x88],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00600723: MOV dword ptr [ESP + 0x84],ESI
//   XREF to: Stack[-0x1c] (WRITE)
// 0060072a: JMP 0x0060030a
//   XREF to: 0060030a (UNCONDITIONAL_JUMP)
// 0060072f: MOV EAX,dword ptr [ESP + 0x84]
//   Label: LAB_0060072f
//   XREF to: Stack[-0x1c] (READ)
// 00600736: CMP EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[0x8] (READ)
// 0060073d: JNC 0x00600756
//   XREF to: 00600756 (CONDITIONAL_JUMP)
// 0060073f: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[0x4] (READ)
// 00600746: MOV EBX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0x1c] (READ)
// 0060074d: ADD EAX,EBX
// 0060074f: MOV byte ptr [EAX],0x0
// 00600752: MOV EAX,EBX
// 00600754: JMP 0x00600758
//   XREF to: 00600758 (UNCONDITIONAL_JUMP)
// 00600756: XOR EAX,EAX
//   Label: LAB_00600756
// 00600758: ADD ESP,0x90
//   Label: LAB_00600758
// 0060075e: POP EBP
// 0060075f: POP EDI
// 00600760: POP ESI
// 00600761: POP EBX
// 00600762: RET
