// Name: sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
// Address: 005a8830
// Address Range: [[005a8830, 005a88d3]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830(CSfxOptions * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxOptions_ctor_FUN_005add70 (005add70) at 005add76 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_ctor_FUN_005ade00 (005ade00) at 005ade06 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_resetCurrentSfxOptions_FUN_005a8c10 (005a8c10) at 005a8c25 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a8ed4 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00663138 = -1
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxOptions_reset_FUN_005a8830(CSfxOptions *this_ptr)

{
  double dVar1;
  
  this_ptr->status = 0;
  *(undefined4 *)&(this_ptr->position).z = 0;
  *(undefined4 *)((int)&(this_ptr->position).z + 4) = 0;
  this_ptr->position_source_ptr = (CVector3d *)0x0;
  this_ptr->position_format = 0;
  *(undefined4 *)&(this_ptr->velocity).z = 0;
  *(undefined4 *)((int)&(this_ptr->velocity).z + 4) = 0;
  this_ptr->velocity_source_ptr = (CVector3d *)0x0;
  this_ptr->velocity_format = 0;
  this_ptr->current_volume = 1.0;
  this_ptr->base_frequency = 1.0;
  dVar1 = (this_ptr->velocity).z;
  (this_ptr->position).y = (this_ptr->position).z;
  (this_ptr->velocity).y = dVar1;
  dVar1 = (this_ptr->velocity).y;
  (this_ptr->position).x = (this_ptr->position).y;
  (this_ptr->velocity).x = dVar1;
  crt_memory_c_memset_FUN_005fde40(this_ptr->userdata,0,8);
  *(undefined4 *)&this_ptr->trigger_time = 0;
  *(undefined4 *)((int)&this_ptr->trigger_time + 4) = 0;
  this_ptr->trigger_id = 0;
  dVar1 = DOUBLE_00663138;
  this_ptr->field14_0x6c = 0;
  this_ptr->delay_remaining = dVar1;
  return;
}


// Assembly code:
// 005a8830: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxOptions_reset_FUN_005a8830
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
