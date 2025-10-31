// Name: crt_iostream.cpp_istream_ctor_FUN_00606376
// Address: 00606376
// Address Range: [[00606376, 006063c8]]
// Convention: __cdecl
// Signature: istream * crt_iostream.cpp_istream_ctor_FUN_00606376(istream * this_ptr, uint c1)
// Cross-references:
//   crt_fstream.cpp_ifstream_constructor_FUN_005ff664 (005ff664) at 005ff692 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ifstream_ctor_FUN_005ff8f0 (005ff8f0) at 005ff90c [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_istrstream_constructor_FUN_005ff524 (005ff524) at 005ff54c [UNCONDITIONAL_CALL]
// Globals:
//   WatcomInheritanceLayout DAT_00665e68
//   WatcomThunkedDestructor PTR_unk_OtherFreeMemory2_FUN_006063e1_00665e74
//   void* PTR_FUN_00665e7c = 006063c9
// Function calls:
//   crt_iostream.cpp_ios_ctor_FUN_006061fc

#include "nocturne.h"

istream * __cdecl crt_iostream_cpp_istream_ctor_FUN_00606376(istream *this_ptr,uint c1)

{
  char *pcVar1;
  int iVar2;
  ios *piVar3;
  
  if ((c1 & 1) == 0) {
    (this_ptr->istream_core).layout_info = &DAT_00665e68;
    piVar3 = crt_iostream_cpp_ios_ctor_FUN_006061fc(&this_ptr->ios);
    this_ptr = (istream *)&piVar3[-1].__xalloc_list;
  }
  iVar2 = ((this_ptr->istream_core).layout_info)->offset_to_base;
  *(int *)((this_ptr->ios).padding + iVar2 + -0x35) = iVar2;
  (this_ptr->istream_core).destructor_vtable = &PTR_unk_OtherFreeMemory2_FUN_006063e1_00665e74;
  *(void ***)((this_ptr->ios).padding + ((this_ptr->istream_core).layout_info)->offset_to_base + -9)
       = &PTR_FUN_00665e7c;
  (this_ptr->istream_core).__last_read_length = 0;
  pcVar1 = (this_ptr->ios).padding + ((this_ptr->istream_core).layout_info)->offset_to_base + -0x25;
  *pcVar1 = *pcVar1 | 1;
  return this_ptr;
}


// Assembly code:
// 00606376: MOV EAX,dword ptr [ESP + 0x4]
//   Label: crt_iostream.cpp_istream_ctor_FUN_00606376
//   XREF to: Stack[0x4] (READ)
// 0060637a: TEST byte ptr [ESP + 0x8],0x1
//   XREF to: Stack[0x8] (READ)
// 0060637f: JZ 0x006063b2
//   XREF to: 006063b2 (CONDITIONAL_JUMP)
// 00606381: MOV EDX,dword ptr [EAX]
//   Label: LAB_00606381
// 00606383: MOV ECX,dword ptr [EDX + 0x4]
// 00606386: LEA EDX,[EAX + ECX*0x1]
// 00606389: MOV dword ptr [EDX + -0x4],ECX
// 0060638c: MOV EDX,dword ptr [EAX]
// 0060638e: MOV dword ptr [EAX + 0x8],0x665e74
//   XREF to: 00665e74 (DATA)
// 00606395: MOV EDX,dword ptr [EDX + 0x4]
// 00606398: MOV dword ptr [EDX + EAX*0x1 + 0x28],0x665e7c
//   XREF to: 00665e7c (DATA)
// 006063a0: MOV EDX,dword ptr [EAX]
// 006063a2: MOV dword ptr [EAX + 0x4],0x0
// 006063a9: MOV EDX,dword ptr [EDX + 0x4]
// 006063ac: OR byte ptr [EDX + EAX*0x1 + 0xc],0x1
// 006063b1: RET
// 006063b2: MOV dword ptr [EAX],0x665e68
//   Label: LAB_006063b2
//   XREF to: 00665e68 (DATA)
// 006063b8: ADD EAX,0x10
// 006063bb: PUSH EAX
// 006063bc: CALL crt_iostream.cpp_ios_ctor_FUN_006061fc
//   XREF to: 006061fc (UNCONDITIONAL_CALL)
// 006063c1: ADD ESP,0x4
// 006063c4: SUB EAX,0x10
// 006063c7: JMP 0x00606381
//   XREF to: 00606381 (UNCONDITIONAL_JUMP)
