// Name: crt_time.c_gmtime_r_FUN_00607690
// Address: 00607690
// Address Range: [[00607690, 006077d5]]
// Convention: __cdecl
// Signature: undefined crt_time.c_gmtime_r_FUN_00607690(time_t days, time_t seconds, time_t timezone_offset, undefined1 result)
// Cross-references:
//   crt_time.c_localtime_r_FUN_00600230 (00600230) at 0060024f [UNCONDITIONAL_CALL]
//   crt_time.c_mktime_FUN_00600f80 (00600f80) at 00601093 [UNCONDITIONAL_CALL]
// Globals:
//   short g_DaysInMonth_Normal = 0x0
//   short g_DaysInMonth_Leap = 0x0
// Function calls:
//   crt_time.c_is_leap_year_FUN_00607820

#include "nocturne.h"

undefined4 * __cdecl
crt_time_c_gmtime_r_FUN_00607690(int days,uint seconds,int timezone_offset,undefined4 *param_4)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  short *unaff_EDI;
  
  if ((seconds < 0xa8c0) && (0 < timezone_offset)) {
    seconds = (seconds + 0x15180) - timezone_offset;
    uVar5 = (days + seconds / 0x15180) - 1;
  }
  else {
    seconds = seconds - timezone_offset;
    uVar5 = days + seconds / 0x15180;
  }
  param_4[2] = (int)(((ulonglong)seconds % 0x15180) / 0xe10);
  uVar1 = ((ulonglong)seconds % 0x15180) % 0xe10;
  param_4[1] = (int)(uVar1 / 0x3c);
  *param_4 = (int)(uVar1 % 0x3c);
  uVar2 = uVar5 / 0x16e;
  uVar4 = uVar5 + uVar2 * -0x16d;
  if (uVar2 != 0) {
    uVar4 = uVar4 - (uVar2 - 1 >> 2);
  }
  iVar3 = crt_time_c_is_leap_year_FUN_00607820(uVar2 + 0x76c);
  for (; iVar3 + 0x16dU <= uVar4; uVar4 = uVar4 - (iVar3 + 0x16dU)) {
    uVar2 = uVar2 + 1;
  }
  param_4[5] = uVar2;
  param_4[7] = uVar4;
  iVar3 = crt_time_c_is_leap_year_FUN_00607820(uVar2 + 0x76c);
  if (iVar3 != 0) {
    unaff_EDI = &g_DaysInMonth_Leap;
  }
  uVar2 = uVar4 / 0x1f;
  if ((uint)(*(int *)(unaff_EDI + uVar2) >> 0x10) <= uVar4) {
    uVar2 = uVar2 + 1;
  }
  param_4[4] = uVar2;
  param_4[3] = (uVar4 - (int)unaff_EDI[uVar2]) + 1;
  param_4[6] = (uVar5 + 1) % 7;
  return param_4;
}


