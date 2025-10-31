// Name: crt_fstream.cpp_ifstream_dtor_FUN_005ff856
// Address: 005ff856
// Address Range: [[005ff856, 005ff8ef]]
// Convention: __cdecl
// Signature: void * crt_fstream.cpp_ifstream_dtor_FUN_005ff856(ifstream * this_ptr, uint d1, uint d2, uint d3, uint d4)
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1866 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e1260 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ifstream_destructor_thunk_from_ios_FUN_005ff6f8 (005ff6f8) at 005ff707 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ifstream_destructor_thunk_from_istream_FUN_005ff6e2 (005ff6e2) at 005ff6ef [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_processFiles_FUN_0043ec30 (0043ec30) at 0043ed08 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_IFStreamTypeInfo
//   void* g_IFStream_FStreamBaseDestructor = 005ff856
//   void* g_IFStream_IStreamDestructor = 005ff6e2
//   void* g_IFStream_IOSDestructor = 005ff6f8
// Function calls:
//   crt_fstream.cpp_fstreambase_dtor_FUN_00606509
//   crt_iostream.cpp_ios_dtor_FUN_0060632c
//   crt_iostream.cpp_istream_dtor_FUN_006063e1
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

void * __cdecl
crt_fstream_cpp_ifstream_dtor_FUN_005ff856(ifstream *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int iVar1;
  istream *piVar2;
  ifstream *ptr;
  void *pvVar3;
  ios *piVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) == 0) {
    iVar1 = *(int *)((int)(this_ptr->fstreambase_core).layout_info + 4);
    *(int *)((this_ptr->fstreambase_core).filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
    (this_ptr->fstreambase_core).destructor_vtable = &g_IFStream_FStreamBaseDestructor;
    pvVar3 = (this_ptr->fstreambase_core).layout_info;
    (this_ptr->istream_core).destructor_vtable =
         (WatcomThunkedDestructor *)&g_IFStream_IStreamDestructor;
    *(void ***)
     ((this_ptr->fstreambase_core).filebuf.__unbuffered_get_area + *(int *)((int)pvVar3 + 4) + -0x10
     ) = &g_IFStream_IOSDestructor;
    piVar2 = crt_iostream_cpp_istream_dtor_FUN_006063e1
                       ((istream *)&this_ptr->istream_core,1,unaff_EBX);
    ptr = (ifstream *)
          crt_fstream_cpp_fstreambase_dtor_FUN_00606509
                    ((fstreambase *)&piVar2[-2].ios.__i_lock,1,unaff_retaddr,(uint)this_ptr);
    if ((d3 & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&ptr->ios,1,(uint)this_ptr);
      ptr = (ifstream *)&piVar4[-2].__tied_stream;
    }
    if ((d4 & 2) == 0) {
      return ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    this_ptr = ptr;
  }
  else {
    pvVar3 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_IFStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(pvVar3);
  }
  return this_ptr;
}


// Assembly code:
// 005ff856: PUSH EBX
//   Label: crt_fstream.cpp_ifstream_dtor_FUN_005ff856
// 005ff857: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ff85b: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005ff860: JNZ 0x005ff8ba
//   XREF to: 005ff8ba (CONDITIONAL_JUMP)
// 005ff862: MOV EAX,dword ptr [EBX]
// 005ff864: MOV EDX,dword ptr [EAX + 0x4]
// 005ff867: LEA EAX,[EBX + EDX*0x1]
// 005ff86a: MOV dword ptr [EAX + -0x4],EDX
// 005ff86d: MOV dword ptr [EBX + 0x40],0x665c68
//   XREF to: 00665c68 (DATA)
// 005ff874: PUSH 0x1
// 005ff876: MOV EAX,dword ptr [EBX]
// 005ff878: MOV dword ptr [EBX + 0x4c],0x665c70
//   XREF to: 00665c70 (DATA)
// 005ff87f: ADD EBX,0x44
// 005ff882: MOV EAX,dword ptr [EAX + 0x4]
// 005ff885: PUSH EBX
// 005ff886: MOV dword ptr [EBX + EAX*0x1 + -0x1c],0x665c78
//   XREF to: 00665c78 (DATA)
// 005ff88e: CALL crt_iostream.cpp_istream_dtor_FUN_006063e1
//   XREF to: 006063e1 (UNCONDITIONAL_CALL)
// 005ff893: ADD ESP,0x8
// 005ff896: PUSH 0x1
// 005ff898: LEA EBX,[EAX + -0x44]
// 005ff89b: PUSH EBX
// 005ff89c: CALL crt_fstream.cpp_fstreambase_dtor_FUN_00606509
//   XREF to: 00606509 (UNCONDITIONAL_CALL)
// 005ff8a1: ADD ESP,0x8
// 005ff8a4: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ff8a8: MOV EBX,EAX
// 005ff8aa: TEST DL,0x1
// 005ff8ad: JZ 0x005ff8d5
//   XREF to: 005ff8d5 (CONDITIONAL_JUMP)
// 005ff8af: TEST byte ptr [ESP + 0xc],0x2
//   Label: LAB_005ff8af
//   XREF to: Stack[0x8] (READ)
// 005ff8b4: JNZ 0x005ff8e8
//   XREF to: 005ff8e8 (CONDITIONAL_JUMP)
// 005ff8b6: MOV EAX,EBX
// 005ff8b8: POP EBX
// 005ff8b9: RET
// 005ff8ba: PUSH 0x65bcb0
//   Label: LAB_005ff8ba
//   XREF to: 0065bcb0 (DATA)
// 005ff8bf: PUSH EBX
// 005ff8c0: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005ff8c5: ADD ESP,0x8
// 005ff8c8: PUSH EAX
// 005ff8c9: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005ff8ce: ADD ESP,0x4
//   Label: LAB_005ff8ce
// 005ff8d1: MOV EAX,EBX
// 005ff8d3: POP EBX
// 005ff8d4: RET
// 005ff8d5: PUSH 0x1
//   Label: LAB_005ff8d5
// 005ff8d7: ADD EAX,0x54
// 005ff8da: PUSH EAX
// 005ff8db: CALL crt_iostream.cpp_ios_dtor_FUN_0060632c
//   XREF to: 0060632c (UNCONDITIONAL_CALL)
// 005ff8e0: ADD ESP,0x8
// 005ff8e3: LEA EBX,[EAX + -0x54]
// 005ff8e6: JMP 0x005ff8af
//   XREF to: 005ff8af (UNCONDITIONAL_JUMP)
// 005ff8e8: PUSH EBX
//   Label: LAB_005ff8e8
// 005ff8e9: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005ff8ee: JMP 0x005ff8ce
//   XREF to: 005ff8ce (UNCONDITIONAL_JUMP)
