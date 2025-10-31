// Name: core_manpuz.cpp_FUN_005098f0
// Address: 005098f0
// Address Range: [[005098f0, 00509b1a]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005098f0()
// Cross-references:
//   core_manpuz.cpp_FUN_00508920 (00508920) at 00508a55 [UNCONDITIONAL_CALL]
// Function calls:
//   core_manpuz.cpp_FUN_0050a420

#include "nocturne.h"

void core_manpuz_cpp_FUN_005098f0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar3 = in_stack_00000004;
  iVar2 = in_stack_00000004;
  do {
    *(undefined4 *)(iVar2 + 0x5f4) = 0;
    *(undefined4 *)(iVar2 + 0x5f8) = 0;
    *(undefined4 *)(iVar2 + 0x63c) = 0;
    *(undefined4 *)(iVar2 + 0x640) = 0;
    *(undefined4 *)(iVar2 + 0x644) = 0;
    iVar1 = iVar3 + 4;
    *(undefined4 *)(iVar2 + 0x5f0) = 1;
    *(undefined4 *)(iVar3 + 0x1400) = 0;
    *(undefined4 *)(iVar3 + 0x1430) = 0;
    *(undefined4 *)(iVar3 + 0x1460) = 0;
    iVar2 = iVar2 + 100;
    *(undefined4 *)(iVar3 + 0x1490) = 0;
    iVar3 = iVar1;
  } while (iVar1 != in_stack_00000004 + 0x30);
  *(undefined4 *)(in_stack_00000004 + 0x644) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x6a0) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x704) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x71c) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x7cc) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x838) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x848) = 0;
  *(undefined4 *)(in_stack_00000004 + 0x8f8) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x964) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x9c0) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0xa2c) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0xa90) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x1460) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x1464) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x1408) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x140c) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x1470) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x1414) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x1418) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x147c) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x1480) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x1484) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x1428) = 0xff;
  *(undefined4 *)(in_stack_00000004 + 0x63c) = *(undefined4 *)(in_stack_00000004 + 0x644);
  iVar3 = 0;
  *(undefined4 *)(in_stack_00000004 + 0x1400) = *(undefined4 *)(in_stack_00000004 + 0x1460);
  *(undefined4 *)(in_stack_00000004 + 0x142c) = 0xff;
  do {
    iVar2 = iVar3 * 0xb8 + in_stack_00000004 + 0xaa0;
    core_manpuz_cpp_FUN_0050a420();
    *(undefined4 *)(iVar2 + 0x14) = 0;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(iVar2 + 0x20) = 0;
    *(undefined4 *)(iVar2 + 0x10) = *(undefined4 *)(iVar2 + 0x14);
    *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x20);
    *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(iVar2 + 0x10);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(iVar2 + 0x20);
  } while (iVar3 < 0xc);
  *(undefined4 *)(in_stack_00000008 + 0x139c) = 1;
  *(undefined4 *)(in_stack_00000008 + 0x13b8) = 0;
  *(undefined4 *)(in_stack_00000008 + 0x13fc) = 0xb;
  *(undefined4 *)(in_stack_00000008 + 0x1358) = 0;
  return;
}


