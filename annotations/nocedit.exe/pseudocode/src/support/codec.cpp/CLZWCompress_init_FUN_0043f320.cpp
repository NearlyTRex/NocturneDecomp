// Name: support_codec.cpp_CLZWCompress_init_FUN_0043f320
// Address: 0043f320
// Address Range: [[0043f320, 0043f358]]
// Convention: __cdecl
// Signature: void support_codec.cpp_CLZWCompress_init_FUN_0043f320(CLZWCompress * this_ptr)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452b68 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e1064 [UNCONDITIONAL_CALL]
// Function calls:
//   support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
//   support_codec.cpp_resetDictionary_FUN_0043e510

#include "nocturne.h"

void __cdecl support_codec_cpp_CLZWCompress_init_FUN_0043f320(CLZWCompress *this_ptr)

{
  int unaff_EBX;
  int unaff_retaddr;
  
  support_codec_cpp_CLZWDictionary_init_FUN_0043ee60
            (&this_ptr->dictionary,*(int *)this_ptr->field2_0x20,*(int *)(this_ptr->field2_0x20 + 4)
             ,unaff_EBX,unaff_retaddr);
  support_codec_cpp_resetDictionary_FUN_0043e510
            ((CLZWDictionary *)&(this_ptr->dictionary).bit_state);
  this_ptr->current_code = -1;
  this_ptr->prev_code = -1;
  return;
}


// Assembly code:
// 0043f320: PUSH EBX
//   Label: support_codec.cpp_CLZWCompress_init_FUN_0043f320
// 0043f321: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043f325: PUSH EBX
// 0043f326: ADD ESP,0x4
// 0043f329: MOV EDX,dword ptr [EBX + 0x24]
// 0043f32c: PUSH EDX
// 0043f32d: MOV ECX,dword ptr [EBX + 0x20]
// 0043f330: PUSH ECX
// 0043f331: LEA EAX,[EBX + 0x4]
// 0043f334: PUSH EAX
// 0043f335: CALL support_codec.cpp_CLZWDictionary_init_FUN_0043ee60
//   XREF to: 0043ee60 (UNCONDITIONAL_CALL)
// 0043f33a: ADD ESP,0xc
// 0043f33d: LEA EAX,[EBX + 0x18]
// 0043f340: PUSH EAX
// 0043f341: CALL support_codec.cpp_resetDictionary_FUN_0043e510
//   XREF to: 0043e510 (UNCONDITIONAL_CALL)
// 0043f346: MOV dword ptr [EBX + 0x30],0xffffffff
// 0043f34d: ADD ESP,0x4
// 0043f350: MOV dword ptr [EBX + 0x34],0xffffffff
// 0043f357: POP EBX
// 0043f358: RET
