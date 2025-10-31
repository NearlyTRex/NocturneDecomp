// Name: crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
// Address: 005ff5ca
// Address Range: [[005ff5ca, 005ff663]]
// Convention: __cdecl
// Signature: istrstream * crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca(istrstream * this_ptr, int d1)
// Cross-references:
//   crt_strstream.cpp_istrstream_destructor_thunk_from_ios_FUN_005ff5b2 (005ff5b2) at 005ff5c1 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_istrstream_destructor_thunk_from_istream_FUN_005ff59c (005ff59c) at 005ff5a9 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_processBuffer_FUN_0043eba0 (0043eba0) at 0043ec10 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_processFromBuffer_FUN_0043eb30 (0043eb30) at 0043eb88 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_IStrStreamTypeInfo
//   WatcomThunkedDestructor PTR_FUN_00665bf4
//   WatcomThunkedDestructor PTR_FUN_00665bfc
//   WatcomThunkedDestructorDirect PTR_FUN_00665c04
// Function calls:
//   crt_iostream.cpp_ios_dtor_FUN_0060632c
//   crt_iostream.cpp_istream_dtor_FUN_006063e1
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

istrstream * __cdecl crt_strstream_cpp_istrstream_dtor_FUN_005ff5ca(istrstream *this_ptr,int d1)

{
  int iVar1;
  WatcomVirtualBaseDescriptor *pWVar2;
  istream *piVar3;
  istrstream *ptr;
  void *ptr_00;
  ios *piVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  byte in_stack_00000010;
  byte in_stack_00000014;
  
  if ((d1 & 4U) == 0) {
    iVar1 = ((this_ptr->strstreambase_core).layout_info)->offset_to_vbase;
    *(int *)(this_ptr->padding + iVar1 + -0x58) = iVar1;
    (this_ptr->istream_core).layout_info = (WatcomInheritanceLayout *)&PTR_FUN_00665bf4;
    pWVar2 = (this_ptr->strstreambase_core).layout_info;
    (this_ptr->istream_core).istream_data = &PTR_FUN_00665bfc;
    *(WatcomThunkedDestructorDirect **)(this_ptr->padding + pWVar2->offset_to_vbase + -0x2c) =
         &PTR_FUN_00665c04;
    piVar3 = crt_iostream_cpp_istream_dtor_FUN_006063e1
                       ((istream *)&(this_ptr->istream_core).__last_read_length,1,unaff_EBX);
    ptr = (istrstream *)
          crt_strstream_cpp_strstreambase_dtor_FUN_006062a6
                    ((strstreambase *)&piVar3[-2].ios.__fill_character,1,unaff_retaddr,
                     (uint)this_ptr);
    if ((in_stack_00000010 & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&ptr->ios,1,(uint)this_ptr);
      ptr = (istrstream *)(piVar4 + -2);
    }
    if ((in_stack_00000014 & 2) == 0) {
      return ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    this_ptr = ptr;
  }
  else {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_IStrStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
  }
  return this_ptr;
}


// Assembly code:
// 005ff5ca: PUSH EBX
//   Label: crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca
// 005ff5cb: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ff5cf: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005ff5d4: JNZ 0x005ff62e
//   XREF to: 005ff62e (CONDITIONAL_JUMP)
// 005ff5d6: MOV EAX,dword ptr [EBX]
// 005ff5d8: MOV EDX,dword ptr [EAX + 0x4]
// 005ff5db: LEA EAX,[EBX + EDX*0x1]
// 005ff5de: MOV dword ptr [EAX + -0x4],EDX
// 005ff5e1: MOV dword ptr [EBX + 0x44],0x665bf4
//   XREF to: 00665bf4 (DATA)
// 005ff5e8: PUSH 0x1
// 005ff5ea: MOV EAX,dword ptr [EBX]
// 005ff5ec: MOV dword ptr [EBX + 0x50],0x665bfc
//   XREF to: 00665bfc (DATA)
// 005ff5f3: ADD EBX,0x48
// 005ff5f6: MOV EAX,dword ptr [EAX + 0x4]
// 005ff5f9: PUSH EBX
// 005ff5fa: MOV dword ptr [EBX + EAX*0x1 + -0x20],0x665c04
//   XREF to: 00665c04 (DATA)
// 005ff602: CALL crt_iostream.cpp_istream_dtor_FUN_006063e1
//   XREF to: 006063e1 (UNCONDITIONAL_CALL)
// 005ff607: ADD ESP,0x8
// 005ff60a: PUSH 0x1
// 005ff60c: LEA EBX,[EAX + -0x48]
// 005ff60f: PUSH EBX
// 005ff610: CALL crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
//   XREF to: 006062a6 (UNCONDITIONAL_CALL)
// 005ff615: ADD ESP,0x8
// 005ff618: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ff61c: MOV EBX,EAX
// 005ff61e: TEST DL,0x1
// 005ff621: JZ 0x005ff649
//   XREF to: 005ff649 (CONDITIONAL_JUMP)
// 005ff623: TEST byte ptr [ESP + 0xc],0x2
//   Label: LAB_005ff623
//   XREF to: Stack[0x8] (READ)
// 005ff628: JNZ 0x005ff65c
//   XREF to: 005ff65c (CONDITIONAL_JUMP)
// 005ff62a: MOV EAX,EBX
// 005ff62c: POP EBX
// 005ff62d: RET
// 005ff62e: PUSH 0x65bc90
//   Label: LAB_005ff62e
//   XREF to: 0065bc90 (DATA)
// 005ff633: PUSH EBX
// 005ff634: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005ff639: ADD ESP,0x8
// 005ff63c: PUSH EAX
// 005ff63d: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005ff642: ADD ESP,0x4
//   Label: LAB_005ff642
// 005ff645: MOV EAX,EBX
// 005ff647: POP EBX
// 005ff648: RET
// 005ff649: PUSH 0x1
//   Label: LAB_005ff649
// 005ff64b: ADD EAX,0x58
// 005ff64e: PUSH EAX
// 005ff64f: CALL crt_iostream.cpp_ios_dtor_FUN_0060632c
//   XREF to: 0060632c (UNCONDITIONAL_CALL)
// 005ff654: ADD ESP,0x8
// 005ff657: LEA EBX,[EAX + -0x58]
// 005ff65a: JMP 0x005ff623
//   XREF to: 005ff623 (UNCONDITIONAL_JUMP)
// 005ff65c: PUSH EBX
//   Label: LAB_005ff65c
// 005ff65d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005ff662: JMP 0x005ff642
//   XREF to: 005ff642 (UNCONDITIONAL_JUMP)
