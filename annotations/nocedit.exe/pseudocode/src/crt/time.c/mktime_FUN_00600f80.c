// Name: crt_time.c_mktime_FUN_00600f80
// Address: 00600f80
// Address Range: [[00600f80, 00601132]]
// Convention: __cdecl
// Signature: time_t crt_time.c_mktime_FUN_00600f80(tm * timeptr)
// Cross-references:
//   crt_time.c_dos_datetime_to_time_t_FUN_0060c1e0 (0060c1e0) at 0060c245 [UNCONDITIONAL_CALL]
//   crt_time.c_filetime_to_time_t_FUN_00609da0 (00609da0) at 00609e59 [UNCONDITIONAL_CALL]
//   crt_time.c_time_with_rounding_FUN_006001f0 (006001f0) at 00600210 [UNCONDITIONAL_CALL]
//   crt_unknown.c_FUN_00607858 (00607858) at 006078d9 [UNCONDITIONAL_CALL]
//   engine_dosio.c_CFileFinder_convertStruct_FUN_00481dc0 (00481dc0) at 00481f00 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd3ab [UNCONDITIONAL_CALL]
// Globals:
//   short g_DaysInMonth_Normal = 0x0
//   short g_DaysInMonth_Leap = 0x0
//   int g_TimezoneOffset = 0x4650
//   int g_DaylightSavingOffset = 0xe10
// Function calls:
//   crt_time.c_determine_dst_status_FUN_006079b4
//   crt_time.c_gmtime_r_FUN_00607690
//   crt_time.c_is_leap_year_FUN_00607820
//   crt_time.c_tzset_FUN_006072f8

#include "nocturne.h"

time_t __cdecl crt_time_c_mktime_FUN_00600f80(tm *timeptr)

