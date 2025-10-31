// Name: crt_iostream.cpp_ostream_dtor_FUN_00606231
// Address: 00606231
// Address Range: [[00606231, 006062a5]]
// Convention: __cdecl
// Signature: ostream * crt_iostream.cpp_ostream_dtor_FUN_00606231(ostream * this_ptr, uint d1, uint d2)
// Cross-references:
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc (005ff7bc) at 005ff7f4 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_ostream_destructor_thunk_FUN_006061e4 (006061e4) at 006061f3 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a (005ff48a) at 005ff4c2 [UNCONDITIONAL_CALL]
// Globals:
//   void* g_OStream_Destructor = 00606231
//   void* g_OStream_IOSDestructor = 006061e4
//   WatcomTypeInfo g_OStreamTypeInfo
// Function calls:
//   crt_iostream.cpp_ios_dtor_FUN_0060632c
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

ostream * __cdecl crt_iostream_cpp_ostream_dtor_FUN_00606231(ostream *this_ptr,uint d1,uint d2)

{
  int iVar1;
  void *ptr;
  ios *piVar2;
  uint unaff_EBX;
  
  if ((d1 & 4) == 0) {
    iVar1 = ((this_ptr->ostream_core).layout_info)->offset_to_base;
    *(int *)((this_ptr->ios).padding + iVar1 + -0x31) = iVar1;
    (this_ptr->ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OStream_Destructor;
    *(void ***)
     ((this_ptr->ios).padding + ((this_ptr->ostream_core).layout_info)->offset_to_base + -5) =
         &g_OStream_IOSDestructor;
    if ((d1 & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&this_ptr->ios,1,unaff_EBX);
      this_ptr = (ostream *)&piVar2[-1].__fill_character;
    }
    if ((d2 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_OStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}


// Assembly code:
// 00606231: PUSH EBX
//   Label: crt_iostream.cpp_ostream_dtor_FUN_00606231
// 00606232: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00606236: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 0060623b: JNZ 0x00606270
//   XREF to: 00606270 (CONDITIONAL_JUMP)
// 0060623d: MOV EAX,dword ptr [EBX]
// 0060623f: MOV EDX,dword ptr [EAX + 0x4]
// 00606242: LEA EAX,[EBX + EDX*0x1]
// 00606245: MOV dword ptr [EAX + -0x4],EDX
// 00606248: MOV EAX,dword ptr [EBX]
// 0060624a: MOV dword ptr [EBX + 0x4],0x665dc4
//   XREF to: 00665dc4 (DATA)
// 00606251: MOV EAX,dword ptr [EAX + 0x4]
// 00606254: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00606258: MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665dcc
//   XREF to: 00665dcc (DATA)
// 00606260: TEST DL,0x1
// 00606263: JZ 0x0060628b
//   XREF to: 0060628b (CONDITIONAL_JUMP)
// 00606265: TEST byte ptr [ESP + 0xc],0x2
//   Label: LAB_00606265
//   XREF to: Stack[0x8] (READ)
// 0060626a: JNZ 0x0060629e
//   XREF to: 0060629e (CONDITIONAL_JUMP)
// 0060626c: MOV EAX,EBX
// 0060626e: POP EBX
// 0060626f: RET
// 00606270: PUSH 0x665e10
//   Label: LAB_00606270
//   XREF to: 00665e10 (DATA)
// 00606275: PUSH EBX
// 00606276: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0060627b: ADD ESP,0x8
// 0060627e: PUSH EAX
// 0060627f: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00606284: ADD ESP,0x4
//   Label: LAB_00606284
// 00606287: MOV EAX,EBX
// 00606289: POP EBX
// 0060628a: RET
// 0060628b: PUSH 0x1
//   Label: LAB_0060628b
// 0060628d: ADD EBX,0xc
// 00606290: PUSH EBX
// 00606291: CALL crt_iostream.cpp_ios_dtor_FUN_0060632c
//   XREF to: 0060632c (UNCONDITIONAL_CALL)
// 00606296: ADD ESP,0x8
// 00606299: LEA EBX,[EAX + -0xc]
// 0060629c: JMP 0x00606265
//   XREF to: 00606265 (UNCONDITIONAL_JUMP)
// 0060629e: PUSH EBX
//   Label: LAB_0060629e
// 0060629f: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 006062a4: JMP 0x00606284
//   XREF to: 00606284 (UNCONDITIONAL_JUMP)
