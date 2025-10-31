// Name: core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0
// Address: 005daea0
// Address Range: [[005daea0, 005daeed]]
// Convention: __cdecl
// Signature: CTeleportDest * core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0(CTeleportDest * this_ptr, uint d1, uint d2)
// Globals:
//   WatcomTypeInfo g_CTeleportDestTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   crt_memory.c_free_FUN_005fe659
//   crt_memory.c_freeSingleInstance_FUN_005fe632
//   shape_memdbg.cpp_debugFree_FUN_0050f210

#include "nocturne.h"

CTeleportDest * __cdecl
core_teleport_cpp_CTeleportDest_dtor_FUN_005daea0(CTeleportDest *this_ptr,uint d1,uint d2)

{
  CDemonActor *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CTeleportDestTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base_actor,1);
  if ((d2 & 2) == 0) {
    return (CTeleportDest *)ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return (CTeleportDest *)ptr;
}


// Assembly code:
// 005daea0: PUSH EBX
//   Label: core_teleport.cpp_CTeleportDest_dtor_FUN_005daea0
// 005daea1: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005daea5: TEST byte ptr [ESP + 0xc],0x4
//   XREF to: Stack[0x8] (READ)
// 005daeaa: JNZ 0x005daec6
//   XREF to: 005daec6 (CONDITIONAL_JUMP)
// 005daeac: PUSH 0x1
// 005daeae: PUSH EBX
// 005daeaf: CALL core_actor.cpp_CDemonActor_dtor_FUN_00408a30
//   XREF to: 00408a30 (UNCONDITIONAL_CALL)
// 005daeb4: ADD ESP,0x8
// 005daeb7: MOV DL,byte ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005daebb: MOV EBX,EAX
// 005daebd: TEST DL,0x2
// 005daec0: JNZ 0x005daee1
//   XREF to: 005daee1 (CONDITIONAL_JUMP)
// 005daec2: MOV EAX,EBX
// 005daec4: POP EBX
// 005daec5: RET
// 005daec6: PUSH 0x664430
//   Label: LAB_005daec6
//   XREF to: 00664430 (DATA)
// 005daecb: PUSH EBX
// 005daecc: CALL crt_memory.c_freeSingleInstance_FUN_005fe632
//   XREF to: 005fe632 (UNCONDITIONAL_CALL)
// 005daed1: ADD ESP,0x8
// 005daed4: PUSH EAX
// 005daed5: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 005daeda: ADD ESP,0x4
// 005daedd: MOV EAX,EBX
// 005daedf: POP EBX
// 005daee0: RET
// 005daee1: PUSH EAX
//   Label: LAB_005daee1
// 005daee2: CALL shape_memdbg.cpp_debugFree_FUN_0050f210
//   XREF to: 0050f210 (UNCONDITIONAL_CALL)
// 005daee7: ADD ESP,0x4
// 005daeea: MOV EAX,EBX
// 005daeec: POP EBX
// 005daeed: RET
