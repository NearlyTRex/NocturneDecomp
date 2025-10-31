// Name: support_codec.cpp_CCodec_dtor_FUN_0043e9b0
// Address: 0043e9b0
// Address Range: [[0043e9b0, 0043e9cf] [0043e9d1, 0043e9f8]]
// Convention: __cdecl
// Signature: CCodec * support_codec.cpp_CCodec_dtor_FUN_0043e9b0(CCodec * this_ptr, int d1)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452f52 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e16cd [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e10e7 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWCompress_dtor_FUN_0043f710 (0043f710) at 0043f730 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CLZWDecompress_dtor_FUN_0043f6b0 (0043f6b0) at 0043f6d0 [UNCONDITIONAL_CALL]
// Globals:
//   CCodec_vtable g_CCodecVTable
//   WatcomTypeInfo g_CCodecTypeInfo
// Function calls:
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CCodec * __cdecl support_codec_cpp_CCodec_dtor_FUN_0043e9b0(CCodec *this_ptr,int d1)

{
  void *ptr;
  
  if ((d1 & 4U) != 0) {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CCodecTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
    return this_ptr;
  }
  this_ptr->vtable = &g_CCodecVTable;
  if ((d1 & 2U) == 0) {
    return this_ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  return this_ptr;
}


// Assembly code:
// 0043e9b0: PUSH EBX
//   Label: support_codec.cpp_CCodec_dtor_FUN_0043e9b0
// 0043e9b1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0043e9b5: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0043e9b9: TEST AL,0x4
// 0043e9bb: JNZ 0x0043e9d1
//   XREF to: 0043e9d1 (CONDITIONAL_JUMP)
// 0043e9bd: MOV dword ptr [EBX],0x65bbc4
//   XREF to: 0065bbc4 (DATA)
// 0043e9c3: TEST AL,0x2
// 0043e9c5: JNZ 0x0043e9ec
//   XREF to: 0043e9ec (CONDITIONAL_JUMP)
// 0043e9c7: MOV EAX,EBX
// 0043e9c9: POP EBX
// 0043e9ca: LEA EAX,[EAX]
// 0043e9d1: PUSH 0x65bc50
//   Label: LAB_0043e9d1
//   XREF to: 0065bc50 (DATA)
// 0043e9d6: PUSH EBX
// 0043e9d7: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0043e9dc: ADD ESP,0x8
// 0043e9df: PUSH EAX
// 0043e9e0: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0043e9e5: ADD ESP,0x4
// 0043e9e8: MOV EAX,EBX
// 0043e9ea: POP EBX
// 0043e9eb: RET
// 0043e9ec: PUSH EBX
//   Label: LAB_0043e9ec
// 0043e9ed: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0043e9f2: ADD ESP,0x4
// 0043e9f5: MOV EAX,EBX
// 0043e9f7: POP EBX
// 0043e9f8: RET
