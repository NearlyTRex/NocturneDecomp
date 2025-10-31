// Name: support_codec.cpp_CLZWCompress_dtor_FUN_0043f710
// Address: 0043f710
// Address Range: [[0043f710, 0043f76e]]
// Convention: __cdecl
// Signature: CLZWCompress * support_codec.cpp_CLZWCompress_dtor_FUN_0043f710(CLZWCompress * this_ptr, uint d1, uint d2, uint d3, uint d4)
// Globals:
//   WatcomTypeInfo g_CLZWCompressTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210
//   support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0

#include "nocturne.h"

CLZWCompress * __cdecl
support_codec_cpp_CLZWCompress_dtor_FUN_0043f710
          (CLZWCompress *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  CLZWDictionary *pCVar1;
  CLZWCompress *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CLZWCompressTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  pCVar1 = support_codec_cpp_CLZWDictionary_dtor_FUN_0043edf0(&this_ptr->dictionary);
  ptr = (CLZWCompress *)
        support_codec_cpp_CCodec_dtor_FUN_0043e9b0
                  ((CCodec *)&pCVar1[-1].bit_state.accumulated_bits,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 0043f710: PUSH EBX
//   Label: support_codec.cpp_CLZWCompress_dtor_FUN_0043f710
// 0043f711: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043f715: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0043f71a: JNZ 0x0043f747
//   XREF to: 0043f747 (CONDITIONAL_JUMP)
// 0043f71c: PUSH 0x0
// 0043f71e: ADD EBX,0x4
// 0043f721: PUSH EBX
// 0043f722: CALL support_codec.cpp_CLZWDictionary_dtor_FUN_0043edf0
//   XREF to: 0043edf0 (UNCONDITIONAL_CALL)
// 0043f727: ADD ESP,0x8
// 0043f72a: PUSH 0x1
// 0043f72c: LEA EBX,[EAX + -0x4]
// 0043f72f: PUSH EBX
// 0043f730: CALL support_codec.cpp_CCodec_dtor_FUN_0043e9b0
//   XREF to: 0043e9b0 (UNCONDITIONAL_CALL)
// 0043f735: ADD ESP,0x8
// 0043f738: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0043f73c: MOV EBX,EAX
// 0043f73e: TEST DL,0x2
// 0043f741: JNZ 0x0043f762
//   XREF to: 0043f762 (CONDITIONAL_JUMP)
// 0043f743: MOV EAX,EBX
// 0043f745: POP EBX
// 0043f746: RET
// 0043f747: PUSH 0x65bd10
//   Label: LAB_0043f747
//   XREF to: 0065bd10 (DATA)
// 0043f74c: PUSH EBX
// 0043f74d: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0043f752: ADD ESP,0x8
// 0043f755: PUSH EAX
// 0043f756: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0043f75b: ADD ESP,0x4
// 0043f75e: MOV EAX,EBX
// 0043f760: POP EBX
// 0043f761: RET
// 0043f762: PUSH EAX
//   Label: LAB_0043f762
// 0043f763: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0043f768: ADD ESP,0x4
// 0043f76b: MOV EAX,EBX
// 0043f76d: POP EBX
// 0043f76e: RET
