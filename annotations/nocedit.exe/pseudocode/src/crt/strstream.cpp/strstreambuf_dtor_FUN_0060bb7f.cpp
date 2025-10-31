// Name: crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f
// Address: 0060bb7f
// Address Range: [[0060bb7f, 0060bbf7]]
// Convention: __cdecl
// Signature: strstreambuf * crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f(strstreambuf * this_ptr, uint d1)
// Cross-references:
//   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6 (006062a6) at 006062d7 [UNCONDITIONAL_CALL]
// Globals:
//   strstreambuf_vtable g_StrstreambufVTable
//   WatcomTypeInfo g_StrStreamBufTypeInfo
// Function calls:
//   crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

strstreambuf * __cdecl
crt_strstream_cpp_strstreambuf_dtor_FUN_0060bb7f(strstreambuf *this_ptr,uint d1)

{
  char *ptr;
  void *pvVar1;
  
  if ((d1 & 4) == 0) {
    pvVar1 = this_ptr[1].streambuf.__b_lock;
    this_ptr->__vtable = &g_StrstreambufVTable;
    if (((((uint)pvVar1 & 2) != 0) && (((uint)pvVar1 & 1) == 0)) &&
       (ptr = (this_ptr->streambuf).__reserve_base, ptr != (char *)0x0)) {
      if (this_ptr->__free_fn == (void *)0x0) {
        crt_memory_c_free_FUN_005fe659(ptr);
      }
      else {
        (*(code *)this_ptr->__free_fn)();
      }
    }
    this_ptr = (strstreambuf *)
               crt_iostream_cpp_streambuf_destructor_FUN_0060d64f(&this_ptr->streambuf);
    if ((d1 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    pvVar1 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_StrStreamBufTypeInfo);
    crt_memory_c_free_FUN_005fe659(pvVar1);
  }
  return this_ptr;
}


// Assembly code:
// 0060bb7f: PUSH EBX
//   Label: crt_strstream.cpp_strstreambuf_dtor_FUN_0060bb7f
// 0060bb80: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060bb84: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0060bb89: JNZ 0x0060bbcf
//   XREF to: 0060bbcf (CONDITIONAL_JUMP)
// 0060bb8b: MOV DL,byte ptr [EBX + 0x3c]
// 0060bb8e: MOV dword ptr [EBX + 0x28],0x665d34
//   XREF to: 00665d34 (DATA)
// 0060bb95: TEST DL,0x2
// 0060bb98: JZ 0x0060bbb5
//   XREF to: 0060bbb5 (CONDITIONAL_JUMP)
// 0060bb9a: TEST DL,0x1
// 0060bb9d: JNZ 0x0060bbb5
//   XREF to: 0060bbb5 (CONDITIONAL_JUMP)
// 0060bb9f: MOV EAX,dword ptr [EBX + 0x4]
// 0060bba2: TEST EAX,EAX
// 0060bba4: JZ 0x0060bbb5
//   XREF to: 0060bbb5 (CONDITIONAL_JUMP)
// 0060bba6: CMP dword ptr [EBX + 0x30],0x0
// 0060bbaa: JNZ 0x0060bbea
//   XREF to: 0060bbea (CONDITIONAL_JUMP)
// 0060bbac: PUSH EAX
// 0060bbad: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0060bbb2: ADD ESP,0x4
//   Label: LAB_0060bbb2
// 0060bbb5: PUSH 0x1
//   Label: LAB_0060bbb5
// 0060bbb7: PUSH EBX
// 0060bbb8: CALL crt_iostream.cpp_streambuf_destructor_FUN_0060d64f
//   XREF to: 0060d64f (UNCONDITIONAL_CALL)
// 0060bbbd: ADD ESP,0x8
// 0060bbc0: MOV CL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0060bbc4: MOV EBX,EAX
// 0060bbc6: TEST CL,0x2
// 0060bbc9: JNZ 0x0060bbf0
//   XREF to: 0060bbf0 (CONDITIONAL_JUMP)
// 0060bbcb: MOV EAX,EBX
// 0060bbcd: POP EBX
// 0060bbce: RET
// 0060bbcf: PUSH 0x665fb0
//   Label: LAB_0060bbcf
//   XREF to: 00665fb0 (DATA)
// 0060bbd4: PUSH EBX
// 0060bbd5: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0060bbda: ADD ESP,0x8
// 0060bbdd: PUSH EAX
// 0060bbde: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0060bbe3: ADD ESP,0x4
//   Label: LAB_0060bbe3
// 0060bbe6: MOV EAX,EBX
// 0060bbe8: POP EBX
// 0060bbe9: RET
// 0060bbea: PUSH EAX
//   Label: LAB_0060bbea
// 0060bbeb: CALL dword ptr [EBX + 0x30]
// 0060bbee: JMP 0x0060bbb2
//   XREF to: 0060bbb2 (UNCONDITIONAL_JUMP)
// 0060bbf0: PUSH EAX
//   Label: LAB_0060bbf0
// 0060bbf1: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0060bbf6: JMP 0x0060bbe3
//   XREF to: 0060bbe3 (UNCONDITIONAL_JUMP)
