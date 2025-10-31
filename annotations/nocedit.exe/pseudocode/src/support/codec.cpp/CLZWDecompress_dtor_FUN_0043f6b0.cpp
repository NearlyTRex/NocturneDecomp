// Name: support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0
// Address: 0043f6b0
// Address Range: [[0043f6b0, 0043f70e]]
// Convention: __cdecl
// Signature: CLZWDecompress * support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0(CLZWDecompress * this_ptr, uint d1, uint d2, uint d3)
// Globals:
//   WatcomTypeInfo g_CLZWDecompressTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0

#include "nocturne.h"

CLZWDecompress * __cdecl
support_codec_cpp_CLZWDecompress_dtor_FUN_0043f6b0(CLZWDecompress *this_ptr,uint d1,uint d2,uint d3)

{
  CLZWDictionary *pCVar1;
  CLZWDecompress *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLZWDecompressTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&this_ptr->lzw_dict);
  ptr = (CLZWDecompress *)
        support_codec_cpp_CCodec_dtor_FUN_0043e9b0
                  ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0043f6b0: PUSH EBX
//   Label: support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0
// 0043f6b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043f6b5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0043f6ba: JNZ 0x0043f6e7
//   XREF to: 0043f6e7 (CONDITIONAL_JUMP)
// 0043f6bc: PUSH 0x0
// 0043f6be: ADD EBX,0x4
// 0043f6c1: PUSH EBX
// 0043f6c2: CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
//   XREF to: 0043edf0 (UNCONDITIONAL_CALL)
// 0043f6c7: ADD ESP,0x8
// 0043f6ca: PUSH 0x1
// 0043f6cc: LEA EBX,[EAX + -0x4]
// 0043f6cf: PUSH EBX
// 0043f6d0: CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)
// 0043f6d5: ADD ESP,0x8
// 0043f6d8: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0043f6dc: MOV EBX,EAX
// 0043f6de: TEST DL,0x2
// 0043f6e1: JNZ 0x0043f702
//   XREF to: 0043f702 (CONDITIONAL_JUMP)
// 0043f6e3: MOV EAX,EBX
// 0043f6e5: POP EBX
// 0043f6e6: RET
// 0043f6e7: PUSH 0x65bcf0
//   Label: LAB_0043f6e7
//   XREF to: 0065bcf0 (DATA)
// 0043f6ec: PUSH EBX
// 0043f6ed: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0043f6f2: ADD ESP,0x8
// 0043f6f5: PUSH EAX
// 0043f6f6: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0043f6fb: ADD ESP,0x4
// 0043f6fe: MOV EAX,EBX
// 0043f700: POP EBX
// 0043f701: RET
// 0043f702: PUSH EAX
//   Label: LAB_0043f702
// 0043f703: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0043f708: ADD ESP,0x4
// 0043f70b: MOV EAX,EBX
// 0043f70d: POP EBX
// 0043f70e: RET
