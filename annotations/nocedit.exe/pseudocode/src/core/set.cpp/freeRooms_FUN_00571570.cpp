// Name: core_set.cpp_freeRooms_FUN_00571570
// Address: 00571570
// Address Range: [[00571570, 00571584]]
// Convention: __cdecl
// Signature: void core_set.cpp_freeRooms_FUN_00571570(SRoom * * array)
// Cross-references:
//   core_set.cpp_CDemonSet_dtor_FUN_00569350 (00569350) at 00569377 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_SRoomTypeInfo
// Function calls:
//   crt_memory.c_freeTypeArray_FUN_005feee9

#include "nocturne.h"

void __cdecl core_set_cpp_freeRooms_FUN_00571570(SRoom **array)

{
  crt_memory_c_freeTypeArray_FUN_005feee9(array,0x14,&g_SRoomTypeInfo);
  return;
}


// Assembly code:
// 00571570: PUSH 0x6628f0
//   Label: core_set.cpp_freeRooms_FUN_00571570
//   XREF to: 006628f0 (DATA)
// 00571575: PUSH 0x14
// 00571577: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0057157b: PUSH EDX
// 0057157c: CALL crt_memory.c_freeTypeArray_FUN_005feee9
//   XREF to: 005feee9 (UNCONDITIONAL_CALL)
// 00571581: ADD ESP,0xc
// 00571584: RET
