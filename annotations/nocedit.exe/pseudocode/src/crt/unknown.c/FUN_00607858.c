// Name: crt_unknown.c_FUN_00607858
// Address: 00607858
// Address Range: [[00607858, 00607954]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_00607858()
// Cross-references:
//   crt_unknown.c_FUN_00607958 (00607958) at 0060798a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00665f34+2
//   short g_DaysInMonth_Normal = 0x0
//   undefined4 DAT_00665f50
//   short g_DaysInMonth_Leap = 0x0
// Function calls:
//   crt_time.c_is_leap_year_FUN_00607820
//   crt_time.c_mktime_FUN_00600f80

#include "nocturne.h"

/* Signature: undefined1 FUN_00607858(undefined4 param_1, undefined4 param_2) */

int crt_unknown_c_FUN_00607858(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_14;
  
  if (*(int *)(in_stack_00000004 + 0x20) == 0) {
    iVar1 = crt_time_c_is_leap_year_FUN_00607820(in_stack_00000008 + 0x76c);
    if (iVar1 == 0) {
      iVar1 = *(int *)(&g_DaysInMonth_Normal + *(int *)(in_stack_00000004 + 0x10));
      iVar2 = *(int *)((int)&g_PositiveInfinity + *(int *)(in_stack_00000004 + 0x10) * 2 + 6);
    }
    else {
      iVar1 = *(int *)(&g_DaysInMonth_Leap + *(int *)(in_stack_00000004 + 0x10));
      iVar2 = *(int *)(&DAT_00665f50 + *(int *)(in_stack_00000004 + 0x10) * 2);
    }
    local_30 = 0;
    local_2c = 0;
    local_28 = 0;
    local_24 = 1;
    local_20 = *(int *)(in_stack_00000004 + 0x10);
    local_1c = in_stack_00000008;
    crt_time_c_mktime_FUN_00600f80((tm *)&local_30);
    iVar4 = ((*(int *)(in_stack_00000004 + 0x18) - local_14) + 7) % 7;
    if (*(int *)(in_stack_00000004 + 0xc) == 5) {
      iVar3 = 4;
      if ((iVar1 >> 0x10) - (iVar2 >> 0x10) < iVar4 + 0x1d) {
        iVar3 = *(int *)(in_stack_00000004 + 0xc) + -2;
      }
    }
    else {
      iVar3 = *(int *)(in_stack_00000004 + 0xc) + -1;
    }
    return iVar3 * 7 + iVar4;
  }
  if (*(int *)(in_stack_00000004 + 0x20) != 1) {
    return *(int *)(in_stack_00000004 + 0x1c);
  }
  return *(int *)(in_stack_00000004 + 0x1c) + -1;
}


