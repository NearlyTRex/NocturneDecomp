// Name: core_set.cpp_CDemonSet_FUN_0056d380
// Address: 0056d380
// Address Range: [[0056d380, 0056d49b]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056d380(CDemonSet * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c7253 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireball_render_FUN_004c0e70 (004c0e70) at 004c0f4d [UNCONDITIONAL_CALL]
//   core_fire.cpp_CRock_render_FUN_004c1870 (004c1870) at 004c1919 [UNCONDITIONAL_CALL]
//   core_fire.cpp_CShell_render_FUN_004c6200 (004c6200) at 004c62aa [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004c0140 (004c0140) at 004c01f4 [UNCONDITIONAL_CALL]
//   core_gore.cpp_CGore_FUN_004ed7b0 (004ed7b0) at 004ed7e8 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056aca0 (0056aca0) at 0056ad28 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cbcf [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cd60 (0056cd60) at 0056ce1b [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056cf00 (0056cf00) at 0056cfbb [UNCONDITIONAL_CALL]
//   core_weather.cpp_CWeather_FUN_005ef190 (005ef190) at 005ef25c [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_032c1c64
//   undefined4 DAT_032c1c68
//   undefined4 DAT_032c1c6c
//   undefined4 DAT_032c1c70
//   undefined4 DAT_032c1c74
//   undefined4 DAT_032c1c78
//   undefined4 DAT_032c1c7c
//   undefined4 DAT_032c1c80
//   undefined4 DAT_032c1c84
//   undefined4 DAT_032c1c88
//   undefined4 DAT_032c1c8c
//   undefined4 DAT_032c1c90
//   undefined4 DAT_032c1c94
//   undefined4 DAT_032c1c98
//   undefined4 DAT_032c1c9c
//   undefined4 DAT_032c1ca0
//   undefined4 DAT_032c1ca4
//   undefined4 DAT_032c1ca8
//   undefined4 DAT_032c1cac
//   undefined4 DAT_032c1cb0
//   undefined4 DAT_032c1cb4
//   undefined4 DAT_032c1cb8

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_FUN_0056d380(CDemonSet *this_ptr)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *in_stack_00000008;
  undefined4 *in_stack_0000000c;
  undefined4 *in_stack_00000010;
  undefined4 *in_stack_00000014;
  undefined4 *in_stack_00000018;
  
  if (in_stack_00000008 == (undefined4 *)0x0) {
    DAT_032c1c64 = 1;
  }
  else {
    if (in_stack_00000008 != &DAT_032c1c68) {
      DAT_032c1c68 = *in_stack_00000008;
      DAT_032c1c70 = in_stack_00000008[2];
      DAT_032c1c6c = in_stack_00000008[1];
    }
    if (in_stack_0000000c != (undefined4 *)&DAT_032c1c74) {
      _DAT_032c1c74 = *in_stack_0000000c;
      _DAT_032c1c7c = in_stack_0000000c[2];
      _DAT_032c1c78 = in_stack_0000000c[1];
    }
    if (in_stack_00000010 != (undefined4 *)&DAT_032c1c80) {
      _DAT_032c1c80 = *in_stack_00000010;
      _DAT_032c1c88 = in_stack_00000010[2];
      _DAT_032c1c84 = in_stack_00000010[1];
    }
    if (in_stack_00000014 != (undefined4 *)&DAT_032c1c8c) {
      _DAT_032c1c8c = *in_stack_00000014;
      _DAT_032c1c94 = in_stack_00000014[2];
      _DAT_032c1c90 = in_stack_00000014[1];
    }
    if (in_stack_00000018 == (undefined4 *)0x0) {
      DAT_032c1c9c = in_stack_00000018;
      _DAT_032c1ca0 = in_stack_00000018;
      _DAT_032c1ca4 = in_stack_00000018;
      _DAT_032c1cac = in_stack_00000018;
      _DAT_032c1cb0 = in_stack_00000018;
      _DAT_032c1cb4 = in_stack_00000018;
      _DAT_032c1ca8 = 0x3f800000;
      _DAT_032c1cb8 = 0x3f800000;
      DAT_032c1c98 = 0x3f800000;
      DAT_032c1c64 = 2;
      return;
    }
    puVar2 = &DAT_032c1c98;
    for (iVar1 = 10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = *in_stack_00000018;
      in_stack_00000018 = in_stack_00000018 + 1;
      puVar2 = puVar2 + 1;
    }
    DAT_032c1c64 = 2;
  }
  return;
}


