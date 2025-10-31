// Name: crt_fstream.cpp_fstreambase_dtor_FUN_00606509
// Address: 00606509
// Address Range: [[00606509, 0060658e]]
// Convention: __cdecl
// Signature: fstreambase * crt_fstream.cpp_fstreambase_dtor_FUN_00606509(fstreambase * this_ptr, uint d1, uint d2, uint d3)
// Cross-references:
//   crt_fstream.cpp_fstream_destructor_thunk_from_ios_FUN_006064f1 (006064f1) at 00606500 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856 (005ff856) at 005ff89c [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc (005ff7bc) at 005ff802 [UNCONDITIONAL_CALL]
// Globals:
//   void* g_FStreamBase_Destructor = 00606509
//   void* g_FStreamBase_IOSDestructor = 006064f1
//   WatcomTypeInfo g_FStreamBaseTypeInfo
// Function calls:
//   crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9
//   crt_iostream.cpp_ios_dtor_FUN_0060632c
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

fstreambase * __cdecl
crt_fstream_cpp_fstreambase_dtor_FUN_00606509(fstreambase *this_ptr,uint d1,uint d2,uint d3)

{
  int iVar1;
  filebuf *pfVar2;
  void *ptr;
  ios *piVar3;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) == 0) {
    iVar1 = *(int *)((int)(this_ptr->base).layout_info + 4);
    *(int *)((this_ptr->base).filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
    (this_ptr->base).destructor_vtable = &g_FStreamBase_Destructor;
    *(void ***)
     ((this_ptr->base).filebuf.__unbuffered_get_area +
     *(int *)((int)(this_ptr->base).layout_info + 4) + -0x10) = &g_FStreamBase_IOSDestructor;
    pfVar2 = crt_fstream_cpp_filebuf_dtor_FUN_0060bdf9
                       (&(this_ptr->base).filebuf,0,unaff_EBX,unaff_retaddr);
    this_ptr = (fstreambase *)(pfVar2[-1].__unbuffered_get_area + 4);
    if ((d2 & 1) == 0) {
      piVar3 = crt_iostream_cpp_ios_dtor_FUN_0060632c
                         ((ios *)&pfVar2[1].streambuf.__reserve_end,1,unaff_retaddr);
      this_ptr = (fstreambase *)&piVar3[-2].__enabled_exceptions;
    }
    if ((d3 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_FStreamBaseTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}


// Assembly code:
// 00606509: PUSH EBX
//   Label: crt_fstream.cpp_fstreambase_dtor_FUN_00606509
// 0060650a: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0060650e: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00606513: JNZ 0x00606559
//   XREF to: 00606559 (CONDITIONAL_JUMP)
// 00606515: MOV EAX,dword ptr [EBX]
// 00606517: MOV EAX,dword ptr [EAX + 0x4]
// 0060651a: LEA EDX,[EBX + EAX*0x1]
// 0060651d: MOV dword ptr [EDX + -0x4],EAX
// 00606520: PUSH 0x0
// 00606522: MOV EAX,dword ptr [EBX]
// 00606524: MOV dword ptr [EBX + 0x40],0x665ed4
//   XREF to: 00665ed4 (DATA)
// 0060652b: ADD EBX,0x4
// 0060652e: MOV EAX,dword ptr [EAX + 0x4]
// 00606531: PUSH EBX
// 00606532: MOV dword ptr [EBX + EAX*0x1 + 0x24],0x665edc
//   XREF to: 00665edc (DATA)
// 0060653a: CALL crt_fstream.cpp_filebuf_dtor_FUN_0060bdf9
//   XREF to: 0060bdf9 (UNCONDITIONAL_CALL)
// 0060653f: ADD ESP,0x8
// 00606542: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00606546: LEA EBX,[EAX + -0x4]
// 00606549: TEST DL,0x1
// 0060654c: JZ 0x00606574
//   XREF to: 00606574 (CONDITIONAL_JUMP)
// 0060654e: TEST byte ptr [ESP + 0xc],0x2
//   Label: LAB_0060654e
//   XREF to: Stack[0x8] (READ)
// 00606553: JNZ 0x00606587
//   XREF to: 00606587 (CONDITIONAL_JUMP)
// 00606555: MOV EAX,EBX
// 00606557: POP EBX
// 00606558: RET
// 00606559: PUSH 0x665f10
//   Label: LAB_00606559
//   XREF to: 00665f10 (DATA)
// 0060655e: PUSH EBX
// 0060655f: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 00606564: ADD ESP,0x8
// 00606567: PUSH EAX
// 00606568: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0060656d: ADD ESP,0x4
//   Label: LAB_0060656d
// 00606570: MOV EAX,EBX
// 00606572: POP EBX
// 00606573: RET
// 00606574: PUSH 0x1
//   Label: LAB_00606574
// 00606576: ADD EBX,0x48
// 00606579: PUSH EBX
// 0060657a: CALL crt_iostream.cpp_ios_dtor_FUN_0060632c
//   XREF to: 0060632c (UNCONDITIONAL_CALL)
// 0060657f: ADD ESP,0x8
// 00606582: LEA EBX,[EAX + -0x48]
// 00606585: JMP 0x0060654e
//   XREF to: 0060654e (UNCONDITIONAL_JUMP)
// 00606587: PUSH EBX
//   Label: LAB_00606587
// 00606588: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 0060658d: JMP 0x0060656d
//   XREF to: 0060656d (UNCONDITIONAL_JUMP)
