// Name: crt_iostream.cpp_istream_dtor_FUN_006063e1
// Address: 006063e1
// Address Range: [[006063e1, 00606455]]
// Convention: __cdecl
// Signature: istream * crt_iostream.cpp_istream_dtor_FUN_006063e1(istream * this_ptr, uint d1, uint d2)
// Cross-references:
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856 (005ff856) at 005ff88e [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_istream_destructor_thunk_from_ios_FUN_006063c9 (006063c9) at 006063d8 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca (005ff5ca) at 005ff602 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomThunkedDestructor PTR_unk_OtherFreeMemory2_FUN_006063e1_00665e74
//   void* PTR_FUN_00665e7c = 006063c9
//   WatcomTypeInfo g_IStreamTypeInfo
// Function calls:
//   crt_iostream.cpp_ios_dtor_FUN_0060632c
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

istream * __cdecl crt_iostream_cpp_istream_dtor_FUN_006063e1(istream *this_ptr,uint d1,uint d2)

{
  int iVar1;
  void *ptr;
  ios *piVar2;
  uint unaff_EBX;
  
  if ((d1 & 4) == 0) {
    iVar1 = ((this_ptr->istream_core).layout_info)->offset_to_base;
    *(int *)((this_ptr->ios).padding + iVar1 + -0x35) = iVar1;
    (this_ptr->istream_core).destructor_vtable = &PTR_unk_OtherFreeMemory2_FUN_006063e1_00665e74;
    *(void ***)
     ((this_ptr->ios).padding + ((this_ptr->istream_core).layout_info)->offset_to_base + -9) =
         &PTR_FUN_00665e7c;
    if ((d1 & 1) == 0) {
      piVar2 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&this_ptr->ios,1,unaff_EBX);
      this_ptr = (istream *)&piVar2[-1].__xalloc_list;
    }
    if ((d2 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_IStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}


// Assembly code:
// 006063e1: PUSH EBX
//   Label: crt_iostream.cpp_istream_dtor_FUN_006063e1
// 006063e2: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 006063e6: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 006063eb: JNZ 0x00606420
//   XREF to: 00606420 (CONDITIONAL_JUMP)
// 006063ed: MOV EAX,dword ptr [EBX]
// 006063ef: MOV EDX,dword ptr [EAX + 0x4]
// 006063f2: LEA EAX,[EBX + EDX*0x1]
// 006063f5: MOV dword ptr [EAX + -0x4],EDX
// 006063f8: MOV EAX,dword ptr [EBX]
// 006063fa: MOV dword ptr [EBX + 0x8],0x665e74
//   XREF to: 00665e74 (DATA)
// 00606401: MOV EAX,dword ptr [EAX + 0x4]
// 00606404: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00606408: MOV dword ptr [EBX + EAX*0x1 + 0x28],0x665e7c
//   XREF to: 00665e7c (DATA)
// 00606410: TEST DL,0x1
// 00606413: JZ 0x0060643b
//   XREF to: 0060643b (CONDITIONAL_JUMP)
// 00606415: TEST byte ptr [ESP + 0xc],0x2
//   Label: LAB_00606415
//   XREF to: Stack[0x8] (READ)
// 0060641a: JNZ 0x0060644e
//   XREF to: 0060644e (CONDITIONAL_JUMP)
// 0060641c: MOV EAX,EBX
// 0060641e: POP EBX
// 0060641f: RET
// 00606420: PUSH 0x665eb0
//   Label: LAB_00606420
//   XREF to: 00665eb0 (DATA)
// 00606425: PUSH EBX
// 00606426: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0060642b: ADD ESP,0x8
// 0060642e: PUSH EAX
// 0060642f: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00606434: ADD ESP,0x4
//   Label: LAB_00606434
// 00606437: MOV EAX,EBX
// 00606439: POP EBX
// 0060643a: RET
// 0060643b: PUSH 0x1
//   Label: LAB_0060643b
// 0060643d: ADD EBX,0x10
// 00606440: PUSH EBX
// 00606441: CALL crt_iostream.cpp_ios_dtor_FUN_0060632c
//   XREF to: 0060632c (UNCONDITIONAL_CALL)
// 00606446: ADD ESP,0x8
// 00606449: LEA EBX,[EAX + -0x10]
// 0060644c: JMP 0x00606415
//   XREF to: 00606415 (UNCONDITIONAL_JUMP)
// 0060644e: PUSH EBX
//   Label: LAB_0060644e
// 0060644f: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00606454: JMP 0x00606434
//   XREF to: 00606434 (UNCONDITIONAL_JUMP)
