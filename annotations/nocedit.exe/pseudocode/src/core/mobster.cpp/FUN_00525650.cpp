// Name: core_mobster.cpp_FUN_00525650
// Address: 00525650
// Address Range: [[00525650, 00525719]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00525650()
// Cross-references:
//   core_mobster.cpp_FUN_00525840 (00525840) at 0052587a [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00639826
//   undefined4 DAT_0063982e
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ec0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00525650(undefined4 param_1) */

void core_mobster_cpp_FUN_00525650(void)

{
  float fVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  if (*(int *)(in_stack_00000004 + 0xbee4) == 0) {
    local_38 = 0xc0166666;
    local_34 = 0xbfcccccd;
    local_3c = 0x400ccccd;
    if (&local_24 != &local_3c) {
      local_20 = 0xc0166666;
      local_1c = 0xbfcccccd;
      local_24 = 0x400ccccd;
    }
    fVar1 = *(float *)(*(int *)(in_stack_00000004 + 0xbee0) + 0x34) + (float)_DAT_00639826;
  }
  else {
    local_14 = 0xc0166666;
    local_10 = 0xbfcccccd;
    local_18 = 0xc00ccccd;
    if (&local_24 != &local_18) {
      local_20 = 0xc0166666;
      local_1c = 0xbfcccccd;
      local_24 = 0xc00ccccd;
    }
    fVar1 = *(float *)(*(int *)(in_stack_00000004 + 0xbee0) + 0x34) + (float)_DAT_0063982e;
  }
  *(float *)(in_stack_00000004 + 0x34) = fVar1;
  pfVar2 = core_actor_cpp_CDemonActor_FUN_00408ec0(*(CDemonActor **)(in_stack_00000004 + 0xbee0));
  *(float *)(in_stack_00000004 + 0x20) = *pfVar2;
  *(float *)(in_stack_00000004 + 0x24) = pfVar2[1];
  *(float *)(in_stack_00000004 + 0x28) = pfVar2[2];
  return;
}


// Assembly code:
// 00525650: PUSH EBX
//   Label: core_mobster.cpp_FUN_00525650
// 00525651: PUSH ESI
// 00525652: PUSH EDI
// 00525653: SUB ESP,0x30
// 00525656: MOV EBX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0052565a: CMP dword ptr [EBX + 0xbee4],0x0
// 00525661: JZ 0x005256d9
//   XREF to: 005256d9 (CONDITIONAL_JUMP)
// 00525663: MOV ESI,0xc0166666
// 00525668: MOV EDI,0xbfcccccd
// 0052566d: MOV ECX,0xc00ccccd
// 00525672: LEA EDX,[ESP + 0x24]
//   XREF to: Stack[-0x18] (DATA)
// 00525676: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 0052567a: MOV dword ptr [ESP + 0x28],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0052567e: MOV dword ptr [ESP + 0x2c],EDI
//   XREF to: Stack[-0x10] (WRITE)
// 00525682: MOV dword ptr [ESP + 0x24],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00525686: CMP EAX,EDX
// 00525688: JZ 0x00525696
//   XREF to: 00525696 (CONDITIONAL_JUMP)
// 0052568a: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 0052568e: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00525692: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00525696: MOV EAX,dword ptr [EBX + 0xbee0]
//   Label: LAB_00525696
// 0052569c: FLD float ptr [EAX + 0x34]
// 0052569f: FADD double ptr [0x0063982e]
//   XREF to: 0063982e (READ)
// 005256a5: FSTP float ptr [EBX + 0x34]
//   Label: LAB_005256a5
// 005256a8: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 005256ac: PUSH EAX
// 005256ad: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x30] (DATA)
// 005256b1: PUSH EAX
// 005256b2: MOV ECX,dword ptr [EBX + 0xbee0]
// 005256b8: PUSH ECX
// 005256b9: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 005256be: FLD float ptr [EAX]
// 005256c0: ADD ESP,0xc
// 005256c3: FSTP float ptr [EBX + 0x20]
// 005256c6: MOV EDX,dword ptr [EAX + 0x4]
// 005256c9: MOV dword ptr [EBX + 0x24],EDX
// 005256cc: MOV EDX,dword ptr [EAX + 0x8]
// 005256cf: MOV dword ptr [EBX + 0x28],EDX
// 005256d2: ADD ESP,0x30
// 005256d5: POP EDI
// 005256d6: POP ESI
// 005256d7: POP EBX
// 005256d8: RET
// 005256d9: MOV ESI,0xc0166666
//   Label: LAB_005256d9
// 005256de: MOV EDI,0xbfcccccd
// 005256e3: MOV ECX,0x400ccccd
// 005256e8: MOV EAX,ESP
// 005256ea: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 005256ee: MOV dword ptr [ESP + 0x4],ESI
//   XREF to: Stack[-0x38] (WRITE)
// 005256f2: MOV dword ptr [ESP + 0x8],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 005256f6: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x3c] (DATA)
// 005256f9: CMP EDX,EAX
// 005256fb: JZ 0x00525709
//   XREF to: 00525709 (CONDITIONAL_JUMP)
// 005256fd: MOV dword ptr [ESP + 0x1c],ESI
//   XREF to: Stack[-0x20] (WRITE)
// 00525701: MOV dword ptr [ESP + 0x20],EDI
//   XREF to: Stack[-0x1c] (WRITE)
// 00525705: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 00525709: MOV EAX,dword ptr [EBX + 0xbee0]
//   Label: LAB_00525709
// 0052570f: FLD float ptr [EAX + 0x34]
// 00525712: FADD double ptr [0x00639826]
//   XREF to: 00639826 (READ)
// 00525718: JMP 0x005256a5
//   XREF to: 005256a5 (UNCONDITIONAL_JUMP)
