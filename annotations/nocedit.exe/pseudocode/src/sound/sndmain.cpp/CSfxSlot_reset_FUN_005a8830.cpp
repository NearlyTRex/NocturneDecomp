// Name: sound_sndmain.cpp_CSfxSlot_reset_FUN_005a8830
// Address: 005a8830
// Address Range: [[005a8830, 005a88d3]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_reset_FUN_005a8830(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxOptions_ctor_FUN_005add70 (005add70) at 005add76 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_ctor_FUN_005ade00 (005ade00) at 005ade06 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a8c10 (005a8c10) at 005a8c25 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a8ed4 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00663138 = -1
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_reset_FUN_005a8830(CSfxSlot *this_ptr)

{
  undefined8 uVar1;
  undefined8 uVar2;
  int iVar3;
  double dVar4;
  
  (this_ptr->options).status = 0;
  (this_ptr->options).field5_0x14[0] = '\0';
  (this_ptr->options).field5_0x14[1] = '\0';
  (this_ptr->options).field5_0x14[2] = '\0';
  (this_ptr->options).field5_0x14[3] = '\0';
  (this_ptr->options).field5_0x14[4] = '\0';
  (this_ptr->options).field5_0x14[5] = '\0';
  (this_ptr->options).field5_0x14[6] = '\0';
  (this_ptr->options).field5_0x14[7] = '\0';
  (this_ptr->options).field5_0x14[8] = '\0';
  (this_ptr->options).field5_0x14[9] = '\0';
  (this_ptr->options).field5_0x14[10] = '\0';
  (this_ptr->options).field5_0x14[0xb] = '\0';
  (this_ptr->options).field5_0x14[0xc] = '\0';
  (this_ptr->options).field5_0x14[0xd] = '\0';
  (this_ptr->options).field5_0x14[0xe] = '\0';
  (this_ptr->options).field5_0x14[0xf] = '\0';
  (this_ptr->options).field5_0x14[0x20] = '\0';
  (this_ptr->options).field5_0x14[0x21] = '\0';
  (this_ptr->options).field5_0x14[0x22] = '\0';
  (this_ptr->options).field5_0x14[0x23] = '\0';
  (this_ptr->options).field5_0x14[0x24] = '\0';
  (this_ptr->options).field5_0x14[0x25] = '\0';
  (this_ptr->options).field5_0x14[0x26] = '\0';
  (this_ptr->options).field5_0x14[0x27] = '\0';
  (this_ptr->options).field5_0x14[0x28] = '\0';
  (this_ptr->options).field5_0x14[0x29] = '\0';
  (this_ptr->options).field5_0x14[0x2a] = '\0';
  (this_ptr->options).field5_0x14[0x2b] = '\0';
  (this_ptr->options).field5_0x14[0x2c] = '\0';
  (this_ptr->options).field5_0x14[0x2d] = '\0';
  (this_ptr->options).field5_0x14[0x2e] = '\0';
  (this_ptr->options).field5_0x14[0x2f] = '\0';
  (this_ptr->options).field5_0x14[0x30] = '\0';
  (this_ptr->options).field5_0x14[0x31] = '\0';
  (this_ptr->options).field5_0x14[0x32] = -0x80;
  (this_ptr->options).field5_0x14[0x33] = '?';
  (this_ptr->options).field5_0x14[0x34] = '\0';
  (this_ptr->options).field5_0x14[0x35] = '\0';
  (this_ptr->options).field5_0x14[0x36] = -0x80;
  (this_ptr->options).field5_0x14[0x37] = '?';
  uVar1 = *(undefined8 *)(this_ptr->options).field5_0x14;
  uVar2 = *(undefined8 *)((this_ptr->options).field5_0x14 + 0x20);
  (this_ptr->options).position = (int)uVar1;
  (this_ptr->options).loop_count = (int)((ulonglong)uVar1 >> 0x20);
  *(undefined8 *)((this_ptr->options).field5_0x14 + 0x18) = uVar2;
  iVar3 = (this_ptr->options).loop_count;
  uVar1 = *(undefined8 *)((this_ptr->options).field5_0x14 + 0x18);
  (this_ptr->options).sample_data = (void *)(this_ptr->options).position;
  (this_ptr->options).volume = iVar3;
  *(undefined8 *)((this_ptr->options).field5_0x14 + 0x10) = uVar1;
  crt_memory_c_memset_FUN_005fde40((this_ptr->options).field5_0x14 + 0x40,0,8);
  (this_ptr->options).field5_0x14[0x4c] = '\0';
  (this_ptr->options).field5_0x14[0x4d] = '\0';
  (this_ptr->options).field5_0x14[0x4e] = '\0';
  (this_ptr->options).field5_0x14[0x4f] = '\0';
  (this_ptr->options).field5_0x14[0x50] = '\0';
  (this_ptr->options).field5_0x14[0x51] = '\0';
  (this_ptr->options).field5_0x14[0x52] = '\0';
  (this_ptr->options).field5_0x14[0x53] = '\0';
  (this_ptr->options).field5_0x14[0x54] = '\0';
  dVar4 = DOUBLE_00663138;
  (this_ptr->options).field5_0x14[0x55] = '\0';
  (this_ptr->options).field5_0x14[0x56] = '\0';
  (this_ptr->options).field5_0x14[0x57] = '\0';
  (this_ptr->options).field5_0x14[0x58] = '\0';
  (this_ptr->options).field5_0x14[0x59] = '\0';
  (this_ptr->options).field5_0x14[0x5a] = '\0';
  (this_ptr->options).field5_0x14[0x5b] = '\0';
  *(double *)((this_ptr->options).field5_0x14 + 0x38) = dVar4;
  return;
}


// Assembly code:
// 005a8830: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_reset_FUN_005a8830
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