// Assembly code:
// 00607690: PUSH EBX
//   Label: crt_time.c_gmtime_r_FUN_00607690
// 00607691: PUSH ESI
// 00607692: PUSH EDI
// 00607693: PUSH EBP
// 00607694: SUB ESP,0x4
// 00607697: MOV EBP,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0060769b: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 0060769f: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0xc] (READ)
// 006076a3: MOV EDI,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x10] (READ)
// 006076a7: CMP EBX,0xa8c0
// 006076ad: JNC 0x006076cb
//   XREF to: 006076cb (CONDITIONAL_JUMP)
// 006076af: TEST EAX,EAX
// 006076b1: JLE 0x006076cb
//   XREF to: 006076cb (CONDITIONAL_JUMP)
// 006076b3: ADD EBX,0x15180
// 006076b9: MOV ESI,0x15180
// 006076be: SUB EBX,EAX
// 006076c0: XOR EDX,EDX
// 006076c2: MOV EAX,EBX
// 006076c4: DIV ESI
// 006076c6: ADD EBP,EAX
// 006076c8: DEC EBP
// 006076c9: JMP 0x006076da
//   XREF to: 006076da (UNCONDITIONAL_JUMP)
// 006076cb: MOV ESI,0x15180
//   Label: LAB_006076cb
// 006076d0: SUB EBX,EAX
// 006076d2: XOR EDX,EDX
// 006076d4: MOV EAX,EBX
// 006076d6: DIV ESI
// 006076d8: ADD EBP,EAX
// 006076da: MOV ESI,0x15180
//   Label: LAB_006076da
// 006076df: MOV EAX,EBX
// 006076e1: XOR EDX,EDX
// 006076e3: DIV ESI
// 006076e5: MOV EBX,EDX
// 006076e7: MOV ESI,0xe10
// 006076ec: MOV EAX,EBX
// 006076ee: XOR EDX,EDX
// 006076f0: DIV ESI
// 006076f2: XOR EDX,EDX
// 006076f4: MOV dword ptr [EDI + 0x8],EAX
// 006076f7: MOV EAX,EBX
// 006076f9: DIV ESI
// 006076fb: MOV EBX,EDX
// 006076fd: MOV ESI,0x3c
// 00607702: MOV EAX,EBX
// 00607704: XOR EDX,EDX
// 00607706: DIV ESI
// 00607708: XOR EDX,EDX
// 0060770a: MOV dword ptr [EDI + 0x4],EAX
// 0060770d: MOV EAX,EBX
// 0060770f: DIV ESI
// 00607711: MOV EBX,0x16e
// 00607716: MOV EAX,EBP
// 00607718: MOV dword ptr [EDI],EDX
// 0060771a: XOR EDX,EDX
// 0060771c: DIV EBX
// 0060771e: MOV ESI,EAX
// 00607720: SHL EAX,0x3
// 00607723: ADD EAX,ESI
// 00607725: SHL EAX,0x3
// 00607728: ADD EAX,ESI
// 0060772a: MOV EBX,EAX
// 0060772c: SHL EAX,0x2
// 0060772f: ADD EAX,EBX
// 00607731: MOV EBX,EBP
// 00607733: SUB EBX,EAX
// 00607735: TEST ESI,ESI
// 00607737: JBE 0x00607741
//   XREF to: 00607741 (CONDITIONAL_JUMP)
// 00607739: LEA EAX,[ESI + -0x1]
// 0060773c: SHR EAX,0x2
// 0060773f: SUB EBX,EAX
// 00607741: LEA EAX,[ESI + 0x76c]
//   Label: LAB_00607741
// 00607747: PUSH EAX
// 00607748: CALL crt_time.c_is_leap_year_FUN_00607820
//   XREF to: 00607820 (UNCONDITIONAL_CALL)
// 0060774d: ADD EAX,0x16d
// 00607752: ADD ESP,0x4
// 00607755: CMP EBX,EAX
// 00607757: JC 0x00607760
//   XREF to: 00607760 (CONDITIONAL_JUMP)
// 00607759: SUB EBX,EAX
//   Label: LAB_00607759
// 0060775b: INC ESI
// 0060775c: CMP EBX,EAX
// 0060775e: JNC 0x00607759
//   XREF to: 00607759 (CONDITIONAL_JUMP)
// 00607760: MOV dword ptr [EDI + 0x14],ESI
//   Label: LAB_00607760
// 00607763: ADD ESI,0x76c
// 00607769: MOV EDX,0x665f38
//   XREF to: 00665f38 (PARAM)
// 0060776e: PUSH ESI
// 0060776f: MOV dword ptr [EDI + 0x1c],EBX
// 00607772: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x14] (WRITE)
//   XREF to: 00665f38 (DATA)
// 00607776: CALL crt_time.c_is_leap_year_FUN_00607820
//   XREF to: 00607820 (UNCONDITIONAL_CALL)
// 0060777b: ADD ESP,0x4
// 0060777e: TEST EAX,EAX
// 00607780: JZ 0x00607789
//   XREF to: 00607789 (CONDITIONAL_JUMP)
// 00607782: MOV dword ptr [ESP],0x665f52
//   XREF to: Stack[-0x14] (DATA)
//   XREF to: 00665f52 (DATA)
// 00607789: MOV ESI,0x1f
//   Label: LAB_00607789
// 0060778e: MOV EAX,EBX
// 00607790: XOR EDX,EDX
// 00607792: DIV ESI
// 00607794: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 00607797: LEA ESI,[EAX*0x2 + 0x0]
// 0060779e: ADD ESI,EDX
// 006077a0: MOV ESI,dword ptr [ESI]
//   XREF to: 00665f38 (DATA)
//   XREF to: 00665f52 (DATA)
// 006077a2: SAR ESI,0x10
// 006077a5: CMP EBX,ESI
// 006077a7: JC 0x006077aa
//   XREF to: 006077aa (CONDITIONAL_JUMP)
// 006077a9: INC EAX
// 006077aa: MOV ECX,dword ptr [ESP]
//   Label: LAB_006077aa
//   XREF to: Stack[-0x14] (DATA)
// 006077ad: MOV dword ptr [EDI + 0x10],EAX
// 006077b0: ADD EAX,EAX
// 006077b2: ADD EAX,ECX
// 006077b4: MOVSX EAX,word ptr [EAX]
//   XREF to: 00665f38 (DATA)
//   XREF to: 00665f52 (DATA)
// 006077b7: SUB EBX,EAX
// 006077b9: XOR EDX,EDX
// 006077bb: INC EBX
// 006077bc: LEA EAX,[EBP + 0x1]
// 006077bf: MOV dword ptr [EDI + 0xc],EBX
// 006077c2: MOV EBX,0x7
// 006077c7: DIV EBX
// 006077c9: MOV EAX,EDI
// 006077cb: MOV dword ptr [EDI + 0x18],EDX
// 006077ce: ADD ESP,0x4
// 006077d1: POP EBP
// 006077d2: POP EDI
// 006077d3: POP ESI
// 006077d4: POP EBX
// 006077d5: RET
