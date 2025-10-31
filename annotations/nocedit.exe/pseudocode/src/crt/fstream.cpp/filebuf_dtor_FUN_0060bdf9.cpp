// Name: crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9
// Address: 0060bdf9
// Address Range: [[0060bdf9, 0060be70]]
// Convention: __watcallStack
// Signature: filebuf * crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9(filebuf * this_ptr, uint d1, uint d2, uint d3)
// Cross-references:
//   crt_fstream.cpp_fstreambase_dtor_FUN_00606509 (00606509) at 0060653a [UNCONDITIONAL_CALL]
// Globals:
//   filebuf_vtable g_FilebufVTable
//   WatcomTypeInfo g_FilebufTypeInfo
// Function calls:
//   crt_fstream.cpp_filebuf_close_FUN_00608bcc
//   crt_fstream.cpp_filebuf_sync_FUN_0060dc5e
//   crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

filebuf * __watcallStack
crt_fstream_cpp_filebuf_dtor_FUN_0060bdf9(filebuf *this_ptr,uint d1,uint d2,uint d3)

{
  void *ptr;
  
  if ((d1 & 4) == 0) {
    this_ptr->__vtable = &g_FilebufVTable;
    if (this_ptr->__file_handle != -1) {
      if ((this_ptr->streambuf).__put_ptr != (this_ptr->streambuf).__put_base) {
        crt_fstream_cpp_filebuf_sync_FUN_0060dc5e(this_ptr);
      }
      if ((this_ptr->__attached & 1U) == 0) {
        crt_fstream_cpp_filebuf_close_FUN_00608bcc(this_ptr);
      }
    }
    this_ptr = (filebuf *)crt_iostream_cpp_streambuf_destructor_FUN_0060d64f(&this_ptr->streambuf);
    if ((d3 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_FilebufTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}


// Assembly code:
// 0060bdf9: PUSH EBX
//   Label: crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9
// 0060bdfa: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060bdfe: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0060be03: JNZ 0x0060be4e
//   XREF to: 0060be4e (CONDITIONAL_JUMP)
// 0060be05: MOV EAX,dword ptr [EBX + 0x2c]
// 0060be08: MOV dword ptr [EBX + 0x28],0x665fcc
//   XREF to: 00665fcc (DATA)
// 0060be0f: CMP EAX,-0x1
// 0060be12: JZ 0x0060be34
//   XREF to: 0060be34 (CONDITIONAL_JUMP)
// 0060be14: MOV EAX,dword ptr [EBX + 0x20]
// 0060be17: SUB EAX,dword ptr [EBX + 0x18]
// 0060be1a: JZ 0x0060be25
//   XREF to: 0060be25 (CONDITIONAL_JUMP)
// 0060be1c: PUSH EBX
// 0060be1d: CALL crt_fstream.cpp_filebuf_sync_FUN_0060dc5e
//   XREF to: 0060dc5e (UNCONDITIONAL_CALL)
// 0060be22: ADD ESP,0x4
// 0060be25: TEST byte ptr [EBX + 0x39],0x1
//   Label: LAB_0060be25
// 0060be29: JNZ 0x0060be34
//   XREF to: 0060be34 (CONDITIONAL_JUMP)
// 0060be2b: PUSH EBX
// 0060be2c: CALL crt_fstream.cpp_filebuf_close_FUN_00608bcc
//   XREF to: 00608bcc (UNCONDITIONAL_CALL)
// 0060be31: ADD ESP,0x4
// 0060be34: PUSH 0x1
//   Label: LAB_0060be34
// 0060be36: PUSH EBX
// 0060be37: CALL crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
//   XREF to: 0060d64f (UNCONDITIONAL_CALL)
// 0060be3c: ADD ESP,0x8
// 0060be3f: MOV DH,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060be43: MOV EBX,EAX
// 0060be45: TEST DH,0x2
// 0060be48: JNZ 0x0060be69
//   XREF to: 0060be69 (CONDITIONAL_JUMP)
// 0060be4a: MOV EAX,EBX
// 0060be4c: POP EBX
// 0060be4d: RET
// 0060be4e: PUSH 0x666020
//   Label: LAB_0060be4e
//   XREF to: 00666020 (DATA)
// 0060be53: PUSH EBX
// 0060be54: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0060be59: ADD ESP,0x8
// 0060be5c: PUSH EAX
// 0060be5d: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0060be62: ADD ESP,0x4
//   Label: LAB_0060be62
// 0060be65: MOV EAX,EBX
// 0060be67: POP EBX
// 0060be68: RET
// 0060be69: PUSH EAX
//   Label: LAB_0060be69
// 0060be6a: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0060be6f: JMP 0x0060be62
//   XREF to: 0060be62 (UNCONDITIONAL_JUMP)
