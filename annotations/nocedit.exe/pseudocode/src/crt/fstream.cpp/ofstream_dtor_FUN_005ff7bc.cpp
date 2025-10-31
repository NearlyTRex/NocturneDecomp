// Name: crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
// Address: 005ff7bc
// Address Range: [[005ff7bc, 005ff855]]
// Convention: __cdecl
// Signature: ofstream * crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc(ofstream * this_ptr, uint d1, uint d2, uint d3, uint d4)
// Cross-references:
//   core_dcamera.cpp_CDemonCamera_saveBackdrop_FUN_004529b0 (004529b0) at 00452f64 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e18c2 [UNCONDITIONAL_CALL]
//   core_game.cpp_CGame_saveGame_FUN_004e0cd0 (004e0cd0) at 004e128c [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_destructor_thunk_from_ios_FUN_005ff7a4 (005ff7a4) at 005ff7b3 [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_destructor_thunk_from_ostream_FUN_005ff78e (005ff78e) at 005ff79b [UNCONDITIONAL_CALL]
//   support_codec.cpp_CCodec_processFiles_FUN_0043ec30 (0043ec30) at 0043ed30 [UNCONDITIONAL_CALL]
// Globals:
//   WatcomTypeInfo g_OFStreamTypeInfo
//   void* g_OFStream_FStreamBaseDestructor = 005ff7bc
//   void* g_OFStream_OStream = 005ff78e
//   void* g_OFStream_IOS = 005ff7a4
// Function calls:
//   crt_fstream.cpp_fstreambase_dtor_FUN_00606509
//   crt_iostream.cpp_ios_dtor_FUN_0060632c
//   crt_iostream.cpp_ostream_dtor_FUN_00606231
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

ofstream * __cdecl
crt_fstream_cpp_ofstream_dtor_FUN_005ff7bc(ofstream *this_ptr,uint d1,uint d2,uint d3,uint d4)

{
  int iVar1;
  ostream *poVar2;
  ofstream *ptr;
  void *pvVar3;
  ios *piVar4;
  uint unaff_EBX;
  uint unaff_retaddr;
  
  if ((d1 & 4) == 0) {
    iVar1 = *(int *)((int)(this_ptr->fstreambase_core).layout_info + 4);
    *(int *)((this_ptr->fstreambase_core).filebuf.__unbuffered_get_area + iVar1 + -0x3c) = iVar1;
    (this_ptr->fstreambase_core).destructor_vtable = &g_OFStream_FStreamBaseDestructor;
    pvVar3 = (this_ptr->fstreambase_core).layout_info;
    (this_ptr->ostream_core).destructor_vtable = (WatcomThunkedDestructor *)&g_OFStream_OStream;
    *(void ***)
     ((this_ptr->fstreambase_core).filebuf.__unbuffered_get_area + *(int *)((int)pvVar3 + 4) + -0x10
     ) = &g_OFStream_IOS;
    poVar2 = crt_iostream_cpp_ostream_dtor_FUN_00606231
                       ((ostream *)&this_ptr->ostream_core,1,unaff_EBX);
    ptr = (ofstream *)
          crt_fstream_cpp_fstreambase_dtor_FUN_00606509
                    ((fstreambase *)&poVar2[-2].ios.__fill_character,1,unaff_retaddr,(uint)this_ptr)
    ;
    if ((d3 & 1) == 0) {
      piVar4 = crt_iostream_cpp_ios_dtor_FUN_0060632c(&ptr->ios,1,(uint)this_ptr);
      ptr = (ofstream *)&piVar4[-2].__format_flags;
    }
    if ((d4 & 2) == 0) {
      return ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
    this_ptr = ptr;
  }
  else {
    pvVar3 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_OFStreamTypeInfo);
    crt_memory_c_free_FUN_005fe659(pvVar3);
  }
  return this_ptr;
}


// Assembly code:
// 005ff7bc: PUSH EBX
//   Label: crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc
// 005ff7bd: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ff7c1: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005ff7c6: JNZ 0x005ff820
//   XREF to: 005ff820 (CONDITIONAL_JUMP)
// 005ff7c8: MOV EAX,dword ptr [EBX]
// 005ff7ca: MOV EDX,dword ptr [EAX + 0x4]
// 005ff7cd: LEA EAX,[EBX + EDX*0x1]
// 005ff7d0: MOV dword ptr [EAX + -0x4],EDX
// 005ff7d3: MOV dword ptr [EBX + 0x40],0x665cd4
//   XREF to: 00665cd4 (DATA)
// 005ff7da: PUSH 0x1
// 005ff7dc: MOV EAX,dword ptr [EBX]
// 005ff7de: MOV dword ptr [EBX + 0x48],0x665cdc
//   XREF to: 00665cdc (DATA)
// 005ff7e5: ADD EBX,0x44
// 005ff7e8: MOV EAX,dword ptr [EAX + 0x4]
// 005ff7eb: PUSH EBX
// 005ff7ec: MOV dword ptr [EBX + EAX*0x1 + -0x1c],0x665ce4
//   XREF to: 00665ce4 (DATA)
// 005ff7f4: CALL crt_iostream.cpp_ostream_dtor_FUN_00606231
//   XREF to: 00606231 (UNCONDITIONAL_CALL)
// 005ff7f9: ADD ESP,0x8
// 005ff7fc: PUSH 0x1
// 005ff7fe: LEA EBX,[EAX + -0x44]
// 005ff801: PUSH EBX
// 005ff802: CALL crt_fstream.cpp_fstreambase_dtor_FUN_00606509
//   XREF to: 00606509 (UNCONDITIONAL_CALL)
// 005ff807: ADD ESP,0x8
// 005ff80a: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ff80e: MOV EBX,EAX
// 005ff810: TEST DL,0x1
// 005ff813: JZ 0x005ff83b
//   XREF to: 005ff83b (CONDITIONAL_JUMP)
// 005ff815: TEST byte ptr [ESP + 0xc],0x2
//   Label: LAB_005ff815
//   XREF to: Stack[0x8] (READ)
// 005ff81a: JNZ 0x005ff84e
//   XREF to: 005ff84e (CONDITIONAL_JUMP)
// 005ff81c: MOV EAX,EBX
// 005ff81e: POP EBX
// 005ff81f: RET
// 005ff820: PUSH 0x65bcd0
//   Label: LAB_005ff820
//   XREF to: 0065bcd0 (DATA)
// 005ff825: PUSH EBX
// 005ff826: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005ff82b: ADD ESP,0x8
// 005ff82e: PUSH EAX
// 005ff82f: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005ff834: ADD ESP,0x4
//   Label: LAB_005ff834
// 005ff837: MOV EAX,EBX
// 005ff839: POP EBX
// 005ff83a: RET
// 005ff83b: PUSH 0x1
//   Label: LAB_005ff83b
// 005ff83d: ADD EAX,0x50
// 005ff840: PUSH EAX
// 005ff841: CALL crt_iostream.cpp_ios_dtor_FUN_0060632c
//   XREF to: 0060632c (UNCONDITIONAL_CALL)
// 005ff846: ADD ESP,0x8
// 005ff849: LEA EBX,[EAX + -0x50]
// 005ff84c: JMP 0x005ff815
//   XREF to: 005ff815 (UNCONDITIONAL_JUMP)
// 005ff84e: PUSH EBX
//   Label: LAB_005ff84e
// 005ff84f: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005ff854: JMP 0x005ff834
//   XREF to: 005ff834 (UNCONDITIONAL_JUMP)