// Assembly code:
// 0056d380: PUSH EBX
//   Label: core_set.cpp_CDemonSet_FUN_0056d380
// 0056d381: PUSH ESI
// 0056d382: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0056d386: MOV ECX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 0056d38a: MOV EDX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x10] (READ)
// 0056d38e: MOV EBX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x14] (READ)
// 0056d392: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x18] (READ)
// 0056d396: TEST EAX,EAX
// 0056d398: JZ 0x0056d42c
//   XREF to: 0056d42c (CONDITIONAL_JUMP)
// 0056d39e: PUSH EDI
// 0056d39f: CMP EAX,0x32c1c68
//   XREF to: 032c1c68 (DATA)
// 0056d3a4: JNZ 0x0056d433
//   XREF to: 0056d433 (CONDITIONAL_JUMP)
// 0056d3aa: CMP ECX,0x32c1c74
//   Label: LAB_0056d3aa
//   XREF to: 032c1c74 (DATA)
// 0056d3b0: JZ 0x0056d3cb
//   XREF to: 0056d3cb (CONDITIONAL_JUMP)
// 0056d3b2: FLD float ptr [ECX]
// 0056d3b4: FLD float ptr [ECX + 0x8]
// 0056d3b7: MOV EAX,dword ptr [ECX + 0x4]
// 0056d3ba: MOV [0x032c1c78],EAX
//   XREF to: 032c1c78 (WRITE)
// 0056d3bf: FSTP float ptr [0x032c1c7c]
//   XREF to: 032c1c7c (WRITE)
// 0056d3c5: FSTP float ptr [0x032c1c74]
//   XREF to: 032c1c74 (WRITE)
// 0056d3cb: CMP EDX,0x32c1c80
//   Label: LAB_0056d3cb
//   XREF to: 032c1c80 (DATA)
// 0056d3d1: JZ 0x0056d3ec
//   XREF to: 0056d3ec (CONDITIONAL_JUMP)
// 0056d3d3: FLD float ptr [EDX]
// 0056d3d5: FLD float ptr [EDX + 0x8]
// 0056d3d8: MOV EAX,dword ptr [EDX + 0x4]
// 0056d3db: MOV [0x032c1c84],EAX
//   XREF to: 032c1c84 (WRITE)
// 0056d3e0: FSTP float ptr [0x032c1c88]
//   XREF to: 032c1c88 (WRITE)
// 0056d3e6: FSTP float ptr [0x032c1c80]
//   XREF to: 032c1c80 (WRITE)
// 0056d3ec: CMP EBX,0x32c1c8c
//   Label: LAB_0056d3ec
//   XREF to: 032c1c8c (DATA)
// 0056d3f2: JZ 0x0056d40d
//   XREF to: 0056d40d (CONDITIONAL_JUMP)
// 0056d3f4: FLD float ptr [EBX]
// 0056d3f6: FLD float ptr [EBX + 0x8]
// 0056d3f9: MOV EAX,dword ptr [EBX + 0x4]
// 0056d3fc: MOV [0x032c1c90],EAX
//   XREF to: 032c1c90 (WRITE)
// 0056d401: FSTP float ptr [0x032c1c94]
//   XREF to: 032c1c94 (WRITE)
// 0056d407: FSTP float ptr [0x032c1c8c]
//   XREF to: 032c1c8c (WRITE)
// 0056d40d: TEST ESI,ESI
//   Label: LAB_0056d40d
// 0056d40f: JZ 0x0056d452
//   XREF to: 0056d452 (CONDITIONAL_JUMP)
// 0056d411: MOV ECX,0xa
// 0056d416: MOV EDI,0x32c1c98
//   XREF to: 032c1c98 (DATA)
// 0056d41b: MOVSD.REP ES:EDI,ESI
//   XREF to: 032c1c98 (WRITE)
//   XREF to: 032c1c9c (WRITE)
// 0056d41d: MOV EDX,0x2
// 0056d422: POP EDI
// 0056d423: MOV dword ptr [0x032c1c64],EDX
//   Label: LAB_0056d423
//   XREF to: 032c1c64 (WRITE)
// 0056d429: POP ESI
// 0056d42a: POP EBX
// 0056d42b: RET
// 0056d42c: MOV EDX,0x1
//   Label: LAB_0056d42c
// 0056d431: JMP 0x0056d423
//   XREF to: 0056d423 (UNCONDITIONAL_JUMP)
// 0056d433: FLD float ptr [EAX]
//   Label: LAB_0056d433
// 0056d435: FLD float ptr [EAX + 0x8]
// 0056d438: MOV EDI,dword ptr [EAX + 0x4]
// 0056d43b: MOV dword ptr [0x032c1c6c],EDI
//   XREF to: 032c1c6c (WRITE)
// 0056d441: FSTP float ptr [0x032c1c70]
//   XREF to: 032c1c70 (WRITE)
// 0056d447: FSTP float ptr [0x032c1c68]
//   XREF to: 032c1c68 (WRITE)
// 0056d44d: JMP 0x0056d3aa
//   XREF to: 0056d3aa (UNCONDITIONAL_JUMP)
// 0056d452: MOV EDX,0x3f800000
//   Label: LAB_0056d452
// 0056d457: MOV dword ptr [0x032c1c9c],ESI
//   XREF to: 032c1c9c (WRITE)
// 0056d45d: MOV dword ptr [0x032c1ca0],ESI
//   XREF to: 032c1ca0 (WRITE)
// 0056d463: MOV dword ptr [0x032c1ca4],ESI
//   XREF to: 032c1ca4 (WRITE)
// 0056d469: MOV dword ptr [0x032c1cac],ESI
//   XREF to: 032c1cac (WRITE)
// 0056d46f: MOV dword ptr [0x032c1cb0],ESI
//   XREF to: 032c1cb0 (WRITE)
// 0056d475: MOV dword ptr [0x032c1cb4],ESI
//   XREF to: 032c1cb4 (WRITE)
// 0056d47b: MOV dword ptr [0x032c1ca8],EDX
//   XREF to: 032c1ca8 (WRITE)
// 0056d481: MOV dword ptr [0x032c1cb8],EDX
//   XREF to: 032c1cb8 (WRITE)
// 0056d487: MOV dword ptr [0x032c1c98],EDX
//   XREF to: 032c1c98 (WRITE)
// 0056d48d: MOV EDX,0x2
// 0056d492: POP EDI
// 0056d493: MOV dword ptr [0x032c1c64],EDX
//   XREF to: 032c1c64 (WRITE)
// 0056d499: POP ESI
// 0056d49a: POP EBX
// 0056d49b: RET
