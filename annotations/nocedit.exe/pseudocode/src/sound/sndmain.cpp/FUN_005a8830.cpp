// Name: sound_sndmain.cpp_FUN_005a8830
// Address: 005a8830
// Address Range: [[005a8830, 005a88d3]]
// Convention: unknown
// Signature: undefined sound_sndmain.cpp_FUN_005a8830()
// Cross-references:
//   sound_sndmain.cpp_FUN_005a8c10 (005a8c10) at 005a8c25 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxOptions_ctor_FUN_005add70 (005add70) at 005add76 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_SfxSlot_ctor_FUN_005ade00 (005ade00) at 005ade06 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a8ed4 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00663138
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 sound_sndmain.cpp_FUN_005a8830(undefined4 param_1) */

void sound_sndmain_cpp_FUN_005a8830(void)

{
  undefined8 uVar1;
  undefined4 *in_stack_00000004;
  
  *in_stack_00000004 = 0;
  in_stack_00000004[5] = 0;
  in_stack_00000004[6] = 0;
  in_stack_00000004[7] = 0;
  in_stack_00000004[8] = 0;
  in_stack_00000004[0xd] = 0;
  in_stack_00000004[0xe] = 0;
  in_stack_00000004[0xf] = 0;
  in_stack_00000004[0x10] = 0;
  in_stack_00000004[0x11] = 0x3f800000;
  in_stack_00000004[0x12] = 0x3f800000;
  *(undefined8 *)(in_stack_00000004 + 3) = *(undefined8 *)(in_stack_00000004 + 5);
  *(undefined8 *)(in_stack_00000004 + 0xb) = *(undefined8 *)(in_stack_00000004 + 0xd);
  *(undefined8 *)(in_stack_00000004 + 1) = *(undefined8 *)(in_stack_00000004 + 3);
  *(undefined8 *)(in_stack_00000004 + 9) = *(undefined8 *)(in_stack_00000004 + 0xb);
  crt_memory_c_memset_FUN_005fde40(in_stack_00000004 + 0x15,0,8);
  in_stack_00000004[0x18] = 0;
  in_stack_00000004[0x19] = 0;
  in_stack_00000004[0x1a] = 0;
  uVar1 = _DAT_00663138;
  in_stack_00000004[0x1b] = 0;
  *(undefined8 *)(in_stack_00000004 + 0x13) = uVar1;
  return;
}


// Assembly code:
// 005a8830: PUSH EBX
//   Label: sound_sndmain.cpp_FUN_005a8830
// 005a8831: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005a8835: MOV dword ptr [EBX],0x0
// 005a883b: MOV dword ptr [EBX + 0x14],0x0
// 005a8842: MOV dword ptr [EBX + 0x18],0x0
// 005a8849: MOV dword ptr [EBX + 0x1c],0x0
// 005a8850: MOV dword ptr [EBX + 0x20],0x0
// 005a8857: MOV dword ptr [EBX + 0x34],0x0
// 005a885e: MOV dword ptr [EBX + 0x38],0x0
// 005a8865: MOV dword ptr [EBX + 0x3c],0x0
// 005a886c: MOV dword ptr [EBX + 0x40],0x0
// 005a8873: MOV dword ptr [EBX + 0x44],0x3f800000
// 005a887a: PUSH 0x8
// 005a887c: MOV dword ptr [EBX + 0x48],0x3f800000
// 005a8883: LEA EAX,[EBX + 0x54]
// 005a8886: FLD double ptr [EBX + 0x14]
// 005a8889: FLD double ptr [EBX + 0x34]
// 005a888c: PUSH 0x0
// 005a888e: FXCH
// 005a8890: FSTP double ptr [EBX + 0xc]
// 005a8893: FSTP double ptr [EBX + 0x2c]
// 005a8896: FLD double ptr [EBX + 0xc]
// 005a8899: FLD double ptr [EBX + 0x2c]
// 005a889c: PUSH EAX
// 005a889d: FXCH
// 005a889f: FSTP double ptr [EBX + 0x4]
// 005a88a2: FSTP double ptr [EBX + 0x24]
// 005a88a5: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 005a88aa: MOV dword ptr [EBX + 0x60],0x0
// 005a88b1: MOV dword ptr [EBX + 0x64],0x0
// 005a88b8: MOV dword ptr [EBX + 0x68],0x0
// 005a88bf: FLD double ptr [0x00663138]
//   XREF to: 00663138 (READ)
// 005a88c5: MOV dword ptr [EBX + 0x6c],0x0
// 005a88cc: ADD ESP,0xc
// 005a88cf: FSTP double ptr [EBX + 0x4c]
// 005a88d2: POP EBX
// 005a88d3: RET
