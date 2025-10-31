// Name: core_filmreel.cpp_dtor_FUN_004beed0
// Address: 004beed0
// Address Range: [[004beed0, 004bef1d]]
// Convention: __cdecl
// Signature: CFilmProjector * core_filmreel.cpp_dtor_FUN_004beed0(CFilmProjector * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CFilmProjectorTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CFilmProjector * __cdecl
core_filmreel_cpp_dtor_FUN_004beed0(CFilmProjector *this_ptr,uint d1,uint d2)

{
  CFilmProjector *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFilmProjectorTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CFilmProjector *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30((CDemonActor *)this_ptr,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004beed0: PUSH EBX
//   Label: core_filmreel.cpp_dtor_FUN_004beed0
// 004beed1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004beed5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004beeda: JNZ 0x004beef6
//   XREF to: 004beef6 (CONDITIONAL_JUMP)
// 004beedc: PUSH 0x1
// 004beede: PUSH EBX
// 004beedf: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004beee4: ADD ESP,0x8
// 004beee7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004beeeb: MOV EBX,EAX
// 004beeed: TEST DL,0x2
// 004beef0: JNZ 0x004bef11
//   XREF to: 004bef11 (CONDITIONAL_JUMP)
// 004beef2: MOV EAX,EBX
// 004beef4: POP EBX
// 004beef5: RET
// 004beef6: PUSH 0x65dc10
//   Label: LAB_004beef6
//   XREF to: 0065dc10 (DATA)
// 004beefb: PUSH EBX
// 004beefc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004bef01: ADD ESP,0x8
// 004bef04: PUSH EAX
// 004bef05: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004bef0a: ADD ESP,0x4
// 004bef0d: MOV EAX,EBX
// 004bef0f: POP EBX
// 004bef10: RET
// 004bef11: PUSH EAX
//   Label: LAB_004bef11
// 004bef12: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004bef17: ADD ESP,0x4
// 004bef1a: MOV EAX,EBX
// 004bef1c: POP EBX
// 004bef1d: RET