{
  time_t tVar1;
  int iVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  
  iVar3 = timeptr->tm_mon % 0xc;
  psVar4 = &g_DaysInMonth_Normal;
  if (timeptr->tm_year < -0xb04815f) {
    tVar1 = -1;
  }
  else {
    iVar5 = timeptr->tm_year + timeptr->tm_mon / 0xc;
    for (; iVar3 < 0; iVar3 = iVar3 + 0xc) {
      iVar5 = iVar5 + -1;
    }
    if (iVar5 < 0) {
      return -1;
    }
    iVar2 = crt_time_c_is_leap_year_FUN_00607820(iVar5 + 0x76c);
    if (iVar2 != 0) {
      psVar4 = &g_DaysInMonth_Leap;
    }
    iVar2 = iVar5 + 3 >> 0x1f;
    iVar3 = (int)psVar4[iVar3] +
            ((iVar5 * 0x16d + ((int)((iVar5 + 3 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2)) -
            (iVar5 + 99) / 100) + (iVar5 + 299) / 400 + timeptr->tm_mday;
    for (iVar5 = timeptr->tm_sec + (timeptr->tm_min + timeptr->tm_hour * 0x3c) * 0x3c;
        iVar3 = iVar3 + -1, iVar5 < 0; iVar5 = iVar5 + 0x15180) {
    }
    crt_time_c_gmtime_r_FUN_00607690(iVar3,iVar5,0,timeptr);
    crt_time_c_tzset_FUN_006072f8();
    iVar5 = iVar5 + g_TimezoneOffset;
    if (timeptr->tm_isdst < 0) {
      crt_time_c_determine_dst_status_FUN_006079b4(timeptr);
    }
    if (0 < timeptr->tm_isdst) {
      iVar5 = iVar5 - g_DaylightSavingOffset;
    }
    for (; iVar5 < 0; iVar5 = iVar5 + 0x15180) {
      iVar3 = iVar3 + -1;
    }
    if (iVar3 < 0x63de) {
      return -1;
    }
    if (iVar3 == 0x63de) {
      tVar1 = iVar5 + -0x15180;
      if ((g_TimezoneOffset < 1) || (tVar1 < 0)) {
        return -1;
      }
    }
    else {
      tVar1 = iVar5 + (iVar3 + -0x63df) * 0x15180;
    }
  }
  return tVar1;
}


// Assembly code:
// 00600f80: PUSH EBX
//   Label: crt_time.c_mktime_FUN_00600f80
// 00600f81: PUSH ESI
// 00600f82: PUSH EDI
// 00600f83: PUSH EBP
// 00600f84: SUB ESP,0x4
// 00600f87: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00600f8b: MOV EAX,dword ptr [EDI + 0x10]
// 00600f8e: MOV EDX,EAX
// 00600f90: MOV EBX,0xc
// 00600f95: SAR EDX,0x1f
// 00600f98: IDIV EBX
// 00600f9a: MOV EBP,0x665f38
//   XREF to: 00665f38 (DATA)
// 00600f9f: MOV ESI,dword ptr [EDI + 0x14]
// 00600fa2: MOV EBX,EDX
// 00600fa4: CMP ESI,0xf4fb7ea1
// 00600faa: JGE 0x00600fb6
//   XREF to: 00600fb6 (CONDITIONAL_JUMP)
// 00600fac: MOV EAX,0xffffffff
// 00600fb1: JMP 0x0060112b
//   XREF to: 0060112b (UNCONDITIONAL_JUMP)
// 00600fb6: MOV EAX,dword ptr [EDI + 0x10]
//   Label: LAB_00600fb6
// 00600fb9: MOV EDX,EAX
// 00600fbb: MOV ECX,0xc
// 00600fc0: SAR EDX,0x1f
// 00600fc3: IDIV ECX
// 00600fc5: ADD ESI,EAX
// 00600fc7: TEST EBX,EBX
// 00600fc9: JGE 0x00600fd3
//   XREF to: 00600fd3 (CONDITIONAL_JUMP)
// 00600fcb: ADD EBX,0xc
//   Label: LAB_00600fcb
// 00600fce: DEC ESI
// 00600fcf: TEST EBX,EBX
// 00600fd1: JL 0x00600fcb
//   XREF to: 00600fcb (CONDITIONAL_JUMP)
// 00600fd3: TEST ESI,ESI
//   Label: LAB_00600fd3
// 00600fd5: JGE 0x00600fe4
//   XREF to: 00600fe4 (CONDITIONAL_JUMP)
// 00600fd7: MOV EAX,0xffffffff
// 00600fdc: ADD ESP,0x4
// 00600fdf: POP EBP
// 00600fe0: POP EDI
// 00600fe1: POP ESI
// 00600fe2: POP EBX
// 00600fe3: RET
// 00600fe4: LEA EAX,[ESI + 0x76c]
//   Label: LAB_00600fe4
// 00600fea: PUSH EAX
// 00600feb: CALL crt_time.c_is_leap_year_FUN_00607820
//   XREF to: 00607820 (UNCONDITIONAL_CALL)
// 00600ff0: ADD ESP,0x4
// 00600ff3: TEST EAX,EAX
// 00600ff5: JZ 0x00600ffc
//   XREF to: 00600ffc (CONDITIONAL_JUMP)
// 00600ff7: MOV EBP,0x665f52
//   XREF to: 00665f52 (DATA)
// 00600ffc: LEA EDX,[ESI + 0x3]
//   Label: LAB_00600ffc
// 00600fff: MOV EAX,EDX
// 00601001: SAR EDX,0x1f
// 00601004: SHL EDX,0x2
// 00601007: SBB EAX,EDX
// 00601009: SAR EAX,0x2
// 0060100c: MOV ECX,EAX
// 0060100e: LEA EAX,[ESI*0x8 + 0x0]
// 00601015: ADD EAX,ESI
// 00601017: SHL EAX,0x3
// 0060101a: ADD EAX,ESI
// 0060101c: MOV EDX,EAX
// 0060101e: SHL EAX,0x2
// 00601021: ADD EAX,EDX
// 00601023: LEA EDX,[ESI + 0x63]
// 00601026: ADD EAX,ECX
// 00601028: MOV ECX,0x64
// 0060102d: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00601030: MOV EAX,EDX
// 00601032: SAR EDX,0x1f
// 00601035: IDIV ECX
// 00601037: LEA EDX,[ESI + 0x12b]
// 0060103d: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00601040: MOV ESI,0x190
// 00601045: SUB ECX,EAX
// 00601047: MOV EAX,EDX
// 00601049: SAR EDX,0x1f
// 0060104c: IDIV ESI
// 0060104e: ADD ECX,EAX
// 00601050: MOVSX EAX,word ptr [EBP + EBX*0x2]
//   XREF to: 00665f38 (DATA)
//   XREF to: 00665f52 (DATA)
// 00601055: MOV EDX,dword ptr [EDI + 0xc]
// 00601058: ADD EAX,ECX
// 0060105a: ADD EAX,EDX
// 0060105c: LEA ESI,[EAX + -0x1]
// 0060105f: MOV EDX,dword ptr [EDI + 0x8]
// 00601062: MOV EAX,EDX
// 00601064: SHL EAX,0x4
// 00601067: SUB EAX,EDX
// 00601069: SHL EAX,0x2
// 0060106c: MOV EDX,dword ptr [EDI + 0x4]
// 0060106f: ADD EDX,EAX
// 00601071: MOV EAX,EDX
// 00601073: SHL EAX,0x4
// 00601076: SUB EAX,EDX
// 00601078: MOV EBX,dword ptr [EDI]
// 0060107a: SHL EAX,0x2
// 0060107d: ADD EBX,EAX
// 0060107f: TEST EBX,EBX
// 00601081: JGE 0x0060108e
//   XREF to: 0060108e (CONDITIONAL_JUMP)
// 00601083: ADD EBX,0x15180
//   Label: LAB_00601083
// 00601089: DEC ESI
// 0060108a: TEST EBX,EBX
// 0060108c: JL 0x00601083
//   XREF to: 00601083 (CONDITIONAL_JUMP)
// 0060108e: PUSH EDI
//   Label: LAB_0060108e
// 0060108f: PUSH 0x0
// 00601091: PUSH EBX
// 00601092: PUSH ESI
// 00601093: CALL crt_time.c_gmtime_r_FUN_00607690
//   XREF to: 00607690 (UNCONDITIONAL_CALL)
// 00601098: ADD ESP,0x10
// 0060109b: CALL crt_time.c_tzset_FUN_006072f8
//   XREF to: 006072f8 (UNCONDITIONAL_CALL)
// 006010a0: MOV ECX,dword ptr [0x006851c8]
//   XREF to: 006851c8 (READ)
// 006010a6: MOV EBP,dword ptr [EDI + 0x20]
// 006010a9: ADD EBX,ECX
// 006010ab: TEST EBP,EBP
// 006010ad: JGE 0x006010b8
//   XREF to: 006010b8 (CONDITIONAL_JUMP)
// 006010af: PUSH EDI
// 006010b0: CALL crt_time.c_determine_dst_status_FUN_006079b4
//   XREF to: 006079b4 (UNCONDITIONAL_CALL)
// 006010b5: ADD ESP,0x4
// 006010b8: CMP dword ptr [EDI + 0x20],0x0
//   Label: LAB_006010b8
// 006010bc: JLE 0x006010c4
//   XREF to: 006010c4 (CONDITIONAL_JUMP)
// 006010be: SUB EBX,dword ptr [0x006851d0]
//   XREF to: 006851d0 (READ)
// 006010c4: TEST EBX,EBX
//   Label: LAB_006010c4
// 006010c6: JGE 0x006010d1
//   XREF to: 006010d1 (CONDITIONAL_JUMP)
// 006010c8: DEC ESI
// 006010c9: ADD EBX,0x15180
// 006010cf: JMP 0x006010c4
//   XREF to: 006010c4 (UNCONDITIONAL_JUMP)
// 006010d1: CMP ESI,0x63de
//   Label: LAB_006010d1
// 006010d7: JGE 0x006010e6
//   XREF to: 006010e6 (CONDITIONAL_JUMP)
// 006010d9: MOV EAX,0xffffffff
// 006010de: ADD ESP,0x4
// 006010e1: POP EBP
// 006010e2: POP EDI
// 006010e3: POP ESI
// 006010e4: POP EBX
// 006010e5: RET
// 006010e6: JNZ 0x00601109
//   Label: LAB_006010e6
//   XREF to: 00601109 (CONDITIONAL_JUMP)
// 006010e8: MOV ECX,dword ptr [0x006851c8]
//   XREF to: 006851c8 (READ)
// 006010ee: SUB EBX,0x15180
// 006010f4: TEST ECX,ECX
// 006010f6: JLE 0x006010fc
//   XREF to: 006010fc (CONDITIONAL_JUMP)
// 006010f8: TEST EBX,EBX
// 006010fa: JGE 0x00601129
//   XREF to: 00601129 (CONDITIONAL_JUMP)
// 006010fc: MOV EAX,0xffffffff
//   Label: LAB_006010fc
// 00601101: ADD ESP,0x4
// 00601104: POP EBP
// 00601105: POP EDI
// 00601106: POP ESI
// 00601107: POP EBX
// 00601108: RET
// 00601109: LEA EAX,[ESI + 0xffff9c21]
//   Label: LAB_00601109
// 0060110f: LEA ESI,[EAX*0x8 + 0x0]
// 00601116: SUB ESI,EAX
// 00601118: SHL ESI,0x5
// 0060111b: ADD ESI,EAX
// 0060111d: SHL ESI,0x7
// 00601120: MOV EAX,ESI
// 00601122: SHL ESI,0x2
// 00601125: SUB ESI,EAX
// 00601127: ADD EBX,ESI
// 00601129: MOV EAX,EBX
//   Label: LAB_00601129
// 0060112b: ADD ESP,0x4
//   Label: LAB_0060112b
// 0060112e: POP EBP
// 0060112f: POP EDI
// 00601130: POP ESI
// 00601131: POP EBX
// 00601132: RET
