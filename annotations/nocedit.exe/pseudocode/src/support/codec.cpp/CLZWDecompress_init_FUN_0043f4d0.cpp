// Name: support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
// Address: 0043f4d0
// Address Range: [[0043f4d0, 0043f508]]
// Convention: __cdecl
// Signature: void support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0(CLZWDecompress * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_loadImage_FUN_0044f3e0 (0044f3e0) at 0044f6a0 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e15f0 [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
//   support_codec.cpp_resetDictionary_FUN_0043e510

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWDecompress_init_FUN_0043f4d0(CLZWDecompress *this_ptr)

{
  int unaff_EBX;
  int unaff_retaddr;
  
  support_codec_cpp_CLZWDictionary_init_FUN_0043ee60
            (&this_ptr->lzw_dict,this_ptr->buffer_size,this_ptr->num_bits,unaff_EBX,unaff_retaddr);
  support_codec_cpp_resetDictionary_FUN_0043e510((CLZWDictionary *)&(this_ptr->lzw_dict).bit_state);
  this_ptr->current_code = -1;
  this_ptr->previous_code = -1;
  return;
}


// Assembly code:
// 0043f4d0: PUSH EBX
//   Label: support_codec.cpp_CLZWDecompress_init_FUN_0043f4d0
// 0043f4d1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043f4d5: PUSH EBX
// 0043f4d6: ADD ESP,0x4
// 0043f4d9: MOV EDX,dword ptr [EBX + 0x24]
// 0043f4dc: PUSH EDX
// 0043f4dd: MOV ECX,dword ptr [EBX + 0x20]
// 0043f4e0: PUSH ECX
// 0043f4e1: LEA EAX,[EBX + 0x4]
// 0043f4e4: PUSH EAX
// 0043f4e5: CALL support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
//   XREF to: 0043ee60 (UNCONDITIONAL_CALL)
// 0043f4ea: ADD ESP,0xc
// 0043f4ed: LEA EAX,[EBX + 0x18]
// 0043f4f0: PUSH EAX
// 0043f4f1: CALL support_codec.cpp_resetDictionary_FUN_0043e510
//   XREF to: 0043e510 (UNCONDITIONAL_CALL)
// 0043f4f6: MOV dword ptr [EBX + 0x2c],0xffffffff
// 0043f4fd: ADD ESP,0x4
// 0043f500: MOV dword ptr [EBX + 0x28],0xffffffff
// 0043f507: POP EBX
// 0043f508: RET