// Assembly code:
// 005098f0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_005098f0
// 005098f1: PUSH ESI
// 005098f2: PUSH EDI
// 005098f3: PUSH EBP
// 005098f4: SUB ESP,0x4
// 005098f7: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005098fb: MOV EBX,EAX
// 005098fd: LEA ESI,[EAX + 0x30]
// 00509900: MOV dword ptr [EBX + 0x5f4],0x0
//   Label: LAB_00509900
// 0050990a: MOV dword ptr [EBX + 0x5f8],0x0
// 00509914: MOV dword ptr [EBX + 0x63c],0x0
// 0050991e: MOV dword ptr [EBX + 0x640],0x0
// 00509928: MOV dword ptr [EBX + 0x644],0x0
// 00509932: ADD EAX,0x4
// 00509935: MOV dword ptr [EBX + 0x5f0],0x1
// 0050993f: MOV dword ptr [EAX + 0x13fc],0x0
// 00509949: MOV dword ptr [EAX + 0x142c],0x0
// 00509953: MOV dword ptr [EAX + 0x145c],0x0
// 0050995d: ADD EBX,0x64
// 00509960: MOV dword ptr [EAX + 0x148c],0x0
// 0050996a: CMP EAX,ESI
// 0050996c: JNZ 0x00509900
//   XREF to: 00509900 (CONDITIONAL_JUMP)
// 0050996e: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00509972: MOV dword ptr [EAX + 0x644],0xff
// 0050997c: MOV EBX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00509980: MOV EAX,dword ptr [EAX + 0x644]
// 00509986: MOV dword ptr [EBX + 0x6a0],0xff
// 00509990: MOV dword ptr [EBX + 0x704],0xff
// 0050999a: MOV dword ptr [EBX + 0x71c],0x0
// 005099a4: MOV dword ptr [EBX + 0x7cc],0xff
// 005099ae: MOV dword ptr [EBX + 0x838],0xff
// 005099b8: MOV dword ptr [EBX + 0x848],0x0
// 005099c2: MOV dword ptr [EBX + 0x8f8],0xff
// 005099cc: MOV dword ptr [EBX + 0x964],0xff
// 005099d6: MOV dword ptr [EBX + 0x9c0],0xff
// 005099e0: MOV dword ptr [EBX + 0xa2c],0xff
// 005099ea: MOV dword ptr [EBX + 0xa90],0xff
// 005099f4: MOV dword ptr [EBX + 0x1460],0xff
// 005099fe: MOV dword ptr [EBX + 0x1464],0xff
// 00509a08: MOV dword ptr [EBX + 0x1408],0xff
// 00509a12: MOV dword ptr [EBX + 0x140c],0xff
// 00509a1c: MOV dword ptr [EBX + 0x1470],0xff
// 00509a26: MOV dword ptr [EBX + 0x1414],0xff
// 00509a30: MOV dword ptr [EBX + 0x1418],0xff
// 00509a3a: MOV dword ptr [EBX + 0x147c],0xff
// 00509a44: MOV dword ptr [EBX + 0x1480],0xff
// 00509a4e: MOV dword ptr [EBX + 0x1484],0xff
// 00509a58: MOV dword ptr [EBX + 0x1428],0xff
// 00509a62: MOV dword ptr [EBX + 0x63c],EAX
// 00509a68: MOV EAX,dword ptr [EBX + 0x1460]
// 00509a6e: XOR ESI,ESI
// 00509a70: MOV dword ptr [EBX + 0x1400],EAX
// 00509a76: LEA EAX,[EBX + 0xaa0]
// 00509a7c: MOV dword ptr [EBX + 0x142c],0xff
// 00509a86: LEA EDI,[EBX + 0xaa4]
// 00509a8c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 00509a8f: LEA EBP,[EBX + 0xaa8]
// 00509a95: IMUL EBX,ESI,0xb8
//   Label: LAB_00509a95
// 00509a9b: PUSH EBP
// 00509a9c: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 00509aa0: PUSH EDI
// 00509aa1: ADD EBX,EDX
// 00509aa3: PUSH EBX
// 00509aa4: PUSH ESI
// 00509aa5: MOV ECX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00509aa9: PUSH ECX
// 00509aaa: ADD EBP,0xb8
// 00509ab0: ADD EDI,0xb8
// 00509ab6: CALL core_manpuz.cpp_FUN_0050a420
//   XREF to: 0050a420 (UNCONDITIONAL_CALL)
// 00509abb: MOV dword ptr [EBX + 0x14],0x0
// 00509ac2: INC ESI
// 00509ac3: MOV dword ptr [EBX + 0x20],0x0
// 00509aca: ADD ESP,0x14
// 00509acd: FLD float ptr [EBX + 0x20]
// 00509ad0: MOV EAX,dword ptr [EBX + 0x14]
// 00509ad3: MOV dword ptr [EBX + 0x10],EAX
// 00509ad6: FST float ptr [EBX + 0x1c]
// 00509ad9: MOV EAX,dword ptr [EBX + 0x10]
// 00509adc: MOV dword ptr [EBX + 0xc],EAX
// 00509adf: FSTP float ptr [EBX + 0x18]
// 00509ae2: CMP ESI,0xc
// 00509ae5: JL 0x00509a95
//   XREF to: 00509a95 (CONDITIONAL_JUMP)
// 00509ae7: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 00509aeb: MOV dword ptr [EAX + 0x139c],0x1
// 00509af5: MOV dword ptr [EAX + 0x13b8],0x0
// 00509aff: MOV dword ptr [EAX + 0x13fc],0xb
// 00509b09: MOV dword ptr [EAX + 0x1358],0x0
// 00509b13: ADD ESP,0x4
// 00509b16: POP EBP
// 00509b17: POP EDI
// 00509b18: POP ESI
// 00509b19: POP EBX
// 00509b1a: RET
