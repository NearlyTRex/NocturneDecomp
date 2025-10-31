// Name: core_filmreel.cpp_dtor_FUN_004bee80
// Address: 004bee80
// Address Range: [[004bee80, 004beecd]]
// Convention: __cdecl
// Signature: CFilmReel * core_filmreel.cpp_dtor_FUN_004bee80(CFilmReel * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CFilmReelTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_dtor_FUN_004bee80(CFilmReel *this_ptr,uint d1,uint d2)

{
  CFilmReel *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CFilmReelTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CFilmReel *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}


// Assembly code:
// 004bee80: PUSH EBX
//   Label: core_filmreel.cpp_dtor_FUN_004bee80
// 004bee81: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004bee85: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 004bee8a: JNZ 0x004beea6
//   XREF to: 004beea6 (CONDITIONAL_JUMP)
// 004bee8c: PUSH 0x1
// 004bee8e: PUSH EBX
// 004bee8f: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 004bee94: ADD ESP,0x8
// 004bee97: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004bee9b: MOV EBX,EAX
// 004bee9d: TEST DL,0x2
// 004beea0: JNZ 0x004beec1
//   XREF to: 004beec1 (CONDITIONAL_JUMP)
// 004beea2: MOV EAX,EBX
// 004beea4: POP EBX
// 004beea5: RET
// 004beea6: PUSH 0x65dbf0
//   Label: LAB_004beea6
//   XREF to: 0065dbf0 (DATA)
// 004beeab: PUSH EBX
// 004beeac: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 004beeb1: ADD ESP,0x8
// 004beeb4: PUSH EAX
// 004beeb5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 004beeba: ADD ESP,0x4
// 004beebd: MOV EAX,EBX
// 004beebf: POP EBX
// 004beec0: RET
// 004beec1: PUSH EAX
//   Label: LAB_004beec1
// 004beec2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 004beec7: ADD ESP,0x4
// 004beeca: MOV EAX,EBX
// 004beecc: POP EBX
// 004beecd: RET
