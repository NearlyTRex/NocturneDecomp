// Name: crt_time.c_determine_dst_status_FUN_006079b4
// Address: 006079b4
// Address Range: [[006079b4, 00607c87]]
// Convention: __cdecl
// Signature: int crt_time.c_determine_dst_status_FUN_006079b4(tm * timeptr)
// Cross-references:
//   crt_time.c_localtime_r_FUN_00600230 (00600230) at 00600258 [UNCONDITIONAL_CALL]
//   crt_time.c_mktime_FUN_00600f80 (00600f80) at 006010b0 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00665f34+2
//   short g_DaysInMonth_Normal = 0x0
//   undefined4 DAT_00665f3a
//   undefined4 DAT_00665f50
//   short g_DaysInMonth_Leap = 0x0
//   dst_rule g_DstStartRule
//   undefined4 DAT_00685080
//   undefined4 DAT_00685084
//   undefined4 DAT_0068508c
//   undefined4 DAT_00685090
//   undefined4 DAT_00685094
//   int g_DstTransitionSecond = 0x0
//   undefined4 DAT_006850a4
//   undefined4 DAT_006850a8
//   undefined4 DAT_006850b0
//   undefined4 DAT_006850b4
//   undefined4 DAT_006850b8
//   TerminatedCString s_EDT_0068513d
//   void* PTR_s_EDT_006851c4 = 0068513d
// Function calls:
//   crt_time.c_is_leap_year_FUN_00607820
//   crt_unknown.c_FUN_00607958
//   crt_unknown.c_FUN_00607c88

#include "nocturne.h"

int __cdecl crt_time_c_determine_dst_status_FUN_006079b4(tm *timeptr)