// Assembly code:
// 00607858: PUSH EBX
//   Label: crt_unknown.c_FUN_00607858
// 00607859: PUSH ESI
// 0060785a: PUSH EDI
// 0060785b: PUSH EBP
// 0060785c: SUB ESP,0x24
// 0060785f: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x4] (READ)
// 00607863: MOV EDI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x8] (READ)
// 00607867: MOV EDX,dword ptr [EBX + 0x20]
// 0060786a: TEST EDX,EDX
// 0060786c: JNZ 0x00607938
//   XREF to: 00607938 (CONDITIONAL_JUMP)
// 00607872: LEA EAX,[EDI + 0x76c]
// 00607878: PUSH EAX
// 00607879: CALL crt_time.c_is_leap_year_FUN_00607820
//   XREF to: 00607820 (UNCONDITIONAL_CALL)
// 0060787e: ADD ESP,0x4
// 00607881: TEST EAX,EAX
// 00607883: JZ 0x00607898
//   XREF to: 00607898 (CONDITIONAL_JUMP)
// 00607885: MOV EAX,dword ptr [EBX + 0x10]
// 00607888: MOV ESI,dword ptr [EAX*0x2 + 0x665f52]
//   XREF to: 00665f52 (DATA)
// 0060788f: MOV EAX,dword ptr [EAX*0x2 + 0x665f50]
//   XREF to: 00665f50 (DATA)
// 00607896: JMP 0x006078a9
//   XREF to: 006078a9 (UNCONDITIONAL_JUMP)
// 00607898: MOV EAX,dword ptr [EBX + 0x10]
//   Label: LAB_00607898
// 0060789b: MOV ESI,dword ptr [EAX*0x2 + 0x665f38]
//   XREF to: 00665f38 (DATA)
// 006078a2: MOV EAX,dword ptr [EAX*0x2 + 0x665f36]
//   XREF to: 00665f36 (DATA)
// 006078a9: SAR ESI,0x10
//   Label: LAB_006078a9
// 006078ac: SAR EAX,0x10
// 006078af: SUB ESI,EAX
// 006078b1: XOR EBP,EBP
// 006078b3: MOV ECX,0x1
// 006078b8: MOV dword ptr [ESP],EBP
//   XREF to: Stack[-0x34] (DATA)
// 006078bb: MOV dword ptr [ESP + 0x4],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 006078bf: MOV dword ptr [ESP + 0x8],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 006078c3: MOV dword ptr [ESP + 0xc],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 006078c7: MOV EAX,dword ptr [EBX + 0x10]
// 006078ca: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 006078ce: MOV EAX,ESP
// 006078d0: PUSH EAX
// 006078d1: MOV dword ptr [ESP + 0x18],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 006078d5: MOV dword ptr [ESP + 0x24],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 006078d9: CALL crt_time.c_mktime_FUN_00600f80
//   XREF to: 00600f80 (UNCONDITIONAL_CALL)
// 006078de: ADD ESP,0x4
// 006078e1: MOV EDX,dword ptr [EBX + 0x18]
// 006078e4: SUB EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x1c] (READ)
// 006078e8: ADD EDX,0x7
// 006078eb: MOV ECX,0x7
// 006078f0: MOV EAX,EDX
// 006078f2: SAR EDX,0x1f
// 006078f5: IDIV ECX
// 006078f7: MOV EAX,dword ptr [EBX + 0xc]
// 006078fa: CMP EAX,0x5
// 006078fd: JNZ 0x00607920
//   XREF to: 00607920 (CONDITIONAL_JUMP)
// 006078ff: LEA EDI,[EAX + -0x1]
// 00607902: LEA ECX,[EDI*0x8 + 0x0]
// 00607909: LEA EAX,[EDX + 0x1]
// 0060790c: SUB ECX,EDI
// 0060790e: ADD EAX,ECX
// 00607910: CMP EAX,ESI
// 00607912: JLE 0x0060791c
//   XREF to: 0060791c (CONDITIONAL_JUMP)
// 00607914: MOV EAX,dword ptr [EBX + 0xc]
// 00607917: SUB EAX,0x2
// 0060791a: JMP 0x00607921
//   XREF to: 00607921 (UNCONDITIONAL_JUMP)
// 0060791c: MOV EAX,EDI
//   Label: LAB_0060791c
// 0060791e: JMP 0x00607921
//   XREF to: 00607921 (UNCONDITIONAL_JUMP)
// 00607920: DEC EAX
//   Label: LAB_00607920
// 00607921: MOV EBX,dword ptr [ESP + 0x1c]
//   Label: LAB_00607921
//   XREF to: Stack[-0x18] (READ)
// 00607925: ADD EBX,EDX
// 00607927: MOV EDX,EAX
// 00607929: SHL EAX,0x3
// 0060792c: SUB EAX,EDX
// 0060792e: ADD EAX,EBX
// 00607930: ADD ESP,0x24
// 00607933: POP EBP
// 00607934: POP EDI
// 00607935: POP ESI
// 00607936: POP EBX
// 00607937: RET
// 00607938: CMP EDX,0x1
//   Label: LAB_00607938
// 0060793b: JNZ 0x0060794a
//   XREF to: 0060794a (CONDITIONAL_JUMP)
// 0060793d: MOV EAX,dword ptr [EBX + 0x1c]
// 00607940: SUB EAX,EDX
// 00607942: ADD ESP,0x24
// 00607945: POP EBP
// 00607946: POP EDI
// 00607947: POP ESI
// 00607948: POP EBX
// 00607949: RET
// 0060794a: MOV EAX,dword ptr [EBX + 0x1c]
//   Label: LAB_0060794a
// 0060794d: ADD ESP,0x24
// 00607950: POP EBP
// 00607951: POP EDI
// 00607952: POP ESI
// 00607953: POP EBX
// 00607954: RET
