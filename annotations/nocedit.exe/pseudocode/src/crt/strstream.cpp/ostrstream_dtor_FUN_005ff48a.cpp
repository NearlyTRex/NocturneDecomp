// Name: crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
// Address: 005ff48a
// Address Range: [[005ff48a, 005ff523]]
// Convention: __cdecl
// Signature: ostrstream * crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a(ostrstream * this_ptr, int d1)
// Cross-references:
//   crt_strstream.cpp_ostrstream_destructor_thunk_from_ios_FUN_005ff445 (005ff445) at 005ff454 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_ostrstream_destructor_thunk_from_ostream_FUN_005ff42f (005ff42f) at 005ff43c [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_finalizeBuffer_FUN_0043ed50 (0043ed50) at 0043edb4 [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_processToBuffer_FUN_0043ea80 (0043ea80) at 0043eb0c [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_OStrStreamTypeInfo
//   void* PTR_FUN_00665b7c = 005ff48a
//   void* PTR_LAB_00665b84 = 005ff42f
//   void* PTR_FUN_00665b8c = 005ff445
// Function calls:
//   crt_iostream.cpp_ios_dtor_FUN_0060632c
//   crt_iostream.cpp_ostream_dtor_FUN_00606231
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

ostrstream * __cdecl crt_strstream_cpp_ostrstream_dtor_FUN_005ff48a(ostrstream *this_ptr,int d1)

{
  int iVar1;
  WatcomVirtualBaseDescriptor *pWVar2;
  ostream *poVar3;
  ostrstream *ptr;
  void *ptr_00;
  ios *piVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  byte in_stack_00000010;
  byte in_stack_00000014;
  
  if ((d1 & 4U) == 0) {
    iVar1 = ((this_ptr->strstreambase_core).layout_info)->offset_to_vbase;
    *(int *)((this_ptr->field_80).padding + iVar1 + -0x75) = iVar1;
    (this_ptr->field_68).layout_info = (WatcomInheritanceLayout *)&PTR_FUN_00665b7c;
    pWVar2 = (this_ptr->strstreambase_core).layout_info;
    (this_ptr->field_68).ostream_data = &PTR_LAB_00665b84;
    *(void ***)((this_ptr->field_80).padding + pWVar2->offset_to_vbase + -0x49) = &PTR_FUN_00665b8c;
    poVar3 = crt_iostream_cpp_ostream_dtor_FUN_00606231
                       ((ostream *)&(this_ptr->field_68).destructor_vtable,1,unaff_EBX);
    ptr = (ostrstream *)
          crt_strstream_cpp_strstreambase_dtor_FUN_006062a6
                    ((strstreambase *)&poVar3[-2].ios.__xalloc_list,1,unaff_retaddr,(uint)this_ptr);
    if ((in_stack_00000010 & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c
                         ((ios *)&(ptr->field_80).__tied_stream,1,(uint)this_ptr);
      ptr = (ostrstream *)&piVar4[-2].__tied_stream;
    }
    if ((in_stack_00000014 & 2) == 0) {
      return ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    this_ptr = ptr;
  }
  else {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_OStrStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
  }
  return this_ptr;
}


// Assembly code:
// 005ff48a: PUSH EBX
//   Label: crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a
// 005ff48b: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ff48f: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005ff494: JNZ 0x005ff4ee
//   XREF to: 005ff4ee (CONDITIONAL_JUMP)
// 005ff496: MOV EAX,dword ptr [EBX]
// 005ff498: MOV EDX,dword ptr [EAX + 0x4]
// 005ff49b: LEA EAX,[EBX + EDX*0x1]
// 005ff49e: MOV dword ptr [EAX + -0x4],EDX
// 005ff4a1: MOV dword ptr [EBX + 0x44],0x665b7c
//   XREF to: 00665b7c (DATA)
// 005ff4a8: PUSH 0x1
// 005ff4aa: MOV EAX,dword ptr [EBX]
// 005ff4ac: MOV dword ptr [EBX + 0x4c],0x665b84
//   XREF to: 00665b84 (DATA)
// 005ff4b3: ADD EBX,0x48
// 005ff4b6: MOV EAX,dword ptr [EAX + 0x4]
// 005ff4b9: PUSH EBX
// 005ff4ba: MOV dword ptr [EBX + EAX*0x1 + -0x20],0x665b8c
//   XREF to: 00665b8c (DATA)
// 005ff4c2: CALL crt_iostream.cpp_ostream_dtor_FUN_00606231
//   XREF to: 00606231 (UNCONDITIONAL_CALL)
// 005ff4c7: ADD ESP,0x8
// 005ff4ca: PUSH 0x1
// 005ff4cc: LEA EBX,[EAX + -0x48]
// 005ff4cf: PUSH EBX
// 005ff4d0: CALL crt_strstream.cpp_strstreambase_dtor_FUN_006062a6
//   XREF to: 006062a6 (UNCONDITIONAL_CALL)
// 005ff4d5: ADD ESP,0x8
// 005ff4d8: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ff4dc: MOV EBX,EAX
// 005ff4de: TEST DL,0x1
// 005ff4e1: JZ 0x005ff509
//   XREF to: 005ff509 (CONDITIONAL_JUMP)
// 005ff4e3: TEST byte ptr [ESP + 0xc],0x2
//   Label: LAB_005ff4e3
//   XREF to: Stack[0x8] (READ)
// 005ff4e8: JNZ 0x005ff51c
//   XREF to: 005ff51c (CONDITIONAL_JUMP)
// 005ff4ea: MOV EAX,EBX
// 005ff4ec: POP EBX
// 005ff4ed: RET
// 005ff4ee: PUSH 0x65bc70
//   Label: LAB_005ff4ee
//   XREF to: 0065bc70 (DATA)
// 005ff4f3: PUSH EBX
// 005ff4f4: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005ff4f9: ADD ESP,0x8
// 005ff4fc: PUSH EAX
// 005ff4fd: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005ff502: ADD ESP,0x4
//   Label: LAB_005ff502
// 005ff505: MOV EAX,EBX
// 005ff507: POP EBX
// 005ff508: RET
// 005ff509: PUSH 0x1
//   Label: LAB_005ff509
// 005ff50b: ADD EAX,0x54
// 005ff50e: PUSH EAX
// 005ff50f: CALL crt_iostream.cpp_ios_dtor_FUN_0060632c
//   XREF to: 0060632c (UNCONDITIONAL_CALL)
// 005ff514: ADD ESP,0x8
// 005ff517: LEA EBX,[EAX + -0x54]
// 005ff51a: JMP 0x005ff4e3
//   XREF to: 005ff4e3 (UNCONDITIONAL_JUMP)
// 005ff51c: PUSH EBX
//   Label: LAB_005ff51c
// 005ff51d: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005ff522: JMP 0x005ff502
//   XREF to: 005ff502 (UNCONDITIONAL_JUMP)