{
  int iVar1;
  int iVar2;
  int unaff_EBP;
  int *piVar3;
  int iVar4;
  int unaff_ESI;
  uint uVar5;
  uint unaff_EDI;
  dst_rule *pdVar6;
  int local_1c;
  
                    /* WARNING: Load size is inaccurate */
  uVar5 = 0;
  if (*PTR_s_EDT_006851c4 == '\0') goto LAB_00607c7b;
  iVar1 = crt_unknown_c_FUN_00607958();
  if (iVar1 == 0) {
    piVar3 = &g_DstStartRule.seconds;
    pdVar6 = (dst_rule *)&g_DstTransitionSecond;
  }
  else {
    piVar3 = &g_DstTransitionSecond;
    pdVar6 = &g_DstStartRule;
  }
  iVar1 = crt_time_c_is_leap_year_FUN_00607820(timeptr->tm_year + 0x76c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(&g_DaysInMonth_Normal + unaff_EBP);
    iVar4 = *(int *)((int)&g_PositiveInfinity + unaff_EBP * 2 + 6);
  }
  else {
    iVar1 = *(int *)(&g_DaysInMonth_Leap + unaff_EBP);
    iVar4 = *(int *)(&DAT_00665f50 + unaff_EBP * 2);
  }
  if (((dst_rule *)((int)piVar3 + 0x20))->seconds == 0) {
    if (((dst_rule *)piVar3)->month < unaff_EBP) {
      uVar5 = 1;
      goto LAB_00607b4e;
    }
    if (unaff_EBP != ((dst_rule *)piVar3)->month) goto LAB_00607b4e;
    local_1c = timeptr->tm_mday - ((timeptr->tm_wday + 7) - ((dst_rule *)piVar3)->day_of_year) % 7;
    iVar2 = (timeptr->tm_mday + -1) -
            ((timeptr->tm_wday + 6) - ((dst_rule *)piVar3)->day_of_year) % 7;
    if (((dst_rule *)piVar3)->day == 5) {
      iVar1 = ((iVar1 >> 0x10) - (iVar4 >> 0x10)) + -7;
      if ((local_1c <= iVar1) || (uVar5 = 1, iVar1 < iVar2)) goto LAB_00607b4e;
    }
    else {
      iVar1 = (((dst_rule *)piVar3)->day + -1) * 7 + 1;
      if ((local_1c < iVar1) || (uVar5 = 1, iVar1 <= iVar2)) goto LAB_00607b4e;
    }
LAB_00607b55:
    iVar1 = crt_unknown_c_FUN_00607c88();
    uVar5 = (uint)(iVar1 == 0);
  }
  else {
    unaff_EDI = ((dst_rule *)piVar3)->rule_type;
    if (((dst_rule *)((int)piVar3 + 0x20))->seconds == 1) {
      iVar1 = crt_time_c_is_leap_year_FUN_00607820(timeptr->tm_year + 0x76c);
      if ((iVar1 != 0) && (DAT_00665f3a >> 0x10 < unaff_ESI)) {
        unaff_ESI = unaff_ESI + 1;
      }
      unaff_ESI = unaff_ESI + -1;
    }
    if ((unaff_ESI <= timeptr->tm_yday) && (uVar5 = 1, timeptr->tm_yday == unaff_ESI))
    goto LAB_00607b55;
LAB_00607b4e:
    if (local_1c != 0) goto LAB_00607b55;
  }
  if (uVar5 == 0) {
    if (unaff_EDI != 0) {
      uVar5 = unaff_EDI;
    }
    goto LAB_00607c7b;
  }
  if (pdVar6[1].seconds == 0) {
    if (pdVar6->month < unaff_ESI) {
      uVar5 = 0;
    }
    else if (unaff_ESI == pdVar6->month) {
      iVar4 = timeptr->tm_mday - ((timeptr->tm_wday + 7) - pdVar6->day_of_year) % 7;
      uVar5 = 0;
      iVar1 = (timeptr->tm_mday + -1) - ((timeptr->tm_wday + 6) - pdVar6->day_of_year) % 7;
      if (pdVar6->day == 5) {
        if (unaff_EBP + -7 < iVar4) {
          if (iVar1 <= unaff_EBP + -7) {
LAB_00607c63:
            uVar5 = crt_unknown_c_FUN_00607c88();
          }
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        iVar2 = (pdVar6->day + -1) * 7 + 1;
        if (iVar4 < iVar2) {
          uVar5 = 1;
        }
        else if (iVar1 < iVar2) goto LAB_00607c63;
      }
    }
  }
  else {
    iVar1 = pdVar6->rule_type;
    if (pdVar6[1].seconds == 1) {
      iVar4 = crt_time_c_is_leap_year_FUN_00607820(timeptr->tm_year + 0x76c);
      if ((iVar4 != 0) && (DAT_00665f3a >> 0x10 < iVar1)) {
        iVar1 = iVar1 + 1;
      }
      iVar1 = iVar1 + -1;
    }
    if ((iVar1 <= timeptr->tm_yday) && (uVar5 = 0, iVar1 == timeptr->tm_yday)) goto LAB_00607c63;
  }
  if (unaff_ESI != 0) {
    uVar5 = unaff_ESI - uVar5;
  }
LAB_00607c7b:
  timeptr->tm_isdst = uVar5;
  return uVar5;
}


// Assembly code:
// 006079b4: PUSH EBX
//   Label: crt_time.c_determine_dst_status_FUN_006079b4
// 006079b5: PUSH ESI
// 006079b6: PUSH EDI
// 006079b7: PUSH EBP
// 006079b8: SUB ESP,0x1c
// 006079bb: MOV EBX,dword ptr [ESP + 0x30]
//   XREF to: Stack[0x4] (READ)
// 006079bf: MOV EAX,[0x006851c4]
//   XREF to: 0068513d (PARAM)
//   XREF to: 006851c4 (READ)
// 006079c4: MOV DL,byte ptr [EAX]
//   XREF to: 0068513d (READ)
// 006079c6: XOR ESI,ESI
// 006079c8: TEST DL,DL
// 006079ca: JZ 0x00607c7b
//   XREF to: 00607c7b (CONDITIONAL_JUMP)
// 006079d0: MOV EDX,dword ptr [EBX + 0x14]
// 006079d3: PUSH EDX
// 006079d4: PUSH 0x685098
//   XREF to: 00685098 (DATA)
// 006079d9: PUSH 0x685074
//   XREF to: 00685074 (DATA)
// 006079de: CALL crt_unknown.c_FUN_00607958
//   XREF to: 00607958 (UNCONDITIONAL_CALL)
// 006079e3: ADD ESP,0xc
// 006079e6: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 006079ea: TEST EAX,EAX
// 006079ec: JZ 0x006079fa
//   XREF to: 006079fa (CONDITIONAL_JUMP)
// 006079ee: MOV EBP,0x685098
//   XREF to: 00685098 (DATA)
// 006079f3: MOV EDI,0x685074
//   XREF to: 00685074 (DATA)
// 006079f8: JMP 0x00607a04
//   XREF to: 00607a04 (UNCONDITIONAL_JUMP)
// 006079fa: MOV EBP,0x685074
//   Label: LAB_006079fa
//   XREF to: 00685074 (DATA)
// 006079ff: MOV EDI,0x685098
//   XREF to: 00685098 (DATA)
// 00607a04: MOV EAX,dword ptr [EBX + 0x10]
//   Label: LAB_00607a04
// 00607a07: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00607a0b: MOV EAX,dword ptr [EBX + 0x14]
// 00607a0e: ADD EAX,0x76c
// 00607a13: PUSH EAX
// 00607a14: CALL crt_time.c_is_leap_year_FUN_00607820
//   XREF to: 00607820 (UNCONDITIONAL_CALL)
// 00607a19: ADD ESP,0x4
// 00607a1c: MOV EDX,EAX
// 00607a1e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00607a22: ADD EAX,EAX
// 00607a24: TEST EDX,EDX
// 00607a26: JZ 0x00607a36
//   XREF to: 00607a36 (CONDITIONAL_JUMP)
// 00607a28: MOV EDX,dword ptr [EAX + 0x665f52]
//   XREF to: 00665f52 (DATA)
// 00607a2e: MOV EAX,dword ptr [EAX + 0x665f50]
//   XREF to: 00665f50 (DATA)
// 00607a34: JMP 0x00607a42
//   XREF to: 00607a42 (UNCONDITIONAL_JUMP)
// 00607a36: MOV EDX,dword ptr [EAX + 0x665f38]
//   Label: LAB_00607a36
//   XREF to: 00665f38 (DATA)
// 00607a3c: MOV EAX,dword ptr [EAX + 0x665f36]
//   XREF to: 00665f36 (DATA)
// 00607a42: SAR EDX,0x10
//   Label: LAB_00607a42
// 00607a45: SAR EAX,0x10
// 00607a48: SUB EDX,EAX
// 00607a4a: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 00607a4e: XOR ECX,ECX
// 00607a50: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: 006850b8 (READ)
// 00607a53: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00607a57: TEST EAX,EAX
// 00607a59: JNZ 0x00607afd
//   XREF to: 00607afd (CONDITIONAL_JUMP)
// 00607a5f: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00607a63: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: 006850a8 (READ)
// 00607a66: CMP EAX,ECX
// 00607a68: JLE 0x00607a74
//   XREF to: 00607a74 (CONDITIONAL_JUMP)
// 00607a6a: MOV ESI,0x1
// 00607a6f: JMP 0x00607b4e
//   XREF to: 00607b4e (UNCONDITIONAL_JUMP)
// 00607a74: JNZ 0x00607b4e
//   Label: LAB_00607a74
//   XREF to: 00607b4e (CONDITIONAL_JUMP)
// 00607a7a: MOV EDX,dword ptr [EBX + 0x18]
// 00607a7d: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: 006850b0 (READ)
// 00607a80: ADD EDX,0x7
// 00607a83: SUB EDX,ECX
// 00607a85: MOV ECX,0x7
// 00607a8a: MOV EAX,EDX
// 00607a8c: SAR EDX,0x1f
// 00607a8f: IDIV ECX
// 00607a91: MOV EAX,dword ptr [EBX + 0xc]
// 00607a94: SUB EAX,EDX
// 00607a96: MOV EDX,dword ptr [EBX + 0x18]
// 00607a99: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00607a9d: ADD EDX,0x6
// 00607aa0: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: 006850b0 (READ)
// 00607aa3: SUB EDX,EAX
// 00607aa5: MOV EAX,EDX
// 00607aa7: SAR EDX,0x1f
// 00607aaa: IDIV ECX
// 00607aac: MOV ECX,dword ptr [EBX + 0xc]
// 00607aaf: DEC ECX
// 00607ab0: SUB ECX,EDX
// 00607ab2: MOV EDX,dword ptr [EBP + 0xc]
//   XREF to: 006850a4 (READ)
// 00607ab5: CMP EDX,0x5
// 00607ab8: JNZ 0x00607adf
//   XREF to: 00607adf (CONDITIONAL_JUMP)
// 00607aba: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00607abe: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 00607ac2: SUB EAX,0x7
// 00607ac5: CMP EAX,EDX
// 00607ac7: JGE 0x00607b4e
//   XREF to: 00607b4e (CONDITIONAL_JUMP)
// 00607acd: MOV ESI,0x1
// 00607ad2: CMP ECX,EAX
// 00607ad4: JG 0x00607b4e
//   XREF to: 00607b4e (CONDITIONAL_JUMP)
// 00607ada: JMP 0x00607b55
//   XREF to: 00607b55 (UNCONDITIONAL_JUMP)
// 00607adf: DEC EDX
//   Label: LAB_00607adf
// 00607ae0: LEA EAX,[EDX*0x8 + 0x0]
// 00607ae7: SUB EAX,EDX
// 00607ae9: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x24] (READ)
// 00607aed: INC EAX
// 00607aee: CMP EAX,EDX
// 00607af0: JG 0x00607b4e
//   XREF to: 00607b4e (CONDITIONAL_JUMP)
// 00607af2: MOV ESI,0x1
// 00607af7: CMP ECX,EAX
// 00607af9: JGE 0x00607b4e
//   XREF to: 00607b4e (CONDITIONAL_JUMP)
// 00607afb: JMP 0x00607b55
//   XREF to: 00607b55 (UNCONDITIONAL_JUMP)
// 00607afd: MOV EAX,dword ptr [EBP + 0x1c]
//   Label: LAB_00607afd
//   XREF to: 006850b4 (READ)
// 00607b00: MOV EDX,dword ptr [EBP + 0x20]
//   XREF to: 006850b8 (READ)
// 00607b03: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00607b07: CMP EDX,0x1
// 00607b0a: JNZ 0x00607b3c
//   XREF to: 00607b3c (CONDITIONAL_JUMP)
// 00607b0c: MOV EAX,dword ptr [EBX + 0x14]
// 00607b0f: ADD EAX,0x76c
// 00607b14: PUSH EAX
// 00607b15: CALL crt_time.c_is_leap_year_FUN_00607820
//   XREF to: 00607820 (UNCONDITIONAL_CALL)
// 00607b1a: ADD ESP,0x4
// 00607b1d: TEST EAX,EAX
// 00607b1f: JZ 0x00607b38
//   XREF to: 00607b38 (CONDITIONAL_JUMP)
// 00607b21: MOV EAX,[0x00665f3a]
//   XREF to: 00665f3a (READ)
// 00607b26: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x14] (READ)
// 00607b2a: SAR EAX,0x10
// 00607b2d: CMP EAX,ECX
// 00607b2f: JGE 0x00607b38
//   XREF to: 00607b38 (CONDITIONAL_JUMP)
// 00607b31: LEA EAX,[ECX + 0x1]
// 00607b34: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00607b38: DEC dword ptr [ESP + 0x18]
//   Label: LAB_00607b38
//   XREF to: Stack[-0x14] (READ_WRITE)
// 00607b3c: MOV ECX,dword ptr [ESP + 0x18]
//   Label: LAB_00607b3c
//   XREF to: Stack[-0x14] (READ)
// 00607b40: MOV EAX,dword ptr [EBX + 0x1c]
// 00607b43: CMP EAX,ECX
// 00607b45: JL 0x00607b4e
//   XREF to: 00607b4e (CONDITIONAL_JUMP)
// 00607b47: MOV ESI,0x1
// 00607b4c: JZ 0x00607b55
//   XREF to: 00607b55 (CONDITIONAL_JUMP)
// 00607b4e: CMP dword ptr [ESP + 0x4],0x0
//   Label: LAB_00607b4e
//   XREF to: Stack[-0x28] (READ)
// 00607b53: JZ 0x00607b6c
//   XREF to: 00607b6c (CONDITIONAL_JUMP)
// 00607b55: PUSH EBP
//   Label: LAB_00607b55
//   XREF to: 00685098 (DATA)
// 00607b56: PUSH EBX
// 00607b57: CALL crt_unknown.c_FUN_00607c88
//   XREF to: 00607c88 (UNCONDITIONAL_CALL)
// 00607b5c: ADD ESP,0x8
// 00607b5f: TEST EAX,EAX
// 00607b61: SETZ AL
// 00607b64: MOV ESI,EAX
// 00607b66: AND ESI,0xff
// 00607b6c: TEST ESI,ESI
//   Label: LAB_00607b6c
// 00607b6e: JNZ 0x00607b83
//   XREF to: 00607b83 (CONDITIONAL_JUMP)
// 00607b70: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 00607b74: TEST EDX,EDX
// 00607b76: JZ 0x00607c7b
//   XREF to: 00607c7b (CONDITIONAL_JUMP)
// 00607b7c: MOV ESI,EDX
// 00607b7e: JMP 0x00607c7b
//   XREF to: 00607c7b (UNCONDITIONAL_JUMP)
// 00607b83: XOR EBP,EBP
//   Label: LAB_00607b83
// 00607b85: MOV EAX,dword ptr [EDI + 0x20]
//   XREF to: 00685094 (READ)
// 00607b88: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x2c] (DATA)
// 00607b8b: TEST EAX,EAX
// 00607b8d: JNZ 0x00607c25
//   XREF to: 00607c25 (CONDITIONAL_JUMP)
// 00607b93: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x18] (READ)
// 00607b97: MOV EDX,dword ptr [EDI + 0x10]
//   XREF to: 00685084 (READ)
// 00607b9a: CMP EAX,EDX
// 00607b9c: JLE 0x00607ba5
//   XREF to: 00607ba5 (CONDITIONAL_JUMP)
// 00607b9e: XOR ESI,ESI
// 00607ba0: JMP 0x00607c5d
//   XREF to: 00607c5d (UNCONDITIONAL_JUMP)
// 00607ba5: JNZ 0x00607c5d
//   Label: LAB_00607ba5
//   XREF to: 00607c5d (CONDITIONAL_JUMP)
// 00607bab: MOV EDX,dword ptr [EBX + 0x18]
// 00607bae: MOV EBP,dword ptr [EDI + 0x18]
//   XREF to: 0068508c (READ)
// 00607bb1: ADD EDX,0x7
// 00607bb4: SUB EDX,EBP
// 00607bb6: MOV ECX,0x7
// 00607bbb: MOV EAX,EDX
// 00607bbd: SAR EDX,0x1f
// 00607bc0: IDIV ECX
// 00607bc2: MOV EBP,dword ptr [EBX + 0xc]
// 00607bc5: SUB EBP,EDX
// 00607bc7: MOV EDX,dword ptr [EBX + 0x18]
// 00607bca: MOV EAX,dword ptr [EDI + 0x18]
//   XREF to: 0068508c (READ)
// 00607bcd: ADD EDX,0x6
// 00607bd0: SUB EDX,EAX
// 00607bd2: MOV EAX,EDX
// 00607bd4: SAR EDX,0x1f
// 00607bd7: IDIV ECX
// 00607bd9: MOV EAX,dword ptr [EBX + 0xc]
// 00607bdc: DEC EAX
// 00607bdd: XOR ESI,ESI
// 00607bdf: SUB EAX,EDX
// 00607be1: MOV ECX,dword ptr [EDI + 0xc]
//   XREF to: 00685080 (READ)
// 00607be4: MOV EDX,EAX
// 00607be6: CMP ECX,0x5
// 00607be9: JNZ 0x00607c09
//   XREF to: 00607c09 (CONDITIONAL_JUMP)
// 00607beb: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x20] (READ)
// 00607bef: SUB EAX,0x7
// 00607bf2: CMP EBP,EAX
// 00607bf4: JG 0x00607c00
//   XREF to: 00607c00 (CONDITIONAL_JUMP)
// 00607bf6: MOV ESI,0x1
// 00607bfb: JMP 0x00607c5d
//   XREF to: 00607c5d (UNCONDITIONAL_JUMP)
// 00607c00: CMP EDX,EAX
//   Label: LAB_00607c00
// 00607c02: JG 0x00607c5d
//   XREF to: 00607c5d (CONDITIONAL_JUMP)
// 00607c04: JMP 0x00607c63
//   XREF to: 00607c63 (UNCONDITIONAL_JUMP)
// 00607c09: DEC ECX
//   Label: LAB_00607c09
// 00607c0a: LEA EAX,[ECX*0x8 + 0x0]
// 00607c11: SUB EAX,ECX
// 00607c13: INC EAX
// 00607c14: CMP EBP,EAX
// 00607c16: JGE 0x00607c1f
//   XREF to: 00607c1f (CONDITIONAL_JUMP)
// 00607c18: MOV ESI,0x1
// 00607c1d: JMP 0x00607c5d
//   XREF to: 00607c5d (UNCONDITIONAL_JUMP)
// 00607c1f: CMP EDX,EAX
//   Label: LAB_00607c1f
// 00607c21: JGE 0x00607c5d
//   XREF to: 00607c5d (CONDITIONAL_JUMP)
// 00607c23: JMP 0x00607c63
//   XREF to: 00607c63 (UNCONDITIONAL_JUMP)
// 00607c25: MOV EBP,dword ptr [EDI + 0x1c]
//   Label: LAB_00607c25
//   XREF to: 00685090 (READ)
// 00607c28: CMP EAX,0x1
// 00607c2b: JNZ 0x00607c50
//   XREF to: 00607c50 (CONDITIONAL_JUMP)
// 00607c2d: MOV EAX,dword ptr [EBX + 0x14]
// 00607c30: ADD EAX,0x76c
// 00607c35: PUSH EAX
// 00607c36: CALL crt_time.c_is_leap_year_FUN_00607820
//   XREF to: 00607820 (UNCONDITIONAL_CALL)
// 00607c3b: ADD ESP,0x4
// 00607c3e: TEST EAX,EAX
// 00607c40: JZ 0x00607c4f
//   XREF to: 00607c4f (CONDITIONAL_JUMP)
// 00607c42: MOV EAX,[0x00665f3a]
//   XREF to: 00665f3a (READ)
// 00607c47: SAR EAX,0x10
// 00607c4a: CMP EBP,EAX
// 00607c4c: JLE 0x00607c4f
//   XREF to: 00607c4f (CONDITIONAL_JUMP)
// 00607c4e: INC EBP
// 00607c4f: DEC EBP
//   Label: LAB_00607c4f
// 00607c50: MOV ECX,dword ptr [EBX + 0x1c]
//   Label: LAB_00607c50
// 00607c53: CMP EBP,ECX
// 00607c55: JG 0x00607c5d
//   XREF to: 00607c5d (CONDITIONAL_JUMP)
// 00607c57: XOR ESI,ESI
// 00607c59: CMP EBP,ECX
// 00607c5b: JZ 0x00607c63
//   XREF to: 00607c63 (CONDITIONAL_JUMP)
// 00607c5d: CMP dword ptr [ESP],0x0
//   Label: LAB_00607c5d
//   XREF to: Stack[-0x2c] (DATA)
// 00607c61: JZ 0x00607c6f
//   XREF to: 00607c6f (CONDITIONAL_JUMP)
// 00607c63: PUSH EDI
//   Label: LAB_00607c63
//   XREF to: 00685074 (DATA)
// 00607c64: PUSH EBX
// 00607c65: CALL crt_unknown.c_FUN_00607c88
//   XREF to: 00607c88 (UNCONDITIONAL_CALL)
// 00607c6a: ADD ESP,0x8
// 00607c6d: MOV ESI,EAX
// 00607c6f: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_00607c6f
//   XREF to: Stack[-0x1c] (READ)
// 00607c73: TEST EAX,EAX
// 00607c75: JZ 0x00607c7b
//   XREF to: 00607c7b (CONDITIONAL_JUMP)
// 00607c77: SUB EAX,ESI
// 00607c79: MOV ESI,EAX
// 00607c7b: MOV EAX,ESI
//   Label: LAB_00607c7b
// 00607c7d: MOV dword ptr [EBX + 0x20],ESI
// 00607c80: ADD ESP,0x1c
// 00607c83: POP EBP
// 00607c84: POP EDI
// 00607c85: POP ESI
// 00607c86: POP EBX
// 00607c87: RET
