// Name: core_game.cpp_FUN_004e1c30
// Address: 004e1c30
// Address Range: [[004e1c30, 004e1ca2]]
// Convention: unknown
// Signature: undefined core_game.cpp_FUN_004e1c30()
// Globals:
//   TerminatedCString s_rt_0062cc71
//   TerminatedCString s_world_0062cc74
//   TerminatedCString s_core_game_cpp_0062cc7a
//   undefined4 PTR_s_hq_act1_msn_0067b750
//   void* PTR_s_gtown_msn_0062d684_0067b754 = 0062d684
// Function calls:
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void core_game_cpp_FUN_004e1c30(void)

{
  FILE *file_ptr;
  int item_index;
  CPickList *in_stack_00000004;
  int in_stack_00000008;
  
  item_index = 0;
  in_stack_00000008 = in_stack_00000008 * 0x34;
  if ((in_stack_00000004->base_strlist).item_count < 1) {
    return;
  }
  do {
    file_ptr = engine_dosio_c_getFile_FUN_00481a50
                         ("world",
                          *(char **)(&PTR_s_hq_act1_msn_0067b750 + in_stack_00000008),"rt")
    ;
    if (file_ptr == (FILE *)0x0) {
      shape_edittool_cpp_CPickList_enableItem_FUN_004a5410(in_stack_00000004,item_index,false);
    }
    else {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\game.cpp",0xec1);
    }
    item_index = item_index + 1;
    in_stack_00000008 = in_stack_00000008 + 4;
  } while (item_index < (in_stack_00000004->base_strlist).item_count);
  return;
}


// Assembly code:
// 004e1c30: PUSH EBX
//   Label: core_game.cpp_FUN_004e1c30
// 004e1c31: PUSH ESI
// 004e1c32: PUSH EDI
// 004e1c33: MOV EDI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004e1c37: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004e1c3b: LEA EAX,[ESI*0x4 + 0x0]
// 004e1c42: SUB EAX,ESI
// 004e1c44: SHL EAX,0x2
// 004e1c47: ADD ESI,EAX
// 004e1c49: XOR EBX,EBX
// 004e1c4b: SHL ESI,0x2
// 004e1c4e: MOV EAX,dword ptr [EDI]
// 004e1c50: CMP EBX,EAX
// 004e1c52: JL 0x004e1c58
//   XREF to: 004e1c58 (CONDITIONAL_JUMP)
// 004e1c54: POP EDI
// 004e1c55: POP ESI
// 004e1c56: POP EBX
// 004e1c57: RET
// 004e1c58: PUSH 0x62cc71
//   Label: LAB_004e1c58
//   XREF to: 0062cc71 (DATA)
// 004e1c5d: MOV EDX,dword ptr [ESI + 0x67b750]
//   XREF to: 0067b750 (DATA)
//   XREF to: 0067b754 (DATA)
// 004e1c63: PUSH EDX
// 004e1c64: PUSH 0x62cc74
//   XREF to: 0062cc74 (DATA)
// 004e1c69: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 004e1c6e: ADD ESP,0xc
// 004e1c71: TEST EAX,EAX
// 004e1c73: JNZ 0x004e1c82
//   XREF to: 004e1c82 (CONDITIONAL_JUMP)
// 004e1c75: PUSH EAX
// 004e1c76: PUSH EBX
// 004e1c77: PUSH EDI
// 004e1c78: CALL shape_edittool.cpp_CPickList_enableItem_FUN_004a5410
//   XREF to: 004a5410 (UNCONDITIONAL_CALL)
// 004e1c7d: ADD ESP,0xc
// 004e1c80: JMP 0x004e1c95
//   XREF to: 004e1c95 (UNCONDITIONAL_JUMP)
// 004e1c82: PUSH 0xec1
//   Label: LAB_004e1c82
// 004e1c87: PUSH 0x62cc7a
//   XREF to: 0062cc7a (DATA)
// 004e1c8c: PUSH EAX
// 004e1c8d: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004e1c92: ADD ESP,0xc
// 004e1c95: INC EBX
//   Label: LAB_004e1c95
// 004e1c96: ADD ESI,0x4
// 004e1c99: MOV EAX,dword ptr [EDI]
// 004e1c9b: CMP EBX,EAX
// 004e1c9d: JL 0x004e1c58
//   XREF to: 004e1c58 (CONDITIONAL_JUMP)
// 004e1c9f: POP EDI
// 004e1ca0: POP ESI
// 004e1ca1: POP EBX
// 004e1ca2: RET
