// Name: support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
// Address: 0043f2d0
// Address Range: [[0043f2d0, 0043f312]]
// Convention: __cdecl
// Signature: CLZWCompress * support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452b56 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e1054 [UNCONDITIONAL_CALL]
// Globals:
//   CCodec_vtable g_CLZWCompressVTable
// Function calls:
//   support_codec.cpp_CCodec_ctor_FUN_0043e9a0
//   support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0

#include "nocturne.h"

CLZWCompress * __cdecl support_codec_cpp_CLZWCompress_ctor_FUN_0043f2d0(CLZWCompress *this_ptr)

{
  int iVar1;
  CCodec *pCVar2;
  CLZWDictionary *pCVar3;
  int *piVar4;
  uint uVar5;
  int in_stack_00000010;
  int in_stack_00000014;
  
  pCVar2 = support_codec_cpp_CCodec_ctor_FUN_0043e9a0(&this_ptr->base_codec);
  pCVar3 = support_codec_cpp_CLZWDictionary_ctor_FUN_0043edd0((CLZWDictionary *)(pCVar2 + 1));
  piVar4 = &pCVar3[-1].bit_state.accumulated_bits;
  pCVar3[1].dict_size = in_stack_00000010;
  pCVar3[1].num_bits = in_stack_00000014;
  iVar1 = pCVar3[1].num_bits;
  *piVar4 = (int)&g_CLZWCompressVTable;
  uVar5 = -1 << ((byte)iVar1 & 0x1f);
  pCVar3[1].current_num_bits = uVar5;
  pCVar3[1].current_num_bits = ~uVar5;
  return (CLZWCompress *)piVar4;
}


// Assembly code:
// 0043f2d0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: support_codec.cpp_CLZWCompress_ctor_FUN_0043f2d0
//   XREF to: Stack[0x4] (READ)
// 0043f2d4: PUSH EAX
// 0043f2d5: CALL support_codec.cpp_CCodec_ctor_FUN_0043e9a0
//   XREF to: 0043e9a0 (UNCONDITIONAL_CALL)
// 0043f2da: ADD ESP,0x4
// 0043f2dd: ADD EAX,0x4
// 0043f2e0: PUSH EAX
// 0043f2e1: CALL support_codec.cpp_CLZWDictionary_ctor_FUN_0043edd0
//   XREF to: 0043edd0 (UNCONDITIONAL_CALL)
// 0043f2e6: ADD ESP,0x4
// 0043f2e9: SUB EAX,0x4
// 0043f2ec: MOV EDX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 0043f2f0: MOV dword ptr [EAX + 0x20],EDX
// 0043f2f3: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0043f2f7: MOV dword ptr [EAX + 0x24],EDX
// 0043f2fa: MOV EDX,0xffffffff
// 0043f2ff: MOV CL,byte ptr [EAX + 0x24]
// 0043f302: MOV dword ptr [EAX],0x65bbf4
//   XREF to: 0065bbf4 (DATA)
// 0043f308: SHL EDX,CL
// 0043f30a: MOV dword ptr [EAX + 0x28],EDX
// 0043f30d: NOT EDX
// 0043f30f: MOV dword ptr [EAX + 0x28],EDX
// 0043f312: RET
