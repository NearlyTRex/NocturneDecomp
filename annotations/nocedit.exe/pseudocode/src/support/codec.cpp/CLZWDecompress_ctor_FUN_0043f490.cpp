// Name: support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
// Address: 0043f490
// Address Range: [[0043f490, 0043f4c0]]
// Convention: __cdecl
// Signature: CLZWDecompress * support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490(CLZWDecompress * this_ptr, int buffer_size, int initial_bits)
// Cross-references:
//   core_dcamera.cpp_staticInit_FUN_0044bb10 (0044bb10) at 0044bb33 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e15e0 [UNCONDITIONAL_CALL]
// Globals:
//   CCodec_vtable g_CLZWDecompressVTable
// Function calls:
//   support_codec.cpp_CCodec_ctor_FUN_0043e9a0
//   support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0

#include "nocturne.h"

CLZWDecompress * __cdecl
support_codec_cpp_CLZWDecompress_ctor_FUN_0043f490
          (CLZWDecompress *this_ptr,int buffer_size,int initial_bits)

{
  CCodec *pCVar1;
  CLZWDictionary *pCVar2;
  int *piVar3;
  int in_stack_00000010;
  int in_stack_00000014;
  
  pCVar1 = support_codec_cpp_CCodec_ctor_FUN_0043e9a0(&this_ptr->base_codec);
  pCVar2 = support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0((CLZWDictionary *)(pCVar1 + 1));
  piVar3 = &pCVar2[-1].bit_state.accumulated_bits;
  *piVar3 = (int)&g_CLZWDecompressVTable;
  pCVar2[1].dict_size = in_stack_00000010;
  pCVar2[1].num_bits = in_stack_00000014;
  return (CLZWDecompress *)piVar3;
}


// Assembly code:
// 0043f490: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_codec.cpp_CLZWDecompress_ctor_FUN_0043f490
//   XREF to: Stack[0x4] (READ)
// 0043f494: PUSH EAX
// 0043f495: CALL support_codec.cpp_CCodec_ctor_FUN_0043e9a0
//   XREF to: 0043e9a0 (UNCONDITIONAL_CALL)
// 0043f49a: ADD ESP,0x4
// 0043f49d: ADD EAX,0x4
// 0043f4a0: PUSH EAX
// 0043f4a1: CALL support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0
//   XREF to: 0043edd0 (UNCONDITIONAL_CALL)
// 0043f4a6: ADD ESP,0x4
// 0043f4a9: SUB EAX,0x4
// 0043f4ac: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0043f4b0: MOV dword ptr [EAX],0x65bc24
//   XREF to: 0065bc24 (DATA)
// 0043f4b6: MOV dword ptr [EAX + 0x20],EDX
// 0043f4b9: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0043f4bd: MOV dword ptr [EAX + 0x24],EDX
// 0043f4c0: RET
