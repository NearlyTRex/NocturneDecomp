// Name: crt_iostream.cpp_ios_dtor_FUN_0060632c
// Address: 0060632c
// Address Range: [[0060632c, 00606375]]
// Convention: __cdecl
// Signature: ios * crt_iostream.cpp_ios_dtor_FUN_0060632c(ios * this_ptr, uint d1, uint d2)
// Cross-references:
//   crt_fstream.cpp_fstreambase_dtor_FUN_00606509 (00606509) at 0060657a [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ifstream_dtor_FUN_005ff856 (005ff856) at 005ff8db [UNCONDITIONAL_CALL]
//   crt_fstream.cpp_ofstream_dtor_FUN_005ff7bc (005ff7bc) at 005ff841 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_istream_dtor_FUN_006063e1 (006063e1) at 00606441 [UNCONDITIONAL_CALL]
//   crt_iostream.cpp_ostream_dtor_FUN_00606231 (00606231) at 00606291 [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_istrstream_dtor_FUN_005ff5ca (005ff5ca) at 005ff64f [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_ostrstream_dtor_FUN_005ff48a (005ff48a) at 005ff50f [UNCONDITIONAL_CALL]
//   crt_strstream.cpp_strstreambase_dtor_FUN_006062a6 (006062a6) at 00606317 [UNCONDITIONAL_CALL]
// Globals:
//   void* g_IOS_Destructor = 0060632c
//   WatcomTypeInfo g_IOSTypeInfo
// Function calls:
//   crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

ios * __cdecl crt_iostream_cpp_ios_dtor_FUN_0060632c(ios *this_ptr,uint d1,uint d2)

{
  void *ptr;
  
  if ((d1 & 4) == 0) {
    this_ptr->cleanup_vtable = &g_IOS_Destructor;
    crt_iostream_cpp_ios_freeBufferChain_FUN_0060bdc0(this_ptr);
    if ((d2 & 2) == 0) {
      return this_ptr;
    }
    shape_memdbg_cpp_debugFree_FUN_0050f210(this_ptr);
  }
  else {
    ptr = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_IOSTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr);
  }
  return this_ptr;
}


// Assembly code:
// 0060632c: PUSH EBX
//   Label: crt_iostream.cpp_ios_dtor_FUN_0060632c
// 0060632d: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00606331: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 00606336: JNZ 0x00606353
//   XREF to: 00606353 (CONDITIONAL_JUMP)
// 00606338: PUSH EBX
// 00606339: MOV dword ptr [EBX + 0x28],0x665df8
//   XREF to: 00665df8 (DATA)
// 00606340: CALL crt_iostream.cpp_ios_freeBufferChain_FUN_0060bdc0
//   XREF to: 0060bdc0 (UNCONDITIONAL_CALL)
// 00606345: ADD ESP,0x4
// 00606348: TEST byte ptr [ESP + 0xc],0x2
//   XREF to: Stack[0x8] (READ)
// 0060634d: JNZ 0x0060636e
//   XREF to: 0060636e (CONDITIONAL_JUMP)
// 0060634f: MOV EAX,EBX
// 00606351: POP EBX
// 00606352: RET
// 00606353: PUSH 0x665e50
//   Label: LAB_00606353
//   XREF to: 00665e50 (DATA)
// 00606358: PUSH EBX
// 00606359: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 0060635e: ADD ESP,0x8
// 00606361: PUSH EAX
// 00606362: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00606367: ADD ESP,0x4
//   Label: LAB_00606367
// 0060636a: MOV EAX,EBX
// 0060636c: POP EBX
// 0060636d: RET
// 0060636e: PUSH EBX
//   Label: LAB_0060636e
// 0060636f: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 00606374: JMP 0x00606367
//   XREF to: 00606367 (UNCONDITIONAL_JUMP)
